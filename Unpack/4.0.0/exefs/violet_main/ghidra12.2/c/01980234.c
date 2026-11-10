/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01980234; name: FUN_01980234
 */


void FUN_01980234(undefined8 *param_1)

{
  short *psVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  long **pplVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  short sVar22;
  ushort *puVar23;
  long *plVar24;
  byte bVar25;
  undefined4 uVar26;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 *local_148;
  undefined8 local_140;
  long *local_138;
  long *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  long *local_110;
  long *local_108;
  char local_100 [8];
  ulong local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  long *local_e0 [2];
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  undefined8 uStack_58;
  
  local_80 = param_1[0x22];
  uStack_78 = param_1[0x23];
  local_70 = param_1[0x24];
  plVar24 = (long *)param_1[0x25];
  local_68 = plVar24;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_60 = 0;
    uStack_58 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_60,param_1 + 6,&local_80);
    plVar24 = local_68;
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (local_60 != 0) {
    if (*(short *)(local_60 + 0x1a) != 0) {
      psVar1 = (short *)(local_60 + 0x1a);
      sVar22 = *(short *)(local_60 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar22) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar22 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01980310;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01980310:
          bVar12 = false;
        }
        if (bVar12) {
          lVar18 = *(long *)(local_60 + 0x10);
          if (lVar18 == 0) goto LAB_01980748;
          lVar15 = FUN_00e6d56c(lVar18 + 0xe0,&local_d0);
          if (lVar15 != 0) {
            piVar19 = (int *)*param_1;
            puVar23 = (ushort *)((long)piVar19 - (long)*piVar19);
            if (*puVar23 < 0xb) {
              iVar21 = 0;
              iVar14 = 0;
              iVar11 = 0;
              if (8 < *puVar23) goto LAB_01980370;
            }
            else {
              iVar11 = 0;
              if ((ulong)puVar23[5] != 0) {
                iVar11 = *(int *)((long)piVar19 + (ulong)puVar23[5]);
              }
LAB_01980370:
              iVar21 = iVar11;
              if ((ulong)puVar23[4] == 0) {
                iVar14 = 0;
              }
              else {
                iVar14 = *(int *)((long)piVar19 + (ulong)puVar23[4]);
              }
            }
            if (iVar21 - iVar14 == 1) {
              uVar13 = FUN_012595d8(param_1,0x500000001);
              if (((uVar13 & 0xff) == 0) || (uVar13 < 0x100)) goto LAB_01980730;
              local_c0 = 0;
              local_b8 = (long *)0x0;
              local_d0 = &DAT_cbf29ce484222645;
              local_c8 = &DAT_03c886bc;
              local_b0 = (long *)&DAT_cbf29ce484222645;
              local_a8 = &DAT_03c886bc;
              local_a0 = 0;
              local_98 = (long *)0x0;
              FUN_01340a44(local_100,param_1,1);
              puVar7 = PTR_DAT_047d3e28;
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar8 = PTR_DAT_047d3e30;
              bVar12 = local_100[0] != '\0';
              puVar3 = (ulong *)PTR_DAT_047d3e30;
              if (bVar12) {
                puVar3 = &local_f8;
              }
              local_d0 = (undefined1 *)*puVar3;
              puVar3 = (ulong *)(PTR_DAT_047d3e30 + 8);
              if (bVar12) {
                puVar3 = &local_f0;
              }
              local_c8 = (undefined1 *)*puVar3;
              puVar16 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
              if (bVar12) {
                puVar16 = &uStack_e8;
              }
              local_c0 = *puVar16;
              pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
              if (bVar12) {
                pplVar4 = local_e0;
              }
              plVar24 = *pplVar4;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x18))(plVar24);
              }
              if (local_b8 != (long *)0x0) {
                lVar20 = *local_b8;
                local_b8 = plVar24;
                (**(code **)(lVar20 + 0x20))();
                plVar24 = local_b8;
              }
              local_b8 = plVar24;
              if (local_100[0] != '\0') {
                if (local_e0[0] != (long *)0x0) {
                  (**(code **)(*local_e0[0] + 0x20))();
                }
                local_100[0] = '\0';
              }
              FUN_01340a44(local_100,param_1,0x100000001);
              if (((*puVar7 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              bVar12 = local_100[0] != '\0';
              puVar3 = (ulong *)puVar8;
              if (bVar12) {
                puVar3 = &local_f8;
              }
              local_b0 = (long *)*puVar3;
              puVar3 = (ulong *)(puVar8 + 8);
              if (bVar12) {
                puVar3 = &local_f0;
              }
              local_a8 = (undefined1 *)*puVar3;
              puVar16 = (undefined8 *)(puVar8 + 0x10);
              if (bVar12) {
                puVar16 = &uStack_e8;
              }
              local_a0 = *puVar16;
              pplVar4 = (long **)(puVar8 + 0x18);
              if (bVar12) {
                pplVar4 = local_e0;
              }
              plVar24 = *pplVar4;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x18))(plVar24);
              }
              if (local_98 != (long *)0x0) {
                lVar20 = *local_98;
                local_98 = plVar24;
                (**(code **)(lVar20 + 0x20))();
                plVar24 = local_98;
              }
              local_98 = plVar24;
              if (local_100[0] != '\0') {
                if (local_e0[0] != (long *)0x0) {
                  (**(code **)(*local_e0[0] + 0x20))();
                }
                local_100[0] = '\0';
              }
              FUN_02123748(local_100,param_1,0x600000001);
              bVar25 = -(local_100[0] == '\0');
              local_90 = CONCAT17((byte)(local_f0 >> 0x38) & ~bVar25,
                                  CONCAT16((byte)(local_f0 >> 0x30) & ~bVar25,
                                           CONCAT15((byte)(local_f0 >> 0x28) & ~bVar25,
                                                    CONCAT14((byte)(local_f0 >> 0x20) & ~bVar25,
                                                             CONCAT13((byte)(local_f0 >> 0x18) &
                                                                      ~bVar25,CONCAT12((byte)(
                                                  local_f0 >> 0x10) & ~bVar25,
                                                  CONCAT11((byte)(local_f0 >> 8) & ~bVar25,
                                                           (byte)local_f0 & ~bVar25)))))));
              if (local_100[0] != '\0') {
                local_100[0] = '\0';
              }
              uVar17 = FUN_021237ec(param_1,0x700000001);
              uVar26 = 0;
              if ((uVar17 & 0xff) != 0) {
                uVar26 = (int)(uVar17 >> 0x20);
              }
              uStack_88 = CONCAT44(uVar26,CONCAT13((byte)((uint)(undefined4)uStack_e8 >> 0x18) &
                                                   ~bVar25,CONCAT12((byte)((uint)(undefined4)
                                                                                 uStack_e8 >> 0x10)
                                                                    & ~bVar25,
                                                                    CONCAT11((byte)((uint)(
                                                  undefined4)uStack_e8 >> 8) & ~bVar25,
                                                  (byte)(undefined4)uStack_e8 & ~bVar25))));
              FUN_01074968(lVar15,&local_d0);
              plVar24 = local_b8;
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
                plVar24 = local_b8;
              }
            }
            else {
              FUN_01340a44(&local_d0,param_1,1);
              puVar7 = PTR_DAT_047d3e28;
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar8 = PTR_DAT_047d3e30;
              bVar12 = (char)local_d0 != '\0';
              ppuVar2 = (undefined1 **)PTR_DAT_047d3e30;
              if (bVar12) {
                ppuVar2 = &local_c8;
              }
              local_120 = *ppuVar2;
              puVar16 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
              if (bVar12) {
                puVar16 = &local_c0;
              }
              local_118 = *puVar16;
              pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
              if (bVar12) {
                pplVar4 = &local_b8;
              }
              local_110 = *pplVar4;
              pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
              if (bVar12) {
                pplVar4 = &local_b0;
              }
              local_108 = *pplVar4;
              if (local_108 != (long *)0x0) {
                (**(code **)(*local_108 + 0x18))();
              }
              if ((char)local_d0 != '\0') {
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 0x20))();
                }
                local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffffffffff00);
              }
              local_128 = FUN_00d4e220(DAT_0485a0e8,&local_120,0);
              FUN_01340a44(&local_d0,param_1,0x100000001);
              if (((*puVar7 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              bVar12 = (char)local_d0 != '\0';
              ppuVar2 = (undefined1 **)puVar8;
              if (bVar12) {
                ppuVar2 = &local_c8;
              }
              local_148 = *ppuVar2;
              puVar16 = (undefined8 *)(puVar8 + 8);
              if (bVar12) {
                puVar16 = &local_c0;
              }
              local_140 = *puVar16;
              pplVar4 = (long **)(puVar8 + 0x10);
              if (bVar12) {
                pplVar4 = &local_b8;
              }
              local_138 = *pplVar4;
              pplVar4 = (long **)(puVar8 + 0x18);
              if (bVar12) {
                pplVar4 = &local_b0;
              }
              local_130 = *pplVar4;
              if (local_130 != (long *)0x0) {
                (**(code **)(*local_130 + 0x18))();
              }
              if ((char)local_d0 != '\0') {
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 0x20))();
                }
                local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffffffffff00);
              }
              uStack_158 = 0;
              local_160 = 0;
              FUN_00c73100(DAT_0485a0e8,&local_128,&local_148,&local_160);
              uVar10 = uStack_158;
              uVar9 = local_160;
              local_d0 = local_148;
              puVar16 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_d0);
              *puVar16 = PTR_LAB_047dce78;
              puVar16[3] = uVar10;
              puVar16[2] = uVar9;
              uVar13 = FUN_012595d8(param_1,0x200000001);
              if (((uVar13 & 0xff) != 0) && (0xff < uVar13)) {
                local_c0 = 0;
                local_b8 = (long *)0x0;
                local_d0 = &DAT_cbf29ce484222645;
                local_c8 = &DAT_03c886bc;
                local_b0 = (long *)&DAT_cbf29ce484222645;
                local_a8 = &DAT_03c886bc;
                local_a0 = 0;
                local_98 = (long *)0x0;
                FUN_01340a44(local_100,param_1,1);
                if (((*puVar7 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                bVar12 = local_100[0] != '\0';
                puVar3 = (ulong *)puVar8;
                if (bVar12) {
                  puVar3 = &local_f8;
                }
                local_d0 = (undefined1 *)*puVar3;
                puVar3 = (ulong *)(puVar8 + 8);
                if (bVar12) {
                  puVar3 = &local_f0;
                }
                local_c8 = (undefined1 *)*puVar3;
                puVar16 = (undefined8 *)(puVar8 + 0x10);
                if (bVar12) {
                  puVar16 = &uStack_e8;
                }
                local_c0 = *puVar16;
                pplVar4 = (long **)(puVar8 + 0x18);
                if (bVar12) {
                  pplVar4 = local_e0;
                }
                plVar24 = *pplVar4;
                if (plVar24 != (long *)0x0) {
                  (**(code **)(*plVar24 + 0x18))(plVar24);
                }
                if (local_b8 != (long *)0x0) {
                  lVar20 = *local_b8;
                  local_b8 = plVar24;
                  (**(code **)(lVar20 + 0x20))();
                  plVar24 = local_b8;
                }
                local_b8 = plVar24;
                if (local_100[0] != '\0') {
                  if (local_e0[0] != (long *)0x0) {
                    (**(code **)(*local_e0[0] + 0x20))();
                  }
                  local_100[0] = '\0';
                }
                FUN_01340a44(local_100,param_1,0x100000001);
                if (((*puVar7 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                bVar12 = local_100[0] != '\0';
                puVar3 = (ulong *)puVar8;
                if (bVar12) {
                  puVar3 = &local_f8;
                }
                local_b0 = (long *)*puVar3;
                puVar3 = (ulong *)(puVar8 + 8);
                if (bVar12) {
                  puVar3 = &local_f0;
                }
                local_a8 = (undefined1 *)*puVar3;
                puVar16 = (undefined8 *)(puVar8 + 0x10);
                if (bVar12) {
                  puVar16 = &uStack_e8;
                }
                local_a0 = *puVar16;
                pplVar4 = (long **)(puVar8 + 0x18);
                if (bVar12) {
                  pplVar4 = local_e0;
                }
                plVar24 = *pplVar4;
                if (plVar24 != (long *)0x0) {
                  (**(code **)(*plVar24 + 0x18))(plVar24);
                }
                if (local_98 != (long *)0x0) {
                  lVar20 = *local_98;
                  local_98 = plVar24;
                  (**(code **)(lVar20 + 0x20))();
                  plVar24 = local_98;
                }
                local_98 = plVar24;
                if (local_100[0] != '\0') {
                  if (local_e0[0] != (long *)0x0) {
                    (**(code **)(*local_e0[0] + 0x20))();
                  }
                  local_100[0] = '\0';
                }
                FUN_02123748(local_100,param_1,0x300000001);
                bVar25 = -(local_100[0] == '\0');
                local_90 = CONCAT17((byte)(local_f0 >> 0x38) & ~bVar25,
                                    CONCAT16((byte)(local_f0 >> 0x30) & ~bVar25,
                                             CONCAT15((byte)(local_f0 >> 0x28) & ~bVar25,
                                                      CONCAT14((byte)(local_f0 >> 0x20) & ~bVar25,
                                                               CONCAT13((byte)(local_f0 >> 0x18) &
                                                                        ~bVar25,CONCAT12((byte)(
                                                  local_f0 >> 0x10) & ~bVar25,
                                                  CONCAT11((byte)(local_f0 >> 8) & ~bVar25,
                                                           (byte)local_f0 & ~bVar25)))))));
                if (local_100[0] != '\0') {
                  local_100[0] = '\0';
                }
                uVar17 = FUN_021237ec(param_1,0x400000001);
                uVar26 = 0;
                if ((uVar17 & 0xff) != 0) {
                  uVar26 = (int)(uVar17 >> 0x20);
                }
                uStack_88 = CONCAT44(uVar26,CONCAT13((byte)((uint)(undefined4)uStack_e8 >> 0x18) &
                                                     ~bVar25,CONCAT12((byte)((uint)(undefined4)
                                                                                   uStack_e8 >> 0x10
                                                                            ) & ~bVar25,
                                                                      CONCAT11((byte)((uint)(
                                                  undefined4)uStack_e8 >> 8) & ~bVar25,
                                                  (byte)(undefined4)uStack_e8 & ~bVar25))));
                FUN_01074968(lVar15,&local_d0);
                if (local_98 != (long *)0x0) {
                  (**(code **)(*local_98 + 0x20))();
                }
                if (local_b8 != (long *)0x0) {
                  (**(code **)(*local_b8 + 0x20))();
                }
              }
              plVar24 = local_108;
              if (local_130 != (long *)0x0) {
                (**(code **)(*local_130 + 0x20))();
                plVar24 = local_108;
              }
            }
            if (plVar24 != (long *)0x0) {
              (**(code **)(*plVar24 + 0x20))();
            }
          }
LAB_01980730:
          (**(code **)(*(long *)(lVar18 + -0x28) + 0x60))((long *)(lVar18 + -0x28));
          break;
        }
        sVar22 = sVar5;
      } while (sVar5 != 0);
      if (local_60 == 0) {
        return;
      }
    }
LAB_01980748:
    psVar1 = (short *)(local_60 + 0x18);
    do {
      sVar22 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar22 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar22 == 1) {
      FUN_0116e168();
    }
    else if (sVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


