/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175998c; name: FUN_0175998c
 */


void FUN_0175998c(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined1 local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined1 local_58;
  undefined8 local_38;
  
  FUN_0175a67c();
  *param_1 = &PTR_FUN_045e4400;
  param_1[4] = &PTR_LAB_045e44b0;
  param_1[5] = &PTR_LAB_045e44d0;
  param_1[6] = &PTR_LAB_045e44f0;
  param_1[7] = &PTR_LAB_045e4568;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_70 = param_1;
  FUN_0175a16c(param_1 + 0xe,param_2,&local_70);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0xfffffffffffffff;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1[1];
  param_1[0x16] = 0x40;
  param_1[0x17] = param_1[8];
  param_1[0x18] = 0x7ffffffffffffff;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_0175a004();
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x28] = 0;
  param_1[0x22] = param_1[8];
  param_1[0x23] = 0x1fffffffffffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_0175a0e4(param_1 + 0x22,8);
  param_1[0x49] = 0;
  memset(param_1 + 0x29,0,0xfc);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x4a),false,0);
  param_1[0x51] = param_1[1];
  local_80 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    local_80 = param_1 + 7;
  }
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0xfffffffffffffff;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  local_78 = 1;
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_0175a040(&local_90);
  puVar7 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_70 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_70);
      }
    }
    else if (sVar4 == 0) goto LAB_01759ca4;
  }
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar9 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar9;
  if (lVar9 == 0) {
    plVar11 = (long *)param_1[0xe];
    (**(code **)(*plVar11 + 0x18))(&local_70,plVar11);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    plVar3 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar3 = plVar11 + 5;
    }
    if ((long *)local_70[2] == plVar3) {
      FUN_01791904(&local_a0,&local_70);
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01759ca4;
    }
    lVar9 = FUN_0175a200(param_2,&local_a0);
    puVar7 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_01759ca4;
    }
    local_b0 = 0;
    if (lVar9 != 0) {
      local_b0 = lVar9 + 0x28;
    }
    local_c0 = (undefined8 *)0x0;
    uStack_b8 = 0;
    local_a8 = 1;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00c43ef0(&local_70,&local_c0);
    local_60 = local_b0;
    local_58 = local_a8;
    FUN_01667da8(param_1 + 0x16,&local_70);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_a0 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_a0);
        }
      }
      else if (sVar4 == 0) goto LAB_01759ca4;
    }
    puVar7 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_c0 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_70 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_70);
        }
      }
      else if (sVar4 == 0) {
LAB_01759ca4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


