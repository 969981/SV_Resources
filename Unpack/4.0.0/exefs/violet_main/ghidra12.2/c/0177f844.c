/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177f844; name: FUN_0177f844
 */


void FUN_0177f844(long param_1,undefined8 *param_2)

{
  char *__s;
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  ushort *puVar9;
  uint *puVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined1 *local_f0;
  char *pcStack_e8;
  size_t local_e0;
  long *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  piVar21 = (int *)*param_2;
  puVar9 = (ushort *)((long)piVar21 - (long)*piVar21);
  if ((*puVar9 < 0xd) || ((ulong)puVar9[6] == 0)) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = (uint *)((long)piVar21 + (ulong)puVar9[6]);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
  }
  uVar13 = (ulong)*puVar10;
  puVar22 = &DAT_cbf29ce484222645;
  if (*puVar10 != 0) {
    uVar15 = 0;
    do {
      piVar1 = (int *)((long)(puVar10 + uVar15 + 1) + (ulong)puVar10[uVar15 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        lVar12 = 0;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        lVar12 = 0;
        if (uVar19 != 0) {
          puVar2 = (uint *)((long)piVar1 + uVar19);
          lVar12 = (long)puVar2 + (ulong)*puVar2;
        }
      }
      bVar5 = *(byte *)(lVar12 + 4);
      if (bVar5 != 0) {
        puVar20 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 != 0);
        if (puVar20 == (undefined1 *)0x999b0a7bcbf06bfc) {
          uVar13 = uVar15 & 0xffffffff;
          break;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
  }
  puVar10 = (uint *)((long)((long)piVar21 + (ulong)puVar9[6]) +
                    uVar13 * 4 + (ulong)*(uint *)((long)piVar21 + (ulong)puVar9[6]) + 4);
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar13 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar10 = (uint *)((long)piVar1 + uVar13);
    lVar12 = (long)puVar10 + (ulong)*puVar10;
  }
  __s = (char *)(lVar12 + 4);
  local_e0 = strlen(__s);
  bVar5 = *(byte *)(lVar12 + 4);
  local_f0 = &DAT_cbf29ce484222645;
  if (bVar5 != 0) {
    local_f0 = &DAT_cbf29ce484222645;
    pbVar11 = (byte *)(lVar12 + 5);
    do {
      local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar5 != 0);
  }
  local_d8 = (long *)0x0;
  pcStack_e8 = __s;
  if (*__s != '\0') {
    puVar9 = (ushort *)((long)piVar21 - (long)*piVar21);
    if ((*puVar9 < 0xd) || ((ulong)puVar9[6] == 0)) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = (uint *)((long)piVar21 + (ulong)puVar9[6]);
      puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
    }
    uVar13 = (ulong)*puVar10;
    if (*puVar10 != 0) {
      uVar15 = 0;
      do {
        piVar1 = (int *)((long)(puVar10 + uVar15 + 1) + (ulong)puVar10[uVar15 + 1]);
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
          lVar12 = 0;
        }
        else {
          uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
          lVar12 = 0;
          if (uVar19 != 0) {
            puVar2 = (uint *)((long)piVar1 + uVar19);
            lVar12 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        bVar5 = *(byte *)(lVar12 + 4);
        if (bVar5 != 0) {
          puVar20 = &DAT_cbf29ce484222645;
          pbVar11 = (byte *)(lVar12 + 5);
          do {
            puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 != 0);
          if (puVar20 == (undefined1 *)0x352b79c017918034) {
            uVar13 = uVar15 & 0xffffffff;
            break;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar13);
    }
    puVar10 = (uint *)((long)((long)piVar21 + (ulong)puVar9[6]) +
                      uVar13 * 4 + (ulong)*(uint *)((long)piVar21 + (ulong)puVar9[6]) + 4);
    piVar21 = (int *)((long)puVar10 + (ulong)*puVar10);
    puVar10 = (uint *)((long)piVar21 + (ulong)*(ushort *)((long)piVar21 + (8 - (long)*piVar21)));
    piVar21 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
       (uVar13 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar13 == 0)) {
      lVar12 = 0;
    }
    else {
      puVar10 = (uint *)((long)piVar21 + uVar13);
      lVar12 = (long)puVar10 + (ulong)*puVar10;
    }
    bVar5 = *(byte *)(lVar12 + 4);
    if (bVar5 != 0) {
      uVar13 = (ulong)(uint)bVar5;
      puVar20 = &DAT_cbf29ce484222645;
      pbVar11 = (byte *)(lVar12 + 5);
      do {
        puVar20 = (undefined1 *)(((ulong)puVar20 ^ uVar13) * 0x100000001b3);
        bVar4 = *pbVar11;
        uVar13 = (ulong)bVar4;
        pbVar11 = pbVar11 + 1;
      } while (bVar4 != 0);
      if (bVar5 != 0) {
        puVar14 = *(undefined1 **)(param_1 + 0x450);
        if (puVar14 != (undefined1 *)0x0) {
          uVar13 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            puVar16 = (undefined1 *)((ulong)(puVar14 + -1) & (ulong)puVar20);
          }
          else {
            puVar16 = puVar20;
            if (puVar14 <= puVar20) {
              uVar15 = 0;
              if (puVar14 != (undefined1 *)0x0) {
                uVar15 = (ulong)puVar20 / (ulong)puVar14;
              }
              puVar16 = puVar20 + -(uVar15 * (long)puVar14);
            }
          }
          plVar18 = *(long **)(*(long *)(param_1 + 0x448) + (long)puVar16 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if ((undefined1 *)plVar18[1] == puVar20) {
                  if ((undefined1 *)plVar18[2] == puVar20) goto LAB_0177fce0;
                }
                else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar14 + -1)) != puVar16)
                break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                puVar17 = (undefined1 *)plVar18[1];
                if (puVar17 == puVar20) {
                  if ((undefined1 *)plVar18[2] == puVar20) goto LAB_0177fce0;
                }
                else {
                  if (puVar14 <= puVar17) {
                    uVar13 = 0;
                    if (puVar14 != (undefined1 *)0x0) {
                      uVar13 = (ulong)puVar17 / (ulong)puVar14;
                    }
                    puVar17 = puVar17 + -(uVar13 * (long)puVar14);
                  }
                  if (puVar17 != puVar16) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        goto LAB_0177fbe4;
      }
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar12 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar12;
    uVar8 = FUN_0177fff8(param_1);
    goto LAB_0177fd10;
  }
LAB_0177fbe4:
  piVar21 = (int *)*param_2;
  puVar9 = (ushort *)((long)piVar21 - (long)*piVar21);
  if ((*puVar9 < 0xd) || ((ulong)puVar9[6] == 0)) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = (uint *)((long)piVar21 + (ulong)puVar9[6]);
    puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
  }
  uVar13 = (ulong)*puVar10;
  if (*puVar10 != 0) {
    uVar15 = 0;
    do {
      piVar1 = (int *)((long)(puVar10 + uVar15 + 1) + (ulong)puVar10[uVar15 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        lVar12 = 0;
      }
      else {
        uVar19 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        lVar12 = 0;
        if (uVar19 != 0) {
          puVar2 = (uint *)((long)piVar1 + uVar19);
          lVar12 = (long)puVar2 + (ulong)*puVar2;
        }
      }
      bVar5 = *(byte *)(lVar12 + 4);
      if (bVar5 != 0) {
        puVar20 = &DAT_cbf29ce484222645;
        pbVar11 = (byte *)(lVar12 + 5);
        do {
          puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 != 0);
        if (puVar20 == (undefined1 *)0xa5d87c9ff14c683c) {
          uVar13 = uVar15 & 0xffffffff;
          break;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
  }
  puVar10 = (uint *)((long)((long)piVar21 + (ulong)puVar9[6]) +
                    uVar13 * 4 + (ulong)*(uint *)((long)piVar21 + (ulong)puVar9[6]) + 4);
  piVar21 = (int *)((long)puVar10 + (ulong)*puVar10);
  puVar10 = (uint *)((long)piVar21 + (ulong)*(ushort *)((long)piVar21 + (8 - (long)*piVar21)));
  piVar21 = (int *)((long)puVar10 + (ulong)*puVar10);
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar13 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar10 = (uint *)((long)piVar21 + uVar13);
    lVar12 = (long)puVar10 + (ulong)*puVar10;
  }
  bVar5 = *(byte *)(lVar12 + 4);
  if (bVar5 != 0) {
    pbVar11 = (byte *)(lVar12 + 5);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar5 != 0);
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x1e8); puVar3 != *(undefined8 **)(param_1 + 0x1f0);
      puVar3 = puVar3 + 0x16) {
    if ((undefined1 *)*puVar3 == puVar22) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar8 = *(undefined8 *)PTR_DAT_047d8288;
      *(undefined8 *)PTR_DAT_047d8290 = uVar8;
      FUN_013ee4a0(0,uVar8,*(undefined4 *)(puVar3 + 4),4);
      break;
    }
  }
LAB_0177fd68:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  return;
LAB_0177fce0:
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar12 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar12;
  uVar8 = FUN_00cf8198(plVar18[4]);
LAB_0177fd10:
  memset(&local_d0,0,0x80);
  iVar7 = FUN_0177ffac(lVar12,&local_f0,uVar8,0);
  if (iVar7 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar12 + 0x220),&local_f0,iVar7,uVar8,0,&local_d0,0);
    pcVar6 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar6)(auStack_b0);
    }
    goto LAB_0177fd68;
  }
  goto LAB_0177fbe4;
}


