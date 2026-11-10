/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02255b4c; name: FUN_02255b4c
 */


undefined8 FUN_02255b4c(short *param_1,char param_2,ushort param_3)

{
  long lVar1;
  
  do {
    if (*param_1 == 0) {
      return 0;
    }
    if (*param_1 == 0x10) {
      if (((char)((ushort)param_1[2] >> 8) == param_2) && ((param_1[2] & 0xffU) == (param_3 & 0xff))
         ) {
        return 1;
      }
      lVar1 = (ulong)(ushort)param_1[1] + 2;
    }
    else {
      lVar1 = 1;
    }
    param_1 = param_1 + lVar1;
  } while( true );
}


