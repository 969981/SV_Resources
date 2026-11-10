/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a4888; name: FUN_012a4888
 */


void FUN_012a4888(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00d0a34c(param_1 + 4,param_2);
  puVar3 = PTR_LAB_047d9be8;
  puVar2 = PTR_LAB_047d9be0;
  puVar1 = PTR_LAB_047d9bd8;
  *param_1 = PTR_LAB_047d9bd0;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar3;
  return;
}


