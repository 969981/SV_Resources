/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a8164; name: FUN_014a8164
 */


void FUN_014a8164(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined8 local_70;
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  iVar7 = *(int *)(param_1 + 0x298);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    FUN_0196e8a4(param_1);
    if (*(int *)(param_1 + 0x108) == 2) {
      local_70 = FUN_01195974(param_1);
      if (5 < (uint)((ulong)local_70 >> 0x20)) {
        local_70 = CONCAT44(5,(undefined4)local_70);
      }
      FUN_01dd29cc(&local_68,param_1,1);
      FUN_014e4eac(param_1,&local_70);
      puVar11 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_48 = *puVar11;
            FUN_00c44438(lVar8 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) {
LAB_014a893c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    FUN_014e3148(param_1,0);
  }
  else if (iVar7 == 1) {
    if (*(int *)(param_1 + 0x29c) == 2) {
      *(undefined4 *)(param_1 + 0x29c) = 0;
    }
    lVar8 = FUN_01195854();
    uVar4 = *(undefined1 *)(lVar8 + 0x570);
    FUN_014e2fd0(param_1,0,uVar4,0,0,0);
    FUN_014e2fd0(param_1,0,uVar4,1,0,0);
    FUN_014e2fd0(param_1,0,uVar4,2,0,0);
    FUN_014e2fd0(param_1,0,uVar4,3,0,0);
    FUN_014e2fd0(param_1,0,uVar4,4,0,0);
    FUN_014e2fd0(param_1,0,uVar4,5,0,0);
    FUN_014e2fd0(param_1,0,uVar4,6,0,0);
    FUN_014e2fd0(param_1,0,uVar4,7,0,0);
    FUN_014e2fd0(param_1,0,uVar4,8,0,0);
    FUN_014e2fd0(param_1,0,uVar4,9,0,0);
    FUN_014e2fd0(param_1,0,uVar4,10,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0xb,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0xc,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0xd,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0xe,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0xf,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x10,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x11,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x12,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x13,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x14,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x15,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x16,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x17,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x18,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x19,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x1a,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x1b,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x1c,0,0);
    FUN_014e2fd0(param_1,0,uVar4,0x1d,0,0);
    uVar14 = *(undefined4 *)(param_1 + 0x2a4);
    FUN_014e2fd0(param_1,1,uVar14,0,0,0);
    FUN_014e2fd0(param_1,1,uVar14,1,0,0);
    FUN_014e2fd0(param_1,1,uVar14,2,0,0);
    FUN_014e2fd0(param_1,1,uVar14,3,0,0);
    FUN_014e2fd0(param_1,1,uVar14,4,0,0);
    FUN_014e2fd0(param_1,1,uVar14,5,0,0);
  }
  else if (iVar7 == 2) {
    FUN_014e3148(param_1,1);
    *(undefined4 *)(param_1 + 0x2a4) = 1;
    lVar8 = FUN_01195854();
    uVar4 = *(undefined1 *)(lVar8 + 0x570);
    iVar7 = 0;
    do {
      uVar9 = FUN_01195854();
      uVar10 = FUN_014e61a4(uVar9,uVar4,iVar7,*(int *)(param_1 + 0x2a4) + -1);
      uVar14 = 0x3f800000;
      if ((uVar10 & 1) == 0) {
        uVar14 = 0;
      }
      FUN_014e6294(uVar14,*(undefined8 *)(param_1 + 0x1a8),iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x1e);
    plVar13 = *(long **)(param_1 + 0x30);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x58))(plVar13);
    }
    local_68 = (undefined8 *)&DAT_77133e00a0e5587f;
    pcStack_60 = "layout";
    local_58 = 6;
    local_50 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      puVar11 = (undefined8 *)FUN_00e895f4(plVar13[0x2e],&local_68);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar11 + 0x20))((long *)*puVar11,1);
        (**(code **)(*(long *)*puVar11 + 0xd0))(0x3f800000);
        *(undefined1 *)((long)puVar11 + 0x31) = 0;
        if ((undefined1 *)puVar11[7] != (undefined1 *)0x0) {
          *(undefined1 *)puVar11[7] = 1;
        }
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      (**(code **)(*plVar13 + 0x60))(plVar13);
    }
    if (*(int *)(param_1 + 0x108) == 1) {
      uVar9 = FUN_01195974(param_1);
      local_70 = uVar9;
      FUN_01dd29cc(&local_68,param_1,2);
      iVar12 = (int)((ulong)uVar9 >> 0x20);
      iVar7 = 6;
      if (iVar12 + 1U < 6) {
        iVar7 = iVar12 + 1;
      }
      local_70 = CONCAT44(iVar7,(undefined4)local_70);
      FUN_014e4eac(param_1,&local_70);
      puVar11 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_48 = *puVar11;
            FUN_00c44438(lVar8 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) goto LAB_014a893c;
      }
    }
  }
  FUN_01dd8988(param_1);
  if (*(uint *)(param_1 + 0x298) < 3) {
    *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x298) + 1;
    FUN_0119544c(param_1);
  }
  return;
}


