/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fbb354; name: FUN_01fbb354
 */


void FUN_01fbb354(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  *param_1 = (long)(PTR_DAT_047db180 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_01fdeb94(param_1 + 3);
  param_1[8] = 0;
  param_1[9] = -1;
  param_1[10] = 0;
  puVar2 = (undefined1 *)FUN_00f6866c();
  uVar1 = *puVar2;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  *param_1 = (long)&PTR_FUN_0456d3a8;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  return;
}


