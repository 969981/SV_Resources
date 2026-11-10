/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d33afc; name: FUN_00d33afc
 */


void FUN_00d33afc(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar12 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar14 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar14;
  param_1[4] = (long)(puVar6 + 0x88);
  plVar16 = param_1 + 5;
  *plVar16 = (long)(puVar6 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar16);
  *param_1 = (long)&DAT_045d0278;
  param_1[4] = (long)&PTR_LAB_045d02f0;
  *plVar16 = (long)&DAT_045d0340;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar6 = PTR_DAT_047d38f8;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  lVar14 = *(long *)puVar6;
  lVar12 = nn::os::GetCurrentThread();
  if (lVar12 != lVar14) {
    uVar13 = nn::os::GetCurrentThread();
LAB_00d33dd8:
    if (*(long *)puVar6 == 0) goto code_r0x00d33de0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
    do {
      if (*(long *)puVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
          while (*(long *)puVar6 == 0) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar15) {
              *(undefined8 *)puVar6 = uVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d33de8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar15) {
        *(undefined8 *)puVar6 = uVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d33de8:
    bVar15 = false;
    goto LAB_00d33bec;
  }
  bVar15 = true;
LAB_00d33bec:
  iVar9 = FUN_00d34290(param_2,param_3);
  if (iVar9 == (int)param_1[0xb]) {
    uVar10 = FUN_00c5d980(param_2);
    FUN_00d341e0(param_2,param_3);
    uVar11 = FUN_00d34380(param_2,0xfff0b9d8);
    *(undefined4 *)((long)param_1 + 0x5c) = uVar11;
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_00d32adc(&local_80,&DAT_04859ea0);
    do {
      lVar12 = local_78;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar5) {
        local_78 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    puVar8 = PTR_DAT_047d3918;
    puVar7 = PTR_DAT_047d3910;
    uVar13 = *(undefined8 *)PTR_DAT_047d3910;
    *(undefined8 *)PTR_DAT_047d3918 = uVar13;
    FUN_00c44204(&local_70,uVar13,lVar12);
    puVar17 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar17 + 3);
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
        piVar2 = (int *)((long)puVar17 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_68 = *puVar17;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_00d33da8;
    }
    puVar17 = (undefined8 *)param_1[9];
    param_1[9] = 0;
    if (local_70 == (undefined8 *)0x0) {
      if (puVar17 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar17 + 3);
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
          piVar2 = (int *)((long)puVar17 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_68 = *puVar17;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_00d33da8;
      }
      lVar12 = 0;
    }
    else {
      if (puVar17 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar17 + 3);
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
          piVar2 = (int *)((long)puVar17 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar7;
            *(long *)puVar8 = lVar14;
            local_68 = *puVar17;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_00d33da8;
      }
      puVar17 = local_70;
      local_70 = (undefined8 *)0x0;
      param_1[9] = (long)puVar17;
    }
    puVar17 = local_70;
    param_1[10] = lVar12;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
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
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_68 = *puVar17;
          FUN_00c44438(lVar12 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_00d33da8;
    }
    puVar17 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
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
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_68 = *puVar17;
          FUN_00c44438(lVar12 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
LAB_00d33da8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if ((param_1[9] == 0) || (*(short *)(param_1[9] + 0x1a) == 0)) {
      param_1[8] = param_2;
    }
    FUN_00c5db00(param_2,uVar10);
  }
  else {
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  }
  if (!bVar15) {
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
  }
  return;
code_r0x00d33de0:
  cVar4 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar15) {
    *(undefined8 *)puVar6 = uVar13;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d33de8;
  goto LAB_00d33dd8;
}


