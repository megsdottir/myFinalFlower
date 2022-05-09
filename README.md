# myFinalFlower
Final assignment. 

by: Meg and Rashid 



Our project was inspired by the theme of blossoming flowers. We wanted to tell the story of the cycle of life, of days turning into night, 
and of fleeting moments of beauty.

We were also inspired by the youthful and vibrant colors that you see in children’s books. 
In order to recreate that image, we used pastel colors that are also reminiscent of children’s tv shows. In order to create the flowers, 
we utilized the push and pop matrix features.
The flowers were also drawn in a way that were inspired by children’s books/cartoons, hence the simplistic illustrations.

The code we used to create the spinning effect of the petals is below:

 ofSetColor(251,204,209);
       ofPushMatrix();
       ofTranslate(320, 450, -10);
       float angle = ofGetElapsedTimef()*uiSpeed*15;
       ofRotate(angle);
       
       int petals = 8;
       for (int i=0; i<petals; i++) {
           ofRotate(360.0/petals);
           
           ofPoint p1 (0,40);
           ofPoint p2 (60,0);
           ofTriangle (p1, -p1, -p2);
       }
       ofPopMatrix();



![280198113_752138889485603_6859145230311288330_n](https://user-images.githubusercontent.com/102966737/167482773-5118aac8-d75d-4ca4-a4bc-408ae42c0958.png)


Given that the story we were trying to convey was one of the cycles of life, 
we used the sun to rise and set in order to create the image of night and day. 

Furthermore, amongst the three of the flowers, the one in the middle is the tallest and strongest looking, 
while also hiding the sunlight from the flower on the very right, which is why that flower is lifeless, 
and this is also represented in the petals that have fallen to the grass. 

The story behind this was how sometimes some flowers tend to blossom faster or more beautifully in life, 
but that we should not compare our growth to the "flowers" around us, and instead focus on our own growth. 


![280111488_547751480046516_3813249050443526209_n](https://user-images.githubusercontent.com/102966737/167482799-ddc3b847-fa80-4bc1-94cd-afbd244fb798.png)


In order to add a feature of interaction, we decided to add a GUI that controls the speed of the petal rotations, 
as well as the speed of the sun. We called the GUI “life” as the faster the petals spin the livelier the flowers look and 
the slower they spin the less alive they look. 


If we were to improve our app in the future, I think we would have liked to see more of the growth process of the flower from stemming to dying. 
This was the original idea we had in mind but after multiple attempts to make it work we were unable to figure it out and went with an idea that
we were able to execute. 


