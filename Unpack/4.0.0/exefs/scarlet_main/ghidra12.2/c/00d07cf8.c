/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d07cf8; name: FUN_00d07cf8
 */


void FUN_00d07cf8(long *param_1,undefined8 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auStack_70 [64];
  
  (**(code **)PTR_DAT_047e1e50)(auStack_70);
  (**(code **)PTR_DAT_047e1e58)(auStack_70,param_2[2]);
  uVar1 = 5;
  if (param_3[2] != 1) {
    uVar1 = 3;
  }
  uVar2 = 4;
  if (param_3[2] != 1) {
    uVar2 = 2;
  }
  if (*param_3 != 1) {
    uVar1 = uVar2;
  }
  (**(code **)PTR_DAT_047e1e60)(auStack_70,uVar1,param_3[1] == 1);
  (**(code **)PTR_DAT_047e1e68)(auStack_70,param_3[9],param_3[10],param_3[0xb]);
  (**(code **)PTR_DAT_047e1e70)(param_3[5],param_3[6],auStack_70);
  (**(code **)PTR_DAT_047e1e78)(param_3[7],auStack_70);
  (**(code **)PTR_DAT_047e1e80)(auStack_70,(char)param_3[0x11],param_3[0x10]);
  (**(code **)PTR_DAT_047e1e88)(auStack_70,param_3 + 0xc);
  fVar3 = (float)param_3[4];
  if (fVar3 <= 0.0) {
    fVar3 = 1.0;
  }
  (**(code **)PTR_DAT_047e1e90)(fVar3,auStack_70);
  (**(code **)PTR_DAT_047e1e98)(auStack_70,param_3[3]);
  (**(code **)PTR_DAT_047e1ea0)(param_3[8],auStack_70);
  FUN_013e9970(param_1,*param_2);
  if (*param_1 != 0) {
    FUN_00d07e98(*param_1,*param_2,auStack_70,param_3);
  }
  return;
}


