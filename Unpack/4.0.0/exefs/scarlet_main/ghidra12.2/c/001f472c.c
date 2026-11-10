/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f472c; name: FUN_001f472c
 */


void FUN_001f472c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 5;
  *(undefined2 *)((long)param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  param_1[2] = uVar1;
  return;
}


