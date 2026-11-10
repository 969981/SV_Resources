/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012ac30; name: FUN_0012ac30
 */


/* WARNING: Removing unreachable block (ram,0x0012ae90) */

void FUN_0012ac30(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  
  lVar22 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar22 + 0x6a) == '\0') {
    return;
  }
  uVar18 = *(ulong *)(lVar22 + 0x28);
  if (*(char *)(lVar22 + 0x66) == '\x01') {
    if (uVar18 != 0) {
      bVar8 = *(byte *)(lVar22 + 100) & 0x18;
      plVar12 = *(long **)(lVar22 + 0x70);
      if (plVar12 != (long *)0x0) {
        do {
          *(byte *)((long)plVar12 + 9) = *(byte *)((long)plVar12 + 9) & 0xc0 | bVar8;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        bVar8 = *(byte *)(lVar22 + 100) & 0x18;
      }
      plVar12 = *(long **)(lVar22 + 0x80);
      *(undefined8 *)(lVar22 + 200) = 0;
      *(undefined8 *)(lVar22 + 0xd0) = 0;
      *(undefined8 *)(lVar22 + 0xc0) = 0;
      if (plVar12 != (long *)0x0) {
        do {
          *(byte *)((long)plVar12 + 9) = *(byte *)((long)plVar12 + 9) & 0xc0 | bVar8;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        bVar8 = *(byte *)(lVar22 + 100) & 0x18;
      }
      for (plVar12 = *(long **)(lVar22 + 0xb0); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12)
      {
        *(byte *)((long)plVar12 + 9) = *(byte *)((long)plVar12 + 9) & 0xc0 | bVar8;
      }
      *(undefined8 *)(lVar22 + 0xe8) = 0;
      *(undefined8 *)(lVar22 + 0xf0) = 0;
      *(undefined8 *)(lVar22 + 0xe0) = 0;
      *(undefined2 *)(lVar22 + 0x65) = 8;
      *(undefined8 *)(lVar22 + 0x28) = 0;
      lVar21 = *(long *)(param_1 + 0x18);
      goto LAB_0012ad80;
    }
    uVar5 = *(ulong *)(lVar22 + 0x20);
    if ((*(long *)(lVar22 + 0x18) < 1) ||
       (uVar10 = (ulong)*(byte *)(lVar22 + 0x69) * (uVar5 / 100),
       (ulong)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 0x18)) <= uVar10 * 4 + uVar5)) {
      puVar14 = *(undefined8 **)(lVar22 + 0xd8);
      if (puVar14 != (undefined8 *)0x0) {
        puVar20 = *(undefined8 **)(lVar22 + 0xd0);
        for (; puVar14 != puVar20; puVar14 = (undefined8 *)*puVar14) {
          bVar8 = *(byte *)((long)puVar14 + 9);
          if (((bVar8 & 7) == 3) &&
             (*(byte *)((long)puVar14 + 9) = bVar8 ^ 7, (bVar8 >> 5 & 1) != 0)) {
            FUN_00129df0(lVar22,puVar14);
          }
        }
        *(undefined8 *)(lVar22 + 0xd8) = 0;
      }
      plVar12 = (long *)(lVar22 + 0x80);
      puVar20 = *(undefined8 **)(lVar22 + 0xf0);
      for (puVar14 = (undefined8 *)*plVar12; puVar14 != puVar20; puVar14 = (undefined8 *)*puVar14) {
        bVar8 = *(byte *)((long)puVar14 + 9);
        if (((bVar8 & 7) == 3) && (*(byte *)((long)puVar14 + 9) = bVar8 ^ 7, (bVar8 >> 5 & 1) != 0))
        {
          FUN_00129df0(lVar22,puVar14);
        }
      }
      for (plVar7 = *(long **)(lVar22 + 0xb0); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        bVar8 = *(byte *)((long)plVar7 + 9);
        if (((bVar8 & 7) == 3) && (*(byte *)((long)plVar7 + 9) = bVar8 ^ 7, (bVar8 >> 5 & 1) != 0))
        {
          FUN_00129df0(lVar22,plVar7);
        }
      }
      FUN_0012bce0(param_1);
      plVar7 = (long *)(lVar22 + 0x70);
      plVar15 = *(long **)(lVar22 + 0xc0);
      *(undefined1 *)(lVar22 + 0x65) = 3;
      if ((long *)*plVar7 != plVar15) {
        bVar8 = *(byte *)(lVar22 + 100);
        plVar23 = (long *)*plVar7;
        do {
          while( true ) {
            plVar17 = plVar23;
            bVar9 = *(byte *)((long)plVar17 + 9);
            if ((bVar9 & 0x18) != 0) break;
            iVar11 = (int)((ulong)bVar9 & 7);
            if (iVar11 == 0) {
              *(byte *)((long)plVar17 + 9) = bVar8 & 0x18 | bVar9 & 0xc0 | 1;
            }
            else {
              *(byte *)((long)plVar17 + 9) = (&DAT_03cb5d6a)[(ulong)bVar9 & 7] | bVar9 & 0xf8;
              if ((iVar11 - 1U < 2) && (*(long *)(lVar22 + 0xd8) == 0)) {
                *(long **)(lVar22 + 0xd8) = plVar17;
              }
            }
            plVar23 = (long *)*plVar17;
            plVar7 = plVar17;
            if ((long *)*plVar17 == plVar15) goto LAB_0012b390;
          }
          *plVar7 = *plVar17;
          FUN_0012bbc0(param_1);
          plVar23 = (long *)*plVar7;
        } while ((long *)*plVar7 != plVar15);
      }
LAB_0012b390:
      plVar23 = *(long **)(lVar22 + 200);
      if (plVar15 != plVar23) {
        bVar8 = *(byte *)(lVar22 + 100);
        plVar17 = plVar7;
        do {
          while( true ) {
            plVar16 = plVar15;
            bVar9 = *(byte *)((long)plVar16 + 9);
            if ((bVar9 & 0x18) != 0) break;
            iVar11 = (int)((ulong)bVar9 & 7);
            if (iVar11 == 0) {
              *(byte *)((long)plVar16 + 9) = bVar8 & 0x18 | bVar9 & 0xc0 | 1;
            }
            else {
              *(byte *)((long)plVar16 + 9) = (&DAT_03cb5d6a)[(ulong)bVar9 & 7] | bVar9 & 0xf8;
              if ((iVar11 - 1U < 2) && (*(long *)(lVar22 + 0xd8) == 0)) {
                *(long **)(lVar22 + 0xd8) = plVar16;
              }
            }
            plVar15 = (long *)*plVar16;
            plVar17 = plVar16;
            if ((long *)*plVar16 == plVar23) goto LAB_0012b42c;
          }
          *plVar17 = *plVar16;
          FUN_0012bbc0(param_1,plVar16);
          plVar15 = (long *)*plVar17;
        } while ((long *)*plVar17 != plVar23);
LAB_0012b42c:
        plVar15 = *(long **)(lVar22 + 200);
      }
      *(long **)(lVar22 + 0xd0) = plVar15;
      plVar15 = *(long **)(lVar22 + 0xe0);
      lVar21 = *plVar7;
      *(undefined8 *)(lVar22 + 0xc0) = *(undefined8 *)(lVar22 + 0x70);
      *(long *)(lVar22 + 200) = lVar21;
      if (*(long **)(lVar22 + 0x80) != plVar15) {
        bVar8 = *(byte *)(lVar22 + 100);
        plVar7 = *(long **)(lVar22 + 0x80);
        do {
          while( true ) {
            plVar23 = plVar7;
            bVar9 = *(byte *)((long)plVar23 + 9);
            if ((bVar9 & 0x18) != 0) break;
            if ((int)((ulong)bVar9 & 7) == 0) {
              bVar9 = bVar8 & 0x18 | bVar9 & 0xc0 | 1;
            }
            else {
              bVar9 = (&DAT_03cb5d6a)[(ulong)bVar9 & 7] | bVar9 & 0xf8;
            }
            *(byte *)((long)plVar23 + 9) = bVar9;
            plVar7 = (long *)*plVar23;
            plVar12 = plVar23;
            if ((long *)*plVar23 == plVar15) goto LAB_0012b4cc;
          }
          *plVar12 = *plVar23;
          FUN_0012bbc0(param_1);
          plVar7 = (long *)*plVar12;
        } while ((long *)*plVar12 != plVar15);
      }
LAB_0012b4cc:
      plVar7 = *(long **)(lVar22 + 0xe8);
      if (plVar15 != plVar7) {
        bVar8 = *(byte *)(lVar22 + 100);
        plVar23 = plVar12;
        do {
          while( true ) {
            bVar9 = *(byte *)((long)plVar15 + 9);
            if ((bVar9 & 0x18) != 0) break;
            if ((int)((ulong)bVar9 & 7) == 0) {
              bVar9 = bVar8 & 0x18 | bVar9 & 0xc0 | 1;
            }
            else {
              bVar9 = (&DAT_03cb5d6a)[(ulong)bVar9 & 7] | bVar9 & 0xf8;
            }
            *(byte *)((long)plVar15 + 9) = bVar9;
            plVar17 = (long *)*plVar15;
            plVar23 = plVar15;
            plVar15 = plVar17;
            if (plVar17 == plVar7) goto LAB_0012b54c;
          }
          *plVar23 = *plVar15;
          FUN_0012bbc0(param_1,plVar15);
          plVar15 = (long *)*plVar23;
        } while (plVar15 != plVar7);
LAB_0012b54c:
        plVar15 = *(long **)(lVar22 + 0xe8);
      }
      *(long **)(lVar22 + 0xf0) = plVar15;
      lVar21 = *plVar12;
      *(undefined8 *)(lVar22 + 0xe0) = *(undefined8 *)(lVar22 + 0x80);
      *(long *)(lVar22 + 0xe8) = lVar21;
      if (*(long **)(lVar22 + 0xb0) != (long *)0x0) {
        bVar8 = *(byte *)(lVar22 + 100);
        plVar12 = *(long **)(lVar22 + 0xb0);
        plVar7 = (long *)(lVar22 + 0xb0);
        do {
          while( true ) {
            plVar15 = plVar12;
            bVar9 = *(byte *)((long)plVar15 + 9);
            if ((bVar9 & 0x18) != 0) break;
            if ((int)((ulong)bVar9 & 7) == 0) {
              bVar9 = bVar8 & 0x18 | bVar9 & 0xc0 | 1;
            }
            else {
              bVar9 = (&DAT_03cb5d6a)[(ulong)bVar9 & 7] | bVar9 & 0xf8;
            }
            *(byte *)((long)plVar15 + 9) = bVar9;
            plVar12 = (long *)*plVar15;
            plVar7 = plVar15;
            if ((long *)*plVar15 == (long *)0x0) goto LAB_0012b5d0;
          }
          *plVar7 = *plVar15;
          FUN_0012bbc0(param_1);
          plVar12 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
LAB_0012b5d0:
      FUN_0012d040(param_1,lVar22);
      FUN_0013aed0(lVar22,-(((ulong)(*(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10)) / 100) *
                           (ulong)*(byte *)(lVar22 + 0x68)));
      *(ulong *)(lVar22 + 0x20) = uVar5;
      return;
    }
    uVar6 = FUN_0012b840(param_1,lVar22);
    uVar18 = *(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10);
    if (uVar5 + (uVar10 & 0x3fffffffffffffff) * 2 <= uVar18) {
      uVar10 = *(ulong *)(lVar22 + 0x20) / 100;
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = 0x7fffffffffffffff / uVar10;
      }
      uVar13 = (ulong)*(byte *)(lVar22 + 0x6c) * 4;
      lVar21 = uVar10 * uVar13;
      if (uVar5 <= uVar13) {
        lVar21 = 0x7fffffffffffffff;
      }
      uVar18 = uVar18 - lVar21;
      *(undefined8 *)(lVar22 + 0x28) = uVar6;
      goto LAB_0012b248;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar18 >> 2;
    uVar18 = SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3),8);
  }
  else {
    lVar21 = lVar22;
    if (uVar18 == 0) {
      uVar18 = (ulong)*(byte *)(lVar22 + 0x6d) << 2 | 1;
      lVar19 = uVar18 * (*(ulong *)(lVar22 + 0x18) >> 4);
      lVar21 = ((ulong)(1L << ((ulong)*(byte *)(lVar22 + 0x6e) & 0x3f)) >> 4) * uVar18;
      if (0x3e < *(byte *)(lVar22 + 0x6e)) {
        lVar21 = 0x7fffffffffffffff;
      }
      do {
        lVar4 = FUN_0012a6f0(param_1);
        lVar19 = lVar19 - lVar4;
        if (lVar19 <= -lVar21) {
          if (*(char *)(lVar22 + 0x65) != '\b') {
            lVar21 = 0;
            if (uVar18 != 0) {
              lVar21 = lVar19 / (long)uVar18;
            }
            uVar18 = lVar21 << 4;
            goto LAB_0012b62c;
          }
          break;
        }
      } while (*(char *)(lVar22 + 0x65) != '\b');
      uVar5 = *(ulong *)(lVar22 + 0x20) / 100;
      uVar18 = 0;
      if (uVar5 != 0) {
        uVar18 = 0x7fffffffffffffff / uVar5;
      }
      uVar10 = (ulong)*(byte *)(lVar22 + 0x6c) * 4;
      lVar21 = uVar5 * uVar10;
      if (uVar18 <= uVar10) {
        lVar21 = 0x7fffffffffffffff;
      }
      uVar18 = (*(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10)) - lVar21;
LAB_0012b248:
      uVar18 = uVar18 & (long)uVar18 >> 0x3f;
      goto LAB_0012b62c;
    }
LAB_0012ad80:
    while (*(char *)(lVar21 + 0x65) != '\0') {
      FUN_0012a6f0(param_1);
    }
    uVar5 = FUN_0012bce0(param_1);
    if (uVar18 + (uVar18 >> 3) <= uVar5) {
      *(long *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10);
      lVar21 = *(long *)(param_1 + 0x18);
      plVar12 = (long *)(lVar21 + 0x70);
      *(undefined1 *)(lVar21 + 0x65) = 3;
      do {
        while (plVar7 = (long *)*plVar12, plVar7 != (long *)0x0) {
          bVar8 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
          if ((*(byte *)((long)plVar7 + 9) & (bVar8 ^ 0x18)) == 0) {
            *(byte *)((long)plVar7 + 9) = *(byte *)((long)plVar7 + 9) & 0xc0 | bVar8 & 0x18;
          }
          else {
            *plVar12 = *plVar7;
            FUN_0012bbc0(param_1);
            plVar7 = plVar12;
          }
          plVar15 = (long *)0x0;
          if (*plVar7 != 0) {
            plVar15 = plVar7;
          }
          if (plVar15 != plVar12) goto LAB_0012aef8;
        }
        plVar15 = (long *)0x0;
      } while (plVar12 == (long *)0x0);
LAB_0012aef8:
      *(long **)(lVar21 + 0x78) = plVar15;
      lVar21 = *(long *)(param_1 + 0x18);
      cVar1 = *(char *)(lVar21 + 0x65);
      while (cVar1 != '\b') {
        FUN_0012a6f0(param_1);
        cVar1 = *(char *)(lVar21 + 0x65);
      }
      uVar10 = (ulong)*(byte *)(lVar22 + 0x6c) * 4;
      uVar13 = *(ulong *)(lVar22 + 0x20) / 100;
      uVar18 = 0;
      if (uVar13 != 0) {
        uVar18 = 0x7fffffffffffffff / uVar13;
      }
      lVar21 = uVar13 * uVar10;
      if (uVar18 <= uVar10) {
        lVar21 = 0x7fffffffffffffff;
      }
      uVar18 = (*(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10)) - lVar21;
      FUN_0013aed0(lVar22,uVar18 & (long)uVar18 >> 0x3f);
      *(ulong *)(lVar22 + 0x28) = uVar5;
      return;
    }
    plVar12 = (long *)(lVar22 + 0x70);
    *(undefined8 *)(lVar22 + 0xa0) = 0;
    *(undefined8 *)(lVar22 + 0xa8) = 0;
    *(undefined8 *)(lVar22 + 0x90) = 0;
    *(undefined8 *)(lVar22 + 0x98) = 0;
    *(undefined8 *)(lVar22 + 0x88) = 0;
    *(undefined1 *)(lVar22 + 0x65) = 3;
    if ((long *)*plVar12 == (long *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = *(long *)(param_1 + 0x18);
      plVar7 = (long *)*plVar12;
      plVar15 = plVar12;
      do {
        while (plVar23 = plVar7, bVar8 = *(byte *)((long)plVar23 + 9), (bVar8 & 0x18) == 0) {
          *(byte *)((long)plVar23 + 9) = bVar8 & 0xf8 | 4;
          if ((char)plVar23[1] == '\t') {
            if ((long *)plVar23[2] == plVar23 + 3) goto LAB_0012ae44;
            bVar8 = bVar8 & 0xc0 | 4;
          }
          else if ((char)plVar23[1] == '\b') {
            plVar23[9] = *(long *)(lVar21 + 0x90);
            *(long **)(lVar21 + 0x90) = plVar23;
            bVar8 = *(byte *)((long)plVar23 + 9) & 199;
          }
          else {
LAB_0012ae44:
            bVar8 = bVar8 & 0xf8 | 0x24;
          }
          *(byte *)((long)plVar23 + 9) = bVar8;
          plVar7 = (long *)*plVar23;
          plVar15 = plVar23;
          if ((long *)*plVar23 == (long *)0x0) goto LAB_0012ae58;
        }
        *plVar15 = *plVar23;
        FUN_0012bbc0(param_1);
        plVar7 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
LAB_0012ae58:
      lVar21 = *plVar12;
    }
    plVar12 = (long *)(lVar22 + 0x80);
    *(long *)(lVar22 + 0xc0) = lVar21;
    *(long *)(lVar22 + 200) = lVar21;
    *(long *)(lVar22 + 0xd0) = lVar21;
    *(undefined8 *)(lVar22 + 0xd8) = 0;
    if ((long *)*plVar12 == (long *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = *(long *)(param_1 + 0x18);
      plVar7 = (long *)*plVar12;
      plVar15 = plVar12;
      do {
        while (plVar23 = plVar7, bVar8 = *(byte *)((long)plVar23 + 9), (bVar8 & 0x18) == 0) {
          *(byte *)((long)plVar23 + 9) = bVar8 & 0xf8 | 4;
          if ((char)plVar23[1] == '\t') {
            if ((long *)plVar23[2] == plVar23 + 3) goto LAB_0012b0dc;
            bVar8 = bVar8 & 0xc0 | 4;
          }
          else if ((char)plVar23[1] == '\b') {
            plVar23[9] = *(long *)(lVar21 + 0x90);
            *(long **)(lVar21 + 0x90) = plVar23;
            bVar8 = *(byte *)((long)plVar23 + 9) & 199;
          }
          else {
LAB_0012b0dc:
            bVar8 = bVar8 & 0xf8 | 0x24;
          }
          *(byte *)((long)plVar23 + 9) = bVar8;
          plVar7 = (long *)*plVar23;
          plVar15 = plVar23;
          if ((long *)*plVar23 == (long *)0x0) goto LAB_0012b0f0;
        }
        *plVar15 = *plVar23;
        FUN_0012bbc0(param_1);
        plVar7 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
LAB_0012b0f0:
      lVar21 = *plVar12;
    }
    plVar12 = *(long **)(lVar22 + 0xb0);
    *(long *)(lVar22 + 0xe0) = lVar21;
    *(long *)(lVar22 + 0xe8) = lVar21;
    *(long *)(lVar22 + 0xf0) = lVar21;
    if (plVar12 != (long *)0x0) {
      lVar21 = *(long *)(param_1 + 0x18);
      plVar7 = (long *)(lVar22 + 0xb0);
      do {
        while (plVar15 = plVar12, bVar8 = *(byte *)((long)plVar15 + 9), (bVar8 & 0x18) == 0) {
          *(byte *)((long)plVar15 + 9) = bVar8 & 0xf8 | 4;
          if ((char)plVar15[1] == '\t') {
            if ((long *)plVar15[2] == plVar15 + 3) goto LAB_0012b194;
            bVar8 = bVar8 & 0xc0 | 4;
          }
          else if ((char)plVar15[1] == '\b') {
            plVar15[9] = *(long *)(lVar21 + 0x90);
            *(long **)(lVar21 + 0x90) = plVar15;
            bVar8 = *(byte *)((long)plVar15 + 9) & 199;
          }
          else {
LAB_0012b194:
            bVar8 = bVar8 & 0xf8 | 0x24;
          }
          *(byte *)((long)plVar15 + 9) = bVar8;
          plVar12 = (long *)*plVar15;
          plVar7 = plVar15;
          if ((long *)*plVar15 == (long *)0x0) goto LAB_0012b1a8;
        }
        *plVar7 = *plVar15;
        FUN_0012bbc0(param_1);
        plVar12 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
LAB_0012b1a8:
    *(undefined1 *)(lVar22 + 0x66) = 1;
    *(long *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10);
    *(undefined8 *)(lVar22 + 0x28) = 0;
    FUN_0012d040(param_1,lVar22);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)(*(long *)(lVar22 + 0x18) + *(long *)(lVar22 + 0x10)) >> 2;
    uVar18 = SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8);
  }
  uVar18 = -((uVar18 >> 2) * (ulong)*(byte *)(lVar22 + 0x68));
LAB_0012b62c:
  FUN_0013aed0(lVar22,uVar18);
  return;
}


