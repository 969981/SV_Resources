/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3fc30; name: FUN_02a3fc30
 */


undefined4 FUN_02a3fc30(long param_1,ulong param_2)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  char **ppcVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  char **ppcVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  short sVar23;
  long *plVar24;
  char **ppcVar25;
  char **ppcVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  char **local_98;
  char **local_90;
  char **local_88;
  char **local_80;
  undefined8 *puStack_78;
  char *local_70;
  char local_64 [4];
  
  puVar11 = PTR_DAT_047d3918;
  puVar10 = PTR_DAT_047d3910;
  puVar9 = PTR_DAT_047d3908;
  puVar3 = *(undefined8 **)(param_1 + 0x168);
  puVar30 = *(undefined8 **)(param_1 + 0x170);
  while (puVar30 != puVar3) {
    puVar30 = puVar30 + -2;
    puVar27 = (undefined8 *)*puVar30;
    if (puVar27 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar27 + 3);
      do {
        sVar23 = *psVar2;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar23 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar23 == 1) {
        piVar1 = (int *)((long)puVar27 + 0x1c);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 != -1) {
          if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar10,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar9);
          }
          lVar20 = *(long *)puVar10;
          *(long *)puVar11 = lVar20;
          local_98 = (char **)*puVar27;
          FUN_00c44438(lVar20 + 0x8040,&local_98);
        }
      }
      else if (sVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 **)(param_1 + 0x170) = puVar3;
  FUN_02a41a9c(param_1 + 0x168);
  plVar28 = *(long **)(param_1 + 0x130);
  plVar4 = *(long **)(param_1 + 0x138);
  bVar12 = plVar28 != plVar4;
  if ((param_2 & 1) == 0) {
    while (bVar12) {
      lVar20 = *plVar28;
      if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar20 + 0x1a);
        sVar23 = *(short *)(lVar20 + 0x1a);
        do {
          sVar6 = *psVar2;
          if (sVar6 == sVar23) {
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar12) {
              *psVar2 = sVar23 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_02a40174;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02a40174:
            bVar12 = false;
          }
          if (bVar12) {
            lVar20 = *(long *)(lVar20 + 0x10);
            if (lVar20 != 0) {
              if (((*(char *)(lVar20 + 0x418) != '\x02') || (*(short *)(lVar20 + 0x3f8) != 0)) ||
                 (*(char *)(lVar20 + 0x420) != '\x03')) {
                (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))();
                return 0;
              }
              (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))();
            }
            break;
          }
          sVar23 = sVar6;
        } while (sVar6 != 0);
      }
      plVar28 = plVar28 + 9;
      bVar12 = plVar28 != plVar4;
    }
  }
  else if (bVar12) {
    bVar12 = false;
    puVar3 = (undefined8 *)(param_1 + 0x180);
    do {
      plVar5 = (long *)plVar28[3];
      for (plVar22 = (long *)plVar28[2]; plVar22 != plVar5; plVar22 = plVar22 + 2) {
        lVar20 = *plVar22;
        if (lVar20 != 0) {
          if (*(short *)(lVar20 + 0x1a) != 0) {
            psVar2 = (short *)(lVar20 + 0x1a);
            sVar23 = *(short *)(lVar20 + 0x1a);
LAB_02a3fd8c:
            sVar6 = *psVar2;
            if (sVar6 == sVar23) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar8) {
                *psVar2 = sVar23 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 != '\0') goto LAB_02a3fdb0;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_02a3fdb0:
              bVar8 = false;
            }
            if (!bVar8) goto code_r0x02a3fdb8;
            lVar20 = *(long *)(lVar20 + 0x10);
            if (lVar20 != 0) {
              plVar24 = (long *)(lVar20 + -0x28);
              if (((*(char *)(lVar20 + 0x418) == '\x02') && (*(short *)(lVar20 + 0x3f8) == 0)) &&
                 (*(char *)(lVar20 + 0x420) != '\x03')) {
                local_90 = (char **)(lVar20 + 0x18);
                local_64[0] = '\0';
                local_98 = &local_70;
                local_70 = local_64;
                uVar14 = FUN_02a41b9c(local_90,&local_98);
                cVar7 = local_64[0];
                (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))(plVar24);
                if ((uVar14 & 1) == 0) {
                  return 0;
                }
                if (cVar7 != '\0') {
                  puVar30 = *(undefined8 **)(param_1 + 0x170);
                  if (puVar30 < *(undefined8 **)(param_1 + 0x178)) {
                    uVar29 = *puVar3;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar20 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar20 == 0) {
                      *puVar30 = 0;
                      puVar30[1] = 0;
                      FUN_00dddfdc(puVar30,plVar22);
                    }
                    else {
                      if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_02a40214:
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar29;
                      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                      *puVar30 = 0;
                      puVar30[1] = 0;
                      FUN_00dddfdc(puVar30,plVar22);
                      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
                    }
                    *(undefined8 **)(param_1 + 0x170) = puVar30 + 2;
                  }
                  else {
                    uVar21 = *(ulong *)(param_1 + 0x188);
                    lVar20 = (long)puVar30 - *(long *)(param_1 + 0x168) >> 4;
                    uVar14 = lVar20 + 1;
                    if (0x7ffffffffffffffe < uVar21) {
                      uVar21 = 0x7fffffffffffffff;
                    }
                    if (uVar21 < uVar14) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar17 = (long)*(undefined8 **)(param_1 + 0x178) - *(long *)(param_1 + 0x168);
                    uVar18 = lVar17 >> 3;
                    local_80 = (char **)0x0;
                    if (uVar14 <= uVar18) {
                      uVar14 = uVar18;
                    }
                    if (uVar21 >> 1 <= (ulong)(lVar17 >> 4)) {
                      uVar14 = uVar21;
                    }
                    puStack_78 = puVar3;
                    if (uVar14 == 0) {
                      ppcVar15 = (char **)0x0;
                    }
                    else {
                      ppcVar15 = (char **)(**(code **)(*(long *)*puVar3 + 0x10))
                                                    ((long *)*puVar3,uVar14 << 4,8);
                      if (ppcVar15 == (char **)0x0) {
                        (**(code **)(*(long *)*puVar3 + 0xe8))();
                      }
                    }
                    ppcVar19 = ppcVar15 + lVar20 * 2;
                    local_80 = ppcVar15 + uVar14 * 2;
                    uVar29 = *puVar3;
                    local_98 = ppcVar15;
                    local_90 = ppcVar19;
                    local_88 = ppcVar19;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar20 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar20 == 0) {
                      *ppcVar19 = (char *)0x0;
                      ppcVar19[1] = (char *)0x0;
                      FUN_00dddfdc(ppcVar19,plVar22);
                    }
                    else {
                      if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_02a40214;
                      *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar29;
                      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                      *ppcVar19 = (char *)0x0;
                      ppcVar19[1] = (char *)0x0;
                      FUN_00dddfdc(ppcVar19,plVar22);
                      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
                      ppcVar19 = local_88;
                    }
                    ppcVar15 = *(char ***)(param_1 + 0x168);
                    ppcVar26 = *(char ***)(param_1 + 0x170);
                    if (ppcVar26 == ppcVar15) {
                      local_88 = ppcVar15;
                    }
                    else {
                      ppcVar25 = local_90;
                      local_88 = ppcVar19 + 2;
                      do {
                        ppcVar25 = ppcVar25 + -2;
                        ppcVar26 = ppcVar26 + -2;
                        FUN_01266934(puVar3,ppcVar25,ppcVar26);
                      } while (ppcVar15 != ppcVar26);
                      ppcVar15 = *(char ***)(param_1 + 0x168);
                      local_90 = ppcVar25;
                      local_88 = *(char ***)(param_1 + 0x170);
                    }
                    *(char ***)(param_1 + 0x168) = local_90;
                    *(char ***)(param_1 + 0x170) = ppcVar19 + 2;
                    ppcVar19 = *(char ***)(param_1 + 0x178);
                    *(char ***)(param_1 + 0x178) = local_80;
                    local_98 = ppcVar15;
                    local_90 = ppcVar15;
                    local_80 = ppcVar19;
                    FUN_01266730(&local_98);
                  }
                  bVar12 = true;
                }
              }
              else {
                (**(code **)(*plVar24 + 0x60))(plVar24);
              }
            }
          }
        }
LAB_02a3fd64:
      }
      plVar28 = plVar28 + 9;
      if (plVar28 == plVar4) {
        uVar16 = 1;
        if (bVar12) {
          uVar16 = 2;
        }
        return uVar16;
      }
    } while( true );
  }
  return 1;
code_r0x02a3fdb8:
  sVar23 = sVar6;
  if (sVar6 == 0) goto LAB_02a3fd64;
  goto LAB_02a3fd8c;
}


