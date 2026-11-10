/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db0504; name: FUN_00db0504
 */


void FUN_00db0504(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,int *param_5,
                 byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined4 uVar10;
  byte bVar11;
  ulong uVar12;
  undefined *puVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  char *pcVar17;
  long *plVar18;
  long *plVar19;
  ushort uVar20;
  long *plVar21;
  undefined1 *puVar22;
  long lVar23;
  int *piVar24;
  int *piVar25;
  undefined1 *puVar26;
  char *pcVar27;
  int *piVar28;
  ushort *puVar29;
  long lVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  char *pcVar33;
  long *plVar34;
  long *plVar35;
  undefined1 *puVar36;
  long lVar37;
  long lVar38;
  char *pcVar39;
  undefined8 uVar40;
  ulong uVar41;
  uint *puVar42;
  char *pcVar43;
  uint *puVar44;
  char *local_130;
  char *local_128;
  char *local_120;
  long *local_118;
  long *plStack_110;
  long *local_f8;
  char local_e8 [8];
  char *local_e0;
  char *local_d8;
  long *local_d0;
  long *local_c8;
  undefined1 *local_c0;
  char *local_b8;
  size_t local_b0;
  long *local_a8;
  long *local_a0;
  char *local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long local_78;
  long *local_70 [2];
  
  FUN_00db2128();
  plVar21 = (long *)(param_1 + 0x90);
  lVar37 = *plVar21;
  lVar38 = *(long *)(param_1 + 0x98);
  if (lVar38 != lVar37) {
    if (*(long **)(lVar38 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar38 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar38 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar38 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar38 + -0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar38 + -0x60) + 0x20))();
    }
    FUN_00db2234(lVar38 + -0x220);
    if (lVar38 + -0x220 != lVar37) {
      if (*(long **)(lVar38 + -0x240) != (long *)0x0) {
        (**(code **)(**(long **)(lVar38 + -0x240) + 0x20))();
      }
      if (*(long **)(lVar38 + -0x260) != (long *)0x0) {
        (**(code **)(**(long **)(lVar38 + -0x260) + 0x20))();
      }
      if (*(long **)(lVar38 + -0x280) != (long *)0x0) {
        (**(code **)(**(long **)(lVar38 + -0x280) + 0x20))();
      }
      FUN_00db2234(lVar38 + -0x440);
      if (lVar38 + -0x440 != lVar37) {
        do {
          if (*(long **)(lVar38 + -0x460) != (long *)0x0) {
            (**(code **)(**(long **)(lVar38 + -0x460) + 0x20))();
          }
          if (*(long **)(lVar38 + -0x480) != (long *)0x0) {
            (**(code **)(**(long **)(lVar38 + -0x480) + 0x20))();
          }
          if (*(long **)(lVar38 + -0x4a0) != (long *)0x0) {
            (**(code **)(**(long **)(lVar38 + -0x4a0) + 0x20))();
          }
          FUN_00db2234(lVar38 + -0x660);
          lVar38 = lVar38 + -0x220;
        } while (lVar37 + 0x440 != lVar38);
      }
    }
  }
  *(long *)(param_1 + 0x98) = lVar37;
  lVar37 = DAT_0485a0d8;
  puVar29 = (ushort *)((long)param_5 - (long)*param_5);
  uVar20 = *puVar29;
  if ((8 < uVar20) && ((ulong)puVar29[4] != 0)) {
    puVar6 = (uint *)((long)param_5 + (ulong)puVar29[4]);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (10 < uVar20) {
      lVar38 = -(long)*param_5;
      if ((ulong)puVar29[5] != 0) {
        uVar41 = (ulong)*(byte *)((long)param_5 + (ulong)puVar29[5]);
        lVar30 = *(long *)(param_1 + 0x58);
        if ((ulong)((*(long *)(param_1 + 0x68) - lVar30 >> 6) * -0x5555555555555555) < uVar41) {
          lVar38 = *(long *)(param_1 + 0x60);
          plVar34 = (long *)(param_1 + 0x70);
          local_118 = (long *)0x0;
          plStack_110 = plVar34;
          local_130 = (char *)(**(code **)(**(long **)(param_1 + 0x70) + 0x10))
                                        (*(long **)(param_1 + 0x70),uVar41 * 0xc0,8);
          if (local_130 == (char *)0x0) {
            (**(code **)(*(long *)*plVar34 + 0xe8))();
          }
          pcVar33 = local_130 + (lVar38 - lVar30 >> 6) * 0x40;
          pcVar39 = local_130 + uVar41 * 0xc0;
          pcVar17 = *(char **)(param_1 + 0x58);
          pcVar27 = *(char **)(param_1 + 0x60);
          if (pcVar27 == pcVar17) {
            pcVar43 = pcVar33;
            local_120 = pcVar17;
          }
          else {
            pcVar43 = pcVar33 + -0xc0;
            local_128 = pcVar33;
            local_120 = pcVar33;
            local_118 = (long *)pcVar39;
            FUN_00db683c(plVar34,pcVar43);
            if (pcVar27 + -0xc0 != pcVar17) {
              do {
                pcVar43 = pcVar43 + -0xc0;
                FUN_00db683c(plVar34,pcVar43,pcVar27 + -0x180);
                pcVar27 = pcVar27 + -0xc0;
              } while (pcVar17 + 0xc0 != pcVar27);
            }
            pcVar17 = *(char **)(param_1 + 0x58);
            local_120 = *(char **)(param_1 + 0x60);
          }
          *(char **)(param_1 + 0x58) = pcVar43;
          *(char **)(param_1 + 0x60) = pcVar33;
          local_118 = *(long **)(param_1 + 0x68);
          *(char **)(param_1 + 0x68) = pcVar39;
          local_130 = pcVar17;
          local_128 = pcVar17;
          FUN_00db3b74(&local_130);
          lVar38 = -(long)*param_5;
          uVar20 = *(ushort *)((long)param_5 - (long)*param_5);
        }
      }
      if ((0xc < uVar20) && (uVar41 = (ulong)*(ushort *)((long)param_5 + lVar38 + 0xc), uVar41 != 0)
         ) {
        uVar41 = (ulong)*(byte *)((long)param_5 + uVar41);
        lVar38 = *(long *)(param_1 + 0x90);
        if ((ulong)((*(long *)(param_1 + 0xa0) - lVar38 >> 5) * -0xf0f0f0f0f0f0f0f) < uVar41) {
          lVar30 = *(long *)(param_1 + 0x98);
          plVar34 = (long *)(param_1 + 0xa8);
          local_118 = (long *)0x0;
          plStack_110 = plVar34;
          pcVar17 = (char *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x10))
                                      (*(long **)(param_1 + 0xa8),uVar41 * 0x220,8);
          if (pcVar17 == (char *)0x0) {
            (**(code **)(*(long *)*plVar34 + 0xe8))();
          }
          pcVar39 = pcVar17 + (lVar30 - lVar38 >> 5) * 0x20;
          pcVar27 = *(char **)(param_1 + 0x90);
          pcVar33 = *(char **)(param_1 + 0x98);
          if (pcVar33 == pcVar27) {
            pcVar43 = pcVar39;
            local_120 = pcVar27;
          }
          else {
            pcVar43 = pcVar39 + -0x220;
            local_130 = pcVar17;
            local_128 = pcVar39;
            local_120 = pcVar39;
            local_118 = (long *)(pcVar17 + uVar41 * 0x220);
            FUN_00db66dc(plVar34,pcVar43,pcVar33 + -0x220);
            if (pcVar33 + -0x220 != pcVar27) {
              do {
                pcVar43 = pcVar43 + -0x220;
                FUN_00db66dc(plVar34,pcVar43,pcVar33 + -0x440);
                pcVar33 = pcVar33 + -0x220;
              } while (pcVar27 + 0x220 != pcVar33);
            }
            pcVar27 = *(char **)(param_1 + 0x90);
            local_120 = *(char **)(param_1 + 0x98);
          }
          *(char **)(param_1 + 0x90) = pcVar43;
          *(char **)(param_1 + 0x98) = pcVar39;
          local_118 = *(long **)(param_1 + 0xa0);
          *(char **)(param_1 + 0xa0) = pcVar17 + uVar41 * 0x220;
          local_130 = pcVar27;
          local_128 = pcVar27;
          FUN_00db2e78(&local_130);
        }
      }
    }
    *(byte *)(param_1 + 0xd0) = param_6 & 1;
    uVar10 = *(undefined4 *)(param_2 + 0x194);
    puVar44 = puVar6 + 1;
    uVar41 = (ulong)*puVar6;
    if (uVar41 != 0) {
      puVar6 = puVar44 + uVar41;
      puVar1 = PTR_DAT_047e3270 + 0x10;
      puVar2 = PTR_DAT_047e3268 + 0x10;
      puVar3 = PTR_DAT_047e0d78 + 0x10;
LAB_00db0718:
      puVar22 = &DAT_cbf29ce484222645;
      piVar24 = (int *)((long)puVar44 + (ulong)*puVar44);
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar41 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar41 == 0)) {
        lVar38 = 0;
      }
      else {
        puVar7 = (uint *)((long)piVar24 + uVar41);
        lVar38 = (long)puVar7 + (ulong)*puVar7;
      }
      local_b0 = strlen((char *)(lVar38 + 4));
      bVar11 = *(byte *)(lVar38 + 4);
      if (bVar11 != 0) {
        pbVar32 = (byte *)(lVar38 + 5);
        do {
          puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar11) * 0x100000001b3);
          bVar11 = *pbVar32;
          pbVar32 = pbVar32 + 1;
        } while (bVar11 != 0);
      }
      local_a8 = (long *)0x0;
      piVar25 = (int *)*param_3;
      if (((((piVar25 != (int *)0x0) && (4 < *(ushort *)((long)piVar25 - (long)*piVar25))) &&
           (uVar41 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar41 != 0)) &&
          ((*(char *)((long)piVar25 + uVar41) != '\0' && (param_3[0xc] != 0)))) &&
         (puVar26 = (undefined1 *)param_3[2], puVar26 != (undefined1 *)0x0)) {
        uVar41 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
        uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
        uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar41 < 2) {
          puVar31 = (undefined1 *)((ulong)(puVar26 + -1) & (ulong)puVar22);
        }
        else {
          puVar31 = puVar22;
          if (puVar26 <= puVar22) {
            uVar12 = 0;
            if (puVar26 != (undefined1 *)0x0) {
              uVar12 = (ulong)puVar22 / (ulong)puVar26;
            }
            puVar31 = puVar22 + -(uVar12 * (long)puVar26);
          }
        }
        plVar34 = *(long **)(param_3[1] + (long)puVar31 * 8);
        if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
          if (uVar41 < 2) {
            do {
              if ((undefined1 *)plVar34[1] == puVar22) {
                if ((undefined1 *)plVar34[2] == puVar22) goto LAB_00db08b4;
              }
              else if ((undefined1 *)((ulong)plVar34[1] & (ulong)(puVar26 + -1)) != puVar31) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              puVar36 = (undefined1 *)plVar34[1];
              if (puVar36 == puVar22) {
                if ((undefined1 *)plVar34[2] == puVar22) goto LAB_00db08b4;
              }
              else {
                if (puVar26 <= puVar36) {
                  uVar41 = 0;
                  if (puVar26 != (undefined1 *)0x0) {
                    uVar41 = (ulong)puVar36 / (ulong)puVar26;
                  }
                  puVar36 = puVar36 + -(uVar41 * (long)puVar26);
                }
                if (puVar36 != puVar31) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
        }
      }
      plVar34 = *(long **)PTR_DAT_047e3280;
      goto LAB_00db08b8;
    }
  }
  return;
