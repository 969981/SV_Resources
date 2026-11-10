/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348bdb4; name: FUN_0348bdb4
 */


undefined8 FUN_0348bdb4(long *param_1,long param_2,ulong *param_3,int *param_4,long *param_5)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  char *pcVar16;
  int *piVar17;
  uint uVar18;
  long *plVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  int iVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined8 *puVar40;
  ulong local_c8;
  uint local_c0;
  uint local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined3 uStack_ab;
  byte local_a8;
  ulong local_a0;
  char local_94 [4];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  uVar7 = local_90;
  local_94[0] = '\0';
  iVar31 = *(int *)(param_2 + 0x14);
  pbVar11 = (byte *)param_1[4];
  if (pbVar11 != (byte *)0x0) {
    bVar3 = *pbVar11;
    uVar29 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar29 = 1;
    }
    uVar24 = (ulong)uVar29;
    pbVar20 = pbVar11 + ((ulong)(bVar3 + 4) & 0x1fc);
    pbVar23 = pbVar11;
    do {
      pbVar23 = pbVar23 + 1;
      if (*pbVar23 == 0) goto LAB_0348be3c;
      pbVar20 = pbVar20 + 4;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  pbVar20 = (byte *)0x0;
LAB_0348be3c:
  pbVar23 = (byte *)&local_90;
  if (pbVar20 != (byte *)0x0) {
    pbVar23 = pbVar20;
  }
  if (iVar31 <= *(int *)pbVar23) {
    if (pbVar11 != (byte *)0x0) {
      bVar3 = *pbVar11;
      uVar29 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar29 = 1;
      }
      uVar24 = (ulong)uVar29;
      pbVar23 = pbVar11 + ((ulong)(bVar3 + 4) & 0x1fc);
      pbVar20 = pbVar11;
      do {
        pbVar11 = pbVar23;
        pbVar20 = pbVar20 + 1;
        if (*pbVar20 == 0) goto LAB_0348be94;
        uVar24 = uVar24 - 1;
        pbVar23 = pbVar11 + 4;
      } while (uVar24 != 0);
      pbVar11 = (byte *)0x0;
    }
LAB_0348be94:
    pbVar20 = (byte *)&local_90;
    if (pbVar11 != (byte *)0x0) {
      pbVar20 = pbVar11;
    }
    iVar31 = *(int *)pbVar20;
  }
  local_90 = CONCAT44(local_90._4_4_,DAT_048afe88);
  uVar29 = (byte)param_3[1] - 0x80;
  local_c8 = *param_3;
  local_c0 = *(uint *)((long)param_3 + 0x24);
  local_b0 = *(byte *)((long)param_3 + 9);
  local_a8 = 0xff;
  if ((uVar29 < 0x21) && ((1L << ((ulong)uVar29 & 0x3f) & 0x100010001U) != 0)) {
    local_a8 = *(byte *)((long)param_3 + 0xc);
  }
  local_b8 = (uint)param_3[4];
  local_a0 = param_3[6];
  local_af = DAT_048afe88;
  uStack_ab = (undefined3)((ulong)uVar7 >> 0x20);
  if (iVar31 < 1) {
LAB_0348bf7c:
    if (local_c8 != 0) goto LAB_0348c124;
LAB_0348bf8c:
    if (((local_b8 != 0 || local_c0 != 0) || ((local_a8 & local_b0) != 0xff)) || (local_a0 != 0))
    goto LAB_0348c124;
    if ((char)param_1[9] == '\0') {
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 9) = 1;
    }
    plVar19 = param_1 + 8;
  }
  else {
    local_a0 = 0;
    if (local_a8 != 0xff) {
      local_c0 = 0;
    }
    if (1 < iVar31) {
      local_b0 = 0xff;
      local_a8 = 0xff;
      local_b8 = 0;
      local_c0 = 0;
      if (iVar31 != 2) {
        local_c8 = 0;
      }
      goto LAB_0348bf7c;
    }
    if (local_c8 == 0) goto LAB_0348bf8c;
LAB_0348c124:
    uVar24 = local_c8;
    plVar19 = param_1 + 10;
    lVar12 = *plVar19;
    uVar29 = *(uint *)(param_1 + 0xb);
    if (uVar29 == 0) {
      uVar21 = *(uint *)((long)param_1 + 0x5c);
      if (lVar12 != 0) {
        uVar27 = 0;
        uVar18 = 0;
        if (uVar21 == 0) goto LAB_0348c224;
        goto LAB_0348c248;
      }
      if (uVar21 == 0) {
        uVar27 = FUN_03491edc(plVar19,1);
        if ((uVar27 & 1) == 0) {
          return 2;
        }
        if (*(uint *)((long)param_1 + 0x5c) == 0) {
          return 2;
        }
      }
      uVar29 = *(uint *)(param_1 + 0xb);
      lVar12 = param_1[10];
      *(uint *)(param_1 + 0xb) = uVar29 + 1;
      puVar38 = (undefined8 *)(lVar12 + (ulong)uVar29 * 0x30);
      if (lVar12 == 0) goto LAB_0348c390;
      lVar12 = lVar12 + (ulong)uVar29 * 0x30;
      *(undefined8 *)(lVar12 + 8) = 0;
      *(undefined1 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *puVar38 = &PTR_LAB_047c32c0;
    }
    else {
      uVar18 = 0;
      uVar21 = uVar29;
      do {
        iVar10 = uVar18 + (uVar21 >> 1);
        uVar27 = *(ulong *)(lVar12 + (long)iVar10 * 0x30 + 0x28);
        if (uVar27 == local_c8) {
          puVar38 = (undefined8 *)(lVar12 + (long)iVar10 * 0x30);
          goto LAB_0348c514;
        }
        if (uVar27 < local_c8) {
          uVar18 = iVar10 + 1;
        }
        uVar21 = uVar21 - (uVar27 < local_c8) >> 1;
      } while (uVar21 != 0);
      uVar27 = (ulong)uVar18;
      uVar18 = *(uint *)((long)param_1 + 0x5c);
      uVar21 = uVar18;
      if (uVar18 <= uVar29) {
LAB_0348c224:
        iVar10 = uVar18 + (uVar18 >> 1);
        if (uVar18 == 0) {
          iVar10 = 1;
        }
        uVar8 = FUN_03491edc(plVar19,iVar10);
        if ((uVar8 & 1) == 0) {
          return 2;
        }
        uVar21 = *(uint *)((long)param_1 + 0x5c);
      }
LAB_0348c248:
      if (uVar21 <= uVar29) {
        return 2;
      }
      uVar29 = *(uint *)(param_1 + 0xb);
      lVar13 = param_1[10];
      *(uint *)(param_1 + 0xb) = uVar29 + 1;
      puVar38 = (undefined8 *)(lVar13 + (ulong)uVar29 * 0x30);
      lVar12 = 0;
      if (lVar13 != 0) {
        lVar13 = lVar13 + (ulong)uVar29 * 0x30;
        *(undefined8 *)(lVar13 + 8) = 0;
        *(undefined1 *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *puVar38 = &PTR_LAB_047c32c0;
        lVar12 = *plVar19;
      }
      puVar5 = PTR_DAT_047e2fd0;
      puVar9 = (undefined8 *)(lVar12 + uVar27 * 0x30);
      if (puVar9 < puVar38) {
        do {
          puVar40 = puVar38 + -6;
          puVar38[5] = puVar38[-1];
          puVar9 = (undefined8 *)puVar38[3];
          puVar38[1] = puVar38[-5];
          *(undefined1 *)(puVar38 + 2) = *(undefined1 *)(puVar38 + -4);
          if (puVar9 != (undefined8 *)0x0) {
            if (*(uint *)(puVar38 + 4) != 0) {
              lVar12 = (ulong)*(uint *)(puVar38 + 4) * 0x30;
              do {
                (**(code **)*puVar9)(puVar9);
                lVar12 = lVar12 + -0x30;
                puVar9 = puVar9 + 6;
              } while (lVar12 != 0);
              puVar9 = (undefined8 *)puVar38[3];
            }
            *(undefined4 *)(puVar38 + 4) = 0;
            (**(code **)(puVar5 + 0x30))(0,puVar9);
            puVar38[3] = 0;
            *(undefined4 *)((long)puVar38 + 0x24) = 0;
          }
          puVar38[3] = puVar38[-3];
          *(undefined4 *)(puVar38 + 4) = *(undefined4 *)(puVar38 + -2);
          *(undefined4 *)((long)puVar38 + 0x24) = *(undefined4 *)((long)puVar38 + -0xc);
          puVar38[-3] = 0;
          puVar38[-2] = 0;
          puVar9 = (undefined8 *)(*plVar19 + uVar27 * 0x30);
          puVar38 = puVar40;
        } while (puVar9 < puVar40);
      }
      (**(code **)*puVar9)();
      lVar12 = 0;
      if (*plVar19 != 0) {
        puVar38 = (undefined8 *)(*plVar19 + uVar27 * 0x30);
        *(undefined1 *)(puVar38 + 2) = 0;
        puVar38[3] = 0;
        puVar38[4] = 0;
        *puVar38 = &PTR_LAB_047c32c0;
        puVar38[1] = 0;
        lVar12 = *plVar19;
      }
      puVar38 = (undefined8 *)(lVar12 + uVar27 * 0x30);
LAB_0348c390:
      if (puVar38 == (undefined8 *)0x0) {
        return 2;
      }
    }
    puVar38[5] = uVar24;
LAB_0348c514:
    uVar29 = local_c0;
    if (((local_b8 == 0 && local_c0 == 0) && ((local_a8 & local_b0) == 0xff)) && (local_a0 == 0)) {
      if (*(char *)(puVar38 + 2) == '\0') {
        puVar38[1] = 0;
        *(undefined1 *)(puVar38 + 2) = 1;
      }
      plVar19 = puVar38 + 1;
    }
    else {
      plVar19 = puVar38 + 3;
      lVar12 = *plVar19;
      uVar18 = *(uint *)(puVar38 + 4);
      if (uVar18 == 0) {
        uVar22 = *(uint *)((long)puVar38 + 0x24);
        if (lVar12 != 0) {
          uVar24 = 0;
          uVar21 = 0;
          if (uVar22 == 0) goto LAB_0348c5a4;
          goto LAB_0348c5c8;
        }
        if (uVar22 == 0) {
          uVar24 = FUN_034922c8(plVar19,1);
          if ((uVar24 & 1) == 0) {
            return 2;
          }
          if (*(uint *)((long)puVar38 + 0x24) == 0) {
            return 2;
          }
        }
        uVar18 = *(uint *)(puVar38 + 4);
        lVar12 = puVar38[3];
        *(uint *)(puVar38 + 4) = uVar18 + 1;
        puVar38 = (undefined8 *)(lVar12 + (ulong)uVar18 * 0x30);
        if (lVar12 == 0) goto LAB_0348c710;
        lVar12 = lVar12 + (ulong)uVar18 * 0x30;
        *(undefined8 *)(lVar12 + 8) = 0;
        *(undefined1 *)(lVar12 + 0x10) = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *puVar38 = &PTR_LAB_047c3300;
      }
      else {
        uVar21 = 0;
        uVar22 = uVar18;
        do {
          iVar10 = uVar21 + (uVar22 >> 1);
          uVar2 = *(uint *)(lVar12 + (long)iVar10 * 0x30 + 0x28);
          if (uVar2 == local_c0) {
            puVar38 = (undefined8 *)(lVar12 + (long)iVar10 * 0x30);
            uVar29 = local_b8;
            goto joined_r0x0348c724;
          }
          if (uVar2 < local_c0) {
            uVar21 = iVar10 + 1;
          }
          uVar22 = uVar22 - (uVar2 < local_c0) >> 1;
        } while (uVar22 != 0);
        uVar24 = (ulong)uVar21;
        uVar21 = *(uint *)((long)puVar38 + 0x24);
        uVar22 = uVar21;
        if (uVar21 <= uVar18) {
LAB_0348c5a4:
          iVar10 = uVar21 + (uVar21 >> 1);
          if (uVar21 == 0) {
            iVar10 = 1;
          }
          uVar27 = FUN_034922c8(plVar19,iVar10);
          if ((uVar27 & 1) == 0) {
            return 2;
          }
          uVar22 = *(uint *)((long)puVar38 + 0x24);
        }
LAB_0348c5c8:
        if (uVar22 <= uVar18) {
          return 2;
        }
        uVar18 = *(uint *)(puVar38 + 4);
        lVar13 = puVar38[3];
        *(uint *)(puVar38 + 4) = uVar18 + 1;
        puVar38 = (undefined8 *)(lVar13 + (ulong)uVar18 * 0x30);
        lVar12 = 0;
        if (lVar13 != 0) {
          lVar13 = lVar13 + (ulong)uVar18 * 0x30;
          *(undefined8 *)(lVar13 + 8) = 0;
          *(undefined1 *)(lVar13 + 0x10) = 0;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          *puVar38 = &PTR_LAB_047c3300;
          lVar12 = *plVar19;
        }
        puVar5 = PTR_DAT_047e2fd0;
        puVar9 = (undefined8 *)(lVar12 + uVar24 * 0x30);
        if (puVar9 < puVar38) {
          do {
            puVar40 = puVar38 + -6;
            *(undefined4 *)(puVar38 + 5) = *(undefined4 *)(puVar38 + -1);
            puVar9 = (undefined8 *)puVar38[3];
            puVar38[1] = puVar38[-5];
            *(undefined1 *)(puVar38 + 2) = *(undefined1 *)(puVar38 + -4);
            if (puVar9 != (undefined8 *)0x0) {
              if (*(uint *)(puVar38 + 4) != 0) {
                lVar12 = (ulong)*(uint *)(puVar38 + 4) * 0x30;
                do {
                  (**(code **)*puVar9)(puVar9);
                  lVar12 = lVar12 + -0x30;
                  puVar9 = puVar9 + 6;
                } while (lVar12 != 0);
                puVar9 = (undefined8 *)puVar38[3];
              }
              *(undefined4 *)(puVar38 + 4) = 0;
              (**(code **)(puVar5 + 0x30))(0,puVar9);
              puVar38[3] = 0;
              *(undefined4 *)((long)puVar38 + 0x24) = 0;
            }
            puVar38[3] = puVar38[-3];
            *(undefined4 *)(puVar38 + 4) = *(undefined4 *)(puVar38 + -2);
            *(undefined4 *)((long)puVar38 + 0x24) = *(undefined4 *)((long)puVar38 + -0xc);
            puVar38[-3] = 0;
            puVar38[-2] = 0;
            puVar9 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
            puVar38 = puVar40;
          } while (puVar9 < puVar40);
        }
        (**(code **)*puVar9)();
        lVar12 = 0;
        if (*plVar19 != 0) {
          puVar38 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
          *(undefined1 *)(puVar38 + 2) = 0;
          puVar38[3] = 0;
          puVar38[4] = 0;
          *puVar38 = &PTR_LAB_047c3300;
          puVar38[1] = 0;
          lVar12 = *plVar19;
        }
        puVar38 = (undefined8 *)(lVar12 + uVar24 * 0x30);
LAB_0348c710:
        if (puVar38 == (undefined8 *)0x0) {
          return 2;
        }
      }
      *(uint *)(puVar38 + 5) = uVar29;
      uVar29 = local_b8;
joined_r0x0348c724:
      local_b8 = uVar29;
      if (((uVar29 == 0) && ((local_a8 & local_b0) == 0xff)) && (local_a0 == 0)) {
LAB_0348ca48:
        if (*(char *)(puVar38 + 2) == '\0') {
          puVar38[1] = 0;
          *(undefined1 *)(puVar38 + 2) = 1;
        }
      }
      else {
        plVar19 = puVar38 + 3;
        lVar12 = *plVar19;
        uVar18 = *(uint *)(puVar38 + 4);
        if (uVar18 == 0) {
          uVar21 = *(uint *)((long)puVar38 + 0x24);
          if (lVar12 != 0) {
            uVar24 = 0;
            if (uVar21 == 0) goto LAB_0348c848;
            goto LAB_0348c864;
          }
          if (uVar21 != 0) goto LAB_0348ce84;
          uVar24 = FUN_034926b4(plVar19,1);
          if ((uVar24 & 1) == 0) {
            return 2;
          }
          if (*(uint *)((long)puVar38 + 0x24) == 0) {
            return 2;
          }
          uVar18 = *(uint *)(puVar38 + 4);
          lVar12 = puVar38[3];
          *(uint *)(puVar38 + 4) = uVar18 + 1;
          puVar38 = (undefined8 *)(lVar12 + (ulong)uVar18 * 0x30);
          if (lVar12 == 0) goto LAB_0348c9ac;
          lVar12 = lVar12 + (ulong)uVar18 * 0x30;
          *(undefined8 *)(lVar12 + 8) = 0;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          *(undefined8 *)(lVar12 + 0x20) = 0;
          *(undefined1 *)(lVar12 + 0x10) = 0;
          *puVar38 = &PTR_LAB_047c3340;
        }
        else {
          uVar21 = 0;
          uVar22 = uVar18;
          do {
            iVar10 = uVar21 + (uVar22 >> 1);
            uVar2 = *(uint *)(lVar12 + (long)iVar10 * 0x30 + 0x28);
            if (uVar2 == uVar29) {
              puVar38 = (undefined8 *)(lVar12 + (long)iVar10 * 0x30);
              goto LAB_0348c9c8;
            }
            if (uVar2 < uVar29) {
              uVar21 = iVar10 + 1;
            }
            uVar22 = uVar22 - (uVar2 < uVar29) >> 1;
          } while (uVar22 != 0);
          uVar24 = (ulong)uVar21;
          uVar21 = *(uint *)((long)puVar38 + 0x24);
          if (uVar21 <= uVar18) {
            if (uVar21 == 0) {
LAB_0348c848:
              iVar10 = 1;
            }
            else {
              iVar10 = uVar21 + (uVar21 >> 1);
            }
            uVar27 = FUN_034926b4(plVar19,iVar10);
            if ((uVar27 & 1) == 0) {
              return 2;
            }
            uVar21 = *(uint *)((long)puVar38 + 0x24);
          }
LAB_0348c864:
          if (uVar21 <= uVar18) {
            return 2;
          }
          uVar18 = *(uint *)(puVar38 + 4);
          lVar13 = puVar38[3];
          *(uint *)(puVar38 + 4) = uVar18 + 1;
          puVar38 = (undefined8 *)(lVar13 + (ulong)uVar18 * 0x30);
          lVar12 = 0;
          if (lVar13 != 0) {
            lVar13 = lVar13 + (ulong)uVar18 * 0x30;
            *(undefined8 *)(lVar13 + 8) = 0;
            *(undefined1 *)(lVar13 + 0x10) = 0;
            *(undefined8 *)(lVar13 + 0x18) = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *puVar38 = &PTR_LAB_047c3340;
            lVar12 = *plVar19;
          }
          puVar5 = PTR_DAT_047e2fd0;
          puVar9 = (undefined8 *)(lVar12 + uVar24 * 0x30);
          if (puVar9 < puVar38) {
            do {
              puVar40 = puVar38 + -6;
              *(undefined4 *)(puVar38 + 5) = *(undefined4 *)(puVar38 + -1);
              puVar9 = (undefined8 *)puVar38[3];
              puVar38[1] = puVar38[-5];
              *(undefined1 *)(puVar38 + 2) = *(undefined1 *)(puVar38 + -4);
              if (puVar9 != (undefined8 *)0x0) {
                if (*(uint *)(puVar38 + 4) != 0) {
                  lVar12 = (ulong)*(uint *)(puVar38 + 4) * 0x30;
                  do {
                    (**(code **)*puVar9)(puVar9);
                    lVar12 = lVar12 + -0x30;
                    puVar9 = puVar9 + 6;
                  } while (lVar12 != 0);
                  puVar9 = (undefined8 *)puVar38[3];
                }
                *(undefined4 *)(puVar38 + 4) = 0;
                (**(code **)(puVar5 + 0x30))(0,puVar9);
                puVar38[3] = 0;
                *(undefined4 *)((long)puVar38 + 0x24) = 0;
              }
              puVar38[3] = puVar38[-3];
              *(undefined4 *)(puVar38 + 4) = *(undefined4 *)(puVar38 + -2);
              *(undefined4 *)((long)puVar38 + 0x24) = *(undefined4 *)((long)puVar38 + -0xc);
              puVar38[-3] = 0;
              puVar38[-2] = 0;
              puVar9 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
              puVar38 = puVar40;
            } while (puVar9 < puVar40);
          }
          (**(code **)*puVar9)();
          lVar12 = 0;
          if (*plVar19 != 0) {
            puVar38 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
            *(undefined1 *)(puVar38 + 2) = 0;
            puVar38[3] = 0;
            puVar38[4] = 0;
            *puVar38 = &PTR_LAB_047c3340;
            puVar38[1] = 0;
            lVar12 = *plVar19;
          }
          puVar38 = (undefined8 *)(lVar12 + uVar24 * 0x30);
LAB_0348c9ac:
          if (puVar38 == (undefined8 *)0x0) {
            return 2;
          }
        }
        *(uint *)(puVar38 + 5) = uVar29;
LAB_0348c9c8:
        bVar3 = local_b0;
        if (((local_a8 & local_b0) == 0xff) && (local_a0 == 0)) goto LAB_0348ca48;
        plVar19 = puVar38 + 3;
        lVar12 = *plVar19;
        uVar29 = *(uint *)(puVar38 + 4);
        if (uVar29 == 0) {
          uVar18 = *(uint *)((long)puVar38 + 0x24);
          if (lVar12 != 0) {
            uVar24 = 0;
            if (uVar18 == 0) {
LAB_0348cb18:
              iVar10 = 1;
              goto LAB_0348cb20;
            }
            goto LAB_0348cb34;
          }
          if (uVar18 != 0) {
LAB_0348ce84:
            *(undefined4 *)(puVar38 + 4) = 1;
            return 2;
          }
          uVar24 = FUN_03492aa0(plVar19,1);
          if ((uVar24 & 1) == 0) {
            return 2;
          }
          if (*(uint *)((long)puVar38 + 0x24) == 0) {
            return 2;
          }
          uVar29 = *(uint *)(puVar38 + 4);
          lVar12 = puVar38[3];
          *(uint *)(puVar38 + 4) = uVar29 + 1;
          puVar38 = (undefined8 *)(lVar12 + (ulong)uVar29 * 0x30);
          if (lVar12 == 0) goto LAB_0348cc7c;
          lVar12 = lVar12 + (ulong)uVar29 * 0x30;
          *(undefined8 *)(lVar12 + 8) = 0;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          *(undefined8 *)(lVar12 + 0x20) = 0;
          *(undefined1 *)(lVar12 + 0x10) = 0;
          *puVar38 = &PTR_LAB_047c3380;
        }
        else {
          uVar18 = 0;
          uVar21 = uVar29;
          do {
            iVar10 = uVar18 + (uVar21 >> 1);
            bVar4 = *(byte *)(lVar12 + (long)iVar10 * 0x30 + 0x28);
            if (bVar4 == local_b0) {
              puVar38 = (undefined8 *)(lVar12 + (long)iVar10 * 0x30);
              goto LAB_0348ccfc;
            }
            if (bVar4 < local_b0) {
              uVar18 = iVar10 + 1;
            }
            uVar21 = uVar21 - (bVar4 < local_b0) >> 1;
          } while (uVar21 != 0);
          uVar24 = (ulong)uVar18;
          uVar18 = *(uint *)((long)puVar38 + 0x24);
          if (uVar18 <= uVar29) {
            if (uVar18 == 0) goto LAB_0348cb18;
            iVar10 = uVar18 + (uVar18 >> 1);
LAB_0348cb20:
            uVar27 = FUN_03492aa0(plVar19,iVar10);
            if ((uVar27 & 1) == 0) {
              return 2;
            }
            uVar18 = *(uint *)((long)puVar38 + 0x24);
          }
LAB_0348cb34:
          if (uVar18 <= uVar29) {
            return 2;
          }
          uVar29 = *(uint *)(puVar38 + 4);
          lVar13 = puVar38[3];
          *(uint *)(puVar38 + 4) = uVar29 + 1;
          puVar38 = (undefined8 *)(lVar13 + (ulong)uVar29 * 0x30);
          lVar12 = 0;
          if (lVar13 != 0) {
            lVar13 = lVar13 + (ulong)uVar29 * 0x30;
            *(undefined8 *)(lVar13 + 8) = 0;
            *(undefined1 *)(lVar13 + 0x10) = 0;
            *(undefined8 *)(lVar13 + 0x18) = 0;
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *puVar38 = &PTR_LAB_047c3380;
            lVar12 = *plVar19;
          }
          puVar5 = PTR_DAT_047e2fd0;
          puVar9 = (undefined8 *)(lVar12 + uVar24 * 0x30);
          if (puVar9 < puVar38) {
            do {
              puVar40 = puVar38 + -6;
              *(undefined1 *)(puVar38 + 5) = *(undefined1 *)(puVar38 + -1);
              puVar9 = (undefined8 *)puVar38[3];
              puVar38[1] = puVar38[-5];
              *(undefined1 *)(puVar38 + 2) = *(undefined1 *)(puVar38 + -4);
              if (puVar9 != (undefined8 *)0x0) {
                if (*(uint *)(puVar38 + 4) != 0) {
                  lVar12 = (ulong)*(uint *)(puVar38 + 4) * 0x30;
                  do {
                    (**(code **)*puVar9)(puVar9);
                    lVar12 = lVar12 + -0x30;
                    puVar9 = puVar9 + 6;
                  } while (lVar12 != 0);
                  puVar9 = (undefined8 *)puVar38[3];
                }
                *(undefined4 *)(puVar38 + 4) = 0;
                (**(code **)(puVar5 + 0x30))(0,puVar9);
                puVar38[3] = 0;
                *(undefined4 *)((long)puVar38 + 0x24) = 0;
              }
              puVar38[3] = puVar38[-3];
              *(undefined4 *)(puVar38 + 4) = *(undefined4 *)(puVar38 + -2);
              *(undefined4 *)((long)puVar38 + 0x24) = *(undefined4 *)((long)puVar38 + -0xc);
              puVar38[-3] = 0;
              puVar38[-2] = 0;
              puVar9 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
              puVar38 = puVar40;
            } while (puVar9 < puVar40);
          }
          (**(code **)*puVar9)();
          lVar12 = 0;
          if (*plVar19 != 0) {
            puVar38 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
            *(undefined1 *)(puVar38 + 2) = 0;
            puVar38[3] = 0;
            puVar38[4] = 0;
            *puVar38 = &PTR_LAB_047c3380;
            puVar38[1] = 0;
            lVar12 = *plVar19;
          }
          puVar38 = (undefined8 *)(lVar12 + uVar24 * 0x30);
LAB_0348cc7c:
          if (puVar38 == (undefined8 *)0x0) {
            return 2;
          }
        }
        *(byte *)(puVar38 + 5) = bVar3;
LAB_0348ccfc:
        bVar3 = local_a8;
        if ((local_a8 == 0xff) && (local_a0 == 0)) {
          if (*(char *)(puVar38 + 2) == '\0') {
            puVar38[1] = 0;
            *(undefined1 *)(puVar38 + 2) = 1;
          }
        }
        else {
          plVar19 = puVar38 + 3;
          lVar12 = *plVar19;
          uVar29 = *(uint *)(puVar38 + 4);
          if (uVar29 == 0) {
            uVar18 = *(uint *)((long)puVar38 + 0x24);
            if (lVar12 != 0) {
              uVar24 = 0;
              if (uVar18 == 0) goto LAB_0348cdb8;
              goto LAB_0348cdd4;
            }
            if (uVar18 != 0) goto LAB_0348d258;
            uVar24 = FUN_03492e8c(plVar19,1);
            if ((uVar24 & 1) == 0) {
              return 2;
            }
            if (*(uint *)((long)puVar38 + 0x24) == 0) {
              return 2;
            }
            uVar29 = *(uint *)(puVar38 + 4);
            lVar12 = puVar38[3];
            *(uint *)(puVar38 + 4) = uVar29 + 1;
            puVar38 = (undefined8 *)(lVar12 + (ulong)uVar29 * 0x30);
            if (lVar12 == 0) goto LAB_0348d0e4;
            lVar12 = lVar12 + (ulong)uVar29 * 0x30;
            *(undefined8 *)(lVar12 + 8) = 0;
            *(undefined8 *)(lVar12 + 0x18) = 0;
            *(undefined8 *)(lVar12 + 0x20) = 0;
            *(undefined1 *)(lVar12 + 0x10) = 0;
            *puVar38 = &PTR_LAB_047c33c0;
          }
          else {
            uVar18 = 0;
            uVar21 = uVar29;
            do {
              iVar10 = uVar18 + (uVar21 >> 1);
              bVar4 = *(byte *)(lVar12 + (long)iVar10 * 0x30 + 0x28);
              if (bVar4 == local_a8) {
                puVar38 = (undefined8 *)(lVar12 + (long)iVar10 * 0x30);
                goto LAB_0348d0ec;
              }
              if (bVar4 < local_a8) {
                uVar18 = iVar10 + 1;
              }
              uVar21 = uVar21 - (bVar4 < local_a8) >> 1;
            } while (uVar21 != 0);
            uVar24 = (ulong)uVar18;
            uVar18 = *(uint *)((long)puVar38 + 0x24);
            if (uVar18 <= uVar29) {
              if (uVar18 == 0) {
LAB_0348cdb8:
                iVar10 = 1;
              }
              else {
                iVar10 = uVar18 + (uVar18 >> 1);
              }
              uVar27 = FUN_03492e8c(plVar19,iVar10);
              if ((uVar27 & 1) == 0) {
                return 2;
              }
              uVar18 = *(uint *)((long)puVar38 + 0x24);
            }
LAB_0348cdd4:
            if (uVar18 <= uVar29) {
              return 2;
            }
            uVar27 = (ulong)*(uint *)(puVar38 + 4);
            lVar12 = puVar38[3];
            *(uint *)(puVar38 + 4) = *(uint *)(puVar38 + 4) + 1;
            puVar38 = (undefined8 *)(lVar12 + uVar27 * 0x30);
            if (lVar12 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = lVar12 + uVar27 * 0x30;
              *(undefined8 *)(lVar13 + 8) = 0;
              *(undefined1 *)(lVar13 + 0x10) = 0;
              *(undefined8 *)(lVar13 + 0x18) = 0;
              *(undefined8 *)(lVar13 + 0x20) = 0;
              *puVar38 = &PTR_LAB_047c33c0;
              lVar13 = *plVar19;
            }
            puVar5 = PTR_DAT_047e2fd0;
            puVar9 = (undefined8 *)(lVar13 + uVar24 * 0x30);
            if (puVar9 < puVar38) {
              puVar38 = (undefined8 *)(lVar12 + uVar27 * 0x30 + -0x28);
              do {
                *(undefined1 *)(puVar38 + 10) = *(undefined1 *)(puVar38 + 4);
                puVar38[6] = *puVar38;
                *(undefined1 *)(puVar38 + 7) = *(undefined1 *)(puVar38 + 1);
                if (puVar38[8] != 0) {
                  *(undefined4 *)(puVar38 + 9) = 0;
                  (**(code **)(puVar5 + 0x30))(0);
                  puVar38[8] = 0;
                  *(undefined4 *)((long)puVar38 + 0x4c) = 0;
                }
                puVar38[8] = puVar38[2];
                *(undefined4 *)(puVar38 + 9) = *(undefined4 *)(puVar38 + 3);
                *(undefined4 *)((long)puVar38 + 0x4c) = *(undefined4 *)((long)puVar38 + 0x1c);
                puVar38[2] = 0;
                puVar38[3] = 0;
                puVar9 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
                puVar40 = puVar38 + -1;
                puVar38 = puVar38 + -6;
              } while (puVar9 < puVar40);
            }
            (**(code **)*puVar9)();
            lVar12 = 0;
            if (*plVar19 != 0) {
              puVar38 = (undefined8 *)(*plVar19 + uVar24 * 0x30);
              *(undefined1 *)(puVar38 + 2) = 0;
              puVar38[3] = 0;
              puVar38[4] = 0;
              *puVar38 = &PTR_LAB_047c33c0;
              puVar38[1] = 0;
              lVar12 = *plVar19;
            }
            puVar38 = (undefined8 *)(lVar12 + uVar24 * 0x30);
LAB_0348d0e4:
            if (puVar38 == (undefined8 *)0x0) {
              return 2;
            }
          }
          *(byte *)(puVar38 + 5) = bVar3;
LAB_0348d0ec:
          uVar24 = local_a0;
          if (local_a0 != 0) {
            uVar29 = *(uint *)(puVar38 + 4);
            lVar12 = puVar38[3];
            if (uVar29 == 0) {
              uVar18 = *(uint *)((long)puVar38 + 0x24);
              if (lVar12 != 0) {
                uVar27 = 0;
                if (uVar18 == 0) goto LAB_0348d188;
                goto LAB_0348d1c4;
              }
              if (uVar18 != 0) {
LAB_0348d258:
                *(undefined4 *)(puVar38 + 4) = 1;
                return 2;
              }
              lVar12 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,0x10);
              if (lVar12 == 0) {
                return 2;
              }
              uVar29 = *(uint *)(puVar38 + 4);
              puVar38[3] = lVar12;
              *(uint *)(puVar38 + 4) = uVar29 + 1;
              *(undefined4 *)((long)puVar38 + 0x24) = 1;
              plVar19 = (long *)(lVar12 + (ulong)uVar29 * 0x10);
              *plVar19 = 0;
            }
            else {
              uVar21 = 0;
              uVar18 = uVar29;
              do {
                iVar10 = uVar21 + (uVar18 >> 1);
                uVar27 = *(ulong *)(lVar12 + (long)iVar10 * 0x10 + 8);
                if (uVar27 == local_a0) {
                  plVar19 = (long *)(lVar12 + (long)iVar10 * 0x10);
                  goto LAB_0348d2e8;
                }
                if (uVar27 < local_a0) {
                  uVar21 = iVar10 + 1;
                }
                uVar18 = uVar18 - (uVar27 < local_a0) >> 1;
              } while (uVar18 != 0);
              uVar18 = *(uint *)((long)puVar38 + 0x24);
              uVar27 = (ulong)uVar21;
              if (uVar18 <= uVar29) {
                if (uVar18 == 0) {
LAB_0348d188:
                  uVar18 = 0;
                  iVar10 = 1;
                }
                else {
                  iVar10 = uVar18 + (uVar18 >> 1);
                }
                uVar18 = iVar10 + uVar18;
                lVar12 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar12,(ulong)uVar18 << 4);
                if (lVar12 == 0) {
                  return 2;
                }
                puVar38[3] = lVar12;
                *(uint *)((long)puVar38 + 0x24) = uVar18;
              }
LAB_0348d1c4:
              if (uVar18 <= uVar29) {
                return 2;
              }
              puVar9 = (undefined8 *)(lVar12 + (ulong)*(uint *)(puVar38 + 4) * 0x10);
              *(uint *)(puVar38 + 4) = *(uint *)(puVar38 + 4) + 1;
              *puVar9 = 0;
              lVar12 = puVar38[3];
              if ((undefined8 *)(lVar12 + uVar27 * 0x10) < puVar9) {
                do {
                  puVar40 = puVar9 + -2;
                  *puVar9 = *puVar40;
                  puVar9[1] = puVar9[-1];
                  lVar12 = puVar38[3];
                  puVar9 = puVar40;
                } while ((undefined8 *)(lVar12 + uVar27 * 0x10) < puVar40);
              }
              if (lVar12 == 0) {
                lVar12 = 0;
              }
              else {
                *(undefined8 *)(lVar12 + uVar27 * 0x10) = 0;
                lVar12 = puVar38[3];
              }
              if (lVar12 == 0) {
                return 2;
              }
              plVar19 = (long *)(lVar12 + uVar27 * 0x10);
            }
            plVar19[1] = uVar24;
LAB_0348d2e8:
            if (plVar19 == (long *)0x0) {
              return 2;
            }
            goto LAB_0348bfbc;
          }
          if (*(char *)(puVar38 + 2) == '\0') {
            puVar38[1] = 0;
            *(undefined1 *)(puVar38 + 2) = 1;
          }
        }
      }
      plVar19 = puVar38 + 1;
    }
  }
