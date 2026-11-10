/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a1891c; name: FUN_02a1891c
 */


void FUN_02a1891c(long param_1,ulong param_2)

{
  short *psVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  short sVar16;
  ulong *puVar17;
  uint *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  uint *puVar27;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar22 = param_1 + (param_2 & 0xffffffff) * 0x48;
  puVar17 = (ulong *)(lVar22 + 0xd0);
  puVar23 = (ulong *)(lVar22 + 0xd8);
  *puVar23 = *puVar17;
  lVar22 = *(long *)(lVar22 + 0x108);
  if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar22 + 0x1a);
    sVar16 = *(short *)(lVar22 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar16) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar16 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_02a189b8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a189b8:
        bVar8 = false;
      }
      if (bVar8) {
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 == 0) {
          return;
        }
        plVar25 = (long *)(lVar22 + 0x18);
        lVar10 = nn::os::GetCurrentThread();
        do {
          if (*plVar25 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x20));
              while (*plVar25 == 0) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = lVar10;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_02a18a00;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar8) {
            *plVar25 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_02a18a00:
        lVar4 = *(long *)(lVar22 + 0x50);
        lVar5 = *(long *)(lVar22 + 0x58);
        *(undefined8 *)(lVar22 + 0x18) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0x20));
        lVar10 = param_1 + (param_2 & 0xffffffff) * 0x10;
        puVar21 = (ulong *)(lVar10 + 0x10);
        if (*puVar21 != 0) {
          param_1 = param_1 + (param_2 & 0xffffffff) * 0x48;
          uVar24 = 0;
          puVar2 = (ulong *)(param_1 + 0xe0);
          puVar3 = (undefined8 *)(param_1 + 0xe8);
          do {
            puVar13 = (undefined8 *)(*(long *)(lVar10 + 8) + uVar24 * 0x18);
            local_80 = *puVar13;
            uStack_78 = puVar13[1];
            local_70 = puVar13[2];
            uStack_68 = 0;
            uVar11 = FUN_00e13858((long *)(lVar22 + -0x28),&local_80);
            if (((uVar11 & 0xff) != 0) &&
               (uVar26 = (uint)(uVar11 >> 0x20), uVar26 < (uint)((ulong)(lVar5 - lVar4) >> 5))) {
              puVar18 = (uint *)*puVar23;
              if (puVar18 < (uint *)*puVar2) {
                uVar20 = *puVar3;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 == 0) {
                  *puVar18 = uVar26;
                }
                else {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_02a18ee4;
                  *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar20;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  *puVar18 = uVar26;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                *puVar23 = (ulong)(puVar18 + 1);
              }
              else {
                uVar11 = *(ulong *)(param_1 + 0xf0);
                lVar19 = (long)((long)puVar18 - *puVar17) >> 2;
                if (0x7ffffffffffffffe < uVar11) {
                  uVar11 = 0x7fffffffffffffff;
                }
                uVar12 = lVar19 + 1;
                if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar14 = (long)*puVar2 - *puVar17;
                uVar15 = lVar14 >> 1;
                if (uVar12 <= uVar15) {
                  uVar12 = uVar15;
                }
                if (uVar11 >> 1 <= (ulong)(lVar14 >> 2)) {
                  uVar12 = uVar11;
                }
                if (uVar12 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar12 << 2,4);
                  if (lVar14 == 0) {
                    (**(code **)(*(long *)*puVar3 + 0xe8))();
                  }
                }
                puVar18 = (uint *)(lVar14 + lVar19 * 4);
                uVar20 = *puVar3;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 == 0) {
                  *puVar18 = uVar26;
                }
                else {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_02a18ee4:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar20;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  *puVar18 = uVar26;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                uVar11 = *puVar23;
                uVar15 = *puVar17;
                puVar27 = puVar18;
                if (uVar11 != uVar15) {
                  do {
                    uVar20 = *puVar3;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar19 == 0) {
                      puVar27[-1] = *(uint *)(uVar11 - 4);
                    }
                    else {
                      if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_02a18ee4;
                      *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar20;
                      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                      puVar27[-1] = *(uint *)(uVar11 - 4);
                      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                    }
                    uVar11 = uVar11 - 4;
                    puVar27 = puVar27 + -1;
                  } while (uVar15 != uVar11);
                  uVar15 = *puVar17;
                }
                *puVar17 = (ulong)puVar27;
                *puVar23 = (ulong)(puVar18 + 1);
                uVar11 = *puVar2;
                *puVar2 = lVar14 + uVar12 * 4;
                if (uVar15 != 0) {
                  plVar25 = (long *)*puVar3;
                  uVar12 = (**(code **)(*plVar25 + 0xf8))(plVar25);
                  if (((uVar12 & 1) == 0) ||
                     (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                    (**(code **)(*plVar25 + 0x18))(plVar25,uVar15,uVar11 - uVar15,4);
                  }
                  else {
                    FUN_00c48fe8(plVar25,uVar15,uVar11 - uVar15,4);
                  }
                }
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < *puVar21);
        }
        lVar10 = *(long *)(lVar22 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02a18ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar22 + -0x28) + 0x50))();
          return;
        }
        if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar16 = sVar6;
    } while (sVar6 != 0);
  }
  return;
}


