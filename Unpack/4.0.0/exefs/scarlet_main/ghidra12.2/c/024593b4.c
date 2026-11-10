/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024593b4; name: FUN_024593b4
 */


void FUN_024593b4(undefined8 *param_1,long param_2)

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
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00d334b4(param_1 + 4,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[6] = uVar2;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00c96b7c(param_1 + 7,param_2 + 0x18);
  *param_1 = &LAB_024596f0;
  param_1[1] = &LAB_024596f4;
  param_1[2] = &LAB_024596f8;
  param_1[3] = &LAB_024597e8;
  return;
}


