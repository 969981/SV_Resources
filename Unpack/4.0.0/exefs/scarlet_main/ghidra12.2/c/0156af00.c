/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156af00; name: FUN_0156af00
 */


void FUN_0156af00(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_16 [6];
  
  lVar1 = param_2[3];
  lVar3 = param_2[4];
  lVar2 = param_2[5];
  lVar4 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar2;
  param_1[6] = lVar4;
  param_1[3] = lVar1;
  param_1[4] = lVar3;
  if (param_2[1] - *param_2 == 0) {
    return;
  }
  FUN_0156afe4(param_1,(param_2[1] - *param_2 >> 4) * -0x70a3d70a3d70a3d7);
  uVar5 = param_1[1];
  FUN_0156b074(param_1 + 3,*param_2,param_2[1],auStack_16 + -10);
  param_1[1] = uVar5;
  return;
}