LAB_0348bfbc:
  lVar12 = (**(code **)(*param_1 + 0x40))
                     (param_1,*plVar19,param_3,*(undefined8 *)(param_2 + 8),iVar31,local_94);
  if (lVar12 != 0) {
    if (*plVar19 != lVar12) {
      *(int *)(lVar12 + 0x74) = *(int *)(lVar12 + 0x74) + 1;
      puVar38 = (undefined8 *)*plVar19;
      if ((puVar38 != (undefined8 *)0x0) &&
         (iVar31 = *(int *)((long)puVar38 + 0x74) + -1, *(int *)((long)puVar38 + 0x74) = iVar31,
         iVar31 == 0)) {
        (**(code **)*puVar38)(puVar38);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar38);
      }
      *plVar19 = lVar12;
    }
    puVar5 = PTR_DAT_047e2fd0;
    if (param_5 != (long *)0x0) {
      lVar13 = *param_5;
      if (lVar13 == 0) {
        puVar38 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x30);
        if (puVar38 == (undefined8 *)0x0) {
          *param_5 = 0;
          return 2;
        }
        puVar38[3] = 0;
        puVar38[4] = 0;
        *puVar38 = 0;
        *(undefined4 *)(puVar38 + 5) = 1;
        puVar38[1] = 0;
        puVar38[2] = 0;
        *param_5 = (long)puVar38;
        puVar9 = (undefined8 *)(**(code **)(puVar5 + 0x10))(0,0x80);
        puVar38[3] = puVar9;
        if (puVar9 != (undefined8 *)0x0) {
          uVar29 = 0;
          puVar38[2] = puVar9;
          *(undefined4 *)(puVar38 + 4) = 4;
          do {
            puVar40 = puVar9;
            puVar40[2] = 0;
            puVar40[3] = 0;
            uVar29 = uVar29 + 1;
            *puVar40 = puVar40 + 4;
            puVar9 = puVar40 + 4;
          } while (uVar29 < *(uint *)(puVar38 + 4));
          *puVar40 = 0;
        }
        lVar13 = *param_5;
        if (lVar13 == 0) {
          return 2;
        }
      }
      uVar7 = FUN_0349959c(lVar13,lVar12,param_3,param_2);
      if ((int)uVar7 != 1) {
        return uVar7;
      }
      lVar13 = param_5[1];
      if (((int)lVar13 != -1) && ((long *)*param_5 != (long *)0x0)) {
        for (plVar19 = *(long **)*param_5; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
          lVar25 = plVar19[1];
          if ((*(int *)(lVar25 + 0x6c) == 0x7fffffff) &&
             (*(int *)(lVar25 + 0x6c) = *(int *)(lVar25 + 0x70) + (int)lVar13,
             *(int *)(lVar25 + 0x78) != 3)) {
            *(undefined4 *)(lVar25 + 0x78) = 2;
          }
        }
      }
    }
    if (local_94[0] != '\0') {
      uVar7 = FUN_034c8b08((int)param_1[2],&local_c8);
      if ((int)uVar7 == 1) {
        *(int *)(lVar12 + 0x74) = *(int *)(lVar12 + 0x74) + 1;
        *(undefined8 *)(lVar12 + 8) = 0;
        plVar19 = (long *)(param_4 + 4);
        if (*(long *)(param_4 + 4) != 0) {
          plVar19 = (long *)(*(long *)(param_4 + 2) + 8);
        }
        *plVar19 = lVar12;
        *(long *)(param_4 + 2) = lVar12;
        *param_4 = *param_4 + 1;
        return uVar7;
      }
      local_78 = 0xff;
      local_70 = 0xff;
      bVar6 = false;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      if (((local_c8 == 0) && (local_b8 == 0 && local_c0 == 0)) && ((local_a8 & local_b0) == 0xff))
      {
        bVar6 = local_a0 == 0;
      }
      FUN_03493838(param_1 + 7,FUN_0348b400,&local_c8,&local_90,&local_90,0,bVar6);
    }
    return 1;
  }
  if (*plVar19 != 0) {
    return 2;
  }
  bVar3 = local_a8 & local_b0;
  if (((local_c8 == 0) && (local_b8 == 0 && local_c0 == 0)) && ((bVar3 == 0xff && (local_a0 == 0))))
  {
    if ((char)param_1[9] == '\0') {
      return 2;
    }
    *(undefined1 *)(param_1 + 9) = 0;
    return 2;
  }
  uVar29 = *(uint *)(param_1 + 0xb);
  if (uVar29 == 0) {
    return 2;
  }
  lVar12 = param_1[10];
  iVar31 = 0;
  while( true ) {
    iVar10 = iVar31 + (uVar29 >> 1);
    lVar13 = (long)iVar10;
    uVar24 = *(ulong *)(lVar12 + (long)iVar10 * 0x30 + 0x28);
    if (uVar24 == local_c8) break;
    if (uVar24 < local_c8) {
      iVar31 = iVar10 + 1;
    }
    uVar29 = uVar29 - (uVar24 < local_c8) >> 1;
    if (uVar29 == 0) {
      return 2;
    }
  }
  if (((local_b8 == 0 && local_c0 == 0) && (bVar3 == 0xff)) && (local_a0 == 0)) {
    pcVar16 = (char *)(lVar12 + lVar13 * 0x30 + 0x10);
    if (*pcVar16 != '\0') {
      *pcVar16 = '\0';
    }
  }
  else {
    lVar25 = lVar12 + lVar13 * 0x30;
    uVar29 = *(uint *)(lVar25 + 0x20);
    if (uVar29 != 0) {
      plVar19 = (long *)(lVar25 + 0x18);
      lVar25 = *plVar19;
      iVar31 = 0;
      do {
        iVar10 = iVar31 + (uVar29 >> 1);
        lVar39 = (long)iVar10;
        uVar18 = *(uint *)(lVar25 + (long)iVar10 * 0x30 + 0x28);
        if (uVar18 == local_c0) {
          if (((local_b8 == 0) && (bVar3 == 0xff)) && (local_a0 == 0)) {
            pcVar16 = (char *)(lVar25 + lVar39 * 0x30 + 0x10);
            if (*pcVar16 != '\0') {
              *pcVar16 = '\0';
            }
            goto LAB_0348d5b0;
          }
          lVar30 = lVar25 + lVar39 * 0x30;
          uVar29 = *(uint *)(lVar30 + 0x20);
          if (uVar29 == 0) goto LAB_0348d5b0;
          plVar35 = (long *)(lVar30 + 0x18);
          lVar30 = *plVar35;
          iVar31 = 0;
          goto LAB_0348ce50;
        }
        if (uVar18 < local_c0) {
          iVar31 = iVar10 + 1;
        }
        uVar29 = uVar29 - (uVar18 < local_c0) >> 1;
      } while (uVar29 != 0);
    }
  }
  goto LAB_0348d618;
  while( true ) {
    if (uVar18 < local_b8) {
      iVar31 = iVar10 + 1;
    }
    uVar29 = uVar29 - (uVar18 < local_b8) >> 1;
    if (uVar29 == 0) break;
LAB_0348ce50:
    iVar10 = iVar31 + (uVar29 >> 1);
    lVar37 = (long)iVar10;
    uVar18 = *(uint *)(lVar30 + (long)iVar10 * 0x30 + 0x28);
    if (uVar18 == local_b8) {
      if ((bVar3 == 0xff) && (local_a0 == 0)) {
        pcVar16 = (char *)(lVar30 + lVar37 * 0x30 + 0x10);
        if (*pcVar16 != '\0') {
          *pcVar16 = '\0';
        }
        goto LAB_0348d56c;
      }
      lVar28 = lVar30 + lVar37 * 0x30;
      uVar29 = *(uint *)(lVar28 + 0x20);
      if (uVar29 == 0) goto LAB_0348d56c;
      plVar1 = (long *)(lVar28 + 0x18);
      lVar28 = *plVar1;
      iVar31 = 0;
      goto LAB_0348cfd8;
    }
  }
  goto LAB_0348d5b0;
  while( true ) {
    if (bVar3 < local_b0) {
      iVar31 = iVar10 + 1;
    }
    uVar29 = uVar29 - (bVar3 < local_b0) >> 1;
    if (uVar29 == 0) break;
LAB_0348cfd8:
    iVar10 = iVar31 + (uVar29 >> 1);
    lVar36 = (long)iVar10;
    bVar3 = *(byte *)(lVar28 + (long)iVar10 * 0x30 + 0x28);
    if (bVar3 == local_b0) {
      if ((local_a8 == 0xff) && (local_a0 == 0)) {
        pcVar16 = (char *)(lVar28 + lVar36 * 0x30 + 0x10);
        if (*pcVar16 != '\0') {
          *pcVar16 = '\0';
        }
        goto LAB_0348d4fc;
      }
      lVar26 = lVar28 + lVar36 * 0x30;
      uVar29 = *(uint *)(lVar26 + 0x20);
      if (uVar29 == 0) goto LAB_0348d4fc;
      plVar34 = (long *)(lVar26 + 0x18);
      lVar26 = *plVar34;
      iVar31 = 0;
      goto LAB_0348d2a0;
    }
  }
  goto LAB_0348d56c;
