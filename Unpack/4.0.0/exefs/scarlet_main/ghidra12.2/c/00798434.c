/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


