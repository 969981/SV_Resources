/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01096640; name: FUN_01096640
 */


void FUN_01096640(long *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_010970f8();
  *param_1 = (long)&PTR_FUN_04545b38;
  param_1[4] = (long)&PTR_LAB_04545bd8;
  param_1[5] = (long)&PTR_LAB_04545c28;
  *(undefined1 *)((long)param_1 + 0x45) = 0;
  lVar15 = 0;
  if (*param_2 != 0) {
    lVar14 = *(long *)(*param_2 + 0x10);
    lVar15 = 0;
    if (lVar14 != 0) {
      lVar15 = lVar14 + -0x28;
    }
  }
  param_1[0x21] = lVar15;
  param_1[0x36] = lVar15;
  lVar15 = 0;
  if ((long *)*param_2 != (long *)0x0) {
    lVar15 = *(long *)*param_2;
  }
  param_1[0x22] = lVar15;
  lVar15 = param_3[1];
  uVar6 = *(undefined4 *)((long)param_3 + 0xf);
  param_1[0x14] = *param_3;
  *(undefined4 *)((long)param_1 + 0xaf) = uVar6;
  param_1[0x15] = lVar15;
  if (((*PTR_DAT_047d6c20 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar15 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar15;
  if (((*(long *)(lVar15 + 0x370) != 0) && (*(long *)(lVar15 + 0x498) != 0)) &&
     (**(char **)(*(long *)(lVar15 + 0x498) + 0x38) != '\0')) {
    param_1[0x20] = *(long *)(lVar15 + 0x460);
    (**(code **)(*param_1 + 0x18))(local_48,param_1);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    if ((long *)local_48[0][2] == param_1 + 5) {
      FUN_01099238(&local_58,local_48);
    }
    puVar10 = local_48[0];
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_38 = *puVar10;
          FUN_00c44438(lVar14 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) goto LAB_01096974;
    }
    FUN_01099608(param_1 + 10,&local_58);
    puVar10 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_48[0] = (undefined8 *)*puVar10;
          FUN_00c44438(lVar14 + 0x8040,local_48);
        }
      }
      else if (sVar5 == 0) {
LAB_01096974:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar14 = FUN_01096ba8(lVar15,param_1 + 10,PTR_FUN_047d9a20);
    param_1[0xc] = lVar14;
    if (lVar14 != -1) {
      puVar17 = &DAT_cbf29ce484222645;
      lVar14 = FUN_010972dc(lVar15,lVar14,PTR_LAB_047d9a28);
      param_1[0xd] = lVar14;
      lVar15 = FUN_01098a28(lVar15,param_1[0xc],PTR_LAB_047d9a30);
      bVar7 = *(byte *)(param_1 + 0x14);
      param_1[0xe] = lVar15;
      if (bVar7 != 0) {
        pbVar16 = (byte *)((long)param_1 + 0xa1);
        do {
          puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar7 != 0);
      }
      plVar12 = (long *)param_1[0x1a];
      param_1[0x17] = (long)puVar17;
      param_1[0x18] = (long)(param_1 + 0x14);
      param_1[0x19] = 0x12;
      param_1[0x1a] = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      puVar9 = PTR_s_C3B091777E3EC94A5_047d9a38;
      plVar12 = (long *)param_1[0x1e];
      param_1[0x1e] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = -0x3af7ca0dfb93dba3;
      param_1[0x1c] = (long)puVar9;
      param_1[0x1d] = 0x12;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      param_1[0x1e] = 0;
      plVar12 = param_1 + 0x24;
      lVar15 = nn::os::GetCurrentThread();
      while (*plVar12 == 0 && param_1[0x25] == 0) {
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar15;
          param_1[0x25] = 0;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') goto LAB_01096860;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
      do {
        if (*plVar12 != 0 || param_1[0x25] != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
            while (*plVar12 == 0 && param_1[0x25] == 0) {
              cVar8 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar13) {
                *plVar12 = lVar15;
                param_1[0x25] = 0;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_01096860;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar15;
          param_1[0x25] = 0;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_01096860:
      if (((int)param_1[8] == 6) && (param_1[0x23] == 0)) {
        (**(code **)(*param_1 + 0x88))(param_1);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      do {
        lVar15 = *plVar12;
        lVar14 = param_1[0x25];
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = lVar15;
          param_1[0x25] = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        lVar3 = *plVar12;
        lVar4 = param_1[0x25];
        if (lVar3 != lVar15 || lVar4 != lVar14) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_01096910;
        }
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *plVar12 = 0;
          *(long *)((long)param_1 + 0x124) = lVar14;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar13 = true;
LAB_01096910:
      if (!bVar13) {
        do {
          lVar15 = *plVar12;
          lVar14 = param_1[0x25];
          if (lVar15 != lVar3 || lVar14 != lVar4) {
            bVar13 = false;
            ClearExclusiveLocal();
            goto joined_r0x01096ae4;
          }
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *plVar12 = 0;
            *(long *)((long)param_1 + 0x124) = lVar4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar13 = true;
joined_r0x01096ae4:
        if (!bVar13) {
          do {
            lVar3 = *plVar12;
            lVar4 = param_1[0x25];
            if (lVar3 != lVar15 || lVar4 != lVar14) {
              bVar13 = false;
              ClearExclusiveLocal();
              lVar15 = lVar3;
              lVar14 = lVar4;
              goto joined_r0x01096ae4;
            }
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar13) {
              *plVar12 = 0;
              *(long *)((long)param_1 + 0x124) = lVar14;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar13 = true;
          lVar15 = lVar3;
          lVar14 = lVar4;
          goto joined_r0x01096ae4;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x26));
    }
  }
  return;
}


