/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215475c; name: FUN_0215475c
 */


void FUN_0215475c(long param_1)

{
  long *plVar1;
  
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 **)(param_1 + 0x238) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x240) = &DAT_03c886bc;
  plVar1 = *(long **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x231) = 1;
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (**(char **)(param_1 + 0x150) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021547cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),param_1 + 0x148);
  return;
}