LAB_00db08b4:
  plVar34 = plVar34 + 6;
LAB_00db08b8:
  piVar25 = (int *)*param_4;
  if ((((piVar25 != (int *)0x0) && (4 < *(ushort *)((long)piVar25 - (long)*piVar25))) &&
      (uVar41 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar41 != 0)) &&
     (((*(char *)((long)piVar25 + uVar41) != '\0' && (param_4[0xc] != 0)) &&
      (puVar26 = (undefined1 *)param_4[2], puVar26 != (undefined1 *)0x0)))) {
    uVar41 = (long)puVar26 - ((ulong)puVar26 >> 1 & 0x5555555555555555);
    uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
    uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar41 < 2) {
      puVar31 = (undefined1 *)((ulong)(puVar26 + -1) & (ulong)puVar22);
    }
    else {
      puVar31 = puVar22;
      if (puVar26 <= puVar22) {
        uVar12 = 0;
        if (puVar26 != (undefined1 *)0x0) {
          uVar12 = (ulong)puVar22 / (ulong)puVar26;
        }
        puVar31 = puVar22 + -(uVar12 * (long)puVar26);
      }
    }
    plVar35 = *(long **)(param_4[1] + (long)puVar31 * 8);
    if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
      if (uVar41 < 2) {
        do {
          if ((undefined1 *)plVar35[1] == puVar22) {
            if ((undefined1 *)plVar35[2] == puVar22) goto LAB_00db09a8;
          }
          else if ((undefined1 *)((ulong)plVar35[1] & (ulong)(puVar26 + -1)) != puVar31) break;
          plVar35 = (long *)*plVar35;
        } while (plVar35 != (long *)0x0);
      }
      else {
        do {
          puVar36 = (undefined1 *)plVar35[1];
          if (puVar36 == puVar22) {
            if ((undefined1 *)plVar35[2] == puVar22) goto LAB_00db09a8;
          }
          else {
            if (puVar26 <= puVar36) {
              uVar41 = 0;
              if (puVar26 != (undefined1 *)0x0) {
                uVar41 = (ulong)puVar36 / (ulong)puVar26;
              }
              puVar36 = puVar36 + -(uVar41 * (long)puVar26);
            }
            if (puVar36 != puVar31) break;
          }
          plVar35 = (long *)*plVar35;
        } while (plVar35 != (long *)0x0);
      }
    }
  }
  plVar35 = *(long **)PTR_DAT_047e3280;
