/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e19c; name: FUN_01f6e19c
 */


void FUN_01f6e19c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0135d328(auStack_30,0,0);
  puVar1 = operator_new(0x10);
  uVar3 = *param_2;
  *puVar1 = &PTR_LAB_04559c30;
  puVar1[1] = uVar3;
  plVar2 = (long *)param_1[1];
  param_1[1] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0135d2ec(auStack_30);
  return;
}


