#include<Library .h>
//Declaration for first problem
double find_angle(float x1,float y1,float x2,float y2){
    // Formula for angle :-
    // Tanθ=(x2*y1)-(x1*y2)/(x1*x2)+(y1*y2)
    float nm,dm;
    double angle;
    nm=(x2*y1)-(x1*y2);
    dm=(x1*x2)+(y1*y2);
    angle=nm/dm; 
    if(angle<0) angle*=-1;
    angle=atan(angle); //Calculate tan inverse.
    angle=(angle*180)/3.141; //Calculating Angle
    return angle;
}

//Declaration for Second problem
long double toRadians(const long double degree){
    long double one_deg = (3.141) / 180;
    return (one_deg * degree);
}
 
long double find_distance(long double lat1, long double long1, long double lat2, long double long2){
    // from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);
     
    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;
    long double ans = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong / 2), 2);
    ans = 2 * asin(sqrt(ans));

    // Kilometers, R = 6371
    long double R = 6371;
     
    // Calculate the result
    ans = ans * R;
 
    return ans;
}

// //Declaration for Third problem
float find_area(float x1,float y1,float x2,float y2,float x3,float y3){
    float area;
    area=(1/2.0)*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(area<0) area*=-1;
    return area;
}