LAB_00db09ac:
  local_c0 = puVar22;
  local_b8 = (char *)(lVar38 + 4);
  plVar18 = (long *)FUN_00dafa58(param_2,param_1 + 8,uVar10);
  if (*plVar18 != 0) {
    FUN_00db3d00(local_e8,*plVar18,DAT_0485a0d8 + 0x38,param_1 + 0x18,&local_c0);
    if (local_e8[0] == '\0') goto LAB_00db10c4;
    plVar18 = *(long **)(param_2 + 200);
    if (plVar18 != (long *)0x0) {
      plVar19 = plVar18 + 5;
      do {
        lVar38 = *plVar19;
        cVar15 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar14) {
          *(int *)plVar19 = (int)lVar38 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      if ((int)lVar38 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      local_a0 = (long *)&DAT_80aab8649adc4b33;
      local_98 = "World";
      local_90 = 5;
      local_88 = (long *)0x0;
      (**(code **)(*DAT_0485a020 + 0xa8))(&local_130,DAT_0485a020,&local_a0);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      FUN_00c5ecb4(&local_a0,*(undefined8 *)(lVar37 + 0x38),local_e8);
      plVar9 = local_a0;
      if ((int)((ulong)(local_a0[0x27] - local_a0[0x26]) >> 5) == 0) {
        FUN_010f7c04(local_a0);
        if (plVar9 != (long *)0x0) goto LAB_00db1a40;
      }
      else {
        FUN_01086da0(local_a0,local_a0[0x26],&local_130);
        if ((plVar9[0x27] - plVar9[0x26] & 0x1fffffffc0U) != 0) {
          FUN_01086da0(plVar9,plVar9[0x26] + 0x20,&local_130);
          lVar38 = plVar9[0x26];
          if (0x40 < (plVar9[0x27] - lVar38 & 0x1fffffffe0U)) {
            lVar30 = 0x40;
            uVar41 = 2;
            do {
              FUN_01086da0(plVar9,lVar38 + lVar30,&local_130);
              lVar38 = plVar9[0x26];
              uVar41 = uVar41 + 1;
              lVar30 = lVar30 + 0x20;
            } while (uVar41 < ((ulong)(plVar9[0x27] - lVar38) >> 5 & 0xffffffff));
          }
        }
        FUN_010f7c04(plVar9);
LAB_00db1a40:
        plVar5 = plVar9 + 5;
        do {
          lVar38 = *plVar5;
          iVar16 = (int)lVar38 + -1;
          cVar15 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar14) {
            *(int *)plVar5 = iVar16;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar38 == 0) goto LAB_00db20b4;
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      do {
        lVar38 = *plVar19;
        iVar16 = (int)lVar38 + -1;
        cVar15 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar14) {
          *(int *)plVar19 = iVar16;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      else if ((int)lVar38 == 0) goto LAB_00db20b4;
    }
    plVar19 = local_c8;
    plVar18 = local_d0;
    pcVar27 = local_d8;
    pcVar17 = local_e0;
    puVar29 = (ushort *)((long)piVar24 - (long)*piVar24);
    uVar20 = *puVar29;
    if (6 < uVar20) {
      uVar41 = (ulong)puVar29[3];
      lVar38 = -(long)*piVar24;
      if ((uVar41 != 0) &&
         (puVar7 = (uint *)((long)piVar24 + uVar41),
         puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7), *puVar7 != 0)) {
        local_78 = *(long *)(param_1 + 200);
        uVar40 = *(undefined8 *)(lVar37 + 0x38);
        if (local_c8 == (long *)0x0) {
          local_130 = (char *)CONCAT71(local_130._1_7_,1);
          local_128 = local_e0;
          local_120 = local_d8;
          local_118 = local_d0;
          plStack_110 = (long *)0x0;
          FUN_00c5ecb4(&local_80,uVar40,&local_130);
        }
        else {
          (**(code **)(*local_c8 + 0x18))(local_c8);
          local_130 = (char *)CONCAT71(local_130._1_7_,1);
          local_128 = pcVar17;
          local_120 = pcVar27;
          local_118 = plVar18;
          plStack_110 = plVar19;
          FUN_00c5ecb4(&local_80,uVar40,&local_130);
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        if (local_80 != (long *)0x0) {
          puVar42 = puVar7 + 1;
          if (*puVar7 != 0) {
            puVar7 = puVar42 + *puVar7;
LAB_00db118c:
            pcVar17 = &DAT_cbf29ce484222645;
            piVar25 = (int *)((long)puVar42 + (ulong)*puVar42);
            if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 5) ||
               (uVar41 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar41 == 0)) {
              lVar38 = 0;
            }
            else {
              puVar8 = (uint *)((long)piVar25 + uVar41);
              lVar38 = (long)puVar8 + (ulong)*puVar8;
            }
            pcVar27 = (char *)(lVar38 + 4);
            local_120 = (char *)strlen(pcVar27);
            bVar11 = *(byte *)(lVar38 + 4);
            if (bVar11 != 0) {
              pbVar32 = (byte *)(lVar38 + 5);
              do {
                pcVar17 = (char *)(((ulong)pcVar17 ^ (ulong)bVar11) * 0x100000001b3);
                bVar11 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar11 != 0);
            }
            local_118 = (long *)0x0;
            piVar28 = (int *)plVar34[5];
            local_130 = pcVar17;
            local_128 = pcVar27;
            if ((((piVar28 == (int *)0x0) || (*(ushort *)((long)piVar28 - (long)*piVar28) < 5)) ||
                (uVar41 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar41 == 0)) ||
               (*(char *)((long)piVar28 + uVar41) == '\0')) goto LAB_00db12d4;
            if ((plVar34[0x11] != 0) && (pcVar27 = (char *)plVar34[7], pcVar27 != (char *)0x0)) {
              uVar41 = (long)pcVar27 - ((ulong)pcVar27 >> 1 & 0x5555555555555555);
              uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
              uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar41 < 2) {
                pcVar33 = (char *)((ulong)(pcVar27 + -1) & (ulong)pcVar17);
              }
              else {
                pcVar33 = pcVar17;
                if (pcVar27 <= pcVar17) {
                  uVar12 = 0;
                  if (pcVar27 != (char *)0x0) {
                    uVar12 = (ulong)pcVar17 / (ulong)pcVar27;
                  }
                  pcVar33 = pcVar17 + -(uVar12 * (long)pcVar27);
                }
              }
              plVar18 = *(long **)(plVar34[6] + (long)pcVar33 * 8);
              if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0))
              {
                if (uVar41 < 2) {
                  do {
                    if ((char *)plVar18[1] == pcVar17) {
                      if ((char *)plVar18[2] == pcVar17) goto LAB_00db12c8;
                    }
                    else if ((char *)((ulong)plVar18[1] & (ulong)(pcVar27 + -1)) != pcVar33) break;
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
                else {
                  do {
                    pcVar39 = (char *)plVar18[1];
                    if (pcVar39 == pcVar17) {
                      if ((char *)plVar18[2] == pcVar17) goto LAB_00db12c8;
                    }
                    else {
                      if (pcVar27 <= pcVar39) {
                        uVar41 = 0;
                        if (pcVar27 != (char *)0x0) {
                          uVar41 = (ulong)pcVar39 / (ulong)pcVar27;
                        }
                        pcVar39 = pcVar39 + -(uVar41 * (long)pcVar27);
                      }
                      if (pcVar39 != pcVar33) break;
                    }
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
              }
            }
            goto LAB_00db15e4;
          }
LAB_00db1714:
          plVar18 = local_80 + 5;
          do {
            lVar38 = *plVar18;
            iVar16 = (int)lVar38 + -1;
            cVar15 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar14) {
              *(int *)plVar18 = iVar16;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
          else if ((int)lVar38 == 0) goto LAB_00db20b4;
        }
LAB_00db1730:
        lVar38 = -(long)*piVar24;
        uVar20 = *(ushort *)((long)piVar24 - (long)*piVar24);
      }
      plVar19 = local_c8;
      plVar18 = local_d0;
      pcVar27 = local_d8;
      pcVar17 = local_e0;
      if (((8 < uVar20) && (uVar41 = (ulong)*(ushort *)((long)piVar24 + lVar38 + 8), uVar41 != 0))
         && (puVar7 = (uint *)((long)piVar24 + uVar41),
            puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7), *puVar7 != 0)) {
        local_78 = *(long *)(param_1 + 200);
        uVar40 = *(undefined8 *)(lVar37 + 0x38);
        if (local_c8 == (long *)0x0) {
          local_130 = (char *)CONCAT71(local_130._1_7_,1);
          local_128 = local_e0;
          local_120 = local_d8;
          local_118 = local_d0;
          plStack_110 = (long *)0x0;
          FUN_00c5ecb4(&local_80,uVar40,&local_130);
        }
        else {
          (**(code **)(*local_c8 + 0x18))(local_c8);
          local_130 = (char *)CONCAT71(local_130._1_7_,1);
          local_128 = pcVar17;
          local_120 = pcVar27;
          local_118 = plVar18;
          plStack_110 = plVar19;
          FUN_00c5ecb4(&local_80,uVar40,&local_130);
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        if (local_80 != (long *)0x0) {
          puVar42 = puVar7 + 1;
          if (*puVar7 != 0) {
            puVar7 = puVar42 + *puVar7;
LAB_00db0abc:
            pcVar17 = &DAT_cbf29ce484222645;
            piVar24 = (int *)((long)puVar42 + (ulong)*puVar42);
            if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
               (uVar41 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar41 == 0)) {
              lVar38 = 0;
            }
            else {
              puVar8 = (uint *)((long)piVar24 + uVar41);
              lVar38 = (long)puVar8 + (ulong)*puVar8;
            }
            pcVar27 = (char *)(lVar38 + 4);
            local_120 = (char *)strlen(pcVar27);
            bVar11 = *(byte *)(lVar38 + 4);
            if (bVar11 != 0) {
              pbVar32 = (byte *)(lVar38 + 5);
              do {
                pcVar17 = (char *)(((ulong)pcVar17 ^ (ulong)bVar11) * 0x100000001b3);
                bVar11 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar11 != 0);
            }
            local_118 = (long *)0x0;
            piVar25 = (int *)plVar34[0x1a];
            local_130 = pcVar17;
            local_128 = pcVar27;
            if (((piVar25 == (int *)0x0) || (*(ushort *)((long)piVar25 - (long)*piVar25) < 5)) ||
               ((uVar41 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar41 == 0 ||
                (*(char *)((long)piVar25 + uVar41) == '\0')))) goto LAB_00db0c70;
            if ((plVar34[0x26] != 0) && (pcVar27 = (char *)plVar34[0x1c], pcVar27 != (char *)0x0)) {
              uVar41 = (long)pcVar27 - ((ulong)pcVar27 >> 1 & 0x5555555555555555);
              uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
              uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar41 < 2) {
                pcVar33 = (char *)((ulong)(pcVar27 + -1) & (ulong)pcVar17);
              }
              else {
                pcVar33 = pcVar17;
                if (pcVar27 <= pcVar17) {
                  uVar12 = 0;
                  if (pcVar27 != (char *)0x0) {
                    uVar12 = (ulong)pcVar17 / (ulong)pcVar27;
                  }
                  pcVar33 = pcVar17 + -(uVar12 * (long)pcVar27);
                }
              }
              plVar18 = *(long **)(plVar34[0x1b] + (long)pcVar33 * 8);
              if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0))
              {
                if (uVar41 < 2) {
                  do {
                    if ((char *)plVar18[1] == pcVar17) {
                      if ((char *)plVar18[2] == pcVar17) goto LAB_00db0c64;
                    }
                    else if ((char *)((ulong)plVar18[1] & (ulong)(pcVar27 + -1)) != pcVar33) break;
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
                else {
                  do {
                    pcVar39 = (char *)plVar18[1];
                    if (pcVar39 == pcVar17) {
                      if ((char *)plVar18[2] == pcVar17) goto LAB_00db0c64;
                    }
                    else {
                      if (pcVar27 <= pcVar39) {
                        uVar41 = 0;
                        if (pcVar27 != (char *)0x0) {
                          uVar41 = (ulong)pcVar39 / (ulong)pcVar27;
                        }
                        pcVar39 = pcVar39 + -(uVar41 * (long)pcVar27);
                      }
                      if (pcVar39 != pcVar33) break;
                    }
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
              }
            }
            goto LAB_00db0c4c;
          }
LAB_00db1094:
          plVar34 = local_80 + 5;
          do {
            lVar38 = *plVar34;
            iVar16 = (int)lVar38 + -1;
            cVar15 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar14) {
              *(int *)plVar34 = iVar16;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
          else if ((int)lVar38 == 0) {
LAB_00db20b4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
    }
LAB_00db10b0:
    if (local_e8[0] == '\0') goto LAB_00db10c4;
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  local_e8[0] = '\0';
LAB_00db10c4:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  puVar44 = puVar44 + 1;
  if (puVar44 == puVar6) {
    return;
  }
  goto LAB_00db0718;
LAB_00db09a8:
  plVar35 = plVar35 + 6;
  goto LAB_00db09ac;
LAB_00db12c8:
  if ((char *)plVar18[7] != pcVar17) goto LAB_00db15e4;
LAB_00db12d4:
  plVar18 = (long *)(*(long *)(local_80[0x15] + 0xf8) + 0x30);
  cVar15 = (**(code **)(*plVar18 + 0x88))(plVar18,&local_130);
  if (cVar15 == '\0') goto LAB_00db15e4;
  lVar38 = *(long *)(param_1 + 0x58);
  plVar18 = *(long **)(param_1 + 0x60);
  if (plVar18 < *(long **)(param_1 + 0x68)) {
    uVar40 = *(undefined8 *)(param_1 + 0x70);
    if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar30 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar30 != 0) {
      if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_00db20ec;
      *(undefined8 *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = uVar40;
      *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
    }
    puVar13 = PTR_DAT_047e0d78;
    plVar18[2] = 0;
    plVar18[3] = 0;
    plVar18[4] = 0;
    plVar18[5] = 0;
    plVar18[6] = 0;
    plVar18[7] = 0;
    puVar4 = PTR_DAT_047e3268 + 0x10;
    plVar18[10] = local_78;
    plVar18[0xb] = (long)&DAT_cbf29ce484222645;
    plVar18[0x16] = 0;
    *(undefined8 *)((long)plVar18 + 0xb5) = 0;
    plVar18[8] = 0;
    plVar18[9] = 0;
    *plVar18 = (long)(puVar13 + 0x10);
    plVar18[1] = (long)puVar4;
    plVar18[0xc] = (long)&DAT_03c886bc;
    plVar18[0xd] = 0;
    plVar18[0xe] = 0;
    plVar18[0xf] = (long)&DAT_cbf29ce484222645;
    plVar18[0x10] = (long)&DAT_03c886bc;
    plVar18[0x11] = 0;
    plVar18[0x12] = 0;
    plVar18[0x13] = (long)&DAT_cbf29ce484222645;
    plVar18[0x14] = (long)&DAT_03c886bc;
    plVar18[0x15] = 0;
    if (lVar30 != 0) {
      *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
    }
    plVar19 = plVar18 + 0x18;
    *(long **)(param_1 + 0x60) = plVar19;
  }
  else {
    FUN_00db6344((long *)(param_1 + 0x58),&local_78);
    plVar19 = *(long **)(param_1 + 0x60);
  }
  lVar38 = (long)plVar18 - lVar38 >> 6;
  lVar30 = *(long *)(param_1 + 0x58);
  if ((ulong)(((long)plVar19 - lVar30 >> 6) * -0x5555555555555555) <=
      (ulong)(lVar38 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 7) ||
     (uVar41 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[3], uVar41 == 0)) {
    lVar23 = 0;
  }
  else {
    puVar8 = (uint *)((long)piVar25 + uVar41);
    lVar23 = (long)puVar8 + (ulong)*puVar8;
  }
  FUN_00db3094(lVar30 + lVar38 * 0x40,lVar23);
  plVar18 = local_a8;
  lVar23 = lVar30 + lVar38 * 0x40;
  *(undefined1 **)(lVar23 + 0x58) = local_c0;
  *(char **)(lVar23 + 0x60) = local_b8;
  *(size_t *)(lVar23 + 0x68) = local_b0;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x18))(local_a8);
  }
  plVar19 = *(long **)(lVar23 + 0x70);
  *(long **)(lVar23 + 0x70) = plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar18 = local_c8;
  lVar23 = lVar30 + lVar38 * 0x40;
  *(char **)(lVar23 + 0x78) = local_e0;
  *(char **)(lVar23 + 0x80) = local_d8;
  *(long **)(lVar23 + 0x88) = local_d0;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))(local_c8);
  }
  plVar19 = *(long **)(lVar23 + 0x90);
  *(long **)(lVar23 + 0x90) = plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar18 = local_118;
  lVar23 = lVar30 + lVar38 * 0x40;
  *(char **)(lVar23 + 0x98) = local_130;
  *(char **)(lVar23 + 0xa0) = local_128;
  *(char **)(lVar23 + 0xa8) = local_120;
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x18))(local_118);
  }
  plVar19 = *(long **)(lVar23 + 0xb0);
  *(long **)(lVar23 + 0xb0) = plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar18 = local_80;
  pcVar17 = local_128;
  *(undefined4 *)(lVar30 + lVar38 * 0x40 + 0xb8) = 0;
  piVar25 = (int *)plVar35[5];
  if ((((piVar25 == (int *)0x0) || (*(ushort *)((long)piVar25 - (long)*piVar25) < 5)) ||
      (uVar41 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar41 == 0)) ||
     (*(char *)((long)piVar25 + uVar41) == '\0')) {
    bVar14 = true;
  }
  else {
    if ((plVar35[0x11] != 0) && (pcVar27 = (char *)plVar35[7], pcVar27 != (char *)0x0)) {
      uVar41 = (long)pcVar27 - ((ulong)pcVar27 >> 1 & 0x5555555555555555);
      uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
      uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar41 < 2) {
        pcVar33 = (char *)((ulong)(pcVar27 + -1) & (ulong)local_130);
      }
      else if (local_130 < pcVar27) {
        pcVar33 = local_130;
      }
      else {
        uVar12 = 0;
        if (pcVar27 != (char *)0x0) {
          uVar12 = (ulong)local_130 / (ulong)pcVar27;
        }
        pcVar33 = local_130 + -(uVar12 * (long)pcVar27);
      }
      plVar19 = *(long **)(plVar35[6] + (long)pcVar33 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar41 < 2) {
          do {
            if ((char *)plVar19[1] == local_130) {
              if ((char *)plVar19[2] == local_130) goto LAB_00db1c64;
            }
            else if ((char *)((ulong)plVar19[1] & (ulong)(pcVar27 + -1)) != pcVar33)
            goto LAB_00db1518;
            plVar19 = (long *)*plVar19;
            bVar14 = false;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            pcVar39 = (char *)plVar19[1];
            if (pcVar39 == local_130) {
              if ((char *)plVar19[2] == local_130) goto LAB_00db1c64;
            }
            else {
              if (pcVar27 <= pcVar39) {
                uVar41 = 0;
                if (pcVar27 != (char *)0x0) {
                  uVar41 = (ulong)pcVar39 / (ulong)pcVar27;
                }
                pcVar39 = pcVar39 + -(uVar41 * (long)pcVar27);
              }
              if (pcVar39 != pcVar33) goto LAB_00db1518;
            }
            plVar19 = (long *)*plVar19;
            bVar14 = false;
          } while (plVar19 != (long *)0x0);
        }
        goto LAB_00db151c;
      }
    }
