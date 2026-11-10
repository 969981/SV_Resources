/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e5f50; name: FUN_014e5f50
 */


undefined4 FUN_014e5f50(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  bool bVar6;
  char local_40 [4];
  int local_3c;
  int iStack_38;
  
  uVar2 = FUN_01195854();
  if (param_2 - 1U < 2) {
    if (param_3 == 0) {
      return 0;
    }
    uVar3 = FUN_014e797c(uVar2,param_3 + -1);
    uVar5 = 1;
    if ((uVar3 & 1) != 0) {
      uVar5 = 2;
    }
    return uVar5;
  }
  if (param_2 != 0) {
    return 0;
  }
  uVar3 = FUN_014e61a4(uVar2,param_3,param_4,0);
  bVar6 = false;
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_014e797c(uVar2,0);
    if ((uVar3 & 1) != 0) {
      return 2;
    }
    bVar6 = true;
  }
  uVar3 = FUN_014e61a4(uVar2,param_3,param_4,1);
  if ((uVar3 & 1) != 0) {
    bVar6 = true;
    uVar3 = FUN_014e797c(uVar2,1);
    if ((uVar3 & 1) != 0) {
      return 2;
    }
  }
  uVar3 = FUN_014e61a4(uVar2,param_3,param_4,2);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_014e797c(uVar2,2);
    if ((uVar3 & 1) != 0) {
      return 2;
    }
    bVar6 = true;
  }
  uVar3 = FUN_014e61a4(uVar2,param_3,param_4,3);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_014e797c(uVar2,3);
    if ((uVar3 & 1) != 0) {
      return 2;
    }
    bVar6 = true;
  }
  uVar3 = FUN_014e61a4(uVar2,param_3,param_4,4);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_014e61a4(uVar2,param_3,param_4,5);
    if ((uVar3 & 1) == 0) {
      if (bVar6) {
        return 1;
      }
      if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar1 != 0)) {
        FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5ff8);
      }
      lVar4 = *(long *)PTR_DAT_047d6000;
      *(long *)PTR_DAT_047d6008 = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      FUN_01a2fe88(local_40);
      if (local_40[0] == '\0') {
        return 0;
      }
      uVar5 = 3;
      if (iStack_38 != param_4 || local_3c != param_3) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    uVar3 = FUN_014e797c(uVar2,4);
    if ((uVar3 & 1) != 0) {
      return 2;
    }
    uVar3 = FUN_014e61a4(uVar2,param_3,param_4,5);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
  }
  uVar3 = FUN_014e797c(uVar2,5);
  uVar5 = 1;
  if ((uVar3 & 1) != 0) {
    uVar5 = 2;
  }
  return uVar5;
}


