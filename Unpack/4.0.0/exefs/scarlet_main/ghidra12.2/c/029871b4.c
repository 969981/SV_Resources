/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029871b4; name: FUN_029871b4
 */


int FUN_029871b4(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined1 auStack_60 [32];
  long *local_28;
  
  iVar2 = FUN_012421f0(param_1,100);
  iVar7 = 0;
  uVar6 = 0;
  do {
    uVar8 = uVar6;
    iVar7 = (&DAT_03d6a5c4)[uVar8] + iVar7;
    uVar6 = uVar8 + 1;
  } while (iVar7 <= iVar2);
  uVar4 = FUN_0124e480(param_1);
  uVar5 = FUN_01582534(param_1);
  FUN_01247754(auStack_60,uVar4,uVar5);
  uVar6 = FUN_01460dbc(auStack_60,&local_28);
  iVar7 = 0;
  if ((uVar6 & 1) != 0) {
    uVar1 = *(undefined4 *)(&DAT_03d6a5dc + (uVar8 & 0xffffffff) * 4);
    do {
      uVar4 = FUN_0124e480(param_1);
      uVar5 = FUN_01582534(param_1);
      uVar6 = FUN_01242e68(uVar4,uVar5,local_28);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_02987460(param_1,local_28,uVar1), (uVar6 & 1) != 0)) {
        uVar3 = (**(code **)(*local_28 + 0x98))();
        uVar4 = FUN_01243584(param_1);
        FUN_0181a604(uVar4,uVar3,3,uVar8 & 0xffffffff);
        iVar7 = iVar7 + 1;
      }
      uVar6 = FUN_01460dbc(auStack_60,&local_28);
    } while ((uVar6 & 1) != 0);
  }
  return iVar7;
}