LAB_00db1518:
    bVar14 = false;
  }
LAB_00db151c:
  *(byte *)(lVar30 + lVar38 * 0x40 + 0xbc) = bVar14 ^ 1;
  if ((local_128 == (char *)0x0) || (*local_128 == '\0')) {
    plVar19 = (long *)FUN_00d44228();
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar40 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar40;
    FUN_00cf9884(local_70,uVar40,pcVar17);
    plVar19 = local_70[0];
  }
  local_a0 = (long *)PTR_DAT_047d8b70;
  if (plVar19 != (long *)0x0) {
    local_a0 = plVar19 + 6;
  }
  local_a0 = (long *)*local_a0;
  plVar9 = (long *)PTR_PTR_047d4508;
  if (plVar19 != (long *)0x0) {
    plVar9 = plVar19 + 7;
  }
  local_98 = (char *)*plVar9;
  if (plVar19 == (long *)0x0) {
    local_90 = 0;
    local_88 = (long *)0x0;
  }
  else {
    local_90 = plVar19[8];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    local_88 = plVar19;
  }
  FUN_00db33ac(plVar18 + 0x3a,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_00db15e4:
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  puVar42 = puVar42 + 1;
  if (puVar42 == puVar7) goto LAB_00db170c;
  goto LAB_00db118c;
LAB_00db1c64:
  bVar14 = (char *)plVar19[7] == local_130;
  goto LAB_00db151c;
LAB_00db170c:
  if (local_80 != (long *)0x0) goto LAB_00db1714;
  goto LAB_00db1730;
LAB_00db0c64:
  if ((char *)plVar18[7] != pcVar17) goto LAB_00db0c4c;
LAB_00db0c70:
  plVar18 = (long *)(*(long *)(local_80[0x15] + 0xf8) + 0x30);
  cVar15 = (**(code **)(*plVar18 + 0x98))(plVar18,&local_130);
  if (cVar15 == '\0') goto LAB_00db0c4c;
  lVar38 = *(long *)(param_1 + 0x90);
  plVar18 = *(long **)(param_1 + 0x98);
  if (plVar18 < *(long **)(param_1 + 0xa0)) {
    uVar40 = *(undefined8 *)(param_1 + 0xa8);
    if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar30 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar30 != 0) {
      if (0xf < *(ulong *)(lVar30 + 0x80)) {
LAB_00db20ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = uVar40;
      *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
    }
    plVar18[2] = 0;
    plVar18[3] = 0;
    *(undefined1 *)(plVar18 + 0x43) = 0;
    plVar18[0x42] = 0;
    plVar18[0x41] = 0;
    plVar18[4] = 0;
    plVar18[5] = 0;
    plVar18[6] = 0;
    plVar18[7] = 0;
    *plVar18 = (long)puVar1;
    plVar18[1] = (long)puVar2;
    plVar18[0x12] = 0;
    plVar18[0x13] = local_78;
    plVar18[0xc] = 0;
    plVar18[0xd] = 0;
    plVar18[0xe] = 0;
    plVar18[0xf] = 0;
    plVar18[0x10] = 0;
    plVar18[0x11] = 0;
    plVar18[10] = (long)puVar2;
    plVar18[0xb] = 0;
    plVar18[0x1e] = local_78;
    plVar18[0x1f] = (long)puVar3;
    plVar18[0x28] = 0;
    plVar18[0x29] = local_78;
    plVar18[0x34] = local_78;
    plVar18[0x35] = (long)&DAT_cbf29ce484222645;
    plVar18[0x3e] = (long)&DAT_03c886bc;
    plVar18[8] = 0;
    plVar18[9] = (long)puVar3;
    plVar18[0x1a] = 0;
    plVar18[0x1b] = 0;
    plVar18[0x18] = 0;
    plVar18[0x19] = 0;
    plVar18[0x16] = 0;
    plVar18[0x17] = 0;
    plVar18[0x14] = (long)puVar3;
    plVar18[0x15] = (long)puVar2;
    plVar18[0x1c] = 0;
    plVar18[0x1d] = 0;
    plVar18[0x22] = 0;
    plVar18[0x23] = 0;
    plVar18[0x24] = 0;
    plVar18[0x25] = 0;
    plVar18[0x26] = 0;
    plVar18[0x27] = 0;
    plVar18[0x20] = (long)puVar2;
    plVar18[0x21] = 0;
    plVar18[0x2c] = 0;
    plVar18[0x2d] = 0;
    plVar18[0x2e] = 0;
    plVar18[0x2f] = 0;
    plVar18[0x30] = 0;
    plVar18[0x31] = 0;
    plVar18[0x2a] = (long)puVar3;
    plVar18[0x2b] = (long)puVar2;
    plVar18[0x32] = 0;
    plVar18[0x33] = 0;
    plVar18[0x36] = (long)&DAT_03c886bc;
    plVar18[0x37] = 0;
    plVar18[0x38] = 0;
    plVar18[0x39] = (long)&DAT_cbf29ce484222645;
    plVar18[0x3a] = (long)&DAT_03c886bc;
    plVar18[0x3b] = 0;
    plVar18[0x3c] = 0;
    plVar18[0x3d] = (long)&DAT_cbf29ce484222645;
    plVar18[0x3f] = 0;
    plVar18[0x40] = 0;
    if (lVar30 != 0) {
      *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
    }
    plVar19 = plVar18 + 0x44;
    *(long **)(param_1 + 0x98) = plVar19;
  }
  else {
    FUN_029d9468(plVar21,&local_78);
    plVar19 = *(long **)(param_1 + 0x98);
  }
  lVar38 = (long)plVar18 - lVar38 >> 5;
  lVar30 = *plVar21;
  if ((ulong)(((long)plVar19 - lVar30 >> 5) * -0xf0f0f0f0f0f0f0f) <=
      (ulong)(lVar38 * -0xf0f0f0f0f0f0f0f)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 7) ||
     (uVar41 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[3], uVar41 == 0)) {
    lVar23 = 0;
  }
  else {
    puVar8 = (uint *)((long)piVar24 + uVar41);
    lVar23 = (long)puVar8 + (ulong)*puVar8;
  }
  FUN_00db2f98(lVar30 + lVar38 * 0x20,lVar23);
  plVar18 = local_a8;
  lVar23 = lVar30 + lVar38 * 0x20;
  *(undefined1 **)(lVar23 + 0x1a8) = local_c0;
  *(char **)(lVar23 + 0x1b0) = local_b8;
  *(size_t *)(lVar23 + 0x1b8) = local_b0;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x18))(local_a8);
  }
  plVar19 = *(long **)(lVar23 + 0x1c0);
  *(long **)(lVar23 + 0x1c0) = plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar18 = local_c8;
  lVar23 = lVar30 + lVar38 * 0x20;
  *(char **)(lVar23 + 0x1c8) = local_e0;
  *(char **)(lVar23 + 0x1d0) = local_d8;
  *(long **)(lVar23 + 0x1d8) = local_d0;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))(local_c8);
  }
  plVar19 = *(long **)(lVar23 + 0x1e0);
  *(long **)(lVar23 + 0x1e0) = plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar18 = local_118;
  lVar23 = lVar30 + lVar38 * 0x20;
  *(char **)(lVar23 + 0x1e8) = local_130;
  *(char **)(lVar23 + 0x1f0) = local_128;
  *(char **)(lVar23 + 0x1f8) = local_120;
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x18))(local_118);
  }
  plVar19 = *(long **)(lVar23 + 0x200);
  *(long **)(lVar23 + 0x200) = plVar18;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))();
  }
  plVar18 = local_80;
  pcVar17 = local_128;
  lVar23 = lVar30 + lVar38 * 0x20;
  *(undefined8 *)(lVar23 + 0x210) = 0;
  *(undefined8 *)(lVar23 + 0x208) = 0;
  piVar24 = (int *)plVar35[0x1a];
  if ((((piVar24 == (int *)0x0) || (*(ushort *)((long)piVar24 - (long)*piVar24) < 5)) ||
      (uVar41 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar41 == 0)) ||
     (*(char *)((long)piVar24 + uVar41) == '\0')) {
    bVar14 = true;
  }
  else {
    if ((plVar35[0x26] != 0) && (pcVar27 = (char *)plVar35[0x1c], pcVar27 != (char *)0x0)) {
      uVar41 = (long)pcVar27 - ((ulong)pcVar27 >> 1 & 0x5555555555555555);
      uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
      uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar41 < 2) {
        pcVar33 = (char *)((ulong)(pcVar27 + -1) & (ulong)local_130);
      }
      else if (local_130 < pcVar27) {
        pcVar33 = local_130;
      }
      else {
        uVar12 = 0;
        if (pcVar27 != (char *)0x0) {
          uVar12 = (ulong)local_130 / (ulong)pcVar27;
        }
        pcVar33 = local_130 + -(uVar12 * (long)pcVar27);
      }
      plVar19 = *(long **)(plVar35[0x1b] + (long)pcVar33 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar41 < 2) {
          do {
            if ((char *)plVar19[1] == local_130) {
              if ((char *)plVar19[2] == local_130) goto LAB_00db1ac8;
            }
            else if ((char *)((ulong)plVar19[1] & (ulong)(pcVar27 + -1)) != pcVar33)
            goto LAB_00db0f08;
            plVar19 = (long *)*plVar19;
            bVar14 = false;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            pcVar39 = (char *)plVar19[1];
            if (pcVar39 == local_130) {
              if ((char *)plVar19[2] == local_130) goto LAB_00db1ac8;
            }
            else {
              if (pcVar27 <= pcVar39) {
                uVar41 = 0;
                if (pcVar27 != (char *)0x0) {
                  uVar41 = (ulong)pcVar39 / (ulong)pcVar27;
                }
                pcVar39 = pcVar39 + -(uVar41 * (long)pcVar27);
              }
              if (pcVar39 != pcVar33) goto LAB_00db0f08;
            }
            plVar19 = (long *)*plVar19;
            bVar14 = false;
          } while (plVar19 != (long *)0x0);
        }
        goto LAB_00db0f0c;
      }
    }
