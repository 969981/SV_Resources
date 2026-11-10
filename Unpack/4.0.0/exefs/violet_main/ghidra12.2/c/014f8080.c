/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f8080; name: FUN_014f8080
 */


/* WARNING: Removing unreachable block (ram,0x014f8758) */

undefined8 FUN_014f8080(undefined8 *param_1)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 local_250;
  undefined8 uStack_248;
  long *local_240;
  undefined8 *local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  undefined8 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 *local_150;
  code *local_148;
  code *local_140;
  code *pcStack_138;
  undefined1 auStack_130 [96];
  undefined8 *local_d0 [2];
  code *local_c0;
  code *local_b8;
  long *local_b0;
  undefined1 *puStack_a8;
  undefined8 **local_a0 [12];
  undefined8 local_28;
  
  puVar9 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar9 == (undefined8 *)0x0) ||
     (puVar12 = (undefined *)*puVar9, (undefined *)*puVar9 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4518 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_047d4518);
      puVar12 = PTR_DAT_047d4520;
      if (iVar8 != 0) {
        *PTR_DAT_047d4520 = 0;
        *(undefined8 *)(puVar12 + 8) = 0;
        FUN_00100190(PTR_FUN_047d47c8,puVar12,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4518);
      }
    }
    else {
      puVar12 = PTR_DAT_047d4520;
    }
  }
  FUN_00d330e8(&local_150,param_1);
  if ((local_150 == (undefined8 *)0x0) || (*(short *)((long)local_150 + 0x1a) == 0)) {
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    FUN_00d32adc(&local_c0,&DAT_04859ea0);
    FUN_00d334b4(&local_150,&local_c0);
    pcVar11 = local_c0;
    if (local_c0 != (code *)0x0) {
      pcVar2 = local_c0 + 0x18;
      do {
        sVar4 = *(short *)pcVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar7) {
          *(short *)pcVar2 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        pcVar2 = local_c0 + 0x1c;
        do {
          iVar8 = *(int *)pcVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar7) {
            *(int *)pcVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_1d0 = *(undefined8 **)pcVar11;
          FUN_00c44438(lVar13 + 0x8040,&local_1d0);
        }
      }
      else if (sVar4 == 0) goto LAB_014f84d8;
    }
  }
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  FUN_00d32adc(&local_c0,&local_150);
  local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,2);
  local_1d0 = param_1;
  FUN_00d32d40(&local_b0,&local_1d0,&local_1e8);
  local_1e8 = (undefined8 *)0x0;
  uStack_1e0 = 0;
  FUN_00d32adc(&local_1e8,&local_c0);
  local_1d8 = local_b0;
  if (local_b0 != (long *)0x0) {
    lVar13 = local_b0[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_014f8904;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar10;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_014f8924;
    if (local_b0 != (long *)0x0) {
      lVar13 = local_b0[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_b0 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_014f894c;
    }
  }
  pcVar11 = local_c0;
  if (local_c0 != (code *)0x0) {
    pcVar2 = local_c0 + 0x18;
    do {
      sVar4 = *(short *)pcVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar7) {
        *(short *)pcVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      pcVar2 = local_c0 + 0x1c;
      do {
        iVar8 = *(int *)pcVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar7) {
          *(int *)pcVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_1d0 = *(undefined8 **)pcVar11;
        FUN_00c44438(lVar13 + 0x8040,&local_1d0);
      }
    }
    else if (sVar4 == 0) goto LAB_014f84d8;
  }
  if (local_150 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_150 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_150 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_1d0 = (undefined8 *)*local_150;
        FUN_00c44438(lVar13 + 0x8040,&local_1d0);
      }
    }
    else if (sVar4 == 0) goto LAB_014f84d8;
  }
  if (((DAT_0480a020 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0480a020), iVar8 != 0)) {
    __cxa_guard_release(&DAT_0480a020);
  }
  local_250 = 0;
  uStack_248 = 0;
  FUN_00d32adc(&local_250,&local_1e8);
  local_240 = local_1d8;
  if (local_1d8 != (long *)0x0) {
    lVar13 = local_1d8[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_014f8904:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar10;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_014f8924:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_014f8974(local_d0,puVar12);
  local_1d0 = (undefined8 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (code *)0x0;
  pcStack_1b8 = (code *)0x0;
  FUN_01b82aec(&local_250,auStack_1b0);
  local_150 = (undefined8 *)0x0;
  local_148 = (code *)0x0;
  local_140 = (code *)0x0;
  pcStack_138 = (code *)0x0;
  local_1d0 = (undefined8 *)&LAB_01795cfc;
  local_1c8 = FUN_01b8297c;
  local_1c0 = FUN_01b82aec;
  pcStack_1b8 = FUN_01b82bc4;
  FUN_01b82aec(auStack_1b0,auStack_130);
  pcStack_138 = pcStack_1b8;
  local_140 = local_1c0;
  local_148 = local_1c8;
  local_150 = local_1d0;
  if (local_d0[0] == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (local_d0[0][2] != 0) {
      lVar13 = local_d0[0][2] + -0x28;
    }
  }
  local_a0[0] = &local_150;
  pcVar11 = FUN_02a3e750;
  local_c0 = FUN_014f8bc4;
  local_b8 = FUN_02a3e750;
  local_b0 = (long *)&LAB_02a3e754;
  puStack_a8 = &LAB_02a3e760;
  puVar9 = *(undefined8 **)(lVar13 + 0x1f0);
  puVar5 = *(undefined8 **)(lVar13 + 0x1f8);
  if (puVar9 == puVar5) {
LAB_014f8354:
    local_b0 = (long *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar11)(local_a0);
  }
  else {
    local_28 = *puVar9;
    FUN_014f8bc4(local_a0,&local_28);
    pcVar11 = local_b8;
    while( true ) {
      puVar9 = puVar9 + 1;
      local_b8 = pcVar11;
      if (puVar9 == puVar5) break;
      local_28 = *puVar9;
      (*local_c0)(local_a0,&local_28);
      pcVar11 = local_b8;
    }
    if (pcVar11 != (code *)0x0) goto LAB_014f8354;
  }
  pcVar11 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    pcStack_138 = (code *)0x0;
    local_150 = (undefined8 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar11)(auStack_130);
  }
  pcVar11 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    pcStack_1b8 = (code *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar11)(auStack_1b0);
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_d0[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_c0 = (code *)*local_d0[0];
        FUN_00c44438(lVar13 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) goto LAB_014f84d8;
  }
  FUN_01b8297c(&local_250);
  if (local_1d8 != (long *)0x0) {
    lVar13 = local_1d8[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_1d8 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_014f894c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar9 = local_1e8;
  if (local_1e8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1e8 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_1e8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_c0 = (code *)*puVar9;
        FUN_00c44438(lVar13 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) {
LAB_014f84d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return 0;
}


