/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194d6fc; name: FUN_0194d6fc
 */


void FUN_0194d6fc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = *param_2;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_00f34110(param_1 + 5,param_2 + 1);
  puVar3 = PTR_LAB_047dc1a0;
  puVar2 = PTR_LAB_047dc198;
  puVar1 = PTR_FUN_047dc190;
  *param_1 = PTR_LAB_047dc188;
  param_1[1] = puVar1;
  param_1[2] = puVar2;
  param_1[3] = puVar3;
  return;
}


