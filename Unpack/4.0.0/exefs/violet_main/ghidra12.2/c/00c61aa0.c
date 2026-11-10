/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c61aa0; name: FUN_00c61aa0
 */


undefined8 * FUN_00c61aa0(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  
  if ((((byte)param_1[0xdc] >> 1 & 1) != 0) &&
     (iVar6 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xde)), iVar6 != 0)) {
    return (undefined8 *)0x0;
  }
  if (param_2 < 0xe9) {
    uVar14 = 0x20;
    if (0x16 < param_2) {
      uVar14 = param_2 + 0x17 & 0xfffffffffffffff0;
    }
    uVar9 = *param_1;
    uVar5 = (uint)(uVar14 >> 3);
    uVar2 = uVar9 >> (ulong)(uVar5 & 0x1e);
    if ((uVar2 & 3) != 0) {
      uVar2 = (uVar2 & 1 | uVar5) ^ 1;
      uVar5 = uVar2 << 1;
      lVar11 = *(long *)(param_1 + (ulong)uVar5 * 2 + 0x16);
      puVar7 = (undefined8 *)(lVar11 + 0x10);
      puVar16 = (uint *)*puVar7;
      if (puVar16 == param_1 + (ulong)uVar5 * 2 + 0x12) {
        *param_1 = uVar9 & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((puVar16 < *(uint **)(param_1 + 6)) || (*(long *)(puVar16 + 6) != lVar11))
        goto LAB_00c625c4;
        *(uint **)(puVar16 + 6) = param_1 + (ulong)uVar5 * 2 + 0x12;
        *(uint **)(param_1 + (ulong)uVar5 * 2 + 0x16) = puVar16;
      }
      lVar10 = lVar11 + (ulong)(uVar2 << 3);
      *(ulong *)(lVar11 + 8) = (ulong)(uVar2 << 3) | 3;
LAB_00c61c84:
      *(ulong *)(lVar10 + 8) = *(ulong *)(lVar10 + 8) | 1;
      goto LAB_00c61c90;
    }
    if (uVar14 <= *(ulong *)(param_1 + 2)) goto LAB_00c61cb0;
    if (uVar2 != 0) {
      uVar1 = 2 << (ulong)(uVar5 & 0x1f);
      uVar2 = uVar2 << (ulong)(uVar5 & 0x1f) & (uVar1 | -uVar1);
      uVar5 = (uVar2 & -uVar2) - 1;
      uVar2 = uVar5 >> 0xc & 0x10;
      uVar5 = uVar5 >> (ulong)uVar2;
      uVar1 = uVar5 >> (ulong)(uVar5 >> 5 & 8);
      uVar3 = uVar1 >> (ulong)(uVar1 >> 2 & 4);
      uVar4 = uVar3 >> (ulong)(uVar3 >> 1 & 2);
      uVar2 = (uVar2 | uVar5 >> 5 & 8 | uVar1 >> 2 & 4 | uVar3 >> 1 & 2 | uVar4 >> 1 & 1) +
              (uVar4 >> (ulong)(uVar4 >> 1 & 1));
      puVar16 = param_1 + (ulong)(uVar2 * 2) * 2 + 0x12;
      lVar10 = *(long *)(puVar16 + 4);
      puVar7 = (undefined8 *)(lVar10 + 0x10);
      puVar19 = (uint *)*puVar7;
      if (puVar19 == puVar16) {
        *param_1 = uVar9 & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((puVar19 < *(uint **)(param_1 + 6)) || (*(long *)(puVar19 + 6) != lVar10))
        goto LAB_00c625c4;
        *(uint **)(puVar19 + 6) = puVar16;
        *(uint **)(puVar16 + 4) = puVar19;
      }
      uVar15 = (ulong)(uVar2 * 8);
      uVar8 = uVar15 - uVar14;
      if (0x1f < uVar8) {
        *(ulong *)(lVar10 + 8) = uVar14 | 3;
        *(ulong *)(lVar10 + uVar14 + 8) = uVar8 | 1;
        *(ulong *)(lVar10 + uVar15) = uVar8;
        uVar15 = *(ulong *)(param_1 + 2);
        if (uVar15 != 0) {
          lVar11 = *(long *)(param_1 + 8);
          uVar18 = (long)param_1 + (uVar15 & 0x3fffffff8) * 2 + 0x48;
          uVar9 = 1 << (ulong)((uint)(uVar15 >> 3) & 0x1f);
          if ((*param_1 & uVar9) == 0) {
            *param_1 = *param_1 | uVar9;
            uVar15 = uVar18;
          }
          else {
            uVar15 = *(ulong *)(uVar18 + 0x10);
            if (*(ulong *)(uVar18 + 0x10) < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
          }
          *(long *)(uVar18 + 0x10) = lVar11;
          *(long *)(uVar15 + 0x18) = lVar11;
          *(ulong *)(lVar11 + 0x10) = uVar15;
          *(ulong *)(lVar11 + 0x18) = uVar18;
        }
        *(ulong *)(param_1 + 2) = uVar8;
        *(ulong *)(param_1 + 8) = lVar10 + uVar14;
        goto LAB_00c61c90;
      }
      *(ulong *)(lVar10 + 8) = uVar15 | 3;
      lVar10 = lVar10 + uVar15;
      goto LAB_00c61c84;
    }
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_00c61cb0;
    uVar2 = (uVar9 & -uVar9) - 1;
    uVar9 = uVar2 >> 0xc & 0x10;
    uVar2 = uVar2 >> (ulong)uVar9;
    uVar5 = uVar2 >> (ulong)(uVar2 >> 5 & 8);
    uVar1 = uVar5 >> (ulong)(uVar5 >> 2 & 4);
    uVar3 = uVar1 >> (ulong)(uVar1 >> 1 & 2);
    puVar7 = *(undefined8 **)
              (param_1 +
              (ulong)((uVar9 | uVar2 >> 5 & 8 | uVar5 >> 2 & 4 | uVar1 >> 1 & 2 | uVar3 >> 1 & 1) +
                     (uVar3 >> (ulong)(uVar3 >> 1 & 1))) * 2 + 0x96);
    uVar15 = (puVar7[1] & 0xfffffffffffffff8) - uVar14;
    puVar17 = puVar7;
    while ((puVar12 = (undefined8 *)puVar17[4], puVar12 != (undefined8 *)0x0 ||
           (puVar12 = (undefined8 *)puVar17[5], puVar12 != (undefined8 *)0x0))) {
      uVar8 = (puVar12[1] & 0xfffffffffffffff8) - uVar14;
      puVar17 = puVar12;
      if (uVar15 <= uVar8) {
        puVar17 = puVar7;
        uVar8 = uVar15;
      }
      uVar15 = uVar8;
      puVar7 = puVar17;
      puVar17 = puVar12;
    }
    puVar17 = *(undefined8 **)(param_1 + 6);
    if ((puVar7 < puVar17) || (puVar12 = (undefined8 *)((long)puVar7 + uVar14), puVar12 <= puVar7))
    goto LAB_00c625c4;
    puVar13 = (undefined8 *)puVar7[3];
    uVar8 = puVar7[6];
    if (puVar13 == puVar7) {
      puVar23 = (undefined8 *)puVar7[5];
      puVar20 = puVar7 + 5;
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)puVar7[4];
        puVar20 = puVar7 + 4;
        if (puVar23 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
          goto LAB_00c61f9c;
        }
      }
      do {
        do {
          puVar13 = puVar23;
          puVar21 = puVar20;
          puVar23 = (undefined8 *)puVar13[5];
          puVar20 = puVar13 + 5;
        } while (puVar23 != (undefined8 *)0x0);
        puVar23 = (undefined8 *)puVar13[4];
        puVar20 = puVar13 + 4;
      } while (puVar23 != (undefined8 *)0x0);
      if (puVar21 < puVar17) goto LAB_00c625c4;
      *puVar21 = 0;
    }
    else {
      puVar20 = (undefined8 *)puVar7[2];
      if (((puVar20 < puVar17) || ((undefined8 *)puVar20[3] != puVar7)) ||
         ((undefined8 *)puVar13[2] != puVar7)) goto LAB_00c625c4;
      puVar20[3] = puVar13;
      puVar13[2] = puVar20;
    }
