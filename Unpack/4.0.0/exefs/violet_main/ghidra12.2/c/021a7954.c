/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a7954; name: FUN_021a7954
 */


void FUN_021a7954(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[0x38] = param_1[0x38] & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
  plVar1 = param_1;
  if ((long *)param_1[0x36] != (long *)0x0) {
    plVar1 = (long *)param_1[0x36];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x35] != (long *)0x0) {
    plVar1 = (long *)param_1[0x35];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  }
  puVar2 = (undefined8 *)param_1[0x81];
  for (puVar3 = (undefined8 *)param_1[0x80]; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    FUN_021a7a04(*puVar3,param_2);
  }
  return;
}


