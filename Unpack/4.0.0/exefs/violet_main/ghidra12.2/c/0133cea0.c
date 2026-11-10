/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133cea0; name: FUN_0133cea0
 */


void FUN_0133cea0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_38;
  
  lVar14 = 0;
  if (param_2 != 0) {
    lVar14 = param_2 + 0xf8;
  }
  FUN_00df6ee8(param_1,lVar14);
  puVar8 = PTR_DAT_047d4250;
  puVar7 = PTR_DAT_047d4248;
  puVar6 = PTR_DAT_047d4240;
  pcVar13 = *(char **)(param_3 + 8);
  if (*pcVar13 == '\0') {
    local_70 = (long *)FUN_00d44228();
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))(local_70);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar11;
    FUN_00cf9884(&local_70,uVar11,pcVar13);
  }
  local_80 = 0;
  local_78 = 0;
  local_88 = (undefined8 *)0x0;
  local_60 = 0;
  local_68 = (undefined8 *)0x0;
  FUN_00c96b7c(&local_68,&local_88);
  local_58 = local_78;
  plVar12 = (long *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  plVar12 = local_70;
  local_70 = (long *)0x0;
  param_1[0xb8] = plVar12;
  FUN_00c96b7c(param_1 + 0xb9,&local_68);
  puVar9 = local_68;
  param_1[0xbb] = local_58;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_0133d128;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar9 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_0133d128;
  }
  pcVar13 = *(char **)(param_4 + 8);
  if (*pcVar13 == '\0') {
    plVar12 = (long *)FUN_00d44228();
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  else {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar11;
    FUN_00cf9884(&local_70,uVar11,pcVar13);
    plVar12 = local_70;
  }
  local_80 = 0;
  local_78 = 0;
  local_88 = (undefined8 *)0x0;
  local_60 = 0;
  local_68 = (undefined8 *)0x0;
  local_70 = plVar12;
  FUN_00c96b7c(&local_68,&local_88);
  local_58 = local_78;
  plVar12 = (long *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  plVar12 = local_70;
  local_70 = (long *)0x0;
  param_1[0xbc] = plVar12;
  FUN_00c96b7c(param_1 + 0xbd,&local_68);
  puVar9 = local_68;
  param_1[0xbf] = local_58;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_0133d128;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar9 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar9;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_0133d128:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00d2a450(param_1);
  if ((*(char *)(param_1 + 0xc0) == '\0') && (*(char *)((long)param_1 + 0x7c6) == '\0')) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    local_70 = *(long **)PTR_DAT_047d4e00;
    *(long **)PTR_DAT_047d4e08 = local_70;
    local_68 = param_1;
    FUN_0133d500(local_70[0x1619],&local_70);
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return;
}


