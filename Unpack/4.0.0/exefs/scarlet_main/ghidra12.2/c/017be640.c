/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017be640; name: FUN_017be640
 */


void FUN_017be640(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  uVar2 = *param_2;
  *param_2 = 0;
  param_1[4] = uVar2;
  param_1[5] = param_2[1];
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d0a34c(param_1 + 6,param_2 + 2);
  uVar2 = param_2[4];
  param_2[4] = 0;
  *param_1 = FUN_017d3f34;
  param_1[1] = &LAB_02132dc0;
  param_1[8] = uVar2;
  param_1[2] = &LAB_02132f8c;
  param_1[3] = &LAB_021330d8;
  return;
}


