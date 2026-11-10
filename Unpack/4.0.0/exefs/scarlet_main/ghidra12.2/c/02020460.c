/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02020460; name: FUN_02020460
 */


bool FUN_02020460(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  short sVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  undefined8 *local_60;
  undefined8 *local_48 [2];
  long *local_38;
  undefined8 local_18;
  
  FUN_014410c0(&local_38,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8)));
  if (local_38 == (long *)0x0) {
    return false;
  }
  uVar7 = FUN_00d60828(local_38,*param_2 + (ulong)*(uint *)(param_1 + 0xf8));
  if ((uVar7 & 1) != 0) {
    if (*(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0x10c)) != 0.0) {
      bVar10 = true;
      goto LAB_020204ec;
    }
    FUN_011f3030(local_48,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8)));
    if (local_48[0] != (undefined8 *)0x0) {
      local_60 = local_48[0];
      if (*(short *)((long)local_48[0] + 0x1a) == 0) {
LAB_02020694:
        bVar10 = false;
      }
      else {
        psVar1 = (short *)((long)local_48[0] + 0x1a);
        sVar11 = *(short *)((long)local_48[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_02020580;
            bVar10 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02020580:
            bVar10 = false;
          }
          if (bVar10) {
            plVar9 = (long *)(local_48[0][2] + -0x28);
            if (local_48[0][2] == 0) goto LAB_02020694;
            auVar13 = FUN_01025bc4(local_38,*param_2 + (ulong)*(uint *)(param_1 + 0xe8));
            lVar8 = (**(code **)(*plVar9 + 0x68))(plVar9);
            fVar12 = auVar13._0_4_ - *(float *)(lVar8 + 0x30);
            fVar14 = auVar13._4_4_ - *(float *)(lVar8 + 0x34);
            fVar15 = auVar13._8_4_ - *(float *)(lVar8 + 0x38);
            fVar12 = fVar12 * fVar12;
            fVar14 = fVar14 * fVar14;
            fVar15 = fVar15 * fVar15;
            auVar13._0_4_ = fVar12 + fVar14;
            auVar13._4_4_ = fVar15 + 0.0;
            auVar13._8_4_ = fVar12 + fVar14;
            auVar13._12_4_ = fVar15 + 0.0;
            auVar13 = NEON_ext(auVar13,auVar13,4,1);
            fVar12 = auVar13._0_4_ + auVar13._4_4_;
            if (fVar12 < 0.1) {
LAB_02020624:
              bVar10 = true;
            }
            else {
              if (*(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0x108)) < fVar12)
              goto LAB_02020624;
              *(float *)((ulong)*(uint *)(param_1 + 0x108) + *param_2) = fVar12;
              bVar10 = *(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0x100)) <=
                       *(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0x104));
            }
            (**(code **)(*plVar9 + 0x60))(plVar9);
            local_60 = local_48[0];
            goto LAB_02020640;
          }
          sVar11 = sVar3;
        } while (sVar3 != 0);
        bVar10 = false;
LAB_02020640:
        if (local_60 == (undefined8 *)0x0) goto LAB_020204ec;
      }
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_18 = *local_60;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      goto LAB_020204ec;
    }
  }
  bVar10 = false;
LAB_020204ec:
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return bVar10;
}


