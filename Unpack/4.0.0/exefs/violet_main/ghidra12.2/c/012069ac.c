/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012069ac; name: FUN_012069ac
 */


undefined8 FUN_012069ac(long param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  long *local_70 [4];
  long *local_50;
  long *local_28;
  
  plVar9 = (long *)*param_2;
  plVar7 = (long *)(param_1 + 0x468);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar3 = (long *)*plVar7;
  *plVar7 = (long)plVar9;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x470) = param_2[1];
  *(undefined8 *)(param_1 + 0x478) = param_2[2];
  *(undefined8 *)(param_1 + 0x480) = param_2[3];
  plVar9 = (long *)param_2[4];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar3 = *(long **)(param_1 + 0x488);
  *(long **)(param_1 + 0x488) = plVar9;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 5);
  pcVar8 = *(char **)(param_3 + 8);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    plVar9 = (long *)FUN_00d44228();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
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
    FUN_00cf9884(local_70,uVar4,pcVar8);
    plVar9 = local_70[0];
  }
  plVar3 = *(long **)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(long **)(param_1 + 0x498) = plVar9;
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 6;
  }
  local_90 = *plVar3;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 7;
  }
  lStack_88 = *plVar3;
  if (plVar9 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = plVar9[8];
  }
  local_78 = (long *)0x0;
  plVar3 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar3 = plVar9;
  }
  local_78 = plVar3;
  FUN_014671a8(&local_28,&local_90,&DAT_03bdfb3b,&local_90,&PTR_s__blua_045cf808);
  FUN_01467264(local_70,plVar7,&local_28,&DAT_03c886bc);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  uVar5 = FUN_01206d9c(param_1,local_70);
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)FUN_00da5204();
    plVar9 = (long *)*puVar6;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar3 = (long *)*plVar7;
    *plVar7 = (long)plVar9;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *(undefined8 *)(param_1 + 0x470) = puVar6[1];
    *(undefined8 *)(param_1 + 0x478) = puVar6[2];
    *(undefined8 *)(param_1 + 0x480) = puVar6[3];
    plVar7 = (long *)puVar6[4];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar9 = *(long **)(param_1 + 0x488);
    *(long **)(param_1 + 0x488) = plVar7;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(puVar6 + 5);
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0)) {
      local_90 = FUN_00d44228();
      puVar1 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_90);
      FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    plVar7 = *(long **)PTR_DAT_047d8c30;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar9 = *(long **)(param_1 + 0x498);
    *(long **)(param_1 + 0x498) = plVar7;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  return uVar4;
}


