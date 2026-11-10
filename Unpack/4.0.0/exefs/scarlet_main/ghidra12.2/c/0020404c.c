/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020404c; name: FUN_0020404c
 */


void FUN_0020404c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00204070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
            (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
             *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe,1);
  return;
}


