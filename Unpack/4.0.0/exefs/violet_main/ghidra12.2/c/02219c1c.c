/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02219c1c; name: FUN_02219c1c
 */


void FUN_02219c1c(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar1;
  puVar2 = PTR_DAT_047ddb78;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[8] = -0x100000000;
  param_1[9] = 0;
  param_1[10] = -0x100000000;
  FUN_02219c88();
  *param_1 = (long)&PTR_LAB_045ab350;
  return;
}


