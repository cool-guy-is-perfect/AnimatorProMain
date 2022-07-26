#include <iostream>
#include <string>
using namespace std;

// command : "ffmpeg -framerate 24 -i imagefolder/img%3d(means that it wi take all images with file name img001,img002 etc) output.mp4"


class renderProcess{
  public:
    string FPS;
    string rendertofolder;
    string renderfromfolder;

};



	
int main() {
	
	renderProcess Render; 
	string command = "ffmpeg -framerate ";
	cin >> Render.FPS ;
	string custom = command + Render.FPS + " -i ";
	cin >> Render.renderfromfolder;
	command = command + Render.renderfromfolder + "%3d.png ";
	cin >> Render.rendertofolder;
	command = command + Render.rendertofolder + "output.mp4";
	cout << "Rendering in : " << Render.FPS << " FPS"<< "\n"; 
	cout << "from folder : " << Render.renderfromfolder << "\n"; 
	system(command);

	return 0;
}
