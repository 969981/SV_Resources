/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7769c; name: FUN_01f7769c
 */


void FUN_01f7769c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0455cd58;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[9],param_1[7] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01f77710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))
            ((long *)param_1[5],param_1[4],param_1[2] & 0xfffffffffffffffe,1);
  return;
}


