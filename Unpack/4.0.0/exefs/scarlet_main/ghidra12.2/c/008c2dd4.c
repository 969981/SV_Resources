/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c2dd4; name: FUN_008c2dd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c2dd4(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ushort *puVar22;
  
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x10) = puVar9 + 6;
  uVar6 = _UNK_03cabe68;
  uVar5 = _DAT_03cabe60;
  uVar4 = DAT_03cab628;
  uVar7 = DAT_03cab620;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar9;
  puVar9[1] = uVar4;
  *puVar9 = uVar7;
  puVar9[3] = uVar6;
  puVar9[2] = uVar5;
  uVar7 = _DAT_03caa5b0;
  puVar9[5] = _UNK_03caa5b8;
  puVar9[4] = uVar7;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x91) >> 1 & 1) != 0)) {
    FUN_008c1678(param_1 + 0x40);
  }
  uVar21 = *(uint *)(param_1 + 0xc0);
  pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
  *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + (long)(int)uVar21 * 0x30);
  if ((pvVar17 != (void *)0x0) && (0 < (int)uVar21)) {
    memset(pvVar17,0,(ulong)uVar21 * 0x30);
  }
  *(void **)(param_1 + 0xa8) = pvVar17;
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar19 = 0;
    do {
      lVar20 = *(long *)(param_1 + 0xa0);
      puVar22 = (ushort *)(lVar20 + uVar19 * 0xa0);
      pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      uVar1 = *puVar22;
      sVar8 = (ulong)uVar1 * 8;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + sVar8);
      if ((pvVar17 != (void *)0x0) && (uVar1 != 0)) {
        memset(pvVar17,0,sVar8);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 0x18) = pvVar17;
      if (*puVar22 == 0) {
LAB_008c3044:
        pvVar17 = (void *)0x0;
        uVar21 = 0;
      }
      else {
        uVar18 = 0;
        do {
          uVar7 = FUN_008c3198(param_1,*(undefined8 *)
                                        (*(long *)(lVar20 + uVar19 * 0xa0 + 8) + uVar18 * 8));
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 0x18) + uVar18 * 8)
               = uVar7;
          uVar1 = *puVar22;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar1);
        if (uVar1 == 0) goto LAB_008c3044;
        lVar10 = lVar20 + uVar19 * 0xa0;
        uVar2 = *(ushort *)(lVar10 + 0x10);
        uVar12 = (uint)uVar1;
        uVar18 = 0;
        uVar21 = 0;
        if (uVar1 < 2) {
          uVar12 = 1;
        }
        do {
          uVar1 = *(ushort *)(*(long *)(*(long *)(lVar10 + 8) + uVar18 * 8) + 2);
          uVar13 = (ulong)uVar1;
          if ((uint)uVar1 < (uint)uVar2) {
            uVar3 = (uint)uVar2 - (uint)uVar1;
            uVar14 = ~uVar13;
            uVar16 = (ulong)uVar3 & 3;
            if ((uVar3 & 3) != 0) {
              do {
                lVar15 = uVar13 * 8;
                uVar13 = uVar13 + 1;
                if (**(byte **)(*(long *)(lVar10 + 0x18) + lVar15) < 2) {
                  uVar21 = uVar21 + 1;
                }
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            if (2 < uVar14 + uVar2) {
              lVar15 = uVar2 - uVar13;
              puVar9 = (undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10 + uVar13 * 8);
              do {
                if (*(byte *)puVar9[-2] < 2) {
                  uVar21 = uVar21 + 1;
                }
                if (*(byte *)puVar9[-1] < 2) {
                  uVar21 = uVar21 + 1;
                }
                if (*(byte *)*puVar9 < 2) {
                  uVar21 = uVar21 + 1;
                }
                if (*(byte *)puVar9[1] < 2) {
                  uVar21 = uVar21 + 1;
                }
                lVar15 = lVar15 + -4;
                puVar9 = puVar9 + 4;
              } while (lVar15 != 0);
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar12);
        if (uVar21 == 0) {
          pvVar17 = (void *)0x0;
        }
        else {
          pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
          *(void **)(*(long *)(param_1 + 0x88) + 0x10) =
               (void *)((long)pvVar17 + (long)(int)uVar21 * 0x18);
          if ((pvVar17 != (void *)0x0) && (0 < (int)uVar21)) {
            memset(pvVar17,0,(ulong)uVar21 * 0x18);
          }
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 0x28) = pvVar17;
      *(uint *)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 0x20) = uVar21;
      puVar22 = (ushort *)(lVar20 + uVar19 * 0xa0 + 0x10);
      if ((ulong)*puVar22 == 0) {
        pvVar17 = (void *)0x0;
      }
      else {
        sVar8 = (ulong)*puVar22 * 8;
        pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
        *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + sVar8);
        if (pvVar17 != (void *)0x0) {
          memset(pvVar17,0,sVar8);
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 8) = pvVar17;
      uVar1 = *puVar22;
      pvVar17 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      sVar8 = (ulong)uVar1 * 0x10;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar17 + sVar8);
      if ((pvVar17 != (void *)0x0) && (uVar1 != 0)) {
        memset(pvVar17,0,sVar8);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 0x10) = pvVar17;
      if (*puVar22 != 0) {
        uVar18 = 0;
        lVar20 = 8;
        do {
          pcVar11 = *(char **)(*(long *)(*(long *)(param_1 + 0xa0) + uVar19 * 0xa0 + 0x18) +
                              uVar18 * 8);
          lVar10 = *(long *)(*(long *)(param_1 + 0xa8) + uVar19 * 0x30 + 0x10);
          if (*pcVar11 == '\x01') {
            *(char **)(lVar10 + lVar20) = pcVar11;
          }
          else {
            *(undefined8 *)(lVar10 + lVar20) = 0;
          }
          uVar18 = uVar18 + 1;
          lVar20 = lVar20 + 0x10;
        } while (uVar18 < *puVar22);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


