/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e65690; name: FUN_01e65690
 */


void FUN_01e65690(ulong *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  if (0x7f < uVar2) {
    if (0xff < uVar2) {
      uVar3 = 0xffffff82;
      if (uVar2 >> 0x20 != 0) {
        uVar3 = 0xffffff83;
      }
      uVar1 = 0x81;
      if (0xffff < uVar2) {
        uVar1 = uVar3;
      }
      FUN_0111b030(uVar1);
      return;
    }
    uVar2 = 0x80;
  }
  FUN_0111b030(uVar2);
  return;
}


