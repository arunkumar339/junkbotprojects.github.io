        int pushPin =  13 ; 
        int LEDPin =  12 ; 
        int switchPosition = 0 ; 
        int c =  261 ; 
        int d =  293 ; 
        int e =  329 ; 
        int f =  349 ; 
        int g =  391 ; 
        int a =  440 ; 
        int Bb =  466 ; 
        int b =  493 ; 
        int highc =  523 ; 
        int eighth =  500 / 2 ; 
        int quarter =  1000 / 2 ; 
        int half =  2000 / 2 ; 
        void setup ( ) { 
          pinMode ( pushPin , INPUT ) ; 
          pinMode ( LEDPin , OUTPUT ) ; 
        } 
        void loop ( ) {
          tone ( 12 , c , 150 * 2 ) ; 
          delay ( 200 * 2 ) ; 
          tone ( 12 , c , 50 * 2 ) ; 
          delay ( 50 * 2 ) ; 
          tone ( 12 , d , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , c , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , f , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , e , half ) ; 
          delay ( half ) ; 
          tone ( 12 , c , 150 * 2 ) ; 
          delay ( 200 * 2 ) ; 
          tone ( 12 , c , 50 * 2 ) ; 
          delay ( 50 * 2 ) ; 
          tone ( 12 , d , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , c , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , g , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , f , half ) ; 
          delay ( half ) ; 
          tone ( 12 , c , 150 * 2 ) ; 
          delay ( 200 * 2 ) ; 
          tone ( 12 , c , 50 * 2 ) ; 
          delay ( 50 * 2 ) ; 
          tone ( 12 , highc , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , a , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , f , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , e , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , d , half ) ; 
          delay ( half ) ; 
          tone ( 12 , Bb , 150 * 2 ) ; 
          delay ( 200 * 2 ) ; 
          tone ( 12 , Bb , 50 * 2 ) ; 
          delay ( 50 * 2 ) ; 
          tone ( 12 , a , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , f , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , g , quarter ) ; 
          delay ( quarter ) ; 
          tone ( 12 , f , half ) ; 
          delay ( half ) ;
        }
