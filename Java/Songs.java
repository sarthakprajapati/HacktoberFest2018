package songs;
import java.util.*;
class Songs{

public static void main (String[] args){
Scanner teclado= new Scanner(System.in);
String song;

System.out.println("Please enter the song code: ");	
song=teclado.next();

switch(song) {
case "a": System.out.println(SongsDB.a); break;
case "b": System.out.println(SongsDB.b); break;
case "c": System.out.println(SongsDB.c); break;
case "d": System.out.println(SongsDB.d); break;
case "e": System.out.println(SongsDB.e); break;
case "f": System.out.println(SongsDB.f); break;
case "g": System.out.println(SongsDB.g); break;
case "h": System.out.println(SongsDB.h); break;
case "i": System.out.println(SongsDB.i); break;
case "j": System.out.println(SongsDB.j); break;
case "k": System.out.println(SongsDB.k); break;
case "l": System.out.println(SongsDB.l); break;
case "m": System.out.println(SongsDB.m); break;
case "n": System.out.println(SongsDB.n); break;
case "o": System.out.println(SongsDB.o); break;
case "p": System.out.println(SongsDB.p); break;
case "q": System.out.println(SongsDB.q); break;
case "r": System.out.println(SongsDB.r); break;
case "s": System.out.println(SongsDB.s); break;
case "t": System.out.println(SongsDB.t); break;
case "u": System.out.println(SongsDB.u); break;
case "v": System.out.println(SongsDB.v); break;
case "w": System.out.println(SongsDB.w); break;
case "x": System.out.println(SongsDB.x); break;
case "y": System.out.println(SongsDB.y); break;
case "z": System.out.println(SongsDB.z); break;
default: System.out.println("Not a song code");
}

}
}