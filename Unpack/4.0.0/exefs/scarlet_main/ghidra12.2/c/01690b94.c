/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01690b94; name: FUN_01690b94
 */


void FUN_01690b94(long param_1)

{
  if (*(short *)(param_1 + 0x200) != 0) {
    FUN_01690d7c(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),2,0);
    (**(code **)(**(long **)(param_1 + 0x218) + 0x5c0))(*(long **)(param_1 + 0x218),2,0);
  }
  if (*(short *)(param_1 + 0x204) == 0) {
    return;
  }
  FUN_01690d7c(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),1,0);
                    /* WARNING: Could not recover jumptable at 0x01690c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x218) + 0x5c0))(*(long **)(param_1 + 0x218),1,0);
  return;
}


