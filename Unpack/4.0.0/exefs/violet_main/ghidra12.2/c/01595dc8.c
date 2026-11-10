/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01595dc8; name: FUN_01595dc8
 */


void FUN_01595dc8(long param_1,ulong param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *local_a8 [4];
  long *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar13 = (long *)(param_1 + 0xd0);
  lVar7 = *plVar13;
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x2e0) -
          *(long *)(*(long *)(param_1 + 0x38) + 0x2d8) >> 3;
  uVar12 = lVar9 * -0x5555555555555555;
  lVar17 = *(long *)(param_1 + 0xd8);
  uVar14 = lVar17 - lVar7 >> 6;
  if (uVar14 < uVar12) {
    if ((ulong)(*(long *)(param_1 + 0xe0) - lVar17 >> 6) < uVar12 - uVar14) {
      uVar11 = *(ulong *)(param_1 + 0xf0);
      if (0x7ffffffffffffffe < uVar11) {
        uVar11 = 0x7fffffffffffffff;
      }
      if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = *(long *)(param_1 + 0xe0) - lVar7;
      uVar8 = lVar7 >> 5;
      if (uVar12 <= uVar8) {
        uVar12 = uVar8;
      }
      puVar10 = (undefined8 *)(param_1 + 0xe8);
      if (uVar11 >> 1 <= (ulong)(lVar7 >> 6)) {
        uVar12 = uVar11;
      }
      if (uVar12 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,uVar12 << 6,8);
        if (lVar7 == 0) {
          (**(code **)(*(long *)*puVar10 + 0xe8))();
        }
      }
      lVar17 = lVar7 + uVar14 * 0x40;
      puVar18 = (undefined8 *)(lVar17 + 8);
      lVar15 = lVar9 * -0x5555555555555540 + uVar14 * -0x40;
      do {
        uVar19 = *puVar10;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          puVar18[5] = 0;
          puVar18[6] = 0;
          puVar18[3] = 0;
          puVar18[4] = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[-1] = &PTR_FUN_0459cff0;
          *puVar18 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar19;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          puVar18[5] = 0;
          puVar18[6] = 0;
          puVar18[3] = 0;
          puVar18[4] = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[-1] = &PTR_FUN_0459cff0;
          *puVar18 = 0;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        puVar18 = puVar18 + 8;
        lVar15 = lVar15 + -0x40;
      } while (lVar15 != 0);
      lVar15 = *(long *)(param_1 + 0xd0);
      lVar6 = *(long *)(param_1 + 0xd8);
      if (lVar6 == lVar15) {
        lVar6 = lVar15;
      }
      else {
        do {
          lVar17 = lVar17 + -0x40;
          lVar6 = lVar6 + -0x40;
          FUN_01598df4(puVar10,lVar17,lVar6);
        } while (lVar15 != lVar6);
        lVar6 = *(long *)(param_1 + 0xd0);
        lVar15 = *(long *)(param_1 + 0xd8);
      }
      *(long *)(param_1 + 0xd0) = lVar17;
      *(long *)(param_1 + 0xd8) = lVar7 + lVar9 * -0x5555555555555540;
      lVar9 = *(long *)(param_1 + 0xe0);
      *(ulong *)(param_1 + 0xe0) = lVar7 + uVar12 * 0x40;
      if ((lVar15 != lVar6) && (FUN_01168d28(lVar15 + -0x40), lVar15 + -0x40 != lVar6)) {
        do {
          FUN_01168d28(lVar15 + -0x80);
          lVar15 = lVar15 + -0x40;
        } while (lVar6 + 0x40 != lVar15);
      }
      if (lVar6 != 0) {
        plVar16 = (long *)*puVar10;
        lVar9 = lVar9 - lVar6;
        uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar12 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar6,lVar9,8);
        }
        else {
          FUN_00c48fe8(plVar16,lVar6,lVar9,8);
        }
      }
    }
    else {
      FUN_0159713c(plVar13);
    }
    lVar15 = *(long *)(param_1 + 0xd8);
  }
  else {
    lVar15 = lVar17;
    if (uVar12 < uVar14) {
      lVar15 = lVar7 + lVar9 * -0x5555555555555540;
      if ((((lVar15 != lVar17) && (FUN_01168d28(lVar17 + -0x40), lVar17 + -0x40 != lVar15)) &&
          (FUN_01168d28(lVar17 + -0x80), lVar17 + -0x80 != lVar15)) &&
         (FUN_01168d28(lVar17 + -0xc0), lVar17 + -0xc0 != lVar15)) {
        do {
          FUN_01168d28(lVar17 + -0x100);
          lVar17 = lVar17 + -0x40;
        } while (lVar15 + 0xc0 != lVar17);
      }
      *(long *)(param_1 + 0xd8) = lVar15;
    }
  }
  if (lVar15 != *plVar13) {
    if ((param_2 & 1) == 0) {
      lVar9 = 0;
      lVar7 = 0;
      uVar12 = 0;
      do {
        lVar17 = *(long *)(param_1 + 0x38);
        puVar10 = (undefined8 *)(*(long *)(lVar17 + 0x2d8) + lVar9);
        local_78 = *puVar10;
        local_70 = puVar10[1];
        local_68 = puVar10[2];
        if (lVar17 == 0) {
          lVar17 = FUN_00da5204();
        }
        else {
          lVar17 = lVar17 + 0x40;
        }
        FUN_00ffd4c8(local_a8,lVar17,&local_78,&DAT_03c886bc);
        FUN_0159726c(*plVar13 + lVar7,0,local_a8,param_3);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_a8[0] != (long *)0x0) {
          (**(code **)(*local_a8[0] + 0x20))();
        }
        uVar12 = uVar12 + 1;
        lVar7 = lVar7 + 0x40;
        lVar9 = lVar9 + 0x18;
      } while (uVar12 < (ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 6));
    }
    else {
      uVar12 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x38);
        puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x2d8) + uVar12 * 0x18);
        local_78 = *puVar10;
        local_70 = puVar10[1];
        local_68 = puVar10[2];
        if (lVar7 == 0) {
          lVar7 = FUN_00da5204();
        }
        else {
          lVar7 = lVar7 + 0x40;
        }
        FUN_00ffd4c8(local_a8,lVar7,&local_78,&DAT_03c886bc);
        lVar7 = *plVar13 + uVar12 * 0x40;
        uVar14 = FUN_0159726c(lVar7,1,local_a8,param_3);
        if (((uVar14 & 1) != 0) && (plVar16 = *(long **)(lVar7 + 0x20), plVar16 != (long *)0x0)) {
          lVar7 = plVar16[6];
          if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 0) {
            uVar19 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            *(undefined8 *)(lVar7 + 8) = uVar19;
            *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          lVar7 = plVar16[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar16 + 0x50))(plVar16);
          }
          else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_a8[0] != (long *)0x0) {
          (**(code **)(*local_a8[0] + 0x20))();
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 6));
    }
  }
  return;
}