LAB_0348d390:
  iVar10 = iVar31 + (uVar18 >> 1);
  uVar24 = *(ulong *)(lVar14 + (long)iVar10 * 0x10 + 8);
  if (uVar24 != local_a0) goto code_r0x0348d3a8;
  puVar9 = (undefined8 *)((lVar14 + (ulong)uVar29 * 0x10) - 0x10);
  puVar38 = (undefined8 *)(lVar14 + (long)iVar10 * 0x10);
  if (puVar38 < puVar9) {
    do {
      puVar40 = puVar38 + 2;
      *puVar38 = *puVar40;
      puVar38[1] = puVar38[3];
      puVar38 = puVar40;
    } while (puVar40 < puVar9);
    uVar29 = *puVar15;
  }
  *puVar15 = uVar29 - 1;
  if (uVar29 - 1 == 0) {
LAB_0348d444:
    if (*plVar32 != 0) {
      *puVar15 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar32 = 0;
      *(undefined4 *)(lVar26 + lVar33 * 0x30 + 0x24) = 0;
    }
  }
LAB_0348d47c:
  if ((*(char *)(lVar26 + lVar33 * 0x30 + 0x10) == '\0') &&
     (piVar17 = (int *)(lVar26 + lVar33 * 0x30 + 0x20), *piVar17 == 0)) {
    plVar32 = (long *)(lVar26 + lVar33 * 0x30 + 0x18);
    if (*plVar32 != 0) {
      *piVar17 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar32 = 0;
      *(undefined4 *)(lVar26 + lVar33 * 0x30 + 0x24) = 0;
    }
    FUN_0349372c(plVar34,local_a8);
  }
  goto LAB_0348d4fc;
