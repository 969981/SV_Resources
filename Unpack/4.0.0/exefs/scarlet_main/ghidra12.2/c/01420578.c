/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01420578; name: FUN_01420578
 */


void FUN_01420578(undefined1 param_1 [16],long param_2,long *param_3,long *param_4,int param_5)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar10 = *(long *)(param_2 + 0x78);
  if ((*param_3 == lVar10) && (*param_4 == *(long *)(param_2 + 0xa0))) {
    lVar10 = param_2 + (long)param_5 * 0xd0;
    fVar18 = *(float *)(lVar10 + 0x100) - param_1._0_4_;
    fVar20 = *(float *)(lVar10 + 0x104) - param_1._4_4_;
    fVar21 = *(float *)(lVar10 + 0x108) - param_1._8_4_;
    fVar22 = *(float *)(lVar10 + 0x10c) - param_1._12_4_;
    fVar18 = fVar18 * fVar18;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar22 = fVar22 * fVar22;
    auVar19._0_4_ = fVar18 + fVar20;
    auVar19._4_4_ = fVar21 + fVar22;
    auVar19._8_4_ = fVar18 + fVar20;
    auVar19._12_4_ = fVar21 + fVar22;
    auVar19 = NEON_ext(auVar19,auVar19,4,1);
    if (auVar19._0_4_ + auVar19._4_4_ < 0.0001) {
      return;
    }
  }
  else {
    if ((((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) && (*(int *)(param_2 + 0x88) != -1)) &&
       ((*(long *)(param_2 + 0x90) != 0 && (*(short *)(*(long *)(param_2 + 0x90) + 0x1a) != 0)))) {
      if (*(long *)(param_2 + 0x90) == 0) {
        lVar10 = 0;
      }
      else {
        lVar11 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
        lVar10 = 0;
        if (lVar11 != 0) {
          lVar10 = lVar11 + -0x28;
        }
      }
      FUN_01420b80(lVar10,*(undefined4 *)(param_2 + 0x88));
    }
    FUN_00d0a71c((long *)(param_2 + 0x78),param_3);
    *(long *)(param_2 + 0xa0) = *param_4;
    *(long *)(param_2 + 0xa8) = param_4[1];
    *(long *)(param_2 + 0xb0) = param_4[2];
    plVar16 = (long *)param_4[3];
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    plVar9 = *(long **)(param_2 + 0xb8);
    *(long **)(param_2 + 0xb8) = plVar16;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    plVar16 = (long *)(param_2 + 0x90);
    puVar17 = (undefined8 *)*plVar16;
    *(undefined4 *)(param_2 + 0x88) = 0xffffffff;
    *plVar16 = 0;
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar17 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)puVar17 + 0x1c);
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_50 = (undefined8 *)*puVar17;
          FUN_00c44438(lVar10 + 0x8040,&local_50);
        }
      }
      else if (sVar4 == 0) goto LAB_01420904;
    }
    *(undefined8 *)(param_2 + 0x98) = 0;
    if (((*(long *)(param_2 + 0x78) == 0) ||
        (lVar10 = *(long *)(*(long *)(param_2 + 0x78) + 0x10), lVar10 == 0)) ||
       (lVar10 = FUN_01104bd8(lVar10 + 0xe0,&local_50), lVar10 == 0)) goto LAB_01420844;
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,lVar10 + 0x98);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if (local_50[2] == lVar10 + 0x28) {
      FUN_00d6ca28(&local_60,&local_50);
    }
    puVar17 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
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
          local_28 = *puVar17;
          FUN_00c44438(lVar11 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_01420904;
    }
    FUN_00d6c658(plVar16,&local_60);
    puVar17 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
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
          local_50 = (undefined8 *)*puVar17;
          FUN_00c44438(lVar11 + 0x8040,&local_50);
        }
      }
      else if (sVar4 == 0) {
LAB_01420904:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (((*plVar16 != 0) && (*(short *)(*plVar16 + 0x1a) != 0)) &&
       (lVar11 = *(long *)(*(long *)(lVar10 + 0x138) + 0x70), lVar11 != 0)) {
      plVar16 = *(long **)(lVar11 + 0x30);
      if (plVar16 != *(long **)(lVar11 + 0x38)) {
        uVar12 = *(ulong *)(param_2 + 0xa0);
LAB_01420738:
        uVar13 = *(ulong *)(*plVar16 + 0x40);
        if (uVar13 != 0) {
          uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar14 < 2) {
            uVar15 = uVar13 - 1 & uVar12;
          }
          else {
            uVar15 = uVar12;
            if (uVar13 <= uVar12) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar12 / uVar13;
              }
              uVar15 = uVar12 - uVar15 * uVar13;
            }
          }
          plVar9 = *(long **)(*(long *)(*plVar16 + 0x38) + uVar15 * 8);
          if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
            if (uVar14 < 2) {
              do {
                if (plVar9[1] == uVar12) {
                  if (plVar9[2] == uVar12) goto LAB_0142082c;
                }
                else if ((plVar9[1] & uVar13 - 1) != uVar15) break;
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
            else {
              do {
                uVar14 = plVar9[1];
                if (uVar14 == uVar12) {
                  if (plVar9[2] == uVar12) goto LAB_0142082c;
                }
                else {
                  if (uVar13 <= uVar14) {
                    uVar7 = 0;
                    if (uVar13 != 0) {
                      uVar7 = uVar14 / uVar13;
                    }
                    uVar14 = uVar14 - uVar7 * uVar13;
                  }
                  if (uVar14 != uVar15) break;
                }
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
          }
        }
        goto LAB_01420834;
      }
LAB_01420840:
      *(undefined4 *)(param_2 + 0x88) = 0xffffffff;
    }
  }
LAB_01420844:
  lVar10 = param_2 + (long)param_5 * 0xd0;
  *(long *)(lVar10 + 0x108) = param_1._8_8_;
  *(long *)(lVar10 + 0x100) = param_1._0_8_;
  *(undefined4 *)(param_2 + 0x6c) = 3;
  return;
LAB_0142082c:
  if (-1 < (short)plVar9[6]) {
    uVar3 = (uint)*(ushort *)((long)plVar16 + 10) + (int)(short)plVar9[6];
    *(int *)(param_2 + 0x88) = (int)(short)uVar3;
    if ((~uVar3 & 0xffff) != 0) {
      FUN_01420cb8(lVar10);
    }
    goto LAB_01420844;
  }
LAB_01420834:
  plVar16 = plVar16 + 2;
  if (plVar16 == *(long **)(lVar11 + 0x38)) goto LAB_01420840;
  goto LAB_01420738;
}


