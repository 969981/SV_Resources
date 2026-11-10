/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0130cce0; name: FUN_0130cce0
 */


void FUN_0130cce0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  int *piVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  size_t sVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  ushort uVar23;
  uint uVar24;
  undefined4 uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  long *plVar33;
  ulong *puVar34;
  undefined8 *puVar35;
  undefined1 *puVar36;
  long lVar37;
  uint *puVar38;
  uint *puVar39;
  ushort *puVar40;
  ulong *puVar41;
  long lVar42;
  int *piVar43;
  undefined1 *puVar44;
  long *plVar45;
  ulong *puVar46;
  ulong uVar47;
  undefined1 *puVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  long *plVar51;
  ulong uVar52;
  long *plVar53;
  undefined4 uVar54;
  ulong uVar55;
  undefined8 uVar56;
  long *plVar57;
  undefined1 **ppuVar58;
  undefined1 **ppuVar59;
  char *pcVar60;
  undefined4 uVar61;
  ulong uVar62;
  undefined1 uVar63;
  long *plVar64;
  long *plVar65;
  ulong uVar66;
  long *plVar67;
  long lVar68;
  long *plVar69;
  float fVar70;
  long local_228;
  long local_1e8;
  ulong *local_198;
  undefined1 *local_190;
  char *pcStack_188;
  size_t local_180;
  long *local_178;
  ulong *local_170;
  undefined1 *local_168;
  char *pcStack_160;
  size_t local_158;
  long *local_150;
  long *local_148;
  char *pcStack_140;
  size_t local_138;
  long *local_130;
  long local_128;
  undefined1 *local_120;
  char *pcStack_118;
  size_t local_110;
  long *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  char *pcStack_e8;
  size_t local_e0;
  long *local_d8;
  ulong *local_d0;
  long *local_c8;
  size_t local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  char local_90;
  undefined4 local_8c;
  undefined1 **local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  plVar33 = (long *)(param_1 + 0x78);
  if (*plVar33 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x2f0) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x2f0) + 0x1e8) & 1) == 0) {
    return;
  }
  lVar15 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x70))();
  if (lVar15 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x2f0) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x2f0) + 0x1e8) & 1) == 0)) {
    piVar43 = (int *)0x0;
  }
  else {
    puVar16 = (uint *)(**(code **)(**(long **)(param_1 + 0x2f0) + 0x70))();
    piVar43 = (int *)((long)puVar16 + (ulong)*puVar16);
  }
  if ((*(ushort *)((long)piVar43 - (long)*piVar43) < 9) ||
     (uVar26 = (ulong)((ushort *)((long)piVar43 - (long)*piVar43))[4], uVar26 == 0)) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = (uint *)((long)piVar43 + uVar26);
    puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
  }
  uVar24 = *puVar16;
  if (uVar24 != 0) {
    uVar26 = 0;
    local_228 = (long)puVar16 + 9;
LAB_0130dcd8:
    puVar27 = &DAT_cbf29ce484222645;
    uVar52 = (ulong)puVar16[uVar26 + 1];
    piVar3 = (int *)((long)(puVar16 + uVar26 + 1) + uVar52);
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar55 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar55 != 0)) {
      puVar39 = (uint *)((long)piVar3 + uVar55);
      uVar62 = (ulong)*puVar39;
      pcVar2 = (char *)((long)puVar39 + uVar62 + 4);
      sVar17 = strlen(pcVar2);
      bVar9 = *(byte *)((long)puVar39 + uVar62 + 4);
      if (bVar9 != 0) {
        pbVar32 = (byte *)(local_228 + uVar62 + uVar55 + uVar52);
        do {
          puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar32;
          pbVar32 = pbVar32 + 1;
        } while (bVar9 != 0);
      }
      local_d8 = (long *)0x0;
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
        local_100 = 0;
      }
      else {
        uVar52 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
        local_100 = 0;
        if (uVar52 != 0) {
          local_100 = *(undefined4 *)((long)piVar3 + uVar52);
        }
      }
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 9) {
        local_fc = 0;
      }
      else {
        uVar52 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4];
        local_fc = 0;
        if (uVar52 != 0) {
          local_fc = *(undefined4 *)((long)piVar3 + uVar52);
        }
      }
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) {
        local_f8 = 0;
      }
      else {
        uVar52 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5];
        local_f8 = 0;
        if (uVar52 != 0) {
          local_f8 = *(undefined4 *)((long)piVar3 + uVar52);
        }
      }
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) {
        local_f4 = 0;
      }
      else {
        uVar52 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6];
        local_f4 = 0;
        if (uVar52 != 0) {
          local_f4 = *(undefined4 *)((long)piVar3 + uVar52);
        }
      }
      local_f0 = puVar27;
      pcStack_e8 = pcVar2;
      local_e0 = sVar17;
      local_d0 = (ulong *)FUN_0131100c(*plVar33,plVar33,&local_100);
      if (local_d0 != (ulong *)0x0) {
        (**(code **)(local_d0[4] + 0x10))();
      }
      FUN_01311650(param_1 + 0x1c0,&local_f0,&local_d0);
      if (local_d0 != (ulong *)0x0) {
        (**(code **)(local_d0[4] + 0x18))();
      }
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xf) {
        puVar39 = (uint *)0x0;
      }
      else {
        uVar52 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7];
        if (uVar52 == 0) {
          puVar39 = (uint *)0x0;
        }
        else {
          puVar39 = (uint *)((long)piVar3 + uVar52);
          puVar39 = (uint *)((long)puVar39 + (ulong)*puVar39);
        }
      }
      if (*puVar39 != 0) {
        uVar52 = 0;
        local_1e8 = (long)puVar39 + 9;
        local_108 = (long *)0x0;
        pcStack_118 = pcVar2;
        local_120 = puVar27;
        local_110 = sVar17;
        do {
          ppuVar58 = (undefined1 **)&DAT_cbf29ce484222645;
          uVar55 = (ulong)puVar39[uVar52 + 1];
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x18))();
          }
          piVar3 = (int *)((long)(puVar39 + uVar52 + 1) + uVar55);
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          ppuVar59 = *(undefined1 ***)PTR_DAT_047d3e30;
          pcStack_80 = *(char **)(PTR_DAT_047d3e30 + 8);
          local_78 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar51 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          local_88 = ppuVar59;
          local_70 = plVar51;
          if (plVar51 != (long *)0x0) {
            (**(code **)(*plVar51 + 0x18))(plVar51);
          }
          if ((8 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
             (uVar62 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar62 != 0)) {
            puVar38 = (uint *)((long)piVar3 + uVar62);
            uVar66 = (ulong)*puVar38;
            pcVar2 = (char *)((long)puVar38 + uVar66 + 4);
            local_78 = strlen(pcVar2);
            bVar9 = *(byte *)((long)puVar38 + uVar66 + 4);
            if (bVar9 != 0) {
              pbVar32 = (byte *)(local_1e8 + uVar66 + uVar62 + uVar55);
              do {
                ppuVar58 = (undefined1 **)(((ulong)ppuVar58 ^ (ulong)bVar9) * 0x100000001b3);
                bVar9 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar9 != 0);
            }
            local_70 = (long *)0x0;
            local_88 = ppuVar58;
            pcStack_80 = pcVar2;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))(plVar51);
            }
            plVar51 = (long *)0x0;
            local_70 = (long *)0x0;
            ppuVar59 = ppuVar58;
          }
          puVar19 = *(undefined8 **)(param_1 + 0x328);
          puVar30 = *(undefined8 **)(param_1 + 0x330);
          if ((puVar19 != puVar30) && ((undefined1 **)*puVar19 != ppuVar59)) {
            do {
              puVar19 = puVar19 + 4;
              if (puVar30 == puVar19) {
                puVar19 = puVar30;
                goto LAB_0130dfac;
              }
            } while ((undefined1 **)*puVar19 != ppuVar59);
          }
