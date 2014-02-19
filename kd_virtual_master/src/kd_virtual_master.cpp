#include <DaVinci_IK.h>
#include <collada_urdf/collada_urdf.h>


int main(int argc,char ** argv)
{

    /*boost::shared_ptr<DAE> dom;
    if (!collada_urdf::colladaFromUrdfFile(argv[1], dom)) {
        ROS_ERROR("Failed to construct COLLADA DOM");
        return false;
    }
    collada_urdf::colladaToFile(dom, "DaVinci.dae");
    while(1);
    */
				DaVinci_IK daVinci_solver;
    if (argc < 1)
    {
        printf("Need input URDF file name!");
        return 1;
    }
        else
    daVinci_solver.read_urdf(argv[1]);
    daVinci_solver.calculate_FK();

 return 0;
}
