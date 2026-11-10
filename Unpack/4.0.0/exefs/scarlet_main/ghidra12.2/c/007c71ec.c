/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c71ec; name: FUN_007c71ec
 */


void FUN_007c71ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007c7200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xc0))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


