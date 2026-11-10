/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00798434; name: FUN_00798434
 */


uint FUN_00798434(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((ushort *)param_1[4] == (ushort *)0x0) || ((int)param_1[5] == 0)) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)param_1[4];
  uVar1 = ((uVar3 & 0xff00) << 8 | uVar3 << 0x18) >> 0x10;
  uVar2 = (**(code **)(*param_1 + 0x58))();
  uVar3 = 0;
  if (uVar1 <= uVar2) {
    uVar3 = uVar1;
  }
  return uVar3;
}


