/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278b4ac; name: FUN_0278b4ac
 */


void FUN_0278b4ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0135d328(auStack_30,0,0);
  puVar1 = operator_new(0x10);
  *puVar1 = &DAT_045e0290;
  plVar2 = (long *)param_1[1];
  param_1[1] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0135d2ec(auStack_30);
  return;
}


