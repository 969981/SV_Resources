/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e9a44; name: FUN_027e9a44
 */


ulong FUN_027e9a44(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if ((ushort *)param_1[4] != (ushort *)0x0) {
    if ((int)param_1[5] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)param_1[4];
      uVar1 = ((uVar3 & 0xff00) << 8 | uVar3 << 0x18) >> 0x10;
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
      uVar3 = 0;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
    }
  }
  uVar1 = 0;
  if ((int)param_1[5] != 0 || uVar3 != 0) {
    uVar1 = (int)param_1[5] - uVar3;
  }
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  if (uVar3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x027e9acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    return uVar4;
  }
  return (ulong)uVar1;
}


