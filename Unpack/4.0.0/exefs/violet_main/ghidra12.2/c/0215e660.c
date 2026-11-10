/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e660; name: FUN_0215e660
 */


undefined8 FUN_0215e660(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    if (param_2 != 0) {
      uVar1 = FUN_0215d4e8(param_1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x81) = 0;
      *(undefined1 *)(param_1 + 0x84) = 1;
      *(undefined4 *)(param_1 + 0x9e0) = 0xffffffff;
      return 1;
    }
    FUN_0215d338(param_1);
  }
  return 1;
}