code_r0x0348d3a8:
  if (uVar24 < local_a0) {
    iVar31 = iVar10 + 1;
  }
  uVar18 = uVar18 - (uVar24 < local_a0) >> 1;
  if (uVar18 == 0) goto LAB_0348d47c;
  goto LAB_0348d390;
  while( true ) {
    if (bVar3 < local_a8) {
      iVar31 = iVar10 + 1;
    }
    uVar29 = uVar29 - (bVar3 < local_a8) >> 1;
    if (uVar29 == 0) break;
LAB_0348d2a0:
    iVar10 = iVar31 + (uVar29 >> 1);
    lVar33 = (long)iVar10;
    bVar3 = *(byte *)(lVar26 + (long)iVar10 * 0x30 + 0x28);
    if (bVar3 == local_a8) {
      if (local_a0 == 0) {
        pcVar16 = (char *)(lVar26 + lVar33 * 0x30 + 0x10);
        if (*pcVar16 != '\0') {
          *pcVar16 = '\0';
        }
        goto LAB_0348d47c;
      }
      lVar14 = lVar26 + lVar33 * 0x30;
      puVar15 = (uint *)(lVar14 + 0x20);
      uVar29 = *puVar15;
      plVar32 = (long *)(lVar14 + 0x18);
      if (uVar29 == 0) goto LAB_0348d444;
      lVar14 = *plVar32;
      iVar31 = 0;
      uVar18 = uVar29;
      goto LAB_0348d390;
    }
  }
