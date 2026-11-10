/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02255230; name: FUN_02255230
 */


undefined8 FUN_02255230(short *param_1)

{
  short sVar1;
  long lVar2;
  
  do {
    sVar1 = *param_1;
    if (sVar1 == 0x10) {
      if ((ushort)param_1[2] >> 1 == 0x5f00) {
        return 0;
      }
      lVar2 = (ulong)(ushort)param_1[1] + 2;
    }
    else {
      if (sVar1 == 0) {
        return 0;
      }
      lVar2 = 1;
      if (sVar1 == 10) {
        return 1;
      }
    }
    param_1 = param_1 + lVar2;
  } while( true );
}


