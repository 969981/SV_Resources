/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02138090; name: FUN_02138090
 */


void FUN_02138090(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 auStack_78 [8];
  undefined1 local_70 [16];
  
  uVar22 = 0;
  do {
    plVar10 = DAT_0485a0a0;
    puVar18 = &DAT_03c886bc;
    lVar23 = param_1 + uVar22 * 0x70;
    if (*(long *)(lVar23 + 0x1e0) == 0) {
      lVar13 = param_1 + uVar22 * 0x70;
      lVar16 = *(long *)(lVar13 + 0x1a8);
      if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x1e8) & 1) != 0)) {
        if (DAT_0485a0a0 != (long *)0x0) {
          plVar2 = DAT_0485a0a0 + 5;
          do {
            lVar16 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = (int)lVar16 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((int)lVar16 == -1) goto LAB_021383d0;
        }
        lVar13 = *(long *)(lVar13 + 0x1a8);
        lVar16 = *(long *)(*(long *)(lVar13 + 0x1f8) + 0x58);
        if (lVar16 != 0) {
          puVar18 = (undefined1 *)(*(long *)(**(long **)(lVar16 + 0x28) + 0x60) + 2);
        }
        uVar11 = FUN_00ec0c08(lVar13,puVar18);
        local_70._0_8_ = plVar10;
        lVar13 = FUN_00cf3764(auStack_78,plVar10[1],local_70);
        if (lVar13 != 0) {
          piVar1 = (int *)(lVar13 + 0x28);
          do {
            iVar15 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 == -1) {
LAB_021383d0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        plVar2 = (long *)(lVar23 + 0x1e0);
        FUN_00ec0d30(lVar13,uVar11,1);
        plVar12 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar12 != (long *)0x0) {
          plVar3 = plVar12 + 5;
          do {
            lVar23 = *plVar3;
            iVar15 = (int)lVar23 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *(int *)plVar3 = iVar15;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          else if ((int)lVar23 == 0) goto LAB_02138338;
        }
        *plVar2 = lVar13;
        lVar13 = *(long *)(param_1 + 0x128);
        FUN_00d101e0(*(undefined8 *)(lVar13 + 200),2,uVar22 & 0xffffffff,plVar2);
        lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 0x58);
        if (*(char *)(lVar23 + 0x228) == '\0') {
          local_70 = FUN_0166cf98(lVar23,2,6);
          *(undefined1 (*) [16])(lVar23 + 0x228) = local_70;
        }
        else {
          local_70 = *(undefined1 (*) [16])(lVar23 + 0x228);
        }
        FUN_00ead0d0(*(undefined8 *)(lVar13 + 200),2,uVar22 & 0xffffffff,local_70);
        pbVar14 = (&PTR_s_EnableMainColor_04595300)[uVar22];
        bVar6 = *pbVar14;
        if (bVar6 == 0) {
          puVar18 = &DAT_cbf29ce484222645;
        }
        else {
          puVar18 = &DAT_cbf29ce484222645;
          do {
            pbVar14 = pbVar14 + 1;
            puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar14;
          } while (bVar6 != 0);
        }
        lVar23 = *(long *)(param_1 + 0x3f0);
        puVar4 = *(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x110);
        puVar5 = *(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x118);
        puVar17 = puVar4;
        if ((puVar4 != puVar5) && ((undefined1 *)*puVar4 != puVar18)) {
          do {
            puVar17 = puVar17 + 0xc;
            if (puVar5 == puVar17) {
              puVar17 = puVar5;
              goto LAB_021382d0;
            }
          } while ((undefined1 *)*puVar17 != puVar18);
        }
LAB_021382d0:
        if (puVar5 != puVar17) {
          iVar15 = (int)((ulong)((long)puVar17 - (long)puVar4) >> 5);
          lVar13 = *(long *)(lVar23 + 0x80);
          if ((*(uint *)((long)puVar4 + (long)(iVar15 * -0x55555555) * 0x60 + 0x5c) &
              *(uint *)(lVar13 + ((ulong)*(byte *)((long)puVar4 +
                                                  (long)(iVar15 * -0x55555555) * 0x60 + 0x5a) -
                                 (ulong)*(byte *)((long)puVar4 +
                                                 (long)(iVar15 * -0x55555555) * 0x60 + 0x59)) * 4))
              >> (ulong)(*(byte *)((long)puVar4 + (long)(iVar15 * -0x55555555) * 0x60 + 0x5b) & 0x1f
                        ) == 0) {
            puVar17 = puVar4;
            if ((puVar4 != puVar5) && ((undefined1 *)*puVar4 != puVar18)) {
              do {
                puVar17 = puVar17 + 0xc;
                if (puVar5 == puVar17) {
                  puVar17 = puVar5;
                  goto LAB_0213842c;
                }
              } while ((undefined1 *)*puVar17 != puVar18);
            }
LAB_0213842c:
            if (puVar5 != puVar17) {
              iVar15 = (int)((ulong)((long)puVar17 - (long)puVar4) >> 5) * -0x55555555;
              lVar16 = puVar4[(long)iVar15 * 0xc + 4];
              lVar20 = puVar4[(long)iVar15 * 0xc + 5];
              lVar21 = lVar16;
              if ((lVar16 != lVar20) && (lVar9 = lVar16, *(int *)(lVar16 + 0x20) != 1)) {
                do {
                  lVar21 = lVar9 + 0x28;
                  if (lVar20 == lVar21) {
                    lVar21 = lVar20;
                    goto LAB_02138460;
                  }
                  piVar1 = (int *)(lVar9 + 0x48);
                  lVar9 = lVar21;
                } while (*piVar1 != 1);
              }
LAB_02138460:
              if (lVar20 != lVar21) {
                lVar20 = (long)iVar15;
                uVar19 = (ulong)*(byte *)((long)puVar4 + lVar20 * 0x60 + 0x5a) -
                         (ulong)*(byte *)((long)puVar4 + lVar20 * 0x60 + 0x59);
                if ((ulong)(*(long *)(lVar23 + 0x88) - lVar13 >> 2) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                *(uint *)(lVar13 + uVar19 * 4) =
                     (int)((ulong)(lVar21 - lVar16) >> 3) * -0x33333333 <<
                     (ulong)(*(byte *)((long)puVar4 + lVar20 * 0x60 + 0x5b) & 0x1f) |
                     *(uint *)(lVar13 + uVar19 * 4) &
                     (*(uint *)((long)puVar4 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
                lVar23 = *(long *)(param_1 + 0x3f0);
              }
            }
            FUN_00d100a8(lVar23);
            FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0x1f,
                         *(long *)(param_1 + 0x3f0) + 0xf0);
          }
        }
        if (plVar10 != (long *)0x0) {
          plVar2 = plVar10 + 5;
          do {
            lVar23 = *plVar2;
            iVar15 = (int)lVar23 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = iVar15;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          else if ((int)lVar23 == 0) {
LAB_02138338:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
    }
    uVar22 = uVar22 + 1;
    if (uVar22 == 4) {
      return;
    }
  } while( true );
}


