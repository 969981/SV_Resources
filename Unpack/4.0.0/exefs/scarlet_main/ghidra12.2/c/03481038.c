/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03481038; name: FUN_03481038
 */


void FUN_03481038(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,PTR_PTR_047e71e0);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_03480ed4(param_1);
  return;
}


