/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100e200; name: FUN_0100e200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0100e200(undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  short sVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_70;
  undefined2 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_0100e6b8(&local_60,*param_6,param_7,0);
  local_60[0x1d] = param_2._8_8_;
  local_60[0x1c] = param_2._0_8_;
  if (*(char *)((long)local_60 + 0xf4) == '\0') {
    *(undefined1 *)((long)local_60 + 0xf4) = 1;
    (**(code **)(*local_60 + 0x78))();
  }
  FUN_00d40af0(local_60,local_60[1],param_5 + 0x58);
  uVar9 = FUN_00e75364(local_60,local_60[1]);
  local_68 = 0;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar11 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar11;
  local_70 = *(undefined8 *)(lVar11 + 0x70);
  FUN_0100e844(local_58,uVar9,&local_70);
  puVar12 = local_58[0];
  if (local_58[0] == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_58[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58[0] + 0x1a);
      sVar13 = *(short *)((long)local_58[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0100e54c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0100e54c:
          bVar6 = false;
        }
        if (bVar6) {
          plVar14 = (long *)0x0;
          if (local_58[0][2] != 0) {
            plVar14 = (long *)(local_58[0][2] + -0x28);
          }
          goto LAB_0100e574;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar14 = (long *)0x0;
LAB_0100e574:
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar13 == 0) goto LAB_0100e408;
  }
  plVar10 = (long *)plVar14[0xb];
  plVar14[8] = -0x3ddd3d69fecdf19d;
  plVar14[9] = (long)"trigger";
  plVar14[10] = 7;
  plVar14[0xb] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  FUN_0100e778(plVar14,0x10);
  plVar10 = local_60;
  *(undefined2 *)((long)plVar14 + 0x221) = 0x100;
  *(undefined4 *)(plVar14 + 0x20) = 3;
  plVar14[0x2c] = 0;
  plVar14[0x2d] = 0;
  lVar7 = _UNK_03cabe58;
  lVar11 = _DAT_03cabe50;
  *(undefined4 *)(plVar14 + 0x30) = param_3;
  *(undefined4 *)((long)plVar14 + 0x184) = param_4;
  *(undefined4 *)((long)plVar14 + 0xe4) = 1;
  *(undefined2 *)((long)plVar14 + 0xf9) = 1;
  plVar14[0x2f] = lVar7;
  plVar14[0x2e] = lVar11;
  if (*(int *)((long)plVar14 + 0x74) == 0) {
    *(undefined4 *)((long)plVar14 + 0x74) = 1;
  }
  *(undefined1 *)((long)plVar14 + 0x71) = 0;
  plVar15 = local_60 + 5;
  (**(code **)(*local_60 + 0x18))(local_58,local_60);
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar15;
  }
  puVar12 = local_58[0];
  if ((long *)local_58[0][2] == plVar3) {
    FUN_00cbc6dc(param_1,local_58);
    puVar12 = local_58[0];
  }
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)puVar12 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar13 == 0) {
LAB_0100e408:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar11 = plVar14[6];
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
  }
  else if (sVar13 == 0) goto LAB_0100e454;
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar13 == 0) {
LAB_0100e454:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