LAB_0130dfac:
          if (puVar30 == puVar19) {
            FUN_0130f244(param_1 + 0x328,&local_88);
          }
          puVar40 = (ushort *)((long)piVar3 - (long)*piVar3);
          if (*puVar40 < 5) {
            iVar14 = 0;
          }
          else {
            iVar14 = 0;
            if ((ulong)puVar40[2] != 0) {
              iVar14 = *(int *)((long)piVar3 + (ulong)puVar40[2]);
            }
          }
          puVar35 = *(undefined8 **)(param_1 + 0x328);
          puVar30 = *(undefined8 **)(param_1 + 0x330);
          puVar19 = puVar35;
          if ((puVar35 != puVar30) && ((undefined1 **)*puVar35 != ppuVar59)) {
            do {
              puVar19 = puVar19 + 4;
              if (puVar30 == puVar19) {
                puVar19 = puVar30;
                goto LAB_0130dff4;
              }
            } while ((undefined1 **)*puVar19 != ppuVar59);
          }
LAB_0130dff4:
          iVar8 = 0;
          if (puVar30 != puVar19) {
            iVar8 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5 + iVar14;
          }
          if ((*puVar40 < 7) || ((ulong)puVar40[3] == 0)) {
            puVar38 = (uint *)0x0;
          }
          else {
            puVar38 = (uint *)((long)piVar3 + (ulong)puVar40[3]);
            puVar38 = (uint *)((long)puVar38 + (ulong)*puVar38);
          }
          if (*puVar38 != 0) {
            uVar55 = 0;
            lVar15 = (long)puVar38 + 9;
            lVar18 = (long)iVar8;
LAB_0130e05c:
            uVar62 = (ulong)puVar38[uVar55 + 1];
            piVar3 = (int *)((long)(puVar38 + uVar55 + 1) + uVar62);
            puVar40 = (ushort *)((long)piVar3 - (long)*piVar3);
            uVar23 = *puVar40;
            if (uVar23 < 7) {
              uVar54 = 0;
              if (4 < uVar23) {
                uVar61 = 0;
                bVar11 = false;
                bVar12 = false;
                uVar20 = 0;
                bVar13 = false;
                uVar21 = 0;
                uVar22 = 0;
                uVar63 = 0;
                uVar49 = 0;
                goto LAB_0130e178;
              }
              uVar56 = 0;
              lVar42 = 0;
              bVar12 = false;
              uVar61 = 0;
              bVar11 = false;
              uVar20 = 0;
              bVar13 = false;
              uVar63 = 0;
              uVar25 = 0;
              uVar21 = 0;
              uVar50 = 0;
              uVar22 = 0;
              uVar49 = uVar54;
            }
            else {
              if ((ulong)puVar40[3] == 0) {
                uVar49 = 0;
              }
              else {
                uVar49 = *(undefined4 *)((long)piVar3 + (ulong)puVar40[3]);
              }
              if (uVar23 < 9) {
                uVar54 = 0;
                uVar61 = 0;
                bVar11 = false;
                bVar12 = false;
                uVar20 = 0;
                bVar13 = false;
                uVar21 = 0;
                uVar22 = 0;
                uVar63 = 0;
              }
              else {
                if ((ulong)puVar40[4] == 0) {
                  uVar63 = 0;
                }
                else {
                  uVar63 = (undefined1)*(undefined4 *)((long)piVar3 + (ulong)puVar40[4]);
                }
                if (uVar23 < 0xb) {
                  uVar54 = 0;
LAB_0130f070:
                  uVar61 = 0;
LAB_0130f074:
                  bVar11 = false;
LAB_0130f078:
                  bVar12 = false;
LAB_0130f07c:
                  uVar20 = 0;
LAB_0130f080:
                  bVar13 = false;
LAB_0130f084:
                  uVar21 = 0;
                }
                else {
                  if ((ulong)puVar40[5] == 0) {
                    uVar54 = 0;
                  }
                  else {
                    uVar54 = *(undefined4 *)((long)piVar3 + (ulong)puVar40[5]);
                  }
                  if (uVar23 < 0xd) goto LAB_0130f070;
                  if ((ulong)puVar40[6] == 0) {
                    uVar61 = 0;
                  }
                  else {
                    uVar61 = *(undefined4 *)((long)piVar3 + (ulong)puVar40[6]);
                  }
                  if (uVar23 < 0xf) goto LAB_0130f074;
                  if ((ulong)puVar40[7] == 0) {
                    bVar11 = false;
                  }
                  else {
                    bVar11 = *(char *)((long)piVar3 + (ulong)puVar40[7]) != '\0';
                  }
                  if (uVar23 < 0x11) goto LAB_0130f078;
                  if ((ulong)puVar40[8] == 0) {
                    bVar12 = false;
                  }
                  else {
                    bVar12 = *(char *)((long)piVar3 + (ulong)puVar40[8]) != '\0';
                  }
                  if (uVar23 < 0x13) goto LAB_0130f07c;
                  if ((ulong)puVar40[9] == 0) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = (undefined2)*(undefined4 *)((long)piVar3 + (ulong)puVar40[9]);
                  }
                  if (uVar23 < 0x15) goto LAB_0130f080;
                  if ((ulong)puVar40[10] == 0) {
                    bVar13 = false;
                  }
                  else {
                    bVar13 = *(char *)((long)piVar3 + (ulong)puVar40[10]) != '\0';
                  }
                  if (uVar23 < 0x17) goto LAB_0130f084;
                  if ((ulong)puVar40[0xb] == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = (undefined2)*(undefined4 *)((long)piVar3 + (ulong)puVar40[0xb]);
                  }
                  if ((0x18 < uVar23) && ((ulong)puVar40[0xc] != 0)) {
                    uVar22 = *(undefined4 *)((long)piVar3 + (ulong)puVar40[0xc]);
                    goto LAB_0130e178;
                  }
                }
                uVar22 = 0;
              }
LAB_0130e178:
              uVar66 = (ulong)puVar40[2];
              uVar50 = uVar54;
              if (uVar66 != 0) {
                uVar47 = (ulong)*(uint *)((long)piVar3 + uVar66);
                bVar9 = *(byte *)((long)((long)piVar3 + uVar66) + uVar47 + 4);
                puVar27 = &DAT_cbf29ce484222645;
                if (bVar9 != 0) {
                  puVar27 = &DAT_cbf29ce484222645;
                  pbVar32 = (byte *)(lVar15 + uVar47 + uVar66 + uVar62);
                  do {
                    puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar9) * 0x100000001b3);
                    bVar9 = *pbVar32;
                    pbVar32 = pbVar32 + 1;
                  } while (bVar9 != 0);
                }
                puVar36 = *(undefined1 **)(param_1 + 0x230);
                if (puVar36 != (undefined1 *)0x0) {
                  uVar62 = 0;
                  if (puVar36 != (undefined1 *)0x0) {
                    uVar62 = (ulong)puVar27 / (ulong)puVar36;
                  }
                  uVar66 = (long)puVar36 - ((ulong)puVar36 >> 1 & 0x5555555555555555);
                  uVar66 = (uVar66 & 0x3333333333333333) + (uVar66 >> 2 & 0x3333333333333333);
                  uVar66 = (uVar66 + (uVar66 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar66 < 2) {
                    puVar31 = (undefined1 *)((ulong)(puVar36 + -1) & (ulong)puVar27);
                  }
                  else {
                    puVar31 = puVar27;
                    if (puVar36 <= puVar27) {
                      puVar31 = puVar27 + -(uVar62 * (long)puVar36);
                    }
                  }
                  plVar45 = *(long **)(*(long *)(param_1 + 0x228) + (long)puVar31 * 8);
                  if ((plVar45 != (long *)0x0) &&
                     (plVar45 = (long *)*plVar45, plVar45 != (long *)0x0)) {
                    puVar44 = puVar36 + -1;
                    if (uVar66 < 2) {
                      do {
                        if ((undefined1 *)plVar45[1] == puVar27) {
                          if ((undefined1 *)plVar45[2] == puVar27) goto LAB_0130e274;
                        }
                        else if ((undefined1 *)((ulong)plVar45[1] & (ulong)puVar44) != puVar31)
                        break;
                        plVar45 = (long *)*plVar45;
                      } while (plVar45 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar48 = (undefined1 *)plVar45[1];
                        if (puVar48 == puVar27) {
                          if ((undefined1 *)plVar45[2] == puVar27) goto LAB_0130e274;
                        }
                        else {
                          if (puVar36 <= puVar48) {
                            uVar47 = 0;
                            if (puVar36 != (undefined1 *)0x0) {
                              uVar47 = (ulong)puVar48 / (ulong)puVar36;
                            }
                            puVar48 = puVar48 + -(uVar47 * (long)puVar36);
                          }
                          if (puVar48 != puVar31) break;
                        }
                        plVar45 = (long *)*plVar45;
                      } while (plVar45 != (long *)0x0);
                    }
                  }
                }
              }
              uVar56 = 0;
              lVar42 = 0;
              uVar25 = 0;
            }
            goto LAB_0130e30c;
          }
