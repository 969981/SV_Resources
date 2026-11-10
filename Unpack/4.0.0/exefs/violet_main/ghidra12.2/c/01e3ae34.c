/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3ae34; name: FUN_01e3ae34
 */


void FUN_01e3ae34(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00ca1a48(&local_68);
  if ((*param_3 != 0) && (*(short *)(*param_3 + 0x1a) != 0)) {
    FUN_00ca1a48(&local_68,param_3);
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00ca1a48(&local_88,&local_68);
  local_c8 = 0xec275cf90293e392;
  pcStack_c0 = "PokeBodyCol";
  local_b8 = 0xb;
  local_b0 = (long *)0x0;
  local_a8 = 7;
  local_a4 = 1;
  local_90 = 1;
  local_a0 = 0x3f000000bf800000;
  uStack_98 = 0x13f000000;
  FUN_01e3b40c(&local_78,param_1,&local_88,param_4,param_5,&local_c8);
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar11 == 0) {
LAB_01e3af78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  puVar6 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_88 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar11 == 0) goto LAB_01e3afe4;
  }
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
LAB_01e3b100:
    sVar3 = *psVar2;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e3b124;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e3b124:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x01e3b12c;
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 != 0) {
      plVar12 = (long *)(lVar9 + -0x28);
      uVar8 = FUN_00e75364(plVar12,*(undefined8 *)(lVar9 + -0x20));
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      local_e0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      *(undefined8 *)PTR_DAT_047d8c10 = *(undefined8 *)PTR_DAT_047d8c08;
      FUN_00ca1a48(&local_e0,param_2);
      local_120 = 0x7fa9d1eb6fe4160d;
      pcStack_118 = "PokeBodyColAsCharaCol";
      local_fb = local_6c;
      local_110 = 0x15;
      local_108 = (long *)0x0;
      local_100 = 5;
      local_fc = 1;
      local_e8 = 1;
      local_f9 = local_6a;
      local_f8 = 0x3f000000bf800000;
      uStack_f0 = 0x13f000000;
      FUN_01e3b40c(&local_d0,param_1,&local_e0,uVar8,1,&local_120);
      if (local_d0 != (long *)0x0) {
        lVar10 = local_d0[6];
        psVar2 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_d0 + 0x50))();
        }
        else if (sVar11 == 0) goto LAB_01e3af78;
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      puVar6 = local_e0;
      if (local_e0 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_e0 + 3);
        do {
          sVar11 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar1 = (int *)((long)local_e0 + 0x1c);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_58 = *puVar6;
            FUN_00c44438(lVar10 + 0x8040,&local_58);
          }
        }
        else if (sVar11 == 0) goto LAB_01e3afe4;
      }
      lVar9 = *(long *)(lVar9 + 8);
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar11 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar11 == 0) goto LAB_01e3af78;
    }
  }
LAB_01e3af10:
  puVar6 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_68 + 3);
    do {
      sVar11 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_68 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar11 == 0) {
LAB_01e3afe4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01e3b12c:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_01e3af10;
  goto LAB_01e3b100;
}


