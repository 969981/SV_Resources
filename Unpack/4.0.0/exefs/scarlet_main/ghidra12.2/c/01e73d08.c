/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e73d08; name: FUN_01e73d08
 */


void FUN_01e73d08(ulong *param_1)

{
  FUN_01cfa410(param_1 + 8);
  if ((param_1[4] & 1) != 0) {
    (**(code **)(*(long *)param_1[7] + 0x18))
              ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e73d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


