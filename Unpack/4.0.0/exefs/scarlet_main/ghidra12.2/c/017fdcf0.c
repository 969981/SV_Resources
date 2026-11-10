/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017fdcf0; name: FUN_017fdcf0
 */


void FUN_017fdcf0(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x9a1c7a8ae571a73b;
  pcStack_28 = "ti_DynamicExclusionComponent";
  local_20 = 0x1c;
  local_18 = (long *)0x0;
  FUN_017fdd4c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


