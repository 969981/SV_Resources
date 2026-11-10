/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bfe10; name: FUN_034bfe10
 */


void FUN_034bfe10(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = param_1 + -1;
  *plVar2 = (long)&PTR_FUN_047c4638;
  *param_1 = (long)&PTR_FUN_047c48b8;
  param_1[3] = (long)&PTR_FUN_047c48f8;
  param_1[6] = (long)&PTR_FUN_047c4990;
  FUN_034bfd30(plVar2);
  puVar1 = PTR_DAT_047e7200;
  *plVar2 = (long)(PTR_DAT_047e7200 + 0x10);
  *param_1 = (long)(puVar1 + 0x288);
  param_1[3] = (long)(puVar1 + 0x2c8);
  param_1[6] = (long)(puVar1 + 0x360);
  if ((long *)param_1[0x1f] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (param_1 + 0x1e != (long *)param_1[0x1f]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x1f] = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  FUN_034a68b4(plVar2);
  return;
}


