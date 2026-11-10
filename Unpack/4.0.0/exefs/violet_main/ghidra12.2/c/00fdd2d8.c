/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdd2d8; name: FUN_00fdd2d8
 */


undefined8 FUN_00fdd2d8(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *local_60 [4];
  long *local_40;
  long local_38;
  
  uVar8 = (**(code **)(*param_1 + 0x18))();
  if (((((uVar8 & 1) == 0) || (*(char *)((long)param_1 + 0x449) != '\0')) ||
      ((char)param_1[0x89] == '\0')) ||
     (FUN_00fdd784(&local_40,param_1), plVar14 = local_40, local_40 == (long *)0x0)) {
    return 0;
  }
  FUN_01f85200(param_1 + 4,param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x89) = 0;
  if (param_1[0xd] != 0) {
    puVar10 = (undefined8 *)FUN_01a6a8cc(plVar14);
    FUN_00f0c464(local_60,*puVar10,param_1 + 0xb);
    uVar8 = FUN_01f853c0(local_60);
    if ((uVar8 & 1) != 0) {
      FUN_00d9572c(local_60,(int)param_1[0xf]);
    }
    plVar14 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar9 = local_60[0] + 3;
      do {
        sVar3 = (short)*plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(short *)plVar9 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *plVar14;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_00fdd624;
    }
  }
  if (param_1[9] != 0) {
    puVar10 = (undefined8 *)FUN_01a6a8cc(local_40);
    FUN_00f0c464(local_60,*puVar10,param_1 + 7);
    uVar8 = FUN_01f853c0(local_60);
    if ((uVar8 & 1) != 0) {
      FUN_01f853f0(local_60,1);
    }
    plVar14 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar9 = local_60[0] + 3;
      do {
        sVar3 = (short)*plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(short *)plVar9 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *plVar14;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
LAB_00fdd624:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  uVar8 = FUN_01f853c0(param_1 + 0x7d);
  if ((uVar8 & 1) != 0) {
    FUN_00d9572c(param_1 + 0x7d,*(undefined4 *)((long)param_1 + 0x2c));
  }
  uVar8 = FUN_01f853c0(param_1 + 0x81);
  if ((uVar8 & 1) != 0) {
    FUN_00d9572c(param_1 + 0x81,(int)param_1[6]);
  }
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1 + 0x14);
  }
  FUN_01f84afc(local_60,param_1);
  if (local_60[0] != (long *)0x0) {
    if (*(char *)((long)param_1 + 0x164) == '\0') {
      lVar12 = local_60[0][0xb];
      if (*(char *)(lVar12 + 0xff) == '\0') {
        *(undefined1 *)(lVar12 + 0xfe) = 0;
        *(undefined2 *)(lVar12 + 0xfc) = 0x100;
      }
      uVar11 = 2;
    }
    else {
      iVar7 = (int)param_1[0x2c];
      if (iVar7 == 0) {
        if ((int)param_1[0x5a] == 1) {
LAB_00fdd464:
          lVar12 = local_60[0][0xb];
          if (*(char *)(lVar12 + 0xff) == '\0') {
            *(undefined1 *)(lVar12 + 0xfe) = 0;
            *(undefined2 *)(lVar12 + 0xfc) = 0x100;
          }
        }
      }
      else {
        if (iVar7 == 2) goto LAB_00fdd464;
        if ((iVar7 == 1) && (lVar12 = local_60[0][0xb], *(char *)(lVar12 + 0xff) == '\0')) {
          *(int *)(lVar12 + 0x50) = (int)param_1[0x20];
          FUN_00d0a71c(lVar12 + 0x58,param_1 + 0x21);
          *(long *)(lVar12 + 0x68) = param_1[0x23];
          *(long *)(lVar12 + 0x70) = param_1[0x24];
          *(long *)(lVar12 + 0x78) = param_1[0x25];
          plVar14 = (long *)param_1[0x26];
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          plVar9 = *(long **)(lVar12 + 0x80);
          *(long **)(lVar12 + 0x80) = plVar14;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          lVar6 = param_1[0x2a];
          *(long *)(lVar12 + 0x98) = param_1[0x29];
          lVar13 = param_1[0x28];
          *(short *)(lVar12 + 0xa0) = (short)lVar6;
          *(undefined1 *)(lVar12 + 0xfc) = 1;
          *(long *)(lVar12 + 0x90) = lVar13;
        }
      }
      uVar11 = (undefined4)param_1[0x2c];
    }
    *(undefined4 *)(param_1 + 0x5a) = uVar11;
    lVar12 = local_60[0][6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_60[0] + 0x50))(local_60[0]);
    }
    else if (sVar3 == 0) goto LAB_00fdd434;
  }
  if (local_40 != (long *)0x0) {
    lVar12 = local_40[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_40 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00fdd434:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return 1;
}


