/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03476a20; name: FUN_03476a20
 */


uint FUN_03476a20(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  param_2 = param_2 & 0xff;
  if ((uVar3 >> 0xf & 1) != 0) {
    uVar1 = uVar3 >> 0xc & 7;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
    uVar2 = 0;
    if ((uVar3 >> 0xc & 7) != 0) {
      uVar2 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    }
    if (uVar2 == param_2) {
      return (uVar3 & 0xff) - 1;
    }
    if (uVar2 < param_2) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}


