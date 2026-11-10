/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee22e4; name: FUN_00ee22e4
 */


void FUN_00ee22e4(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong unaff_x25;
  ulong uVar21;
  float fVar22;
  long *local_68;
  
  (**(code **)(*(long *)(*param_3 + 0x30) + 0x38))(&local_68);
  FUN_00ee28e4(*(long *)(param_1 + 0x38) + (long)(short)param_2 * 0x140 + 0x128,local_68);
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  sVar7 = (**(code **)(*plVar9 + 0x48))(plVar9,param_2);
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  lVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,param_2);
  if (0 < sVar7) {
    uVar19 = 0;
    plVar9 = (long *)(param_1 + 0x70);
    plVar1 = (long *)(param_1 + 0xa0);
    do {
      puVar2 = (ulong *)(lVar10 + uVar19 * 0x20);
      uVar21 = *puVar2;
      uVar18 = *(ulong *)(param_1 + 0x78);
      if (uVar18 == 0) {
LAB_00ee241c:
        plVar16 = (long *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x10))
                                    (*(long **)(param_1 + 0xa8),0x38,8);
        if (plVar16 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xa8) + 0xe8))();
        }
        uVar20 = *(undefined8 *)(param_1 + 0xa8);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar14 != 0) {
          if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar20;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        }
        plVar16[2] = *puVar2;
        plVar16[3] = puVar2[1];
        plVar16[4] = puVar2[2];
        plVar11 = (long *)puVar2[3];
        plVar16[5] = (long)plVar11;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))();
        }
        plVar16[6] = (long)local_68;
        if (local_68 != (long *)0x0) {
          plVar11 = local_68 + 5;
          do {
            lVar6 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        *plVar16 = 0;
        plVar16[1] = uVar21;
        fVar22 = (float)(*(long *)(param_1 + 200) + 1);
        if ((uVar18 == 0) || (*(float *)(param_1 + 0xd0) * (float)uVar18 < fVar22)) {
          uVar18 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
          uVar12 = (ulong)(fVar22 / *(float *)(param_1 + 0xd0));
          if (uVar12 <= uVar18) {
            uVar12 = uVar18;
          }
          if (uVar12 - 1 == 0) {
            uVar12 = 2;
          }
          else if ((uVar12 & uVar12 - 1) != 0) {
            uVar12 = std::__next_prime(uVar12);
          }
          uVar18 = *(ulong *)(param_1 + 0x78);
          if (uVar18 < uVar12) {
            uVar13 = uVar12;
LAB_00ee266c:
            FUN_00ee29a0(plVar9,uVar13);
          }
          else if (uVar12 < uVar18) {
            uVar13 = (ulong)((float)*(ulong *)(param_1 + 200) / *(float *)(param_1 + 0xd0));
            if ((uVar18 < 3) ||
               (uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
               1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar13 = std::__next_prime(uVar13);
            }
            else if (1 < uVar13) {
              uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
            }
            if (uVar13 <= uVar12) {
              uVar13 = uVar12;
            }
            if (uVar13 < uVar18) goto LAB_00ee266c;
          }
          uVar18 = *(ulong *)(param_1 + 0x78);
          if ((uVar18 & uVar18 - 1) == 0) {
            unaff_x25 = uVar18 - 1 & uVar21;
          }
          else if (uVar21 < uVar18) {
            unaff_x25 = uVar21;
          }
          else {
            uVar12 = 0;
            if (uVar18 != 0) {
              uVar12 = uVar21 / uVar18;
            }
            unaff_x25 = uVar21 - uVar12 * uVar18;
          }
        }
        plVar11 = *(long **)(*plVar9 + unaff_x25 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar16 = *plVar1;
          *plVar1 = (long)plVar16;
          *(long **)(*plVar9 + unaff_x25 * 8) = plVar1;
          if (*plVar16 != 0) {
            uVar21 = *(ulong *)(*plVar16 + 8);
            if ((uVar18 & uVar18 - 1) == 0) {
              uVar21 = uVar21 & uVar18 - 1;
            }
            else if (uVar18 <= uVar21) {
              uVar12 = 0;
              if (uVar18 != 0) {
                uVar12 = uVar21 / uVar18;
              }
              uVar21 = uVar21 - uVar12 * uVar18;
            }
            plVar11 = (long *)(*plVar9 + uVar21 * 8);
            goto LAB_00ee25ac;
          }
        }
        else {
          *plVar16 = *plVar11;
LAB_00ee25ac:
          *plVar11 = (long)plVar16;
        }
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
      }
      else {
        uVar12 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar13 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        uVar12 = 0;
        if (uVar18 != 0) {
          uVar12 = uVar21 / uVar18;
        }
        if (uVar13 < 2) {
          uVar15 = uVar18 - 1 & uVar21;
        }
        else {
          uVar15 = uVar21;
          if (uVar18 <= uVar21) {
            uVar15 = uVar21 - uVar12 * uVar18;
          }
        }
        lVar14 = *plVar9;
        plVar16 = *(long **)(lVar14 + uVar15 * 8);
        if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if (plVar16[1] == uVar21) {
                if (plVar16[2] == uVar21) goto LAB_00ee25bc;
              }
              else if ((plVar16[1] & uVar18 - 1) != uVar15) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              uVar17 = plVar16[1];
              if (uVar17 == uVar21) {
                if (plVar16[2] == uVar21) goto LAB_00ee25bc;
              }
              else {
                if (uVar18 <= uVar17) {
                  uVar5 = 0;
                  if (uVar18 != 0) {
                    uVar5 = uVar17 / uVar18;
                  }
                  uVar17 = uVar17 - uVar5 * uVar18;
                }
                if (uVar17 != uVar15) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
        if (uVar13 < 2) {
          unaff_x25 = uVar18 - 1 & uVar21;
          plVar16 = *(long **)(lVar14 + unaff_x25 * 8);
          if (plVar16 == (long *)0x0) goto LAB_00ee241c;
          do {
            plVar16 = (long *)*plVar16;
            if ((plVar16 == (long *)0x0) ||
               (plVar16[1] != uVar21 && (plVar16[1] & uVar18 - 1) != unaff_x25)) goto LAB_00ee241c;
          } while (plVar16[2] != uVar21);
        }
        else {
          unaff_x25 = uVar21;
          if (uVar18 <= uVar21) {
            unaff_x25 = uVar21 - uVar12 * uVar18;
          }
          plVar16 = *(long **)(lVar14 + unaff_x25 * 8);
          if (plVar16 == (long *)0x0) goto LAB_00ee241c;
          do {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_00ee241c;
            uVar12 = plVar16[1];
            if (uVar12 != uVar21) {
              if (uVar18 <= uVar12) {
                uVar13 = 0;
                if (uVar18 != 0) {
                  uVar13 = uVar12 / uVar18;
                }
                uVar12 = uVar12 - uVar13 * uVar18;
              }
              if (uVar12 != unaff_x25) goto LAB_00ee241c;
            }
          } while (plVar16[2] != uVar21);
        }
      }
LAB_00ee25bc:
      uVar19 = uVar19 + 1;
    } while (uVar19 != ((ulong)(uint)(int)sVar7 & 0xffff));
  }
  if (local_68 != (long *)0x0) {
    plVar9 = local_68 + 5;
    do {
      lVar10 = *plVar9;
      iVar8 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


