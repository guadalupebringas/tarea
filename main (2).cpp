#include<iostream>
#include<string>

// Funcion para obtener la primera vocal interna de una cadena
char obtenerPrimeraVocalInterna(const std::string& str) {
          for (size_t i = 1; i < str.Length(); ++i )      {
              char c = str[i];
              if (c == "A") \\c == "E" // c == "I" // c =="O" // C == "U" )
                 return c;
                  }
                  return "X"; // Si no se esncuentra ninguna vocal interna, se usa una xor
}

// Funsion principal para calcular el RFC
std::string calcular RFC(const std::string& nombre, const std::string& apellidopaterno)
    std::string rfc;
    
//  Se obtiene la letra inicial y la primera vocal interna, se usa una xor
   char LetraInicial = apellidoPaterno[0];
   char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidopaterno);
   
   // Se obtiene la inicial del apellido materno o se usa una"X" si no hay
     char InicialApellidoMaterno = (!apellidoMaternoempty()) ?apellidoMaterno[0] : "X"
     
     // Se obtiene la inicial del primer nombre o se usa una "X" si no hay
         char inicialNombre = nombre[0];
         
         // Se obtienen los dos ultimos digitos del año de nacimiento
            std::string año = fecgaNacimiento.substr(2,2 );
            
            // Se obtiene el mes y el dia de nacimiento
            std::string mes = fecha Nacimiento.substr(5,2);
            std::string dia = fechaNacimiento.substr(8,2);
            
            // Se construye el rfc
            rfc =letraIncial;
            rfc += primeraVocalInterna;
            rfc += inicialApellidoMaterno;
            rfc += inicialNombre;
            rfc += añp;
            rfc += mes;
            rfc += dia;
             return rfc ;
             
             int 