LAB_00c61f9c:
    if (uVar8 != 0) {
      if (puVar7 == *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar7 + 7) * 2 + 0x96)) {
        *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar7 + 7) * 2 + 0x96) = puVar13;
        if (puVar13 == (undefined8 *)0x0) {
          param_1[1] = param_1[1] & (1 << (ulong)(*(uint *)(puVar7 + 7) & 0x1f) ^ 0xffffffffU);
        }
        else {
LAB_00c62004:
          if (puVar13 < *(undefined8 **)(param_1 + 6)) goto LAB_00c625c4;
          puVar13[6] = uVar8;
          uVar8 = puVar7[4];
          if (uVar8 != 0) {
            if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
            puVar13[4] = uVar8;
            *(undefined8 **)(uVar8 + 0x30) = puVar13;
          }
          uVar8 = puVar7[5];
          if (uVar8 != 0) {
            if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
            puVar13[5] = uVar8;
            *(undefined8 **)(uVar8 + 0x30) = puVar13;
          }
        }
      }
      else {
        if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
        lVar10 = 0x20;
        if (*(undefined8 **)(uVar8 + 0x20) != puVar7) {
          lVar10 = 0x28;
        }
        *(undefined8 **)(uVar8 + lVar10) = puVar13;
        if (puVar13 != (undefined8 *)0x0) goto LAB_00c62004;
      }
    }
    if (uVar15 < 0x20) goto LAB_00c6231c;
    puVar7[1] = uVar14 | 3;
    puVar12[1] = uVar15 | 1;
    *(ulong *)((long)puVar12 + uVar15) = uVar15;
    uVar14 = *(ulong *)(param_1 + 2);
    if (uVar14 != 0) {
      lVar10 = *(long *)(param_1 + 8);
      uVar8 = uVar14 & 0x3fffffff8;
      uVar9 = 1 << (ulong)((uint)(uVar14 >> 3) & 0x1f);
      uVar14 = (long)param_1 + uVar8 * 2 + 0x48;
      if ((*param_1 & uVar9) == 0) {
        *param_1 = *param_1 | uVar9;
        uVar18 = uVar14;
      }
      else {
        uVar18 = *(ulong *)((long)param_1 + uVar8 * 2 + 0x58);
        if (uVar18 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
      }
      *(long *)((long)param_1 + uVar8 * 2 + 0x58) = lVar10;
      *(long *)(uVar18 + 0x18) = lVar10;
      *(ulong *)(lVar10 + 0x10) = uVar18;
      *(ulong *)(lVar10 + 0x18) = uVar14;
    }
    *(ulong *)(param_1 + 2) = uVar15;
    *(undefined8 **)(param_1 + 8) = puVar12;
  }
  else {
    if (param_2 < 0xffffffffffffff80) {
      param_2 = param_2 + 0x17;
      uVar14 = param_2 & 0xfffffffffffffff0;
      if (param_1[1] == 0) goto LAB_00c61cb0;
      uVar8 = -uVar14;
      if (param_2 >> 0x18 == 0) {
        iVar6 = (int)(param_2 >> 8);
        uVar9 = iVar6 + 0xfff00U >> 0x10 & 8;
        iVar6 = iVar6 << (ulong)uVar9;
        uVar2 = iVar6 + 0x7f000U >> 0x10 & 4;
        iVar6 = iVar6 << (ulong)uVar2;
        uVar5 = iVar6 + 0x3c000U >> 0x10 & 2;
        iVar6 = ((uint)(iVar6 << (ulong)uVar5) >> 0xf) - (uVar2 | uVar9 | uVar5);
        uVar9 = ((uint)(uVar14 >> ((ulong)(iVar6 + 0x15) & 0x3f)) & 1 | iVar6 * 2) + 0x1c;
      }
      else {
        uVar9 = 0x1f;
      }
      puVar17 = *(undefined8 **)(param_1 + (ulong)uVar9 * 2 + 0x96);
      if (puVar17 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
        puVar7 = (undefined8 *)0x0;
        uVar15 = uVar8;
      }
      else {
        uVar15 = 0;
        if (uVar9 != 0x1f) {
          uVar15 = 0x3f - (ulong)((uVar9 >> 1) + 6);
        }
        puVar12 = (undefined8 *)0x0;
        puVar7 = (undefined8 *)0x0;
        uVar18 = uVar14 << (uVar15 & 0x3f);
        do {
          uVar15 = (puVar17[1] & 0xfffffffffffffff8) - uVar14;
          if (uVar15 < uVar8) {
            puVar7 = puVar17;
            uVar8 = uVar15;
            if (uVar15 == 0) {
              puVar12 = puVar17;
              goto LAB_00c62110;
            }
          }
          puVar13 = (undefined8 *)puVar17[5];
          puVar17 = *(undefined8 **)((long)puVar17 + (uVar18 >> 0x3c & 8) + 0x20);
          if (puVar13 != puVar17 && puVar13 != (undefined8 *)0x0) {
            puVar12 = puVar13;
          }
          uVar18 = uVar18 << (puVar17 != (undefined8 *)0x0);
          uVar15 = uVar8;
        } while (puVar17 != (undefined8 *)0x0);
      }
      puVar17 = puVar12;
      if (puVar12 == (undefined8 *)0x0 && puVar7 == (undefined8 *)0x0) {
        uVar9 = 2 << (ulong)(uVar9 & 0x1f);
        uVar9 = (uVar9 | -uVar9) & param_1[1];
        if (uVar9 == 0) goto LAB_00c61cb0;
        uVar2 = (uVar9 & -uVar9) - 1;
        uVar9 = uVar2 >> 0xc & 0x10;
        uVar2 = uVar2 >> (ulong)uVar9;
        uVar5 = uVar2 >> (ulong)(uVar2 >> 5 & 8);
        uVar1 = uVar5 >> (ulong)(uVar5 >> 2 & 4);
        uVar3 = uVar1 >> (ulong)(uVar1 >> 1 & 2);
        puVar17 = *(undefined8 **)
                   (param_1 +
                   (ulong)((uVar9 | uVar2 >> 5 & 8 | uVar5 >> 2 & 4 | uVar1 >> 1 & 2 |
                           uVar3 >> 1 & 1) + (uVar3 >> (ulong)(uVar3 >> 1 & 1))) * 2 + 0x96);
      }
      puVar12 = puVar7;
      if (puVar17 != (undefined8 *)0x0) {
LAB_00c62110:
        puVar13 = (undefined8 *)puVar17[4];
        uVar8 = (puVar17[1] & 0xfffffffffffffff8) - uVar14;
        puVar7 = puVar17;
        if (uVar15 <= uVar8) {
          puVar7 = puVar12;
          uVar8 = uVar15;
        }
        uVar15 = uVar8;
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)puVar17[5];
        }
        if (puVar13 != (undefined8 *)0x0) {
          uVar18 = (puVar13[1] & 0xfffffffffffffff8) - uVar14;
          uVar8 = uVar18;
          if (uVar15 <= uVar18) {
            uVar8 = uVar15;
          }
          puVar17 = puVar13;
          if (uVar15 <= uVar18) {
            puVar17 = puVar7;
          }
          puVar7 = puVar17;
          uVar15 = uVar8;
          puVar17 = (undefined8 *)puVar13[4];
          if ((undefined8 *)puVar13[4] == (undefined8 *)0x0) {
            puVar17 = (undefined8 *)puVar13[5];
          }
          while (puVar12 = puVar17, puVar12 != (undefined8 *)0x0) {
            uVar18 = (puVar12[1] & 0xfffffffffffffff8) - uVar14;
            uVar8 = uVar18;
            if (uVar15 <= uVar18) {
              uVar8 = uVar15;
            }
            puVar17 = puVar12;
            if (uVar15 <= uVar18) {
              puVar17 = puVar7;
            }
            puVar7 = puVar17;
            uVar15 = uVar8;
            puVar17 = (undefined8 *)puVar12[4];
            if ((undefined8 *)puVar12[4] == (undefined8 *)0x0) {
              puVar17 = (undefined8 *)puVar12[5];
            }
          }
        }
      }
      if ((puVar7 == (undefined8 *)0x0) || (*(long *)(param_1 + 2) - uVar14 <= uVar15))
      goto LAB_00c61cb0;
      puVar17 = *(undefined8 **)(param_1 + 6);
      if ((puVar7 < puVar17) || (puVar12 = (undefined8 *)((long)puVar7 + uVar14), puVar12 <= puVar7)
         ) goto LAB_00c625c4;
      puVar13 = (undefined8 *)puVar7[3];
      uVar8 = puVar7[6];
      if (puVar13 == puVar7) {
        puVar23 = (undefined8 *)puVar7[5];
        puVar20 = puVar7 + 5;
        if (puVar23 == (undefined8 *)0x0) {
          puVar23 = (undefined8 *)puVar7[4];
          puVar20 = puVar7 + 4;
          if (puVar23 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)0x0;
            goto LAB_00c621b8;
          }
        }
        do {
          do {
            puVar13 = puVar23;
            puVar21 = puVar20;
            puVar23 = (undefined8 *)puVar13[5];
            puVar20 = puVar13 + 5;
          } while (puVar23 != (undefined8 *)0x0);
          puVar23 = (undefined8 *)puVar13[4];
          puVar20 = puVar13 + 4;
        } while (puVar23 != (undefined8 *)0x0);
        if (puVar21 < puVar17) goto LAB_00c625c4;
        *puVar21 = 0;
      }
      else {
        puVar20 = (undefined8 *)puVar7[2];
        if (((puVar20 < puVar17) || ((undefined8 *)puVar20[3] != puVar7)) ||
           ((undefined8 *)puVar13[2] != puVar7)) goto LAB_00c625c4;
        puVar20[3] = puVar13;
        puVar13[2] = puVar20;
      }
