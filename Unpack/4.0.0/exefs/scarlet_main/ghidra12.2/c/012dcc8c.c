/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012dcc8c; name: FUN_012dcc8c
 */


void FUN_012dcc8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined2 *)(param_1 + 9) = 0;
  puVar1 = PTR_LAB_047e5fe8;
  param_1[8] = 0;
  puVar3 = PTR_LAB_047e5ff8;
  puVar2 = PTR_LAB_047e5ff0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar2;
  param_1[2] = puVar3;
  param_1[3] = &LAB_03231354;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[4] = &LAB_032314fc;
  param_1[5] = param_2;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


