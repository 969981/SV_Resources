/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002eaaa0; name: FUN_002eaaa0
 */


undefined8 FUN_002eaaa0(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (0 < param_2) {
    bVar1 = *param_1;
    if (-1 < (char)bVar1) {
      return 1;
    }
    if (1 < param_2) {
      if (bVar1 < 0xe0) {
        return 1;
      }
      if (2 < param_2) {
        if (param_2 != 3) {
          return 1;
        }
        if (bVar1 < 0xf0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


