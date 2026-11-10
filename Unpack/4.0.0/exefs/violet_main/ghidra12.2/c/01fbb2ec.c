/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fbb2ec; name: FUN_01fbb2ec
 */


void FUN_01fbb2ec(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  *param_1 = (long)(PTR_DAT_047db180 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_01fd93d4(param_1 + 3);
  param_1[8] = 0;
  param_1[9] = -1;
  param_1[10] = 0;
  puVar2 = (undefined1 *)FUN_00f6866c();
  uVar1 = *puVar2;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  *param_1 = (long)&PTR_FUN_0456cd18;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  return;
}


