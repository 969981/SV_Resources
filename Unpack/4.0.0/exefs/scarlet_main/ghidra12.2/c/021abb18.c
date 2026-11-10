/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021abb18; name: FUN_021abb18
 */


void FUN_021abb18(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar3 = *param_2;
  *param_2 = 0;
  param_1[4] = uVar3;
  uVar3 = param_2[1];
  param_2[1] = 0;
  param_1[5] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *param_1 = &LAB_021abb98;
  param_1[1] = &LAB_02b56500;
  *(undefined4 *)(param_1 + 6) = uVar1;
  param_1[2] = &LAB_02b56594;
  param_1[3] = &LAB_02b56624;
  return;
}


