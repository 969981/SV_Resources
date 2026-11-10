/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186e7b8; name: FUN_0186e7b8
 */


void FUN_0186e7b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  uVar5 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar5;
  FUN_0186e728(param_1 + 8,param_2 + 4);
  puVar3 = PTR_LAB_047e2378;
  puVar2 = PTR_LAB_047e2370;
  puVar1 = PTR_LAB_047e2368;
  *param_1 = PTR_LAB_047e2360;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar3;
  return;
}


