/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017828f0; name: FUN_017828f0
 */


void FUN_017828f0(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xd784fe9add8800d;
  pcStack_28 = "ti_ModelDitherFadeComponent";
  local_20 = 0x1b;
  local_18 = (long *)0x0;
  FUN_0178294c(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


