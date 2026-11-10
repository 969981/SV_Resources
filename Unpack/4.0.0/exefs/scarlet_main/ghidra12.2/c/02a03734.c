/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a03734; name: FUN_02a03734
 */


void FUN_02a03734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0455cc18;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a03764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))
            ((long *)param_1[4],param_1[3],param_1[1] & 0xfffffffffffffffe,1);
  return;
}


