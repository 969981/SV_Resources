/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da41b8; name: FUN_00da41b8
 */


void FUN_00da41b8(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint *puVar23;
  long lVar24;
  undefined1 *local_4e8;
  byte *pbStack_4e0;
  size_t local_4d8;
  undefined8 uStack_4d0;
  byte local_4c8 [1024];
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  size_t local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  
  plVar9 = (long *)FUN_00f618d8(param_2);
  puVar5 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar9 != 0) {
    puVar5 = (undefined8 *)(*plVar9 + 0x38);
  }
  pcVar10 = strrchr((char *)*puVar5,0x2f);
  if (pcVar10 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_88 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_80 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_78 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_70 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    pbVar17 = (byte *)(pcVar10 + 1);
    puVar19 = &DAT_cbf29ce484222645;
    local_78 = strlen((char *)pbVar17);
    bVar6 = *pbVar17;
    if (bVar6 != 0) {
      pbVar20 = (byte *)(pcVar10 + 2);
      do {
        puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (bVar6 != 0);
    }
    local_70 = (long *)0x0;
    local_88 = puVar19;
    pbStack_80 = pbVar17;
  }
  plVar9 = (long *)FUN_00da5a60(**(long **)(param_1 + 0x70) + 0x2d8,&local_88);
  puVar11 = (uint *)(**(code **)(**(long **)(param_2 + 8) + 0x70))();
  if (puVar11 != (uint *)0x0) {
    piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
    if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar16 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar16);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar11 = puVar2 + 1;
      uVar16 = (ulong)*puVar2;
      if (uVar16 != 0) {
        puVar2 = puVar11 + uVar16;
        do {
          piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
          puVar15 = (ushort *)((long)piVar1 - (long)*piVar1);
          if ((6 < *puVar15) && (puVar15[3] != 0)) {
            if ((ulong)puVar15[2] == 0) {
              lVar14 = 0;
            }
            else {
              puVar23 = (uint *)((long)piVar1 + (ulong)puVar15[2]);
              lVar14 = (long)puVar23 + (ulong)*puVar23;
            }
            local_98 = strlen((char *)(lVar14 + 4));
            bVar6 = *(byte *)(lVar14 + 4);
            local_a8 = &DAT_cbf29ce484222645;
            if (bVar6 != 0) {
              local_a8 = &DAT_cbf29ce484222645;
              pbVar17 = (byte *)(lVar14 + 5);
              do {
                local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (bVar6 != 0);
            }
            uStack_90 = 0;
            pcStack_a0 = (char *)(lVar14 + 4);
            plVar12 = (long *)FUN_00da473c(param_1,&local_88,&local_a8,param_3);
            if (plVar12 != (long *)0x0) {
              puVar3 = (uint *)((long)piVar1 +
                               (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
              puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
              puVar23 = puVar3 + 1;
              uVar16 = (ulong)*puVar3;
              if (uVar16 != 0) {
                puVar3 = puVar23 + uVar16;
LAB_00da43a0:
                piVar1 = (int *)((long)puVar23 + (ulong)*puVar23);
                if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
                   (uVar16 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar16 == 0)) {
                  lVar14 = 0;
                }
                else {
                  puVar4 = (uint *)((long)piVar1 + uVar16);
                  lVar14 = (long)puVar4 + (ulong)*puVar4;
                }
                pcVar10 = (char *)(lVar14 + 4);
                local_b8 = strlen(pcVar10);
                bVar6 = *(byte *)(lVar14 + 4);
                local_c8 = &DAT_cbf29ce484222645;
                if (bVar6 != 0) {
                  local_c8 = &DAT_cbf29ce484222645;
                  pbVar17 = (byte *)(lVar14 + 5);
                  do {
                    local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar6) * 0x100000001b3);
                    bVar6 = *pbVar17;
                    pbVar17 = pbVar17 + 1;
                  } while (bVar6 != 0);
                }
                uStack_b0 = 0;
                puVar19 = (undefined1 *)plVar9[1];
                pcStack_c0 = pcVar10;
                if (puVar19 != (undefined1 *)0x0) {
                  uVar16 = (long)puVar19 - ((ulong)puVar19 >> 1 & 0x5555555555555555);
                  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
                  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar16 < 2) {
                    puVar21 = (undefined1 *)((ulong)(puVar19 + -1) & (ulong)local_c8);
                  }
                  else {
                    puVar21 = local_c8;
                    if (puVar19 <= local_c8) {
                      uVar7 = 0;
                      if (puVar19 != (undefined1 *)0x0) {
                        uVar7 = (ulong)local_c8 / (ulong)puVar19;
                      }
                      puVar21 = local_c8 + -(uVar7 * (long)puVar19);
                    }
                  }
                  plVar18 = *(long **)(*plVar9 + (long)puVar21 * 8);
                  if ((plVar18 != (long *)0x0) &&
                     (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
                    if (uVar16 < 2) {
                      do {
                        if ((undefined1 *)plVar18[1] == local_c8) {
                          if ((undefined1 *)plVar18[2] == local_c8) goto LAB_00da44b8;
                        }
                        else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar19 + -1)) !=
                                 puVar21) break;
                        plVar18 = (long *)*plVar18;
                      } while (plVar18 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar22 = (undefined1 *)plVar18[1];
                        if (puVar22 == local_c8) {
                          if ((undefined1 *)plVar18[2] == local_c8) goto LAB_00da44b8;
                        }
                        else {
                          if (puVar19 <= puVar22) {
                            uVar16 = 0;
                            if (puVar19 != (undefined1 *)0x0) {
                              uVar16 = (ulong)puVar22 / (ulong)puVar19;
                            }
                            puVar22 = puVar22 + -(uVar16 * (long)puVar19);
                          }
                          if (puVar22 != puVar21) break;
                        }
                        plVar18 = (long *)*plVar18;
                      } while (plVar18 != (long *)0x0);
                    }
                  }
                }
                lVar14 = FUN_00da473c(param_1,&local_88,&local_c8,param_3);
                goto LAB_00da4628;
              }
            }
          }
