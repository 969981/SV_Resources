/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b5c2ac; name: FUN_02b5c2ac
 */


void FUN_02b5c2ac(long *param_1)

{
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x20))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 0x20))();
  }
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b5c328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}


