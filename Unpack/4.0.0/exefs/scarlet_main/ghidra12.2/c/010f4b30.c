/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f4b30; name: FUN_010f4b30
 */


void FUN_010f4b30(long *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long local_a8;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar10 = PTR_DAT_047d8e30;
  puVar9 = PTR_DAT_047d8e28;
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  if (param_1 != param_2) {
    do {
      lVar19 = *param_1;
      if (lVar19 != 0) {
        puVar20 = (undefined8 *)(lVar19 + 8);
        puVar12 = (undefined8 *)(**(code **)*puVar20)(puVar20);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar11 != 0)) {
            uVar14 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar14;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar10 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar9);
        }
        if (puVar12 != (undefined8 *)0x0) {
LAB_010f4bb4:
          if (puVar12 != (undefined8 *)puVar10) goto code_r0x010f4bbc;
          uVar13 = (**(code **)(*(long *)*param_1 + 0xc0))();
          if ((uVar13 & 1) == 0) {
            lVar18 = *param_3;
            local_78 = (undefined8 *)0x0;
            uStack_70 = 0;
            FUN_00c43ef0(&local_78,lVar19 + 0x78);
            local_88 = (undefined8 *)0x0;
            uStack_80 = 0;
            if ((undefined8 *)local_78[2] == puVar20) {
              FUN_00d94688(&local_88,&local_78);
            }
            puVar12 = local_78;
            if (local_78 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_78 + 3);
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
                piVar2 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 != -1) {
                  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                    FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
                    __cxa_guard_release(puVar6);
                  }
                  lVar19 = *(long *)puVar7;
                  *(long *)PTR_DAT_047d3918 = lVar19;
                  local_68 = *puVar12;
                  FUN_00c44438(lVar19 + 0x8040,&local_68);
                }
              }
              else if (sVar3 == 0) goto LAB_010f4e18;
            }
            uVar13 = *(ulong *)(lVar18 + 0x138);
            puVar12 = (undefined8 *)(lVar18 + 0x148);
            if (uVar13 < *(ulong *)(lVar18 + 0x140)) {
              FUN_020e14c4(puVar12,uVar13,&local_88);
              *(ulong *)(lVar18 + 0x138) = uVar13 + 0x18;
            }
            else {
              lVar19 = (long)(uVar13 - *(long *)(lVar18 + 0x130)) >> 3;
              uVar17 = *(ulong *)(lVar18 + 0x150);
              uVar13 = lVar19 * -0x5555555555555555 + 1;
              if (0x7ffffffffffffffe < uVar17) {
                uVar17 = 0x7fffffffffffffff;
              }
              if (uVar17 < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar15 = (long)(*(ulong *)(lVar18 + 0x140) - *(long *)(lVar18 + 0x130)) >> 3;
              uVar16 = lVar15 * 0x5555555555555556;
              if (uVar13 <= uVar16) {
                uVar13 = uVar16;
              }
              if (uVar17 >> 1 <= (ulong)(lVar15 * -0x5555555555555555)) {
                uVar13 = uVar17;
              }
              if (uVar13 == 0) {
                local_98 = (undefined8 *)0x0;
              }
              else {
                local_98 = (undefined8 *)
                           (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,uVar13 * 0x18,8)
                ;
                if (local_98 == (undefined8 *)0x0) {
                  (**(code **)(*(long *)*puVar12 + 0xe8))();
                }
              }
              local_a8 = (long)local_98 + lVar19 * 8;
              lVar15 = (long)local_98 + uVar13 * 0x18;
              FUN_020e14c4(puVar12,local_a8,&local_88);
              local_98 = *(undefined8 **)(lVar18 + 0x130);
              puVar20 = *(undefined8 **)(lVar18 + 0x138);
              lVar19 = local_a8 + 0x18;
              if (puVar20 == local_98) {
                local_90 = local_98;
              }
              else {
                do {
                  local_a8 = local_a8 + -0x18;
                  puVar20 = puVar20 + -3;
                  FUN_020e16ac(puVar12);
                } while (local_98 != puVar20);
                local_98 = *(undefined8 **)(lVar18 + 0x130);
                local_90 = *(undefined8 **)(lVar18 + 0x138);
              }
              *(long *)(lVar18 + 0x130) = local_a8;
              *(long *)(lVar18 + 0x138) = lVar19;
              lVar19 = *(long *)(lVar18 + 0x140);
              *(long *)(lVar18 + 0x140) = lVar15;
              while (local_90 != local_98) {
                local_90 = local_90 + -3;
                puVar20 = (undefined8 *)*local_90;
                if (puVar20 != (undefined8 *)0x0) {
                  psVar1 = (short *)(puVar20 + 3);
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
                    piVar2 = (int *)((long)puVar20 + 0x1c);
                    do {
                      iVar11 = *piVar2;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar5) {
                        *piVar2 = -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar11 != -1) {
                      if (((*puVar6 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                        FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
                        __cxa_guard_release(puVar6);
                      }
                      lVar18 = *(long *)puVar7;
                      *(long *)PTR_DAT_047d3918 = lVar18;
                      local_78 = (undefined8 *)*puVar20;
                      FUN_00c44438(lVar18 + 0x8040,&local_78);
                    }
                  }
                  else if (sVar3 == 0) goto LAB_010f4e18;
                }
              }
              if (local_98 != (undefined8 *)0x0) {
                lVar19 = lVar19 - (long)local_98;
                plVar21 = (long *)*puVar12;
                uVar13 = (**(code **)(*plVar21 + 0xf8))(plVar21);
                if (((uVar13 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar21 + 0x18))(plVar21,local_98,lVar19,8);
                }
                else {
                  FUN_00c48fe8(plVar21,local_98,lVar19,8);
                }
              }
            }
            puVar12 = local_88;
            if (local_88 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_88 + 3);
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
                piVar2 = (int *)((long)local_88 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 != -1) {
                  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                    FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
                    __cxa_guard_release(puVar6);
                  }
                  lVar19 = *(long *)puVar7;
                  *(long *)PTR_DAT_047d3918 = lVar19;
                  local_78 = (undefined8 *)*puVar12;
                  FUN_00c44438(lVar19 + 0x8040,&local_78);
                }
              }
              else if (sVar3 == 0) {
LAB_010f4e18:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
        }
      }
LAB_010f4bc4:
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
code_r0x010f4bbc:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_010f4bc4;
  goto LAB_010f4bb4;
}


