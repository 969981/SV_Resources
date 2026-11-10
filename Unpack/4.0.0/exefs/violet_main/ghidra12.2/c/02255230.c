/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


