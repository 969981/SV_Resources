/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02782dc4; name: FUN_02782dc4
 */


void FUN_02782dc4(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0135d328(auStack_30,0,0);
  puVar1 = operator_new(0x10);
  *puVar1 = &DAT_045df630;
  *(undefined4 *)(puVar1 + 1) = *param_2;
  plVar2 = (long *)param_1[1];
  param_1[1] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0135d2ec(auStack_30);
  return;
}


