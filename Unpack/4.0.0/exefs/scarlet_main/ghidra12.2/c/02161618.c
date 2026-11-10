/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02161618; name: FUN_02161618
 */


void FUN_02161618(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  FUN_00f6c0bc();
  FUN_00f6c214(param_1);
  FUN_00f6bdf8(param_1);
  FUN_00f6be74(0,*(undefined8 *)(param_1 + 0x238));
                    /* WARNING: Could not recover jumptable at 0x0216166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x28))
            (*(long **)(param_1 + 200),param_1 + 0x148,param_1 + 0x280);
  return;
}


