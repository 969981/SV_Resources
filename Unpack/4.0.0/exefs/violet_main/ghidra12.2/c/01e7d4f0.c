/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7d4f0; name: FUN_01e7d4f0
 */


void FUN_01e7d4f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_01870100();
  *param_1 = &PTR_LAB_045dfb50;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = &PTR_LAB_045dfc90;
  param_1[4] = &PTR_LAB_045dfbe8;
  param_1[5] = &PTR_LAB_045dfc38;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0xffffffffffffffff;
  return;
}


