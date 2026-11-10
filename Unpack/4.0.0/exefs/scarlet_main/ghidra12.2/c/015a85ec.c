/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a85ec; name: FUN_015a85ec
 */


void FUN_015a85ec(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [104];
  undefined8 *local_88 [2];
  long local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long *local_50 [2];
  undefined8 local_28;
  
  FUN_015a8a5c(local_50,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8)));
  if (local_50[0] != (long *)0x0) {
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      lVar9 = FUN_015a8a6c(param_1,*param_2);
      if ((((*(long *)(lVar9 + 0x88) != 0) && (*(short *)(*(long *)(lVar9 + 0x88) + 0x1a) != 0)) ||
          (uVar11 = FUN_013f7d04(lVar9 + 0x70), (uVar11 & 1) != 0)) &&
         (*(long *)(lVar9 + 0x80) != 0)) {
        plVar10 = (long *)FUN_015a8a54();
        lVar9 = *plVar10;
        if ((lVar9 != 0) &&
           (FUN_014410c0(&local_58,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8))),
           local_58 != (long *)0x0)) {
          uVar12 = FUN_01025bc4(local_58,*param_2 + (ulong)*(uint *)(param_1 + 0xe8));
          iVar7 = FUN_00e03574(local_58,*param_2 + (ulong)*(uint *)(param_1 + 0xf0));
          FUN_015a8b44(&local_78,local_58,*param_2 + (ulong)*(uint *)(param_1 + 0xec));
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          plVar10 = local_60;
          if (local_78 == *(long *)PTR_DAT_047d3e30) {
            local_78 = -0x6b51554b8c8ea611;
            pcStack_70 = "origin";
            local_68 = 6;
            local_60 = (long *)0x0;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x20))();
            }
            local_60 = (long *)0x0;
          }
          if (iVar7 < 0x26) {
            local_110 = &LAB_02a83c80;
            local_108 = FUN_02a83d00;
            local_100 = &LAB_02a83d04;
            puStack_f8 = &LAB_02a83d08;
            FUN_01534c34(local_88,uVar12,lVar9,iVar7,&local_110,&local_78);
            FUN_01535fd0(*param_2 + (ulong)*(uint *)(param_1 + 0xf4),local_88);
            if (local_88[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_88[0] + 3);
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
                piVar2 = (int *)((long)local_88[0] + 0x1c);
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
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_28 = *local_88[0];
                  FUN_00c44438(lVar9 + 0x8040,&local_28);
                }
              }
              else if (sVar3 == 0) goto LAB_015a8818;
            }
            pcVar6 = local_108;
            if (local_108 != (code *)0x0) {
              local_100 = (undefined1 *)0x0;
              puStack_f8 = (undefined1 *)0x0;
              local_110 = (undefined1 *)0x0;
              local_108 = (code *)0x0;
              (*pcVar6)(auStack_f0);
            }
          }
          if (local_60 != (long *)0x0) {
            (**(code **)(*local_60 + 0x20))();
          }
          if (local_58 != (long *)0x0) {
            lVar9 = local_58[6];
            psVar1 = (short *)(lVar9 + 0x1a);
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
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_58 + 0x50))();
            }
            else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
      }
    }
    if (local_50[0] != (long *)0x0) {
      plVar10 = local_50[0] + 3;
      do {
        sVar3 = (short)*plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(short *)plVar10 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_78 = *local_50[0];
          FUN_00c44438(lVar9 + 0x8040,&local_78);
        }
      }
      else if (sVar3 == 0) {
LAB_015a8818:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


