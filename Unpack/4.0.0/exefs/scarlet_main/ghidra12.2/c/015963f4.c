/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015963f4; name: FUN_015963f4
 */


void FUN_015963f4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined4 local_64;
  
  lVar9 = *(long *)(param_1 + 0x98);
  uVar18 = *(long *)(*(long *)(param_1 + 0x38) + 0x290) -
           *(long *)(*(long *)(param_1 + 0x38) + 0x288);
  uVar20 = (long)uVar18 >> 7;
  uVar16 = *(long *)(param_1 + 0xa0) - lVar9 >> 3;
  if (uVar16 < uVar20) {
    if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3) < uVar20 - uVar16) {
      uVar12 = *(ulong *)(param_1 + 0xb8);
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < uVar20) goto LAB_0159699c;
      lVar9 = *(long *)(param_1 + 0xa8) - lVar9;
      uVar10 = lVar9 >> 2;
      uVar3 = uVar20;
      if (uVar20 <= uVar10) {
        uVar3 = uVar10;
      }
      puVar1 = (undefined8 *)(param_1 + 0xb0);
      if (uVar12 >> 1 <= (ulong)(lVar9 >> 3)) {
        uVar3 = uVar12;
      }
      if (uVar3 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar3 << 3,8);
        if (lVar9 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xe8))();
        }
      }
      puVar21 = (undefined8 *)(lVar9 + uVar16 * 8);
      lVar19 = uVar20 * 8 + uVar16 * -8;
      puVar15 = puVar21;
      do {
        uVar17 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          *puVar15 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01596988;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          *puVar15 = 0;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        puVar15 = puVar15 + 1;
        lVar19 = lVar19 + -8;
      } while (lVar19 != 0);
      plVar13 = *(long **)(param_1 + 0x98);
      plVar14 = *(long **)(param_1 + 0xa0);
      if (plVar14 == plVar13) {
        plVar14 = plVar13;
      }
      else {
        do {
          puVar21 = puVar21 + -1;
          plVar14 = plVar14 + -1;
          FUN_01598c2c(puVar1,puVar21,plVar14);
        } while (plVar13 != plVar14);
        plVar13 = *(long **)(param_1 + 0x98);
        plVar14 = *(long **)(param_1 + 0xa0);
      }
      *(undefined8 **)(param_1 + 0x98) = puVar21;
      *(ulong *)(param_1 + 0xa0) = lVar9 + uVar20 * 8;
      lVar19 = *(long *)(param_1 + 0xa8);
      *(ulong *)(param_1 + 0xa8) = lVar9 + uVar3 * 8;
      do {
        while( true ) {
          do {
            if (plVar14 == plVar13) {
              if (plVar13 != (long *)0x0) {
                plVar14 = (long *)*puVar1;
                lVar19 = lVar19 - (long)plVar13;
                uVar16 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar16 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                  (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,lVar19,8);
                }
                else {
                  FUN_00c48fe8(plVar14,plVar13,lVar19,8);
                }
              }
              goto LAB_01596560;
            }
            plVar14 = plVar14 + -1;
            plVar8 = (long *)*plVar14;
          } while (plVar8 == (long *)0x0);
          plVar2 = plVar8 + 5;
          do {
            lVar9 = *plVar2;
            iVar6 = (int)lVar9 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != 0) break;
          (**(code **)(*plVar8 + 0x10))();
        }
      } while ((int)lVar9 != 0);
      goto LAB_015969e4;
    }
    FUN_01596a50();
  }
  else if (uVar20 < uVar16) {
    FUN_02173efc((long *)(param_1 + 0x98),lVar9 + uVar20 * 8);
  }
