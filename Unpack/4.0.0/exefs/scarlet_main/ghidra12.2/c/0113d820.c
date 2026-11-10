/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113d820; name: FUN_0113d820
 */


void FUN_0113d820(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (((*PTR_DAT_047dd2e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd2e8), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b3c260,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd2e8);
  }
  *(undefined8 *)PTR_DAT_047dd2f8 = *(undefined8 *)PTR_DAT_047dd2f0;
  iVar1 = FUN_0216be94();
  lVar3 = FUN_0113ca5c(param_1,param_2);
  if (lVar3 != 0) {
    pcVar8 = *(char **)(param_2 + 8);
    if (*pcVar8 == '\0') {
      plVar5 = (long *)FUN_00d44228();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar4;
      FUN_00cf9884(&local_50,uVar4,pcVar8);
      plVar5 = local_50;
    }
    local_50 = (long *)PTR_DAT_047d8b70;
    if (plVar5 != (long *)0x0) {
      local_50 = plVar5 + 6;
    }
    local_50 = (long *)*local_50;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 7;
    }
    local_48 = *plVar6;
    if (plVar5 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = plVar5[8];
    }
    local_40 = (undefined4)lVar7;
    uStack_3c = (undefined4)((ulong)lVar7 >> 0x20);
    local_38 = 0;
    uStack_34 = 0;
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar6 = plVar5;
    }
    local_38 = SUB84(plVar6,0);
    uStack_34 = (undefined4)((ulong)plVar6 >> 0x20);
    lVar7 = FUN_0113cb2c(param_1 + 0x750,&local_50);
    if ((long *)CONCAT44(uStack_34,local_38) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_34,local_38) + 0x20))();
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    iVar2 = *(int *)(lVar7 + 0x20);
    local_50 = DAT_03cbf340;
    local_48 = DAT_03cbf348;
    local_40 = (undefined4)DAT_03cbf350;
    uStack_3c = (undefined4)((ulong)DAT_03cbf350 >> 0x20);
    local_38 = (undefined4)DAT_03cbf358;
    uStack_34 = (undefined4)((ulong)DAT_03cbf358 >> 0x20);
    if (iVar1 == 0) {
      local_48 = CONCAT44((int)((ulong)DAT_03cbf348 >> 0x20),0x3f2aaaab);
      uStack_34 = 0x3f2aaaab;
      uStack_3c = 0x3f2aaaab;
      local_38 = 0x3f2aaaab;
    }
    iVar1 = FUN_0113d3a4(lVar3);
    if (iVar2 < iVar1) {
      FUN_0113d3ac(lVar3,iVar2,&local_50);
    }
  }
  return;
}


