/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01914b3c; name: FUN_01914b3c
 */


void FUN_01914b3c(undefined8 *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  long **pplVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  short sVar18;
  ushort *puVar19;
  long *plVar20;
  byte bVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  char local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0 [2];
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  
  piVar14 = (int *)*param_1;
  puVar19 = (ushort *)((long)piVar14 - (long)*piVar14);
  if (*puVar19 < 0xb) {
    iVar17 = 0;
    iVar11 = 0;
    iVar8 = 0;
    if (*puVar19 < 9) goto LAB_01914b90;
  }
  else {
    iVar8 = 0;
    if ((ulong)puVar19[5] != 0) {
      iVar8 = *(int *)((long)piVar14 + (ulong)puVar19[5]);
    }
  }
  iVar17 = iVar8;
  if ((ulong)puVar19[4] == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)((long)piVar14 + (ulong)puVar19[4]);
  }
LAB_01914b90:
  if (iVar17 - iVar11 != 1) {
    local_70 = param_1[0x22];
    uStack_68 = param_1[0x23];
    local_60 = param_1[0x24];
    plVar20 = (long *)param_1[0x25];
    local_58 = plVar20;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    if ((code *)param_1[2] == (code *)0x0) {
      local_50[0] = 0;
      local_50[1] = 0;
    }
    else {
      (*(code *)param_1[2])(local_50,param_1 + 6,&local_70);
      plVar20 = local_58;
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    if (local_50[0] != 0) {
      if (*(short *)(local_50[0] + 0x1a) != 0) {
        psVar1 = (short *)(local_50[0] + 0x1a);
        sVar18 = *(short *)(local_50[0] + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar18) {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01914c68;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01914c68:
            bVar9 = false;
          }
          if (bVar9) {
            lVar15 = *(long *)(local_50[0] + 0x10);
            if (lVar15 == 0) goto LAB_01914ec0;
            lVar12 = FUN_00e6d56c(lVar15 + 0xe0,&local_c0);
            if (((lVar12 != 0) && (uVar10 = FUN_012595d8(param_1,0x500000001), (uVar10 & 0xff) != 0)
                ) && (0xff < uVar10)) {
              local_b0 = 0;
              local_a8 = (long *)0x0;
              local_c0 = &DAT_cbf29ce484222645;
              local_b8 = &DAT_03c886bc;
              local_a0 = &DAT_cbf29ce484222645;
              local_98 = &DAT_03c886bc;
              local_90 = 0;
              local_88 = (long *)0x0;
              FUN_01340a44(local_f0,param_1,1);
              puVar6 = PTR_DAT_047d3e28;
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar7 = PTR_DAT_047d3e30;
              bVar9 = local_f0[0] != '\0';
              puVar2 = (undefined8 *)PTR_DAT_047d3e30;
              if (bVar9) {
                puVar2 = &local_e8;
              }
              local_c0 = (undefined1 *)*puVar2;
              puVar2 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
              if (bVar9) {
                puVar2 = &local_e0;
              }
              local_b8 = (undefined1 *)*puVar2;
              puVar2 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
              if (bVar9) {
                puVar2 = &uStack_d8;
              }
              local_b0 = *puVar2;
              pplVar3 = (long **)(PTR_DAT_047d3e30 + 0x18);
              if (bVar9) {
                pplVar3 = local_d0;
              }
              plVar20 = *pplVar3;
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0x18))(plVar20);
              }
              if (local_a8 != (long *)0x0) {
                lVar16 = *local_a8;
                local_a8 = plVar20;
                (**(code **)(lVar16 + 0x20))();
                plVar20 = local_a8;
              }
              local_a8 = plVar20;
              if (local_f0[0] != '\0') {
                if (local_d0[0] != (long *)0x0) {
                  (**(code **)(*local_d0[0] + 0x20))();
                }
                local_f0[0] = '\0';
              }
              FUN_01340a44(local_f0,param_1,0x100000001);
              if (((*puVar6 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              bVar9 = local_f0[0] != '\0';
              puVar2 = (undefined8 *)puVar7;
              if (bVar9) {
                puVar2 = &local_e8;
              }
              local_a0 = (undefined1 *)*puVar2;
              puVar2 = (undefined8 *)(puVar7 + 8);
              if (bVar9) {
                puVar2 = &local_e0;
              }
              local_98 = (undefined1 *)*puVar2;
              puVar2 = (undefined8 *)(puVar7 + 0x10);
              if (bVar9) {
                puVar2 = &uStack_d8;
              }
              local_90 = *puVar2;
              pplVar3 = (long **)(puVar7 + 0x18);
              if (bVar9) {
                pplVar3 = local_d0;
              }
              plVar20 = *pplVar3;
              if (plVar20 != (long *)0x0) {
                (**(code **)(*plVar20 + 0x18))(plVar20);
              }
              if (local_88 != (long *)0x0) {
                lVar16 = *local_88;
                local_88 = plVar20;
                (**(code **)(lVar16 + 0x20))();
                plVar20 = local_88;
              }
              local_88 = plVar20;
              if (local_f0[0] != '\0') {
                if (local_d0[0] != (long *)0x0) {
                  (**(code **)(*local_d0[0] + 0x20))();
                }
                local_f0[0] = '\0';
              }
              FUN_02123748(local_f0,param_1,0x600000001);
              bVar21 = -(local_f0[0] == '\0');
              local_80 = CONCAT17((byte)((ulong)local_e0 >> 0x38) & ~bVar21,
                                  CONCAT16((byte)((ulong)local_e0 >> 0x30) & ~bVar21,
                                           CONCAT15((byte)((ulong)local_e0 >> 0x28) & ~bVar21,
                                                    CONCAT14((byte)((ulong)local_e0 >> 0x20) &
                                                             ~bVar21,CONCAT13((byte)((ulong)local_e0
                                                                                    >> 0x18) &
                                                                              ~bVar21,CONCAT12((byte
                                                  )((ulong)local_e0 >> 0x10) & ~bVar21,
                                                  CONCAT11((byte)((ulong)local_e0 >> 8) & ~bVar21,
                                                           (byte)local_e0 & ~bVar21)))))));
              if (local_f0[0] != '\0') {
                local_f0[0] = '\0';
              }
              uVar13 = FUN_021237ec(param_1,0x700000001);
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              uVar25 = 0;
              if ((uVar13 & 0xff) != 0) {
                uVar22 = (undefined1)(uVar13 >> 0x20);
                uVar23 = (undefined1)(uVar13 >> 0x28);
                uVar24 = (undefined1)(uVar13 >> 0x30);
                uVar25 = (undefined1)(uVar13 >> 0x38);
              }
              uStack_78 = CONCAT44(CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))),
                                   CONCAT13((byte)((uint)(undefined4)uStack_d8 >> 0x18) & ~bVar21,
                                            CONCAT12((byte)((uint)(undefined4)uStack_d8 >> 0x10) &
                                                     ~bVar21,CONCAT11((byte)((uint)(undefined4)
                                                                                   uStack_d8 >> 8) &
                                                                      ~bVar21,(byte)(undefined4)
                                                                                    uStack_d8 &
                                                                              ~bVar21))));
              FUN_01074968(lVar12,&local_c0);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              if (local_a8 != (long *)0x0) {
                (**(code **)(*local_a8 + 0x20))();
              }
            }
            (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))((long *)(lVar15 + -0x28));
            break;
          }
          sVar18 = sVar4;
        } while (sVar4 != 0);
        if (local_50[0] == 0) {
          return;
        }
      }
LAB_01914ec0:
      psVar1 = (short *)(local_50[0] + 0x18);
      do {
        sVar18 = *psVar1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        FUN_0116e168();
      }
      else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