LAB_00c621b8:
      if (uVar8 != 0) {
        if (puVar7 == *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar7 + 7) * 2 + 0x96)) {
          *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar7 + 7) * 2 + 0x96) = puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            param_1[1] = param_1[1] & (1 << (ulong)(*(uint *)(puVar7 + 7) & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_00c622f4:
            if (puVar13 < *(undefined8 **)(param_1 + 6)) goto LAB_00c625c4;
            puVar13[6] = uVar8;
            uVar8 = puVar7[4];
            if (uVar8 != 0) {
              if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
              puVar13[4] = uVar8;
              *(undefined8 **)(uVar8 + 0x30) = puVar13;
            }
            uVar8 = puVar7[5];
            if (uVar8 != 0) {
              if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
              puVar13[5] = uVar8;
              *(undefined8 **)(uVar8 + 0x30) = puVar13;
            }
          }
        }
        else {
          if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
          lVar10 = 0x20;
          if (*(undefined8 **)(uVar8 + 0x20) != puVar7) {
            lVar10 = 0x28;
          }
          *(undefined8 **)(uVar8 + lVar10) = puVar13;
          if (puVar13 != (undefined8 *)0x0) goto LAB_00c622f4;
        }
      }
      if (0x1f < uVar15) {
        puVar7[1] = uVar14 | 3;
        puVar12[1] = uVar15 | 1;
        *(ulong *)((long)puVar12 + uVar15) = uVar15;
        if (uVar15 < 0x100) {
          uVar8 = uVar15 & 0x3fffffff8;
          uVar9 = 1 << (ulong)((uint)(uVar15 >> 3) & 0x1f);
          uVar14 = (long)param_1 + uVar8 * 2 + 0x48;
          if ((*param_1 & uVar9) == 0) {
            *param_1 = *param_1 | uVar9;
            uVar15 = uVar14;
          }
          else {
            uVar15 = *(ulong *)((long)param_1 + uVar8 * 2 + 0x58);
            if (uVar15 < *(ulong *)(param_1 + 6)) goto LAB_00c625c4;
          }
          *(undefined8 **)((long)param_1 + uVar8 * 2 + 0x58) = puVar12;
          *(undefined8 **)(uVar15 + 0x18) = puVar12;
          puVar12[2] = uVar15;
          puVar12[3] = uVar14;
        }
        else {
          if (uVar15 >> 0x18 == 0) {
            iVar6 = (int)(uVar15 >> 8);
            uVar9 = iVar6 + 0xfff00U >> 0x10 & 8;
            iVar6 = iVar6 << (ulong)uVar9;
            uVar2 = iVar6 + 0x7f000U >> 0x10 & 4;
            iVar6 = iVar6 << (ulong)uVar2;
            uVar5 = iVar6 + 0x3c000U >> 0x10 & 2;
            iVar6 = ((uint)(iVar6 << (ulong)uVar5) >> 0xf) - (uVar2 | uVar9 | uVar5);
            uVar9 = ((uint)(uVar15 >> ((ulong)(iVar6 + 0x15) & 0x3f)) & 1 | iVar6 * 2) + 0x1c;
          }
          else {
            uVar9 = 0x1f;
          }
          *(uint *)(puVar12 + 7) = uVar9;
          puVar12[4] = 0;
          puVar12[5] = 0;
          uVar2 = 1 << (ulong)(uVar9 & 0x1f);
          puVar22 = (ulong *)(param_1 + (ulong)uVar9 * 2 + 0x96);
          if ((param_1[1] & uVar2) == 0) {
            param_1[1] = param_1[1] | uVar2;
            *puVar22 = (ulong)puVar12;
            puVar12[6] = puVar22;
          }
          else {
            uVar14 = 0;
            if (uVar9 != 0x1f) {
              uVar14 = 0x3f - (ulong)((uVar9 >> 1) + 6);
            }
            uVar8 = uVar15 << (uVar14 & 0x3f);
            uVar14 = *puVar22;
            do {
              uVar18 = uVar14;
              if ((*(ulong *)(uVar18 + 8) & 0xfffffffffffffff8) == uVar15) {
                if ((uVar18 < *(ulong *)(param_1 + 6)) ||
                   (uVar14 = *(ulong *)(uVar18 + 0x10), uVar14 < *(ulong *)(param_1 + 6)))
                goto LAB_00c625c4;
                *(undefined8 **)(uVar14 + 0x18) = puVar12;
                *(undefined8 **)(uVar18 + 0x10) = puVar12;
                puVar12[6] = 0;
                puVar12[2] = uVar14;
                puVar12[3] = uVar18;
                goto LAB_00c61d54;
              }
              uVar14 = uVar8 >> 0x3c;
              uVar8 = uVar8 << 1;
              puVar22 = (ulong *)(uVar18 + (uVar14 & 8) + 0x20);
              uVar14 = *puVar22;
            } while (*puVar22 != 0);
            if (puVar22 < *(ulong **)(param_1 + 6)) {
LAB_00c625c4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar22 = (ulong)puVar12;
            puVar12[6] = uVar18;
          }
          puVar12[2] = puVar12;
          puVar12[3] = puVar12;
        }
        goto LAB_00c61d54;
      }
LAB_00c6231c:
      uVar15 = uVar15 + uVar14;
      lVar10 = (long)puVar7 + uVar15;
    }
    else {
      uVar14 = 0xffffffffffffffff;
LAB_00c61cb0:
      uVar15 = *(ulong *)(param_1 + 2);
      uVar8 = uVar15 - uVar14;
      if (uVar15 < uVar14) {
        uVar8 = *(ulong *)(param_1 + 4) - uVar14;
        if (*(ulong *)(param_1 + 4) < uVar14 || uVar8 == 0) {
          puVar7 = (undefined8 *)FUN_00c635d0();
        }
        else {
          lVar10 = *(long *)(param_1 + 10);
          *(ulong *)(param_1 + 4) = uVar8;
          *(ulong *)(param_1 + 10) = lVar10 + uVar14;
          *(ulong *)(lVar10 + uVar14 + 8) = uVar8 | 1;
          *(ulong *)(lVar10 + 8) = uVar14 | 3;
          puVar7 = (undefined8 *)(lVar10 + 0x10);
        }
        goto LAB_00c61c90;
      }
      puVar7 = *(undefined8 **)(param_1 + 8);
      if (0x1f < uVar8) {
        *(ulong *)(param_1 + 2) = uVar8;
        *(ulong *)(param_1 + 8) = (long)puVar7 + uVar14;
        *(ulong *)((long)puVar7 + uVar14 + 8) = uVar8 | 1;
        *(ulong *)((long)puVar7 + uVar15) = uVar8;
        puVar7[1] = uVar14 | 3;
        puVar7 = puVar7 + 2;
        goto LAB_00c61c90;
      }
      param_1[2] = 0;
      param_1[3] = 0;
      lVar10 = (long)puVar7 + uVar15;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    puVar7[1] = uVar15 | 3;
    *(ulong *)(lVar10 + 8) = *(ulong *)(lVar10 + 8) | 1;
  }
LAB_00c61d54:
  puVar7 = puVar7 + 2;
LAB_00c61c90:
  if (((byte)param_1[0xdc] >> 1 & 1) != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xde));
  }
  return puVar7;
}


