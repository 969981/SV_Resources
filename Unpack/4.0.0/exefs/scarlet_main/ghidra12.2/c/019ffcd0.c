/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ffcd0; name: FUN_019ffcd0
 */


int FUN_019ffcd0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auStack_60 [32];
  long *local_28;
  
  *param_3 = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar4 = FUN_0124e480();
  uVar5 = FUN_01582534(param_1);
  FUN_01247754(auStack_60,uVar4,uVar5);
  uVar6 = FUN_01460dbc(auStack_60,&local_28);
  iVar7 = 0;
  do {
    if ((uVar6 & 1) == 0) {
      return iVar7;
    }
    iVar2 = (**(code **)(*local_28 + 0x98))();
    if (iVar2 == *(int *)(param_2 + 0x3c)) {
      uVar3 = (**(code **)(*local_28 + 0x98))();
      *(undefined4 *)((long)param_3 + (long)iVar7 * 4) = uVar3;
      return iVar7 + 1;
    }
    FUN_01582534(param_1);
    uVar4 = FUN_014813ec();
    uVar3 = (**(code **)(*local_28 + 0x98))();
    iVar2 = FUN_011e2da8(uVar4,uVar3);
    if (iVar2 == *(int *)(param_2 + 0x34)) {
LAB_019ffdc0:
      uVar3 = (**(code **)(*local_28 + 0x98))();
      *(undefined4 *)((long)param_3 + (long)iVar7 * 4) = uVar3;
      iVar7 = iVar7 + 1;
    }
    else {
      FUN_01582534(param_1);
      uVar4 = FUN_014813ec();
      uVar3 = (**(code **)(*local_28 + 0x98))();
      cVar1 = FUN_0154e790(uVar4,uVar3);
      if (*(char *)(param_2 + 0x38) == cVar1) goto LAB_019ffdc0;
    }
    uVar6 = FUN_01460dbc(auStack_60,&local_28);
  } while( true );
}