LAB_0348d4fc:
  if ((*(char *)(lVar28 + lVar36 * 0x30 + 0x10) == '\0') &&
     (piVar17 = (int *)(lVar28 + lVar36 * 0x30 + 0x20), *piVar17 == 0)) {
    plVar34 = (long *)(lVar28 + lVar36 * 0x30 + 0x18);
    if (*plVar34 != 0) {
      *piVar17 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar34 = 0;
      *(undefined4 *)(lVar28 + lVar36 * 0x30 + 0x24) = 0;
    }
    FUN_034935e0(plVar1,local_b0);
  }
LAB_0348d56c:
  if ((*(char *)(lVar30 + lVar37 * 0x30 + 0x10) == '\0') &&
     (*(int *)(lVar30 + lVar37 * 0x30 + 0x20) == 0)) {
    FUN_034917f0(lVar30 + lVar37 * 0x30);
    FUN_03493494(plVar35,local_b8);
  }
LAB_0348d5b0:
  if ((*(char *)(lVar25 + lVar39 * 0x30 + 0x10) == '\0') &&
     (piVar17 = (int *)(lVar25 + lVar39 * 0x30 + 0x20), *piVar17 == 0)) {
    plVar35 = (long *)(lVar25 + lVar39 * 0x30 + 0x18);
    if (*plVar35 != 0) {
      *piVar17 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar35 = 0;
      *(undefined4 *)(lVar25 + lVar39 * 0x30 + 0x24) = 0;
    }
    FUN_03493348(plVar19,local_c0);
  }
LAB_0348d618:
  if ((*(char *)(lVar12 + lVar13 * 0x30 + 0x10) == '\0') &&
     (*(int *)(lVar12 + lVar13 * 0x30 + 0x20) == 0)) {
    FUN_034916b4(lVar12 + lVar13 * 0x30);
    FUN_034931fc(param_1 + 10,local_c8);
  }
  return 2;
}


