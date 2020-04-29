#include <iostream>
// #include <pcl/io/pcd_io.h>
// #include <pcl/visualization/pcl_visualizer.h>
// #include <pcl/console/parse.h>
// #include <pcl/visualization/pcl_visualizer.h>
// #include <pcl/io/pcd_io.h>
// #include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>
// #include <eigen>
#include <math.h>

#define exception std::exception


int main(int argc, char* argv[])
{
  // Read in the point cloud from the source .ply file
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
  // pcl::PLYReader Reader;
  // Reader.read(argv[1], *cloud);
  // cloud->width = (int) cloud->points.size ();
  // cloud->height = 1;

  // pcl::visualization::PCLVisualizer *viewer = new pcl::visualization::PCLVisualizer("3D Viewer");
  // viewer->setBackgroundColor(0.2, 0.2, 0.2);
  //  POINT CLOUD DRAWING 
  // // if(draw_points){
  // viewer->addPointCloud<pcl::PointXYZ> (cloud, "sample cloud");
  // viewer->setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 2, "sample cloud");
  // // }

  // while (!viewer->wasStopped ()) {
  //   viewer->spinOnce (1);
  // }
}
