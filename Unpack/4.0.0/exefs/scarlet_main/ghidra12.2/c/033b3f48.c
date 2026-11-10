/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b3f48; name: FUN_033b3f48
 */


void FUN_033b3f48(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_047b3450;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = param_2;
  FUN_030b4a20(param_1 + 5,PTR_PTR_047d1a50,1);
  if (*(int *)(param_1 + 6) != 1) {
    *(undefined4 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)param_1[5] = 0;
  if (*(int *)(param_1 + 6) != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[3] = 0;
  param_1[4] = param_1[5];
  param_1[8] = 0;
  return;
}


