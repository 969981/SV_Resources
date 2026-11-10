/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e33ab4; name: FUN_01e33ab4
 */


void FUN_01e33ab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = (code *)param_1[1];
  if (pcVar5 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar5)(param_1 + 4);
  }
  uVar6 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar6;
  param_1[6] = param_2[2];
  uVar6 = param_2[4];
  param_1[7] = param_2[3];
  param_1[8] = uVar6;
  puVar2 = PTR_thunk_FUN_01e33b44_047d9800;
  puVar1 = PTR_LAB_047d97f8;
  uVar6 = param_2[5];
  param_2[5] = 0;
  puVar3 = PTR_LAB_047d9808;
  param_1[9] = uVar6;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 6);
  puVar4 = PTR_LAB_047d9810;
  *param_1 = puVar2;
  param_1[1] = puVar1;
  param_1[2] = puVar3;
  param_1[3] = puVar4;
  return;
}


