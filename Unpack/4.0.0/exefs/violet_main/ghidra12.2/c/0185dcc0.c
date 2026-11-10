/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185dcc0; name: FUN_0185dcc0
 */


void FUN_0185dcc0(undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,long param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_68;
  undefined2 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  FUN_0100e6b8(&local_58,*param_5,param_6,0);
  local_58[0x1d] = param_2._8_8_;
  local_58[0x1c] = param_2._0_8_;
  if (*(char *)((long)local_58 + 0xf4) == '\0') {
    *(undefined1 *)((long)local_58 + 0xf4) = 1;
    (**(code **)(*local_58 + 0x78))();
  }
  FUN_00d40af0(local_58,local_58[1],param_4 + 0x58);
  uVar8 = FUN_00e75364(local_58,local_58[1]);
  local_60 = 0;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar10 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar10;
  local_68 = *(undefined8 *)(lVar10 + 0x70);
  FUN_0100e844(local_50,uVar8,&local_68);
  puVar11 = local_50[0];
  if (local_50[0] == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar12 = *(short *)((long)local_50[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0185dff4;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0185dff4:
          bVar6 = false;
        }
        if (bVar6) {
          plVar13 = (long *)0x0;
          if (local_50[0][2] != 0) {
            plVar13 = (long *)(local_50[0][2] + -0x28);
          }
          goto LAB_0185e01c;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
    }
    plVar13 = (long *)0x0;
LAB_0185e01c:
    psVar1 = (short *)(local_50[0] + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) goto LAB_0185deb0;
  }
  plVar9 = (long *)plVar13[0xb];
  plVar13[8] = -0x3ddd3d69fecdf19d;
  plVar13[9] = (long)"trigger";
  plVar13[10] = 7;
  plVar13[0xb] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  FUN_0100e778(plVar13,0x10);
  plVar9 = local_58;
  *(undefined2 *)((long)plVar13 + 0x221) = 0x100;
  *(undefined4 *)(plVar13 + 0x20) = 1;
  plVar13[0x22] = 0;
  plVar13[0x23] = 0;
  *(undefined4 *)(plVar13 + 0x24) = param_3;
  *(undefined4 *)((long)plVar13 + 0xe4) = 1;
  *(undefined2 *)((long)plVar13 + 0xf9) = 1;
  if (*(int *)((long)plVar13 + 0x74) == 0) {
    *(undefined4 *)((long)plVar13 + 0x74) = 1;
  }
  *(undefined1 *)((long)plVar13 + 0x71) = 0;
  plVar14 = local_58 + 5;
  (**(code **)(*local_58 + 0x18))(local_50,local_58);
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar14;
  }
  puVar11 = local_50[0];
  if ((long *)local_50[0][2] == plVar3) {
    FUN_00cbc6dc(param_1,local_50);
    puVar11 = local_50[0];
  }
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) {
LAB_0185deb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar10 = plVar13[6];
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  else if (sVar12 == 0) goto LAB_0185defc;
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar12 == 0) {
LAB_0185defc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


