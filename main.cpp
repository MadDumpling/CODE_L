#include <QApplication>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class Viewport : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    Viewport(QWidget* parent = nullptr)
        : QOpenGLWidget(parent)
    {
    }

protected:
    void initializeGL() override
    {
        initializeOpenGLFunctions();

        glEnable(GL_DEPTH_TEST);

        glClearColor(
            0.1f,
            0.1f,
            0.15f,
            1.0f);
    }

    void resizeGL(int w, int h) override
    {
        glViewport(0, 0, w, h);

        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();

        float aspect = float(w) / float(h ? h : 1);

        glFrustum(
            -aspect,
            aspect,
            -1.0,
            1.0,
            1.5,
            100.0);

        glMatrixMode(GL_MODELVIEW);
    }

    void paintGL() override
    {
        glClear(
            GL_COLOR_BUFFER_BIT |
            GL_DEPTH_BUFFER_BIT);

        glLoadIdentity();

        glTranslatef(0.0f, 0.0f, -8.0f);
        glRotatef(30.0f, 1.0f, 0.0f, 0.0f);
        glRotatef(45.0f, 0.0f, 1.0f, 0.0f);

        glBegin(GL_QUADS);

        // Front
        glColor3f(1, 0, 0);
        glVertex3f(-1, -1, 1);
        glVertex3f(1, -1, 1);
        glVertex3f(1, 1, 1);
        glVertex3f(-1, 1, 1);

        // Back
        glColor3f(0, 1, 0);
        glVertex3f(-1, -1, -1);
        glVertex3f(-1, 1, -1);
        glVertex3f(1, 1, -1);
        glVertex3f(1, -1, -1);

        // Left
        glColor3f(0, 0, 1);
        glVertex3f(-1, -1, -1);
        glVertex3f(-1, -1, 1);
        glVertex3f(-1, 1, 1);
        glVertex3f(-1, 1, -1);

        // Right
        glColor3f(1, 1, 0);
        glVertex3f(1, -1, -1);
        glVertex3f(1, 1, -1);
        glVertex3f(1, 1, 1);
        glVertex3f(1, -1, 1);

        // Top
        glColor3f(1, 0, 1);
        glVertex3f(-1, 1, -1);
        glVertex3f(-1, 1, 1);
        glVertex3f(1, 1, 1);
        glVertex3f(1, 1, -1);

        // Bottom
        glColor3f(0, 1, 1);
        glVertex3f(-1, -1, -1);
        glVertex3f(1, -1, -1);
        glVertex3f(1, -1, 1);
        glVertex3f(-1, -1, 1);

        glEnd();
    }
};

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;

    auto* viewport = new Viewport();
    window.setCentralWidget(viewport);

    window.resize(1280, 720);
    window.setWindowTitle("CODE L");

    window.show();

    return app.exec();
}