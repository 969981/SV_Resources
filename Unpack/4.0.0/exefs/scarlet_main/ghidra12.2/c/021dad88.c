/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021dad88; name: FUN_021dad88
 */


void FUN_021dad88(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  byte *pbVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 *puVar20;
  long *plVar21;
  long *local_d8 [4];
  long *local_b8;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  plVar16 = *(long **)(*(long *)(param_1 + 0x120) + 0x800);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x58))(plVar16);
    if ((int)plVar16[0x25] == 0xc) {
      if (*(char *)(param_1 + 0x128) != '\0') {
        *(undefined1 *)(param_1 + 0x128) = 0;
      }
      lVar17 = plVar16[0x26];
      local_a0 = (long *)0x0;
      local_98 = (long *)0x0;
      local_a8 = (long *)0x0;
      plVar18 = *(long **)(lVar17 + 0xb0);
      local_88 = *(ulong *)(lVar17 + 0xb8);
      local_80 = *(undefined8 *)(lVar17 + 0xc0);
      uStack_78 = *(undefined8 *)(lVar17 + 200);
      lVar12 = *(long *)(lVar17 + 0xa0) - *(long *)(lVar17 + 0x98);
      local_90 = plVar18;
      if (lVar12 != 0) {
        uVar13 = local_88;
        if (0x7ffffffffffffffe < local_88) {
          uVar13 = 0x7fffffffffffffff;
        }
        if (uVar13 < (ulong)(lVar12 >> 3)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        plVar11 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,lVar12,8);
        if (plVar11 == (long *)0x0) {
          (**(code **)(*plVar18 + 0xe8))(plVar18);
        }
        puVar8 = PTR_LAB_047d3900;
        local_98 = plVar11 + (lVar12 >> 3);
        plVar21 = *(long **)(lVar17 + 0x98);
        plVar3 = *(long **)(lVar17 + 0xa0);
        local_a8 = plVar11;
        local_a0 = plVar11;
        if (plVar21 != plVar3) {
          while( true ) {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(puVar8,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar12 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar12 != 0) {
              if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar18;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            }
            lVar17 = *plVar21;
            *plVar11 = lVar17;
            if (lVar17 != 0) {
              piVar1 = (int *)(lVar17 + 0x28);
              do {
                iVar10 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar10 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
            }
            if (lVar12 != 0) {
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            }
            plVar21 = plVar21 + 1;
            plVar11 = plVar11 + 1;
            if (plVar21 == plVar3) break;
            plVar18 = local_90;
          }
        }
        puVar9 = PTR_PTR_047d4508;
        puVar8 = PTR_DAT_047d3e30;
        local_a0 = plVar11;
        if (local_a8 != plVar11) {
          lVar12 = *(long *)(param_1 + 0x130);
          lVar17 = *(long *)(param_1 + 0x138);
          if (0 < (int)((ulong)(lVar17 - lVar12) >> 3) * -0x49249249) {
            lVar19 = 0;
            do {
              if (*(char *)(lVar12 + lVar19 * 0x38) != '\0') {
                plVar18 = *(long **)(plVar16[0x26] + 0x98);
                plVar11 = *(long **)(plVar16[0x26] + 0xa0);
                if (plVar18 != plVar11) {
                  lVar12 = lVar12 + lVar19 * 0x38;
                  do {
                    lVar17 = *(long *)(*plVar18 + 0xa0);
                    puVar2 = (undefined8 *)puVar9;
                    if (lVar17 != 0) {
                      puVar2 = (undefined8 *)(lVar17 + 0x38);
                    }
                    local_70[0] = *puVar2;
                    FUN_0110eb84(local_d8,local_70,&DAT_03c886bc,*(undefined4 *)(*plVar18 + 200));
                    plVar21 = (long *)puVar9;
                    if (local_d8[0] != (long *)0x0) {
                      plVar21 = local_d8[0] + 7;
                    }
                    pcVar14 = strrchr((char *)*plVar21,0x2f);
                    if (pcVar14 == (char *)0x0) {
                      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
                        FUN_00100190(PTR_LAB_047d4118,puVar8,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3e28);
                      }
                      puVar20 = *(undefined1 **)puVar8;
                      plVar21 = *(long **)(puVar8 + 0x18);
                      if (plVar21 != (long *)0x0) {
                        (**(code **)(*plVar21 + 0x18))(plVar21);
                      }
                    }
                    else {
                      bVar4 = pcVar14[1];
                      if (bVar4 == 0) {
                        plVar21 = (long *)0x0;
                        puVar20 = &DAT_cbf29ce484222645;
                      }
                      else {
                        puVar20 = &DAT_cbf29ce484222645;
                        pbVar15 = (byte *)(pcVar14 + 2);
                        do {
                          puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar4) * 0x100000001b3);
                          plVar21 = (long *)0x0;
                          bVar4 = *pbVar15;
                          pbVar15 = pbVar15 + 1;
                        } while (bVar4 != 0);
                      }
                    }
                    puVar2 = (undefined8 *)PTR_DAT_047d8b70;
                    if (*(long *)(lVar12 + 0x30) != 0) {
                      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + 0x30);
                    }
                    if ((undefined1 *)*puVar2 == puVar20) {
                      FUN_02179124(*(undefined4 *)(lVar12 + 4),*(undefined4 *)(lVar12 + 8),*plVar18)
                      ;
                      FUN_0217928c(*(undefined4 *)(lVar12 + 0xc),*plVar18);
                      FUN_02178fbc(*(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                                   *plVar18);
                      FUN_021793ac(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                                   *(undefined4 *)(lVar12 + 0x20),*plVar18);
                      FUN_02178eb0(*plVar18,*(undefined4 *)(lVar12 + 0x28));
                      FUN_021db424(*(undefined4 *)(lVar12 + 0x24),*plVar18);
                    }
                    if (plVar21 != (long *)0x0) {
                      (**(code **)(*plVar21 + 0x20))(plVar21);
                    }
                    if (local_b8 != (long *)0x0) {
                      (**(code **)(*local_b8 + 0x20))();
                    }
                    if (local_d8[0] != (long *)0x0) {
                      (**(code **)(*local_d8[0] + 0x20))();
                    }
                    plVar18 = plVar18 + 1;
                  } while (plVar18 != plVar11);
                  lVar12 = *(long *)(param_1 + 0x130);
                  lVar17 = *(long *)(param_1 + 0x138);
                }
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < (int)((ulong)(lVar17 - lVar12) >> 3) * -0x49249249);
          }
          if ((*(char *)(param_1 + 0x58) != -0x7e) ||
             (plVar11 = local_a8, *(char *)(param_1 + 0x59) != -0x7e)) {
            uVar5 = *(undefined2 *)(param_1 + 0x58);
            plVar18 = (long *)(param_1 + 0x38);
            *(undefined2 *)(param_1 + 0x58) = 0x8282;
            if (*(long *)(param_1 + 0x48) != 0) {
              FUN_00c6a584(*(long *)(param_1 + 0x48),plVar18);
            }
            (**(code **)(*plVar18 + 0x20))(plVar18,uVar5);
            plVar11 = local_a8;
          }
        }
        if (plVar11 != (long *)0x0) {
          FUN_021db384(&local_a8,local_a8);
          plVar11 = local_90;
          plVar18 = local_a8;
          lVar12 = (long)local_98 - (long)local_a8;
          uVar13 = (**(code **)(*local_90 + 0xf8))(local_90);
          if (((uVar13 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,plVar18,lVar12,8);
          }
          else {
            FUN_00c48fe8(plVar11,plVar18,lVar12,8);
          }
        }
      }
    }
    (**(code **)(*plVar16 + 0x60))(plVar16);
  }
  return;
}