LAB_01596560:
  lVar9 = *(long *)(param_1 + 0x108);
  uVar16 = *(long *)(param_1 + 0x110) - lVar9 >> 3;
  if (uVar16 < uVar20) {
    if ((ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 3) < uVar20 - uVar16) {
      uVar12 = *(ulong *)(param_1 + 0x128);
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < uVar20) {
LAB_0159699c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = *(long *)(param_1 + 0x118) - lVar9;
      uVar10 = lVar9 >> 2;
      uVar3 = uVar20;
      if (uVar20 <= uVar10) {
        uVar3 = uVar10;
      }
      puVar1 = (undefined8 *)(param_1 + 0x120);
      if (uVar12 >> 1 <= (ulong)(lVar9 >> 3)) {
        uVar3 = uVar12;
      }
      if (uVar3 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar3 << 3,8);
        if (lVar9 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xe8))();
        }
      }
      puVar21 = (undefined8 *)(lVar9 + uVar16 * 8);
      lVar19 = uVar20 * 8 + uVar16 * -8;
      puVar15 = puVar21;
      do {
        uVar17 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          *puVar15 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01596988:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          *puVar15 = 0;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        puVar15 = puVar15 + 1;
        lVar19 = lVar19 + -8;
      } while (lVar19 != 0);
      plVar13 = *(long **)(param_1 + 0x108);
      plVar14 = *(long **)(param_1 + 0x110);
      if (plVar14 == plVar13) {
        plVar14 = plVar13;
      }
      else {
        do {
          puVar21 = puVar21 + -1;
          plVar14 = plVar14 + -1;
          FUN_01598d10(puVar1,puVar21,plVar14);
        } while (plVar13 != plVar14);
        plVar13 = *(long **)(param_1 + 0x108);
        plVar14 = *(long **)(param_1 + 0x110);
      }
      *(undefined8 **)(param_1 + 0x108) = puVar21;
      *(ulong *)(param_1 + 0x110) = lVar9 + uVar20 * 8;
      lVar19 = *(long *)(param_1 + 0x118);
      *(ulong *)(param_1 + 0x118) = lVar9 + uVar3 * 8;
      do {
        while( true ) {
          do {
            if (plVar14 == plVar13) {
              if (plVar13 != (long *)0x0) {
                plVar14 = (long *)*puVar1;
                lVar19 = lVar19 - (long)plVar13;
                uVar16 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar16 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                  (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,lVar19,8);
                }
                else {
                  FUN_00c48fe8(plVar14,plVar13,lVar19,8);
                }
              }
              goto LAB_01596684;
            }
            plVar14 = plVar14 + -1;
            plVar8 = (long *)*plVar14;
          } while (plVar8 == (long *)0x0);
          plVar2 = plVar8 + 5;
          do {
            lVar9 = *plVar2;
            iVar6 = (int)lVar9 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != 0) break;
          (**(code **)(*plVar8 + 0x10))();
        }
      } while ((int)lVar9 != 0);
LAB_015969e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    FUN_01596b60();
  }
  else if (uVar20 < uVar16) {
    FUN_01595d28(param_1 + 0x108,lVar9 + uVar20 * 8);
  }
LAB_01596684:
  uVar16 = uVar18 >> 7 & 0x1f;
  uVar18 = uVar20 >> 5;
  if (uVar16 != 0) {
    uVar18 = uVar18 + 1;
  }
  uVar12 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 2;
  local_64 = 0;
  if (uVar18 != uVar12) {
    if (uVar18 < uVar12 || uVar18 - uVar12 == 0) {
      if (uVar18 < uVar12) {
        *(ulong *)(param_1 + 0x160) = *(long *)(param_1 + 0x158) + uVar18 * 4;
      }
    }
    else {
      FUN_00eda21c(param_1 + 0x158,uVar18 - uVar12,&local_64);
    }
  }
  *(ulong *)(param_1 + 400) = uVar20;
  if (uVar16 != 0) {
    *(uint *)(*(long *)(param_1 + 0x160) + -4) =
         *(uint *)(*(long *)(param_1 + 0x160) + -4) & (-1 << uVar16 ^ 0xffffffffU);
  }
  puVar11 = *(undefined4 **)(param_1 + 0x158);
  uVar16 = *(long *)(param_1 + 0x160) - (long)puVar11;
  if ((((0 < (long)uVar16) && (*puVar11 = 0, 4 < uVar16)) && (puVar11[1] = 0, 8 < uVar16)) &&
     (puVar11[2] = 0, 0xc < uVar16)) {
    lVar9 = (uVar16 >> 2) - 2;
    puVar11 = puVar11 + 3;
    do {
      lVar9 = lVar9 + -1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < lVar9);
  }
  return;
}