LAB_0130e534:
          if (plVar51 != (long *)0x0) {
            (**(code **)(*plVar51 + 0x20))();
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          uVar52 = uVar52 + 1;
          if (*puVar39 <= uVar52) goto LAB_0130e640;
          local_1e8 = local_1e8 + 4;
          local_108 = local_d8;
          pcStack_118 = pcStack_e8;
          local_120 = local_f0;
          local_110 = local_e0;
        } while( true );
      }
      goto LAB_0130e648;
    }
    goto LAB_0130e654;
  }
LAB_0130cdac:
  for (plVar51 = *(long **)(param_1 + 0x1f0); plVar51 != (long *)0x0; plVar51 = (long *)*plVar51) {
    FUN_0131053c(plVar51[6],*plVar33,1);
  }
  if ((*(ushort *)((long)piVar43 - (long)*piVar43) < 0xb) ||
     (uVar26 = (ulong)((ushort *)((long)piVar43 - (long)*piVar43))[5], uVar26 == 0)) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = (uint *)((long)piVar43 + uVar26);
    puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
  }
  uVar24 = *puVar16;
  if (uVar24 != 0) {
    plVar33 = (long *)(param_1 + 0x158);
    uVar26 = 0;
    plVar51 = (long *)(param_1 + 0xf0);
    plVar45 = (long *)(param_1 + 0x120);
    plVar1 = (long *)(param_1 + 0x188);
    lVar15 = (long)puVar16 + 9;
LAB_0130ce38:
    plVar53 = (long *)&DAT_cbf29ce484222645;
    plVar64 = (long *)(ulong)puVar16[uVar26 + 1];
    piVar3 = (int *)((long)(puVar16 + uVar26 + 1) + (long)plVar64);
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar52 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar52 != 0)) {
      puVar39 = (uint *)((long)piVar3 + uVar52);
      uVar55 = (ulong)*puVar39;
      pcVar2 = (char *)((long)puVar39 + uVar55 + 4);
      sVar17 = strlen(pcVar2);
      bVar9 = *(byte *)((long)puVar39 + uVar55 + 4);
      plVar67 = plVar53;
      if (bVar9 != 0) {
        pbVar32 = (byte *)((long)plVar64 + lVar15 + uVar55 + uVar52);
        do {
          plVar67 = (long *)(((ulong)plVar67 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar32;
          pbVar32 = pbVar32 + 1;
        } while (bVar9 != 0);
      }
      plVar57 = *(long **)(param_1 + 0xf8);
      plVar65 = plVar64;
      if (plVar57 == (long *)0x0) {
LAB_0130cef4:
        plVar28 = (long *)(**(code **)(**(long **)(param_1 + 0x128) + 0x10))
                                    (*(long **)(param_1 + 0x128),0x58,8);
        if (plVar28 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x128) + 0xe8))();
        }
        plVar69 = *(long **)(param_1 + 0x128);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar18 == 0) {
          plVar28[2] = (long)plVar67;
          plVar28[3] = (long)pcVar2;
          plVar28[6] = 0;
          plVar28[7] = 0;
          plVar28[10] = 0;
          plVar28[8] = 0;
          plVar28[9] = 0;
          plVar28[4] = sVar17;
          plVar28[5] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_0130f0cc;
          *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar69;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          plVar28[2] = (long)plVar67;
          plVar28[3] = (long)pcVar2;
          plVar28[4] = sVar17;
          plVar28[5] = 0;
          plVar28[10] = 0;
          plVar28[6] = 0;
          plVar28[7] = 0;
          plVar28[8] = 0;
          plVar28[9] = 0;
          if (lVar18 != 0) {
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
        }
        *plVar28 = 0;
        plVar28[1] = (long)plVar67;
        fVar70 = (float)(*(long *)(param_1 + 0x148) + 1);
        if ((plVar57 == (long *)0x0) || (*(float *)(param_1 + 0x150) * (float)plVar57 < fVar70)) {
          uVar52 = (ulong)(plVar57 < (long *)0x3 ||
                          ((ulong)plVar57 & (ulong)((long)plVar57 + -1)) != 0) | (long)plVar57 << 1;
          uVar55 = (ulong)(fVar70 / *(float *)(param_1 + 0x150));
          if (uVar55 <= uVar52) {
            uVar55 = uVar52;
          }
          FUN_0130fccc(plVar51,uVar55);
          plVar57 = *(long **)(param_1 + 0xf8);
          if (((ulong)plVar57 & (ulong)((long)plVar57 + -1)) == 0) {
            plVar65 = (long *)((ulong)((long)plVar57 + -1) & (ulong)plVar67);
          }
          else {
            plVar65 = plVar67;
            if (plVar57 <= plVar67) {
              uVar52 = 0;
              if (plVar57 != (long *)0x0) {
                uVar52 = (ulong)plVar67 / (ulong)plVar57;
              }
              plVar65 = (long *)((long)plVar67 - uVar52 * (long)plVar57);
            }
          }
        }
        plVar29 = *(long **)(*plVar51 + (long)plVar65 * 8);
        if (plVar29 == (long *)0x0) {
          *plVar28 = *plVar45;
          *plVar45 = (long)plVar28;
          *(long **)(*plVar51 + (long)plVar65 * 8) = plVar45;
          if (*plVar28 != 0) {
            plVar65 = *(long **)(*plVar28 + 8);
            if (((ulong)plVar57 & (ulong)((long)plVar57 + -1)) == 0) {
              plVar65 = (long *)((ulong)plVar65 & (ulong)((long)plVar57 + -1));
            }
            else if (plVar57 <= plVar65) {
              uVar52 = 0;
              if (plVar57 != (long *)0x0) {
                uVar52 = (ulong)plVar65 / (ulong)plVar57;
              }
              plVar65 = (long *)((long)plVar65 - uVar52 * (long)plVar57);
            }
            plVar29 = (long *)(*plVar51 + (long)plVar65 * 8);
            goto LAB_0130cfc8;
          }
        }
        else {
          *plVar28 = *plVar29;
LAB_0130cfc8:
          *plVar29 = (long)plVar28;
        }
        *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
      }
      else {
        puVar27 = (undefined1 *)((long)plVar57 + -1);
        plVar69 = plVar51;
        if (((ulong)plVar57 & (ulong)puVar27) == 0) {
          plVar65 = (long *)((ulong)puVar27 & (ulong)plVar67);
          plVar28 = *(long **)(*plVar51 + (long)plVar65 * 8);
          if (plVar28 == (long *)0x0) goto LAB_0130cef4;
          do {
            plVar28 = (long *)*plVar28;
            if ((plVar28 == (long *)0x0) ||
               ((long *)plVar28[1] != plVar67 &&
                (long *)((ulong)plVar28[1] & (ulong)puVar27) != plVar65)) goto LAB_0130cef4;
          } while ((long *)plVar28[2] != plVar67);
        }
        else {
          plVar65 = plVar67;
          if (plVar57 <= plVar67) {
            uVar52 = 0;
            if (plVar57 != (long *)0x0) {
              uVar52 = (ulong)plVar67 / (ulong)plVar57;
            }
            plVar65 = (long *)((long)plVar67 - uVar52 * (long)plVar57);
          }
          plVar28 = *(long **)(*plVar51 + (long)plVar65 * 8);
          if (plVar28 == (long *)0x0) goto LAB_0130cef4;
          do {
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_0130cef4;
            plVar29 = (long *)plVar28[1];
            if (plVar29 != plVar67) {
              if (plVar57 <= plVar29) {
                uVar52 = 0;
                if (plVar57 != (long *)0x0) {
                  uVar52 = (ulong)plVar29 / (ulong)plVar57;
                }
                plVar29 = (long *)((long)plVar29 - uVar52 * (long)plVar57);
              }
              if (plVar29 != plVar65) goto LAB_0130cef4;
            }
          } while ((long *)plVar28[2] != plVar67);
        }
      }
      local_b8 = (long *)0x0;
      uStack_b0 = 0;
      local_d0 = (ulong *)0x0;
      local_c8 = (long *)0x0;
      local_c0 = 0;
      plVar65 = *(long **)(param_1 + 0x160);
      if (plVar65 == (long *)0x0) {
LAB_0130d01c:
        plVar57 = (long *)(**(code **)(**(long **)(param_1 + 400) + 0x10))
                                    (*(long **)(param_1 + 400),0x58,8);
        if (plVar57 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 400) + 0xe8))();
        }
        uVar56 = *(undefined8 *)(param_1 + 400);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar18 != 0) {
          if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_0130f0cc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar56;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        }
        plVar57[2] = (long)plVar67;
        plVar57[3] = (long)pcVar2;
        plVar57[4] = sVar17;
        plVar57[5] = 0;
        memcpy(plVar57 + 6,&local_d0,0x28);
        if (lVar18 != 0) {
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        }
        *plVar57 = 0;
        plVar57[1] = (long)plVar67;
        fVar70 = (float)(*(long *)(param_1 + 0x1b0) + 1);
        if ((plVar65 == (long *)0x0) || (*(float *)(param_1 + 0x1b8) * (float)plVar65 < fVar70)) {
          uVar52 = (ulong)(plVar65 < (long *)0x3 ||
                          ((ulong)plVar65 & (ulong)((long)plVar65 + -1)) != 0) | (long)plVar65 << 1;
          uVar55 = (ulong)(fVar70 / *(float *)(param_1 + 0x1b8));
          if (uVar55 <= uVar52) {
            uVar55 = uVar52;
          }
          FUN_0130fdd0(plVar33,uVar55);
          plVar65 = *(long **)(param_1 + 0x160);
          if (((ulong)plVar65 & (ulong)((long)plVar65 + -1)) == 0) {
            plVar69 = (long *)((ulong)((long)plVar65 + -1) & (ulong)plVar67);
          }
          else {
            plVar69 = plVar67;
            if (plVar65 <= plVar67) {
              uVar52 = 0;
              if (plVar65 != (long *)0x0) {
                uVar52 = (ulong)plVar67 / (ulong)plVar65;
              }
              plVar69 = (long *)((long)plVar67 - uVar52 * (long)plVar65);
            }
          }
        }
        plVar28 = *(long **)(*plVar33 + (long)plVar69 * 8);
        if (plVar28 == (long *)0x0) {
          *plVar57 = *plVar1;
          *plVar1 = (long)plVar57;
          *(long **)(*plVar33 + (long)plVar69 * 8) = plVar1;
          if (*plVar57 != 0) {
            plVar69 = *(long **)(*plVar57 + 8);
            if (((ulong)plVar65 & (ulong)((long)plVar65 + -1)) == 0) {
              plVar69 = (long *)((ulong)plVar69 & (ulong)((long)plVar65 + -1));
            }
            else if (plVar65 <= plVar69) {
              uVar52 = 0;
              if (plVar65 != (long *)0x0) {
                uVar52 = (ulong)plVar69 / (ulong)plVar65;
              }
              plVar69 = (long *)((long)plVar69 - uVar52 * (long)plVar65);
            }
            plVar28 = (long *)(*plVar33 + (long)plVar69 * 8);
            goto LAB_0130d0f8;
          }
        }
        else {
          *plVar57 = *plVar28;
LAB_0130d0f8:
          *plVar28 = (long)plVar57;
        }
        *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + 1;
      }
      else {
        puVar27 = (undefined1 *)((long)plVar65 + -1);
        if (((ulong)plVar65 & (ulong)puVar27) == 0) {
          plVar69 = (long *)((ulong)puVar27 & (ulong)plVar67);
          plVar57 = *(long **)(*plVar33 + (long)plVar69 * 8);
          if (plVar57 == (long *)0x0) goto LAB_0130d01c;
          do {
            plVar57 = (long *)*plVar57;
            if ((plVar57 == (long *)0x0) ||
               ((long *)plVar57[1] != plVar67 &&
                (long *)((ulong)plVar57[1] & (ulong)puVar27) != plVar69)) goto LAB_0130d01c;
          } while ((long *)plVar57[2] != plVar67);
        }
        else {
          plVar69 = plVar67;
          if (plVar65 <= plVar67) {
            uVar52 = 0;
            if (plVar65 != (long *)0x0) {
              uVar52 = (ulong)plVar67 / (ulong)plVar65;
            }
            plVar69 = (long *)((long)plVar67 - uVar52 * (long)plVar65);
          }
          plVar57 = *(long **)(*plVar33 + (long)plVar69 * 8);
          if (plVar57 == (long *)0x0) goto LAB_0130d01c;
          do {
            plVar57 = (long *)*plVar57;
            if (plVar57 == (long *)0x0) goto LAB_0130d01c;
            plVar28 = (long *)plVar57[1];
            if (plVar28 != plVar67) {
              if (plVar65 <= plVar28) {
                uVar52 = 0;
                if (plVar65 != (long *)0x0) {
                  uVar52 = (ulong)plVar28 / (ulong)plVar65;
                }
                plVar28 = (long *)((long)plVar28 - uVar52 * (long)plVar65);
              }
              if (plVar28 != plVar69) goto LAB_0130d01c;
            }
          } while ((long *)plVar57[2] != plVar67);
        }
      }
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      plVar65 = *(long **)PTR_DAT_047d3e30;
      plVar57 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (plVar57 != (long *)0x0) {
        (**(code **)(*plVar57 + 0x18))(plVar57);
      }
      puVar40 = (ushort *)((long)piVar3 - (long)*piVar3);
      lVar18 = -(long)*piVar3;
      uVar23 = *puVar40;
      if (0xe < uVar23) {
        uVar52 = (ulong)puVar40[7];
        if (uVar52 != 0) {
          uVar55 = (ulong)*(uint *)((long)piVar3 + uVar52);
          bVar9 = *(byte *)((long)((long)piVar3 + uVar52) + uVar55 + 4);
          if (bVar9 != 0) {
            puVar27 = (undefined1 *)((long)plVar64 + uVar55 + uVar52);
            do {
              plVar53 = (long *)(((ulong)plVar53 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = puVar27[lVar15];
              puVar27 = puVar27 + 1;
            } while (bVar9 != 0);
          }
          plVar65 = plVar53;
          if (plVar57 != (long *)0x0) {
            (**(code **)(*plVar57 + 0x20))(plVar57);
            lVar18 = -(long)*piVar3;
            uVar23 = *(ushort *)((long)piVar3 - (long)*piVar3);
            plVar57 = (long *)0x0;
          }
          goto LAB_0130d1ac;
        }
LAB_0130d1b4:
        uVar52 = (ulong)*(ushort *)((long)piVar3 + lVar18 + 6);
        if (uVar52 == 0) {
          uVar54 = 0;
        }
        else {
          uVar54 = *(undefined4 *)((long)piVar3 + uVar52);
        }
        if ((uVar23 < 0xb) || (uVar52 = (ulong)*(ushort *)((long)piVar3 + lVar18 + 10), uVar52 == 0)
           ) goto LAB_0130d480;
        puVar39 = (uint *)((long)piVar3 + uVar52);
        uVar55 = (ulong)*puVar39;
        plVar53 = (long *)((long)puVar39 + uVar55 + 4);
        local_c0 = strlen((char *)plVar53);
        bVar9 = *(byte *)((long)puVar39 + uVar55 + 4);
        local_d0 = (ulong *)&DAT_cbf29ce484222645;
        if (bVar9 != 0) {
          puVar27 = (undefined1 *)((long)plVar64 + uVar55 + uVar52);
          local_d0 = (ulong *)&DAT_cbf29ce484222645;
          do {
            local_d0 = (ulong *)(((ulong)local_d0 ^ (ulong)bVar9) * 0x100000001b3);
            bVar9 = puVar27[lVar15];
            puVar27 = puVar27 + 1;
          } while (bVar9 != 0);
        }
        local_b8 = (long *)0x0;
        puVar34 = *(ulong **)(param_1 + 0x1c8);
        local_c8 = plVar53;
        if (puVar34 == (ulong *)0x0) goto LAB_0130d480;
        uVar52 = (long)puVar34 - ((ulong)puVar34 >> 1 & 0x5555555555555555);
        uVar52 = (uVar52 & 0x3333333333333333) + (uVar52 >> 2 & 0x3333333333333333);
        uVar52 = (uVar52 + (uVar52 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar52 < 2) {
          puVar41 = (ulong *)((ulong)((long)puVar34 + -1) & (ulong)local_d0);
        }
        else {
          puVar41 = local_d0;
          if (puVar34 <= local_d0) {
            uVar55 = 0;
            if (puVar34 != (ulong *)0x0) {
              uVar55 = (ulong)local_d0 / (ulong)puVar34;
            }
            puVar41 = (ulong *)((long)local_d0 - uVar55 * (long)puVar34);
          }
        }
        plVar53 = *(long **)(*(long *)(param_1 + 0x1c0) + (long)puVar41 * 8);
        if ((plVar53 != (long *)0x0) && (plVar53 = (long *)*plVar53, plVar53 != (long *)0x0)) {
          if (uVar52 < 2) {
            do {
              if ((ulong *)plVar53[1] == local_d0) {
                if ((ulong *)plVar53[2] == local_d0) goto LAB_0130d350;
              }
              else if ((ulong *)((ulong)plVar53[1] & (ulong)((long)puVar34 + -1)) != puVar41) break;
              plVar53 = (long *)*plVar53;
            } while (plVar53 != (long *)0x0);
          }
          else {
            do {
              puVar46 = (ulong *)plVar53[1];
              if (puVar46 == local_d0) {
                if ((ulong *)plVar53[2] == local_d0) goto LAB_0130d350;
              }
              else {
                if (puVar34 <= puVar46) {
                  uVar52 = 0;
                  if (puVar34 != (ulong *)0x0) {
                    uVar52 = (ulong)puVar46 / (ulong)puVar34;
                  }
                  puVar46 = (ulong *)((long)puVar46 - uVar52 * (long)puVar34);
                }
                if (puVar46 != puVar41) break;
              }
              plVar53 = (long *)*plVar53;
            } while (plVar53 != (long *)0x0);
          }
        }
        goto LAB_0130d474;
      }
LAB_0130d1ac:
      if (6 < uVar23) goto LAB_0130d1b4;
      goto LAB_0130d480;
    }
    goto LAB_0130d48c;
  }
  goto LAB_0130d964;
LAB_0130e274:
  if (uVar66 < 2) {
    puVar31 = (undefined1 *)((ulong)puVar44 & (ulong)puVar27);
  }
  else {
    puVar31 = puVar27;
    if (puVar36 <= puVar27) {
      puVar31 = puVar27 + -(uVar62 * (long)puVar36);
    }
  }
  plVar45 = *(long **)(*(long *)(param_1 + 0x228) + (long)puVar31 * 8);
  if ((plVar45 == (long *)0x0) || (plVar45 = (long *)*plVar45, plVar45 == (long *)0x0)) {
LAB_0130f200:
                    /* WARNING: Subroutine does not return */
    FUN_022518a0();
  }
  if (uVar66 < 2) {
    do {
      if ((undefined1 *)plVar45[1] == puVar27) {
        if ((undefined1 *)plVar45[2] == puVar27) goto LAB_0130e2bc;
      }
      else if ((undefined1 *)((ulong)plVar45[1] & (ulong)puVar44) != puVar31) goto LAB_0130f200;
      plVar45 = (long *)*plVar45;
      if (plVar45 == (long *)0x0) goto LAB_0130f200;
    } while( true );
  }
  do {
    puVar44 = (undefined1 *)plVar45[1];
    if (puVar44 == puVar27) {
      if ((undefined1 *)plVar45[2] == puVar27) break;
    }
    else {
      if (puVar36 <= puVar44) {
        uVar62 = 0;
        if (puVar36 != (undefined1 *)0x0) {
          uVar62 = (ulong)puVar44 / (ulong)puVar36;
        }
        puVar44 = puVar44 + -(uVar62 * (long)puVar36);
      }
      if (puVar44 != puVar31) goto LAB_0130f200;
    }
    plVar45 = (long *)*plVar45;
    if (plVar45 == (long *)0x0) goto LAB_0130f200;
  } while( true );
LAB_0130e2bc:
  FUN_0130f258(&local_d0,plVar45 + 6);
  if (local_90 == '\0') {
    uVar56 = nn::pl::GetSharedFontAddress(local_8c);
  }
  else {
    uVar56 = (**(code **)(*local_c8 + 0x70))();
  }
  if (local_90 == '\0') {
    lVar42 = nn::pl::GetSharedFontSize(local_8c);
    uVar25 = 0;
    if (local_90 != '\0') {
      uVar25 = 3;
    }
  }
  else {
    if (local_c8 == (long *)0x0) {
      lVar42 = 0;
    }
    else {
      lVar42 = local_c8[0x3b];
    }
    uVar25 = 3;
  }
  FUN_00db239c(&local_d0);
LAB_0130e30c:
  plVar45 = (long *)FUN_0130f3f4(param_1 + 0x1c0,&local_120);
  lVar37 = *plVar45;
  lVar68 = lVar37 + 0x38;
  puVar4 = (uint *)(lVar68 + lVar18 * 4 + 0x16a1c);
  lVar5 = lVar68 + lVar18 * 0x40;
  *(undefined4 *)(lVar5 + (ulong)*puVar4 * 4 + 0x2018) = uVar49;
  lVar6 = lVar68 + lVar18 * 0x10;
  *(undefined1 *)(lVar6 + (ulong)*puVar4 + 0x2818) = uVar63;
  *(undefined4 *)(lVar5 + (ulong)*puVar4 * 4 + 0x2a18) = uVar50;
  *(undefined4 *)(lVar5 + (ulong)*puVar4 * 4 + 0x3218) = uVar61;
  *(bool *)(lVar6 + (ulong)*puVar4 + 0x4218) = bVar11;
  *(bool *)(lVar6 + (ulong)*puVar4 + 0x4418) = bVar12;
  lVar7 = lVar68 + lVar18 * 0x20;
  lVar68 = lVar68 + lVar18 * 0x80;
  *(undefined2 *)(lVar7 + (ulong)*puVar4 * 2 + 0x4618) = uVar20;
  *(bool *)(lVar6 + (ulong)*puVar4 + 0x4a18) = bVar13;
  *(undefined2 *)(lVar7 + (ulong)*puVar4 * 2 + 0x4e18) = uVar21;
  *(undefined4 *)(lVar5 + (ulong)*puVar4 * 4 + 0x5218) = uVar22;
  *(undefined8 *)(lVar68 + (ulong)*puVar4 * 8 + 0x18) = uVar56;
  *(long *)(lVar68 + (ulong)*puVar4 * 8 + 0x1018) = lVar42;
  *(undefined4 *)(lVar5 + (ulong)*puVar4 * 4 + 0x3a18) = uVar25;
  piVar3 = (int *)(lVar37 + 0x16a50);
  if (*piVar3 <= iVar8) {
    *piVar3 = iVar8 + 1;
  }
  *puVar4 = *puVar4 + 1;
  uVar55 = uVar55 + 1;
  lVar15 = lVar15 + 4;
  if (*puVar38 <= uVar55) goto LAB_0130e534;
  goto LAB_0130e05c;
LAB_0130e640:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
LAB_0130e648:
  uVar24 = *puVar16;
LAB_0130e654:
  uVar26 = uVar26 + 1;
  local_228 = local_228 + 4;
  if (uVar24 <= uVar26) goto LAB_0130cdac;
  goto LAB_0130dcd8;
LAB_0130d350:
  plVar53 = (long *)FUN_0130f3f4((long *)(param_1 + 0x1c0),&local_d0);
  lVar18 = *plVar53;
  plVar53 = (long *)(lVar18 + 0x20);
  if (lVar18 == 0) {
    puVar35 = *(undefined8 **)(param_1 + 0x328);
    puVar30 = *(undefined8 **)(param_1 + 0x330);
    puVar19 = puVar35;
    if ((puVar35 != puVar30) && ((long *)*puVar35 != plVar65)) {
      do {
        puVar19 = puVar19 + 4;
        if (puVar30 == puVar19) {
          puVar19 = puVar30;
          goto LAB_0130e8a0;
        }
      } while ((long *)*puVar19 != plVar65);
    }
LAB_0130e8a0:
    iVar14 = 0;
    if (puVar30 != puVar19) {
      iVar14 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5;
    }
    local_130 = (long *)0x0;
    local_128 = 0;
    local_148 = plVar67;
    pcStack_140 = pcVar2;
    local_138 = sVar17;
    FUN_0130f5f8(param_1,*(undefined8 *)(param_1 + 0x80),&local_128,0,iVar14,&local_148,uVar54);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    puVar35 = *(undefined8 **)(param_1 + 0x328);
    puVar30 = *(undefined8 **)(param_1 + 0x330);
    puVar19 = puVar35;
    if ((puVar35 != puVar30) && ((long *)*puVar35 != plVar65)) {
      do {
        puVar19 = puVar19 + 4;
        if (puVar30 == puVar19) {
          puVar19 = puVar30;
          goto LAB_0130e90c;
        }
      } while ((long *)*puVar19 != plVar65);
    }
LAB_0130e90c:
    iVar14 = 0;
    if (puVar30 != puVar19) {
      iVar14 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5 + 1;
    }
    local_130 = (long *)0x0;
    local_128 = 0;
    local_148 = plVar67;
    pcStack_140 = pcVar2;
    local_138 = sVar17;
    FUN_0130f5f8(param_1,*(undefined8 *)(param_1 + 0x80),&local_128,1,iVar14,&local_148,uVar54);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    puVar35 = *(undefined8 **)(param_1 + 0x328);
    puVar30 = *(undefined8 **)(param_1 + 0x330);
    puVar19 = puVar35;
    if ((puVar35 != puVar30) && ((long *)*puVar35 != plVar65)) {
      do {
        puVar19 = puVar19 + 4;
        if (puVar30 == puVar19) {
          puVar19 = puVar30;
          goto LAB_0130e978;
        }
      } while ((long *)*puVar19 != plVar65);
    }
LAB_0130e978:
    local_130 = (long *)0x0;
    local_128 = 0;
    iVar14 = 0;
    if (puVar30 != puVar19) {
      iVar14 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5 + 2;
    }
    local_148 = plVar67;
    pcStack_140 = pcVar2;
    local_138 = sVar17;
    FUN_0130f5f8(param_1,*(undefined8 *)(param_1 + 0x80),&local_128,2,iVar14,&local_148,uVar54);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    puVar35 = *(undefined8 **)(param_1 + 0x328);
    puVar30 = *(undefined8 **)(param_1 + 0x330);
    puVar19 = puVar35;
    if ((puVar35 != puVar30) && ((long *)*puVar35 != plVar65)) {
      do {
        puVar19 = puVar19 + 4;
        if (puVar30 == puVar19) {
          puVar19 = puVar30;
          goto LAB_0130e9e8;
        }
      } while ((long *)*puVar19 != plVar65);
    }
LAB_0130e9e8:
    local_130 = (long *)0x0;
    local_128 = 0;
    iVar14 = 0;
    if (puVar30 != puVar19) {
      iVar14 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5 + 3;
    }
    local_148 = plVar67;
    pcStack_140 = pcVar2;
    local_138 = sVar17;
    FUN_0130f5f8(param_1,*(undefined8 *)(param_1 + 0x80),&local_128,3,iVar14,&local_148,uVar54);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    puVar35 = *(undefined8 **)(param_1 + 0x328);
    puVar30 = *(undefined8 **)(param_1 + 0x330);
    puVar19 = puVar35;
    if ((puVar35 != puVar30) && ((long *)*puVar35 != plVar65)) {
      do {
        puVar19 = puVar19 + 4;
        if (puVar30 == puVar19) {
          puVar19 = puVar30;
          goto LAB_0130ea58;
        }
      } while ((long *)*puVar19 != plVar65);
    }
LAB_0130ea58:
    local_130 = (long *)0x0;
    local_128 = 0;
    iVar14 = 0;
    if (puVar30 != puVar19) {
      iVar14 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5 + 4;
    }
    local_148 = plVar67;
    pcStack_140 = pcVar2;
    local_138 = sVar17;
    FUN_0130f5f8(param_1,*(undefined8 *)(param_1 + 0x80),&local_128,4,iVar14,&local_148,uVar54);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
  }
  else {
    (**(code **)(*plVar53 + 0x10))(plVar53);
    iVar14 = 0;
    do {
      puVar35 = *(undefined8 **)(param_1 + 0x328);
      puVar30 = *(undefined8 **)(param_1 + 0x330);
      puVar19 = puVar35;
      if ((puVar35 != puVar30) && ((long *)*puVar35 != plVar65)) {
        do {
          puVar19 = puVar19 + 4;
          if (puVar30 == puVar19) {
            puVar19 = puVar30;
            goto LAB_0130d39c;
          }
        } while ((long *)*puVar19 != plVar65);
      }
LAB_0130d39c:
      uVar56 = *(undefined8 *)(param_1 + 0x80);
      iVar8 = 0;
      if (puVar30 != puVar19) {
        iVar8 = (int)((ulong)((long)puVar19 - (long)puVar35) >> 5) * 5 + iVar14;
      }
      local_128 = lVar18;
      (**(code **)(*(long *)(lVar18 + 0x20) + 0x10))(plVar53);
      local_130 = (long *)0x0;
      local_148 = plVar67;
      pcStack_140 = pcVar2;
      local_138 = sVar17;
      FUN_0130f5f8(param_1,uVar56,&local_128,iVar14,iVar8,&local_148,uVar54);
      if (local_130 != (long *)0x0) {
        (**(code **)(*local_130 + 0x20))();
      }
      (**(code **)(*plVar53 + 0x18))(plVar53);
      iVar14 = iVar14 + 1;
    } while (iVar14 != 5);
  }
  if (lVar18 != 0) {
    (**(code **)(*plVar53 + 0x18))(plVar53);
  }
LAB_0130d474:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
LAB_0130d480:
  if (plVar57 != (long *)0x0) {
    (**(code **)(*plVar57 + 0x20))(plVar57);
  }
  uVar24 = *puVar16;
LAB_0130d48c:
  uVar26 = uVar26 + 1;
  lVar15 = lVar15 + 4;
  if (uVar24 <= uVar26) goto LAB_0130d650;
  goto LAB_0130ce38;
LAB_0130d650:
  if (uVar24 != 0) {
    uVar26 = 0;
    lVar15 = (long)puVar16 + 9;
LAB_0130d65c:
    puVar27 = &DAT_cbf29ce484222645;
    uVar52 = (ulong)puVar16[uVar26 + 1];
    piVar3 = (int *)((long)(puVar16 + uVar26 + 1) + uVar52);
    puVar40 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar23 = *puVar40;
    if ((4 < uVar23) && (uVar55 = (ulong)puVar40[2], uVar55 != 0)) {
      puVar39 = (uint *)((long)piVar3 + uVar55);
      uVar62 = (ulong)*puVar39;
      pcVar2 = (char *)((long)puVar39 + uVar62 + 4);
      sVar17 = strlen(pcVar2);
      bVar9 = *(byte *)((long)puVar39 + uVar62 + 4);
      if (bVar9 != 0) {
        puVar27 = &DAT_cbf29ce484222645;
        pbVar32 = (byte *)(lVar15 + uVar62 + uVar55 + uVar52);
        do {
          puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar32;
          pbVar32 = pbVar32 + 1;
        } while (bVar9 != 0);
      }
      if ((uVar23 < 0xd) || ((ulong)puVar40[6] == 0)) goto LAB_0130d8f4;
      puVar39 = (uint *)((long)piVar3 + (ulong)puVar40[6]);
      pcVar60 = (char *)((long)puVar39 + (ulong)*puVar39 + 4);
      if (*pcVar60 == '\0') {
        puVar34 = (ulong *)FUN_00d44228();
        if (puVar34 != (ulong *)0x0) {
          (**(code **)(*puVar34 + 0x18))(puVar34);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar14 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar56 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar56;
        FUN_00cf9884(&local_d0,uVar56,pcVar60);
        puVar34 = local_d0;
      }
      if (((*PTR_DAT_047d8af8 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8af8);
      }
      uVar56 = *(undefined8 *)PTR_DAT_047d8b00;
      *(undefined8 *)PTR_DAT_047d8b08 = uVar56;
      if (((*PTR_DAT_047db110 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047db110), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047db110);
      }
      lVar18 = *(long *)PTR_DAT_047db118;
      *(long *)PTR_DAT_047db120 = lVar18;
      local_150 = (long *)0x0;
      puVar36 = *(undefined1 **)(lVar18 + 0xf8);
      local_168 = puVar27;
      pcStack_160 = pcVar2;
      local_158 = sVar17;
      if (puVar36 == (undefined1 *)0x0) {
LAB_0130f02c:
        plVar51 = (long *)0x0;
      }
      else {
        uVar52 = (long)puVar36 - ((ulong)puVar36 >> 1 & 0x5555555555555555);
        uVar52 = (uVar52 & 0x3333333333333333) + (uVar52 >> 2 & 0x3333333333333333);
        uVar52 = (uVar52 + (uVar52 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar52 < 2) {
          puVar31 = (undefined1 *)((ulong)(puVar36 + -1) & (ulong)puVar27);
        }
        else {
          puVar31 = puVar27;
          if (puVar36 <= puVar27) {
            uVar55 = 0;
            if (puVar36 != (undefined1 *)0x0) {
              uVar55 = (ulong)puVar27 / (ulong)puVar36;
            }
            puVar31 = puVar27 + -(uVar55 * (long)puVar36);
          }
        }
        plVar33 = *(long **)(*(long *)(lVar18 + 0xf0) + (long)puVar31 * 8);
        if ((plVar33 == (long *)0x0) || (plVar33 = (long *)*plVar33, plVar33 == (long *)0x0))
        goto LAB_0130f02c;
        if (1 < uVar52) {
          do {
            puVar44 = (undefined1 *)plVar33[1];
            if (puVar44 == puVar27) {
              if ((undefined1 *)plVar33[2] == puVar27) goto LAB_0130d868;
            }
            else {
              if (puVar36 <= puVar44) {
                uVar52 = 0;
                if (puVar36 != (undefined1 *)0x0) {
                  uVar52 = (ulong)puVar44 / (ulong)puVar36;
                }
                puVar44 = puVar44 + -(uVar52 * (long)puVar36);
              }
              if (puVar44 != puVar31) break;
            }
            plVar33 = (long *)*plVar33;
          } while (plVar33 != (long *)0x0);
          goto LAB_0130f02c;
        }
        do {
          if ((undefined1 *)plVar33[1] == puVar27) {
            if ((undefined1 *)plVar33[2] == puVar27) goto LAB_0130d868;
          }
          else if ((undefined1 *)((ulong)plVar33[1] & (ulong)(puVar36 + -1)) != puVar31)
          goto LAB_0130f02c;
          plVar33 = (long *)*plVar33;
          plVar51 = (long *)0x0;
        } while (plVar33 != (long *)0x0);
      }
      goto LAB_0130d894;
    }
    goto LAB_0130d8f4;
  }
LAB_0130d964:
  if ((*(ushort *)((long)piVar43 - (long)*piVar43) < 5) ||
     (uVar26 = (ulong)((ushort *)((long)piVar43 - (long)*piVar43))[2], uVar26 == 0)) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = (uint *)((long)piVar43 + uVar26);
    puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
  }
  if (*puVar16 == 0) {
    return;
  }
  uVar26 = 0;
  lVar15 = (long)puVar16 + 9;
LAB_0130d9a8:
  puVar27 = &DAT_cbf29ce484222645;
  uVar52 = (ulong)puVar16[uVar26 + 1];
  piVar43 = (int *)((long)(puVar16 + uVar26 + 1) + uVar52);
  puVar40 = (ushort *)((long)piVar43 - (long)*piVar43);
  if ((4 < *puVar40) && (uVar55 = (ulong)puVar40[2], uVar55 != 0)) {
    puVar39 = (uint *)((long)piVar43 + uVar55);
    uVar62 = (ulong)*puVar39;
    pcVar2 = (char *)((long)puVar39 + uVar62 + 4);
    sVar17 = strlen(pcVar2);
    bVar9 = *(byte *)((long)puVar39 + uVar62 + 4);
    if (bVar9 != 0) {
      puVar27 = &DAT_cbf29ce484222645;
      pbVar32 = (byte *)(lVar15 + uVar62 + uVar55 + uVar52);
      do {
        puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar32;
        pbVar32 = pbVar32 + 1;
      } while (bVar9 != 0);
    }
    pcVar60 = (char *)((long)((long)piVar43 + (ulong)puVar40[4]) +
                      (ulong)*(uint *)((long)piVar43 + (ulong)puVar40[4]) + 4);
    if (*pcVar60 == '\0') {
      puVar34 = (ulong *)FUN_00d44228();
      if (puVar34 != (ulong *)0x0) {
        (**(code **)(*puVar34 + 0x18))(puVar34);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar56 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar56;
      FUN_00cf9884(&local_d0,uVar56,pcVar60);
      puVar34 = local_d0;
    }
    if (((*PTR_DAT_047d8af8 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8af8);
    }
    uVar56 = *(undefined8 *)PTR_DAT_047d8b00;
    *(undefined8 *)PTR_DAT_047d8b08 = uVar56;
    if (((*PTR_DAT_047db110 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047db110), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047db110);
    }
    lVar18 = *(long *)PTR_DAT_047db118;
    *(long *)PTR_DAT_047db120 = lVar18;
    local_178 = (long *)0x0;
    puVar36 = *(undefined1 **)(lVar18 + 0x90);
    local_190 = puVar27;
    pcStack_188 = pcVar2;
    local_180 = sVar17;
    if (puVar36 == (undefined1 *)0x0) {
LAB_0130f204:
      lVar68 = 0;
    }
    else {
      uVar52 = (long)puVar36 - ((ulong)puVar36 >> 1 & 0x5555555555555555);
      uVar52 = (uVar52 & 0x3333333333333333) + (uVar52 >> 2 & 0x3333333333333333);
      uVar55 = (uVar52 + (uVar52 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uVar52 = 0;
      if (puVar36 != (undefined1 *)0x0) {
        uVar52 = (ulong)puVar27 / (ulong)puVar36;
      }
      plVar33 = (long *)(lVar18 + 0x88);
      if (uVar55 < 2) {
        puVar31 = (undefined1 *)((ulong)(puVar36 + -1) & (ulong)puVar27);
      }
      else {
        puVar31 = puVar27;
        if (puVar36 <= puVar27) {
          puVar31 = puVar27 + -(uVar52 * (long)puVar36);
        }
      }
      lVar42 = *plVar33;
      plVar51 = *(long **)(lVar42 + (long)puVar31 * 8);
      if ((plVar51 == (long *)0x0) || (plVar51 = (long *)*plVar51, plVar51 == (long *)0x0))
      goto LAB_0130f204;
      puVar44 = puVar36 + -1;
      if (uVar55 < 2) {
        do {
          if ((undefined1 *)plVar51[1] == puVar27) {
            if ((undefined1 *)plVar51[2] == puVar27) goto LAB_0130db84;
          }
          else if ((undefined1 *)((ulong)plVar51[1] & (ulong)puVar44) != puVar31) goto LAB_0130f204;
          plVar51 = (long *)*plVar51;
          lVar68 = 0;
        } while (plVar51 != (long *)0x0);
      }
      else {
        do {
          puVar48 = (undefined1 *)plVar51[1];
          if (puVar48 == puVar27) {
            if ((undefined1 *)plVar51[2] == puVar27) goto LAB_0130db84;
          }
          else {
            if (puVar36 <= puVar48) {
              uVar62 = 0;
              if (puVar36 != (undefined1 *)0x0) {
                uVar62 = (ulong)puVar48 / (ulong)puVar36;
              }
              puVar48 = puVar48 + -(uVar62 * (long)puVar36);
            }
            if (puVar48 != puVar31) goto LAB_0130f204;
          }
          plVar51 = (long *)*plVar51;
          lVar68 = 0;
        } while (plVar51 != (long *)0x0);
      }
    }
    goto LAB_0130dbd8;
  }
  goto LAB_0130dc18;
LAB_0130d868:
  puVar19 = (undefined8 *)FUN_00c822f8((long *)(lVar18 + 0xf0),&local_168);
  plVar51 = (long *)*puVar19;
  if (plVar51 != (long *)0x0) {
    plVar33 = plVar51 + 5;
    do {
      lVar18 = *plVar33;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar12) {
        *(int *)plVar33 = (int)lVar18 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((int)lVar18 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
LAB_0130d894:
  local_170 = puVar34;
  if (puVar34 != (ulong *)0x0) {
    (**(code **)(*puVar34 + 0x18))(puVar34);
  }
  FUN_0130fed4(uVar56,plVar51 + 8,&local_170);
  if (local_170 != (ulong *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (plVar51 != (long *)0x0) {
    plVar33 = plVar51 + 5;
    do {
      lVar18 = *plVar33;
      iVar14 = (int)lVar18 + -1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar12) {
        *(int *)plVar33 = iVar14;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar51 + 0x10))(plVar51);
    }
    else if ((int)lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (puVar34 != (ulong *)0x0) {
    (**(code **)(*puVar34 + 0x20))(puVar34);
  }
LAB_0130d8f4:
  uVar26 = uVar26 + 1;
  lVar15 = lVar15 + 4;
  if (*puVar16 <= uVar26) goto LAB_0130d964;
  goto LAB_0130d65c;
LAB_0130db84:
  local_88 = &local_190;
  if (uVar55 < 2) {
    puVar31 = (undefined1 *)((ulong)puVar44 & (ulong)puVar27);
    puVar41 = *(ulong **)(lVar42 + (long)puVar31 * 8);
    if (puVar41 != (ulong *)0x0) {
      do {
        puVar41 = (ulong *)*puVar41;
        if ((puVar41 == (ulong *)0x0) ||
           ((undefined1 *)puVar41[1] != puVar27 &&
            (undefined1 *)(puVar41[1] & (ulong)puVar44) != puVar31)) goto LAB_0130e740;
      } while ((undefined1 *)puVar41[2] != puVar27);
      goto LAB_0130dbcc;
    }
  }
  else {
    puVar31 = puVar27;
    if (puVar36 <= puVar27) {
      puVar31 = puVar27 + -(uVar52 * (long)puVar36);
    }
    puVar41 = *(ulong **)(lVar42 + (long)puVar31 * 8);
    if (puVar41 != (ulong *)0x0) {
      do {
        puVar41 = (ulong *)*puVar41;
        if (puVar41 == (ulong *)0x0) goto LAB_0130e740;
        puVar44 = (undefined1 *)puVar41[1];
        if (puVar44 != puVar27) {
          if (puVar36 <= puVar44) {
            uVar52 = 0;
            if (puVar36 != (undefined1 *)0x0) {
              uVar52 = (ulong)puVar44 / (ulong)puVar36;
            }
            puVar44 = puVar44 + -(uVar52 * (long)puVar36);
          }
          if (puVar44 != puVar31) goto LAB_0130e740;
        }
      } while ((undefined1 *)puVar41[2] != puVar27);
      goto LAB_0130dbcc;
    }
  }
LAB_0130e740:
  FUN_01311e04(&local_d0,plVar33,puVar27,&local_88);
  fVar70 = (float)(*(long *)(lVar18 + 0xe0) + 1);
  if (*(float *)(lVar18 + 0xe8) * (float)puVar36 < fVar70) {
    uVar52 = (ulong)(puVar36 < (undefined1 *)0x3 || 1 < uVar55) | (long)puVar36 << 1;
    uVar55 = (ulong)(fVar70 / *(float *)(lVar18 + 0xe8));
    if (uVar55 <= uVar52) {
      uVar55 = uVar52;
    }
    FUN_015f4230(plVar33,uVar55);
    puVar36 = *(undefined1 **)(lVar18 + 0x90);
    if (((ulong)puVar36 & (ulong)(puVar36 + -1)) == 0) {
      puVar31 = (undefined1 *)((ulong)(puVar36 + -1) & (ulong)puVar27);
    }
    else {
      puVar31 = puVar27;
      if (puVar36 <= puVar27) {
        uVar52 = 0;
        if (puVar36 != (undefined1 *)0x0) {
          uVar52 = (ulong)puVar27 / (ulong)puVar36;
        }
        puVar31 = puVar27 + -(uVar52 * (long)puVar36);
      }
    }
  }
  puVar41 = *(ulong **)(*plVar33 + (long)puVar31 * 8);
  if (puVar41 == (ulong *)0x0) {
    puVar41 = (ulong *)(lVar18 + 0xb8);
    *local_d0 = *puVar41;
    *puVar41 = (ulong)local_d0;
    *(ulong **)(*(long *)(lVar18 + 0x88) + (long)puVar31 * 8) = puVar41;
    if (*local_d0 != 0) {
      puVar27 = *(undefined1 **)(*local_d0 + 8);
      if (((ulong)puVar36 & (ulong)(puVar36 + -1)) == 0) {
        puVar27 = (undefined1 *)((ulong)puVar27 & (ulong)(puVar36 + -1));
      }
      else if (puVar36 <= puVar27) {
        uVar52 = 0;
        if (puVar36 != (undefined1 *)0x0) {
          uVar52 = (ulong)puVar27 / (ulong)puVar36;
        }
        puVar27 = puVar27 + -(uVar52 * (long)puVar36);
      }
      *(ulong **)(*plVar33 + (long)puVar27 * 8) = local_d0;
    }
  }
  else {
    *local_d0 = *puVar41;
    *puVar41 = (ulong)local_d0;
  }
  *(long *)(lVar18 + 0xe0) = *(long *)(lVar18 + 0xe0) + 1;
  puVar41 = local_d0;
LAB_0130dbcc:
  lVar68 = *(long *)(puVar41[7] + 0x1f8) + 0x58;
LAB_0130dbd8:
  local_198 = puVar34;
  if (puVar34 != (ulong *)0x0) {
    (**(code **)(*puVar34 + 0x18))(puVar34);
  }
  FUN_0130fed4(uVar56,lVar68,&local_198);
  if (local_198 != (ulong *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (puVar34 != (ulong *)0x0) {
    (**(code **)(*puVar34 + 0x20))(puVar34);
  }
LAB_0130dc18:
  uVar26 = uVar26 + 1;
  lVar15 = lVar15 + 4;
  if (*puVar16 <= uVar26) {
    return;
  }
  goto LAB_0130d9a8;
}


