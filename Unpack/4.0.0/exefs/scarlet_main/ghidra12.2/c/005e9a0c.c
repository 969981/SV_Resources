/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e9a0c; name: FUN_005e9a0c
 */


void FUN_005e9a0c(ulong *param_1)

{
  if ((param_1[0x11] & 1) != 0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],param_1[0x13],param_1[0x11] & 0xfffffffffffffffe,1);
  }
  if ((param_1[0xd] & 1) != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],param_1[0xf],param_1[0xd] & 0xfffffffffffffffe,1);
  }
  FUN_027c2bd0(param_1 + 9,param_1[10]);
  if ((param_1[5] & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))
              ((long *)param_1[8],param_1[7],param_1[5] & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005e9ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


