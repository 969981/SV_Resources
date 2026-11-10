/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebbcc0; name: FUN_00ebbcc0
 */


void FUN_00ebbcc0(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long *plVar19;
  ulong uVar20;
  undefined1 *puVar21;
  char local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 *puStack_68;
  
  plVar16 = (long *)(param_1 + 0xa8);
  if (*plVar16 == 0) {
    lVar15 = FUN_01029d2c(&local_88,*(undefined8 *)(param_1 + 8),*(long *)(*param_2 + 0x38) + 0x30);
    if (lVar15 != 0) {
      piVar3 = (int *)(lVar15 + 0x28);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar19 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar19 != (long *)0x0) {
      plVar4 = plVar19 + 5;
      do {
        lVar8 = *plVar4;
        iVar7 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *(int *)plVar4 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar19 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *plVar16 = lVar15;
  }
  lVar15 = *(long *)(param_1 + 0x38);
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar15 != lVar8) {
    puVar1 = (undefined8 *)(param_1 + 0x88);
    do {
      lVar11 = *(long *)(lVar15 + 8);
      lVar9 = *(long *)(lVar11 + 0x218) - *(long *)(lVar11 + 0x210);
      if (lVar9 != 0) {
        uVar12 = (lVar9 >> 4) * -0x7b425ed097b425ed;
        uVar20 = 0;
        if (uVar12 < 2) {
          uVar12 = 1;
        }
        do {
          FUN_00ebf090(local_b0,*param_2,param_1 + 0xb0,*(long *)(lVar11 + 0x210) + uVar20 * 0x1b0,
                       *(long *)(lVar11 + 0x248) + uVar20 * 0x38,plVar16,param_3 & 1,
                       *(undefined8 *)(param_1 + 8));
          puVar10 = *(undefined1 **)(param_1 + 0x78);
          if (puVar10 == *(undefined1 **)(param_1 + 0x80)) {
            lVar9 = (long)puVar10 - *(long *)(param_1 + 0x70) >> 3;
            uVar14 = *(ulong *)(param_1 + 0x90);
            if (0x7ffffffffffffffe < uVar14) {
              uVar14 = 0x7fffffffffffffff;
            }
            uVar2 = lVar9 * -0x3333333333333333 + 1;
            if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar11 = (long)*(undefined1 **)(param_1 + 0x80) - *(long *)(param_1 + 0x70) >> 3;
            local_70 = (undefined1 *)0x0;
            uVar13 = lVar11 * -0x6666666666666666;
            if (uVar2 <= uVar13) {
              uVar2 = uVar13;
            }
            if (uVar14 >> 1 <= (ulong)(lVar11 * -0x3333333333333333)) {
              uVar2 = uVar14;
            }
            puStack_68 = puVar1;
            if (uVar2 == 0) {
              puVar10 = (undefined1 *)0x0;
            }
            else {
              puVar10 = (undefined1 *)
                        (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x28,8);
              if (puVar10 == (undefined1 *)0x0) {
                (**(code **)(*(long *)*puVar1 + 0xe8))();
              }
            }
            puVar18 = puVar10 + lVar9 * 8;
            local_70 = puVar10 + uVar2 * 0x28;
            uVar17 = *puVar1;
            local_88 = puVar10;
            local_80 = puVar18;
            local_78 = puVar18;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 != 0) {
              if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00ebc264;
              *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar17;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            }
            *puVar18 = 0;
            if (local_b0[0] != '\0') {
              *(undefined8 *)(puVar10 + lVar9 * 8 + 8) = local_a8;
              *(undefined8 *)(puVar10 + lVar9 * 8 + 0x10) = local_a0;
              *(undefined8 *)(puVar10 + lVar9 * 8 + 0x18) = local_98;
              *(long **)(puVar10 + lVar9 * 8 + 0x20) = local_90;
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x18))();
              }
              *puVar18 = 1;
            }
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            local_78 = local_78 + 0x28;
            FUN_00f92240(puVar1,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                         &local_80);
            puVar21 = *(undefined1 **)(param_1 + 0x70);
            puVar10 = *(undefined1 **)(param_1 + 0x78);
            *(undefined1 **)(param_1 + 0x70) = local_80;
            *(undefined1 **)(param_1 + 0x78) = local_78;
            puVar18 = *(undefined1 **)(param_1 + 0x80);
            *(undefined1 **)(param_1 + 0x80) = local_70;
            local_78 = puVar10;
            local_88 = puVar21;
            local_80 = puVar21;
            local_70 = puVar18;
            if (puVar10 != puVar21) {
              do {
                puVar10 = local_78 + -0x28;
                if (local_78[-0x28] != '\0') {
                  plVar19 = (long *)(local_78 + -8);
                  local_78 = puVar10;
                  if ((long *)*plVar19 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar19 + 0x20))();
                  }
                  *puVar10 = 0;
                  puVar10 = local_78;
                }
                local_78 = puVar10;
              } while (local_78 != puVar21);
            }
            puVar10 = local_88;
            if (local_88 != (undefined1 *)0x0) {
              lVar9 = (long)local_70 - (long)local_88;
              plVar19 = (long *)*puStack_68;
              uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
              if (((uVar14 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                (**(code **)(*plVar19 + 0x18))(plVar19,puVar10,lVar9,8);
              }
              else {
                FUN_00c48fe8(plVar19,puVar10,lVar9,8);
              }
            }
          }
          else {
            uVar17 = *puVar1;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar9 != 0) {
              if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00ebc264:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            }
            *puVar10 = 0;
            if (local_b0[0] != '\0') {
              *(undefined8 *)(puVar10 + 8) = local_a8;
              *(undefined8 *)(puVar10 + 0x10) = local_a0;
              *(undefined8 *)(puVar10 + 0x18) = local_98;
              *(long **)(puVar10 + 0x20) = local_90;
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x18))();
              }
              *puVar10 = 1;
            }
            if (lVar9 != 0) {
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            *(undefined1 **)(param_1 + 0x78) = puVar10 + 0x28;
          }
          if (local_b0[0] != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0[0] = '\0';
          }
          uVar20 = uVar20 + 1;
          if (uVar20 == uVar12) break;
          lVar11 = *(long *)(lVar15 + 8);
        } while( true );
      }
      lVar15 = lVar15 + 0x40;
    } while (lVar15 != lVar8);
  }
  lVar15 = *param_2;
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x20) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar15;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))();
  }
  return;
}


