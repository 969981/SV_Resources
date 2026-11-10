/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f6090; name: FUN_014f6090
 */


void FUN_014f6090(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  iVar3 = *(int *)(param_1 + 300);
  if (iVar3 == 3) {
    if (*(char *)(param_1 + 0x128) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x128) = 0;
    FUN_018cff08(param_1,0);
    lVar1 = param_1 + 0x360;
    if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0x160) != 0)) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x730) = 1;
      (**(code **)(param_1 + 0x160))(param_1 + 0x180);
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
    if ((*(char *)(param_1 + 0x131) != '\0') && (*(long *)(param_1 + 0x1e0) != 0)) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x731) = 1;
      (**(code **)(param_1 + 0x1e0))(param_1 + 0x200);
      *(undefined1 *)(param_1 + 0x131) = 0;
    }
    if ((*(char *)(param_1 + 0x132) != '\0') && (*(long *)(param_1 + 0x260) != 0)) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x732) = 1;
      (**(code **)(param_1 + 0x260))(param_1 + 0x280);
      *(undefined1 *)(param_1 + 0x132) = 0;
    }
    if ((*(char *)(param_1 + 0x133) != '\0') && (*(long *)(param_1 + 0x2e0) != 0)) {
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
      if (*(char *)(param_1 + 0x129) != '\0') {
        *(undefined1 *)(param_1 + 0x85) = 1;
      }
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined1 *)(param_1 + 0x12a) = 1;
        FUN_01282188(lVar1);
      }
      *(undefined1 *)(param_1 + 0x733) = 1;
      (**(code **)(param_1 + 0x2e0))(param_1 + 0x300);
      *(undefined1 *)(param_1 + 0x133) = 0;
    }
    *(undefined1 *)(param_1 + 0x12a) = 0;
    return;
  }
  if (iVar3 == 1) {
    plVar4 = *(long **)(param_1 + 200);
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (**(char **)(param_1 + 0x388) == '\0') {
      return;
    }
    if (**(char **)(param_1 + 1000) == '\0') {
      return;
    }
    (**(code **)(*plVar4 + 0x70))(plVar4,param_1 + 0x380,0);
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x728) * 0x20;
    local_50 = *(undefined8 *)(lVar1 + 0x420);
    pcVar6 = *(char **)(lVar1 + 0x428);
    local_40 = *(undefined8 *)(lVar1 + 0x430);
    plVar4 = *(long **)(lVar1 + 0x438);
    pcStack_48 = pcVar6;
    local_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    cVar2 = *pcVar6;
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),&local_50);
      plVar4 = local_38;
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (cVar2 == '\0') {
      return;
    }
    uVar5 = 2;
  }
  else {
    if (iVar3 != 2) {
      return;
    }
    FUN_014f6498(param_1);
    uVar5 = 3;
  }
  *(undefined4 *)(param_1 + 300) = uVar5;
  return;
}


