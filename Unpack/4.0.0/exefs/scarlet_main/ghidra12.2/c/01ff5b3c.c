/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ff5b3c; name: FUN_01ff5b3c
 */


void FUN_01ff5b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  
  pcVar6 = (code *)param_1[1];
  if (pcVar6 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar6)(param_1 + 4);
  }
  uVar1 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_00fd9730(param_1 + 8,param_2 + 4);
  puVar4 = PTR_LAB_047dbf98;
  puVar3 = PTR_FUN_047dbf90;
  puVar2 = PTR_thunk_FUN_01ff5bd4_047dbf88;
  uVar1 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar1;
  puVar5 = PTR_LAB_047dbfa0;
  *param_1 = puVar2;
  param_1[1] = puVar3;
  param_1[2] = puVar4;
  param_1[3] = puVar5;
  return;
}


