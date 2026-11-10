/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193d23c; name: FUN_0193d23c
 */


void FUN_0193d23c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_40 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0135d328(auStack_40,0,0);
  puVar1 = operator_new(0x18);
  *puVar1 = &DAT_045e2470;
  FUN_00cbd7c0(puVar1 + 1,param_2);
  plVar2 = (long *)param_1[1];
  param_1[1] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0135d2ec(auStack_40);
  return;
}