LAB_00da4658:
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar2);
      }
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
LAB_00da44b8:
  if (((param_4 == (int *)0x0) || (*(ushort *)((long)param_4 - (long)*param_4) < 0xf)) ||
     (uVar16 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7], uVar16 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar4 = (uint *)((long)param_4 + uVar16);
    lVar14 = (long)puVar4 + (ulong)*puVar4;
  }
  lVar24 = plVar18[6];
  uVar13 = FUN_00da4b88(**(undefined8 **)(param_1 + 0x70),0,lVar24,lVar14);
  memset(local_4c8,0,0x400);
  FUN_00da5618(local_4c8,param_3,lVar24,lVar14);
  local_4d8 = strlen((char *)local_4c8);
  local_4e8 = &DAT_cbf29ce484222645;
  if (local_4c8[0] != 0) {
    local_4e8 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)((ulong)local_4c8 | 1);
    bVar6 = local_4c8[0];
    do {
      local_4e8 = (undefined1 *)(((ulong)local_4e8 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  uStack_4d0 = 0;
  pbStack_4e0 = local_4c8;
  FUN_00da41b8(param_1,uVar13,&local_4e8,lVar24);
  local_4d8 = strlen((char *)local_4c8);
  local_4e8 = &DAT_cbf29ce484222645;
  if (local_4c8[0] != 0) {
    local_4e8 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)((ulong)local_4c8 | 1);
    bVar6 = local_4c8[0];
    do {
      local_4e8 = (undefined1 *)(((ulong)local_4e8 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  uStack_4d0 = 0;
  pbStack_4e0 = local_4c8;
  lVar14 = FUN_00da49fc(param_1,lVar24,&local_4e8,lVar14);
LAB_00da4628:
  if (lVar14 != 0) {
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  puVar23 = puVar23 + 1;
  if (puVar23 == puVar3) goto LAB_00da4658;
  goto LAB_00da43a0;
}


