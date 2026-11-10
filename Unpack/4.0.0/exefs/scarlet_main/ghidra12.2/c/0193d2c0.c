/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193d2c0; name: FUN_0193d2c0
 */


void FUN_0193d2c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_40 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0135d328(auStack_40,0,0);
  puVar1 = operator_new(0x18);
  *puVar1 = &DAT_045e08b8;
  FUN_00cbd7c0(puVar1 + 1,param_2);
  plVar2 = (long *)param_1[1];
  param_1[1] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0135d2ec(auStack_40);
  return;
}