LAB_00db0f08:
    bVar14 = false;
  }
LAB_00db0f0c:
  *(byte *)(lVar30 + lVar38 * 0x20 + 0x218) = bVar14 ^ 1;
  if ((local_128 == (char *)0x0) || (*local_128 == '\0')) {
    plVar19 = (long *)FUN_00d44228();
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar40 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar40;
    FUN_00cf9884(local_70,uVar40,pcVar17);
    plVar19 = local_70[0];
  }
  local_a0 = (long *)PTR_DAT_047d8b70;
  if (plVar19 != (long *)0x0) {
    local_a0 = plVar19 + 6;
  }
  local_a0 = (long *)*local_a0;
  plVar9 = (long *)PTR_PTR_047d4508;
  if (plVar19 != (long *)0x0) {
    plVar9 = plVar19 + 7;
  }
  local_98 = (char *)*plVar9;
  if (plVar19 == (long *)0x0) {
    local_90 = 0;
    local_88 = (long *)0x0;
  }
  else {
    local_90 = plVar19[8];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    local_88 = plVar19;
  }
  FUN_00db33ac(plVar18 + 0x47,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_00db0c4c:
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  puVar42 = puVar42 + 1;
  if (puVar42 == puVar7) goto LAB_00db108c;
  goto LAB_00db0abc;
LAB_00db1ac8:
  bVar14 = (char *)plVar19[7] == local_130;
  goto LAB_00db0f0c;
LAB_00db108c:
  if (local_80 != (long *)0x0) goto LAB_00db1094;
  goto LAB_00db10b0;
}


