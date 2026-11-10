/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b76e0; name: thunk_FUN_01f7ff04
 */


void thunk_FUN_01f7ff04(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  long lVar9;
  short sVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  undefined2 uVar16;
  uint uVar17;
  long lVar18;
  ushort *puVar19;
  ushort *puVar20;
  uint uVar21;
  long lVar22;
  ushort *puVar23;
  ushort *puVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  char acStack_64 [4];
  
  uVar17 = *(uint *)(param_1 + 0x58);
  if ((uVar17 <= param_4 || uVar17 <= param_2) || uVar17 <= param_3) {
    lVar9 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar9 + 0x54) != '\0') {
      **(undefined2 **)(lVar9 + 0x30) = 0;
      *(undefined2 *)(lVar9 + 0x52) = 0;
      uVar17 = *(uint *)(param_1 + 0x58);
    }
    if (uVar17 <= param_2) {
      return;
    }
    lVar9 = (ulong)param_2 * 2 + (ulong)param_2;
    lVar18 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar9 * 8 + 8) = 0;
    lVar13 = *(long *)(param_1 + 0x60);
    lVar9 = *(long *)(lVar13 + lVar9 * 8);
    if (*(char *)(lVar9 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar9 + 0x50);
      if (*(ushort *)(lVar9 + 0x50) == 0) goto LAB_01f827bc;
      puVar20 = *(ushort **)(lVar18 + 0x30);
      iVar6 = 0;
      puVar19 = *(ushort **)(lVar9 + 0x30);
      do {
        while( true ) {
          uVar2 = *puVar20;
          *puVar19 = uVar2;
          if (uVar2 == 0) goto LAB_01f827c0;
          if (uVar2 == 0x10) break;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
          iVar6 = iVar6 + 1;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_01f80098;
        }
        puVar23 = puVar20 + 1;
        uVar2 = *puVar23;
        uVar1 = uVar2 + 2;
        bVar4 = uVar17 < uVar1;
        uVar17 = uVar17 - uVar1;
        if (bVar4 || uVar17 == 0) goto LAB_01f827b4;
        uVar21 = uVar2 + 1;
        uVar5 = uVar21 & 7;
        puVar19[1] = uVar2;
        puVar24 = puVar19 + 1;
        if (uVar5 != 0) {
          lVar13 = 0;
          do {
            lVar18 = lVar13;
            uVar21 = uVar21 - 1;
            uVar5 = uVar5 - 1;
            *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                 *(undefined2 *)((long)puVar20 + lVar18 + 4);
            lVar13 = lVar18 + 2;
          } while (uVar5 != 0);
          puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
          puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
          puVar23 = puVar20 + 1;
          puVar24 = puVar19;
        }
        if (6 < uVar2) {
          puVar19 = puVar24;
          do {
            puVar19[1] = puVar20[2];
            puVar19[2] = puVar23[2];
            puVar19[3] = puVar23[3];
            puVar19[4] = puVar23[4];
            puVar19[5] = puVar23[5];
            puVar19[6] = puVar23[6];
            puVar20 = puVar23 + 7;
            puVar19[7] = *puVar20;
            puVar23 = puVar23 + 8;
            uVar21 = uVar21 - 8;
            puVar19 = puVar19 + 8;
            *puVar19 = *puVar23;
          } while (uVar21 != 0);
        }
        puVar20 = puVar23;
        iVar6 = uVar1 + iVar6;
      } while (uVar17 != 0);
      goto LAB_01f80098;
    }
    goto LAB_01f827c8;
  }
  lVar13 = *(long *)(param_1 + 0x60);
  plVar26 = (long *)(lVar13 + (ulong)param_3 * 0x18);
  plVar28 = (long *)(lVar13 + (ulong)param_4 * 0x18);
  lVar9 = *plVar26;
  lVar18 = *plVar28;
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar25 = *(long *)PTR_DAT_047d8ca0;
  *(long *)PTR_DAT_047d8ca8 = lVar25;
  uVar2 = *(ushort *)(lVar13 + (ulong)param_3 * 0x18 + 8);
  uVar11 = (ulong)uVar2;
  uVar27 = (ulong)*(uint6 *)((long)plVar26 + 10);
  plVar26 = (long *)(param_1 + 0x40);
  lVar14 = *plVar26;
  if (*(char *)(lVar14 + 0x54) != '\0') {
    **(undefined2 **)(lVar14 + 0x30) = 0;
    *(undefined2 *)(lVar14 + 0x52) = 0;
  }
  if (4 < *(int *)(lVar25 + 0x2b0) - 2U) {
switchD_01f80154_caseD_4:
    lVar13 = *plVar26;
    if (*(char *)(lVar13 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
      if (uVar17 == 0) {
        iVar6 = 0;
      }
      else {
        puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar9 + 0x30);
        iVar6 = 0;
        do {
          while( true ) {
            uVar2 = *puVar20;
            *puVar19 = uVar2;
            if (uVar2 == 0) goto LAB_01f810f8;
            if (uVar2 == 0x10) break;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar6 = iVar6 + 1;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_01f80644;
          }
          puVar23 = puVar20 + 1;
          uVar2 = *puVar23;
          uVar1 = uVar2 + 2;
          bVar4 = uVar17 < uVar1;
          uVar17 = uVar17 - uVar1;
          if (bVar4 || uVar17 == 0) {
            *puVar19 = 0;
            goto LAB_01f810f8;
          }
          uVar21 = uVar2 + 1;
          uVar5 = uVar21 & 7;
          puVar19[1] = uVar2;
          puVar24 = puVar19 + 1;
          if (uVar5 != 0) {
            lVar9 = 0;
            do {
              lVar14 = lVar9;
              uVar21 = uVar21 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar14 + 4);
              lVar9 = lVar14 + 2;
            } while (uVar5 != 0);
            puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
            puVar23 = puVar20 + 1;
            puVar24 = puVar19;
          }
          if (6 < uVar2) {
            puVar19 = puVar24;
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar23[2];
              puVar19[3] = puVar23[3];
              puVar19[4] = puVar23[4];
              puVar19[5] = puVar23[5];
              puVar19[6] = puVar23[6];
              puVar20 = puVar23 + 7;
              puVar19[7] = *puVar20;
              puVar23 = puVar23 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar23;
            } while (uVar21 != 0);
          }
          puVar20 = puVar23;
          iVar6 = uVar1 + iVar6;
        } while (uVar17 != 0);
LAB_01f80644:
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          puVar19[-1] = 0;
        }
      }
LAB_01f810f8:
      *(short *)(lVar13 + 0x52) = *(short *)(lVar13 + 0x52) + (short)iVar6;
      lVar13 = *plVar26;
      if (*(char *)(lVar13 + 0x54) != '\0') {
        uVar2 = *(ushort *)(lVar13 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
          *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
          lVar13 = *plVar26;
          if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f82670;
        }
        uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
        if (uVar17 == 0) goto LAB_01f82634;
        puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar18 + 0x30);
        iVar6 = 0;
        do {
          uVar2 = *puVar20;
          *puVar19 = uVar2;
          if (uVar2 == 0) goto LAB_01f82638;
          if (uVar2 == 0x10) {
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) goto LAB_01f8262c;
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar9 = 0;
              do {
                lVar18 = lVar9;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar18 + 4);
                lVar9 = lVar18 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar6 = uVar1 + iVar6;
          }
          else {
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar6 = iVar6 + 1;
            uVar17 = uVar17 - 1;
          }
        } while (uVar17 != 0);
        goto LAB_01f8261c;
      }
    }
    goto LAB_01f82670;
  }
  uVar29 = (ulong)(uVar2 >> 7) & 3;
  iVar6 = (int)uVar29;
  switch(*(int *)(lVar25 + 0x2b0)) {
  case 2:
    acStack_64[0] = '\0';
    uVar7 = FUN_021737ec(param_1,param_3,acStack_64);
    if (iVar6 == 1) {
      lVar14 = *plVar26;
      if (*(char *)(lVar14 + 0x54) != '\0') {
        uVar17 = (uint)*(ushort *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar14 + 0x52);
        if (uVar17 == 0) {
          iVar6 = 0;
        }
        else {
          puVar19 = (ushort *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2);
          puVar20 = *(ushort **)(lVar18 + 0x30);
          iVar6 = 0;
          do {
            while( true ) {
              uVar2 = *puVar20;
              *puVar19 = uVar2;
              if (uVar2 == 0) goto LAB_01f81fac;
              if (uVar2 == 0x10) break;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
              iVar6 = iVar6 + 1;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_01f80c48;
            }
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) {
              *puVar19 = 0;
              goto LAB_01f81fac;
            }
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar18 = 0;
              do {
                lVar22 = lVar18;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar22 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar22 + 4);
                lVar18 = lVar22 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar22 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar22 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar6 = uVar1 + iVar6;
          } while (uVar17 != 0);
LAB_01f80c48:
          if (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            puVar19[-1] = 0;
          }
        }
LAB_01f81fac:
        *(short *)(lVar14 + 0x52) = *(short *)(lVar14 + 0x52) + (short)iVar6;
        lVar18 = *plVar26;
        if (*(char *)(lVar18 + 0x54) != '\0') {
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f820ac;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x6f;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f820ac;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x66;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f820ac;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
          }
        }
      }
LAB_01f820ac:
      if (acStack_64[0] == '\0') {
        lVar18 = *plVar26;
        psVar8 = (short *)FUN_021738fc(lVar25,0,uVar7);
        sVar10 = *psVar8;
        if (sVar10 != 0) {
          do {
            psVar8 = psVar8 + 1;
            if (*(char *)(lVar18 + 0x54) != '\0') {
              uVar2 = *(ushort *)(lVar18 + 0x52);
              if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
                *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
                *(short *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = sVar10;
                *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) =
                     0;
              }
            }
            sVar10 = *psVar8;
          } while (sVar10 != 0);
        }
      }
      lVar18 = *plVar26;
      if (*(char *)(lVar18 + 0x54) != '\0') {
        uVar17 = (uint)*(ushort *)(lVar18 + 0x50) - (uint)*(ushort *)(lVar18 + 0x52);
        if (uVar17 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          puVar19 = (ushort *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2);
          puVar20 = *(ushort **)(lVar9 + 0x30);
          do {
            while( true ) {
              uVar2 = *puVar20;
              *puVar19 = uVar2;
              if (uVar2 == 0) goto LAB_01f8264c;
              if (uVar2 == 0x10) break;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
              iVar6 = iVar6 + 1;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_01f82238;
            }
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) {
              *puVar19 = 0;
              goto LAB_01f8264c;
            }
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar9 = 0;
              do {
                lVar14 = lVar9;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar14 + 4);
                lVar9 = lVar14 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar6 = uVar1 + iVar6;
          } while (uVar17 != 0);
LAB_01f82238:
          if (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            puVar19[-1] = 0;
          }
        }
LAB_01f8264c:
        *(short *)(lVar18 + 0x52) = *(short *)(lVar18 + 0x52) + (short)iVar6;
      }
      goto LAB_01f82660;
    }
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        lVar13 = *plVar26;
        if (*(char *)(lVar13 + 0x54) != '\0') {
          uVar2 = *(ushort *)(lVar13 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
            *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x79;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
            if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f802bc;
          }
          uVar2 = *(ushort *)(lVar13 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
            *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x6f;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
            if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f802bc;
          }
          uVar2 = *(ushort *)(lVar13 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
            *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x75;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
            if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f802bc;
          }
          uVar2 = *(ushort *)(lVar13 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
            *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x72;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
            if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f802bc;
          }
          uVar2 = *(ushort *)(lVar13 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
            *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
          }
        }
LAB_01f802bc:
        lVar13 = *plVar26;
        if (*(char *)(lVar13 + 0x54) != '\0') {
          uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
          if (uVar17 == 0) {
            iVar6 = 0;
          }
          else {
            puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
            puVar20 = *(ushort **)(lVar9 + 0x30);
            iVar6 = 0;
            do {
              while( true ) {
                uVar2 = *puVar20;
                *puVar19 = uVar2;
                if (uVar2 == 0) goto LAB_01f81e3c;
                if (uVar2 == 0x10) break;
                puVar19 = puVar19 + 1;
                puVar20 = puVar20 + 1;
                iVar6 = iVar6 + 1;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_01f803dc;
              }
              puVar23 = puVar20 + 1;
              uVar2 = *puVar23;
              uVar1 = uVar2 + 2;
              bVar4 = uVar17 < uVar1;
              uVar17 = uVar17 - uVar1;
              if (bVar4 || uVar17 == 0) {
                *puVar19 = 0;
                goto LAB_01f81e3c;
              }
              uVar21 = uVar2 + 1;
              uVar5 = uVar21 & 7;
              puVar19[1] = uVar2;
              puVar24 = puVar19 + 1;
              if (uVar5 != 0) {
                lVar9 = 0;
                do {
                  lVar14 = lVar9;
                  uVar21 = uVar21 - 1;
                  uVar5 = uVar5 - 1;
                  *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                       *(undefined2 *)((long)puVar20 + lVar14 + 4);
                  lVar9 = lVar14 + 2;
                } while (uVar5 != 0);
                puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
                puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
                puVar23 = puVar20 + 1;
                puVar24 = puVar19;
              }
              if (6 < uVar2) {
                puVar19 = puVar24;
                do {
                  puVar19[1] = puVar20[2];
                  puVar19[2] = puVar23[2];
                  puVar19[3] = puVar23[3];
                  puVar19[4] = puVar23[4];
                  puVar19[5] = puVar23[5];
                  puVar19[6] = puVar23[6];
                  puVar20 = puVar23 + 7;
                  puVar19[7] = *puVar20;
                  puVar23 = puVar23 + 8;
                  uVar21 = uVar21 - 8;
                  puVar19 = puVar19 + 8;
                  *puVar19 = *puVar23;
                } while (uVar21 != 0);
              }
              puVar20 = puVar23;
              iVar6 = uVar1 + iVar6;
            } while (uVar17 != 0);
LAB_01f803dc:
            if (iVar6 != 0) {
              iVar6 = iVar6 + -1;
              puVar19[-1] = 0;
            }
          }
LAB_01f81e3c:
          *(short *)(lVar13 + 0x52) = *(short *)(lVar13 + 0x52) + (short)iVar6;
          lVar13 = *plVar26;
          if (*(char *)(lVar13 + 0x54) != '\0') {
            uVar2 = *(ushort *)(lVar13 + 0x52);
            if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
              *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
              *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
              *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
              lVar13 = *plVar26;
              if (*(char *)(lVar13 + 0x54) == '\0') break;
            }
            uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
            if (uVar17 == 0) goto LAB_01f82634;
            puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
            puVar20 = *(ushort **)(lVar18 + 0x30);
            iVar6 = 0;
            do {
              uVar2 = *puVar20;
              *puVar19 = uVar2;
              if (uVar2 == 0) goto LAB_01f82638;
              if (uVar2 == 0x10) {
                puVar23 = puVar20 + 1;
                uVar2 = *puVar23;
                uVar1 = uVar2 + 2;
                bVar4 = uVar17 < uVar1;
                uVar17 = uVar17 - uVar1;
                if (bVar4 || uVar17 == 0) goto LAB_01f8262c;
                uVar21 = uVar2 + 1;
                uVar5 = uVar21 & 7;
                puVar19[1] = uVar2;
                puVar24 = puVar19 + 1;
                if (uVar5 != 0) {
                  lVar9 = 0;
                  do {
                    lVar18 = lVar9;
                    uVar21 = uVar21 - 1;
                    uVar5 = uVar5 - 1;
                    *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                         *(undefined2 *)((long)puVar20 + lVar18 + 4);
                    lVar9 = lVar18 + 2;
                  } while (uVar5 != 0);
                  puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
                  puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
                  puVar23 = puVar20 + 1;
                  puVar24 = puVar19;
                }
                if (6 < uVar2) {
                  puVar19 = puVar24;
                  do {
                    puVar19[1] = puVar20[2];
                    puVar19[2] = puVar23[2];
                    puVar19[3] = puVar23[3];
                    puVar19[4] = puVar23[4];
                    puVar19[5] = puVar23[5];
                    puVar19[6] = puVar23[6];
                    puVar20 = puVar23 + 7;
                    puVar19[7] = *puVar20;
                    puVar23 = puVar23 + 8;
                    uVar21 = uVar21 - 8;
                    puVar19 = puVar19 + 8;
                    *puVar19 = *puVar23;
                  } while (uVar21 != 0);
                }
                puVar20 = puVar23;
                iVar6 = uVar1 + iVar6;
              }
              else {
                puVar19 = puVar19 + 1;
                puVar20 = puVar20 + 1;
                iVar6 = iVar6 + 1;
                uVar17 = uVar17 - 1;
              }
            } while (uVar17 != 0);
            goto LAB_01f8261c;
          }
        }
      }
      else {
        lVar13 = *plVar26;
        if (*(char *)(lVar13 + 0x54) != '\0') {
          uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
          if (uVar17 == 0) {
            iVar6 = 0;
          }
          else {
            puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
            puVar20 = *(ushort **)(lVar9 + 0x30);
            iVar6 = 0;
            do {
              while( true ) {
                uVar2 = *puVar20;
                *puVar19 = uVar2;
                if (uVar2 == 0) goto LAB_01f824b0;
                if (uVar2 == 0x10) break;
                puVar19 = puVar19 + 1;
                puVar20 = puVar20 + 1;
                iVar6 = iVar6 + 1;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_01f80ea8;
              }
              puVar23 = puVar20 + 1;
              uVar2 = *puVar23;
              uVar1 = uVar2 + 2;
              bVar4 = uVar17 < uVar1;
              uVar17 = uVar17 - uVar1;
              if (bVar4 || uVar17 == 0) {
                *puVar19 = 0;
                goto LAB_01f824b0;
              }
              uVar21 = uVar2 + 1;
              uVar5 = uVar21 & 7;
              puVar19[1] = uVar2;
              puVar24 = puVar19 + 1;
              if (uVar5 != 0) {
                lVar9 = 0;
                do {
                  lVar14 = lVar9;
                  uVar21 = uVar21 - 1;
                  uVar5 = uVar5 - 1;
                  *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                       *(undefined2 *)((long)puVar20 + lVar14 + 4);
                  lVar9 = lVar14 + 2;
                } while (uVar5 != 0);
                puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
                puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
                puVar23 = puVar20 + 1;
                puVar24 = puVar19;
              }
              if (6 < uVar2) {
                puVar19 = puVar24;
                do {
                  puVar19[1] = puVar20[2];
                  puVar19[2] = puVar23[2];
                  puVar19[3] = puVar23[3];
                  puVar19[4] = puVar23[4];
                  puVar19[5] = puVar23[5];
                  puVar19[6] = puVar23[6];
                  puVar20 = puVar23 + 7;
                  puVar19[7] = *puVar20;
                  puVar23 = puVar23 + 8;
                  uVar21 = uVar21 - 8;
                  puVar19 = puVar19 + 8;
                  *puVar19 = *puVar23;
                } while (uVar21 != 0);
              }
              puVar20 = puVar23;
              iVar6 = uVar1 + iVar6;
            } while (uVar17 != 0);
LAB_01f80ea8:
            if (iVar6 != 0) {
              iVar6 = iVar6 + -1;
              puVar19[-1] = 0;
            }
          }
LAB_01f824b0:
          *(short *)(lVar13 + 0x52) = *(short *)(lVar13 + 0x52) + (short)iVar6;
          lVar13 = *plVar26;
          if (*(char *)(lVar13 + 0x54) != '\0') {
            uVar2 = *(ushort *)(lVar13 + 0x52);
            if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
              *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
              *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
              *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
              lVar13 = *plVar26;
              if (*(char *)(lVar13 + 0x54) == '\0') break;
            }
            uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
            if (uVar17 != 0) {
              puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2)
              ;
              puVar20 = *(ushort **)(lVar18 + 0x30);
              iVar6 = 0;
              do {
                while( true ) {
                  uVar2 = *puVar20;
                  *puVar19 = uVar2;
                  if (uVar2 == 0) goto LAB_01f82638;
                  if (uVar2 == 0x10) break;
                  puVar19 = puVar19 + 1;
                  puVar20 = puVar20 + 1;
                  iVar6 = iVar6 + 1;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) goto LAB_01f8261c;
                }
                puVar23 = puVar20 + 1;
                uVar2 = *puVar23;
                uVar1 = uVar2 + 2;
                bVar4 = uVar17 < uVar1;
                uVar17 = uVar17 - uVar1;
                if (bVar4 || uVar17 == 0) goto LAB_01f8262c;
                uVar21 = uVar2 + 1;
                uVar5 = uVar21 & 7;
                puVar19[1] = uVar2;
                puVar24 = puVar19 + 1;
                if (uVar5 != 0) {
                  lVar9 = 0;
                  do {
                    lVar18 = lVar9;
                    uVar21 = uVar21 - 1;
                    uVar5 = uVar5 - 1;
                    *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                         *(undefined2 *)((long)puVar20 + lVar18 + 4);
                    lVar9 = lVar18 + 2;
                  } while (uVar5 != 0);
                  puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
                  puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
                  puVar23 = puVar20 + 1;
                  puVar24 = puVar19;
                }
                if (6 < uVar2) {
                  puVar19 = puVar24;
                  do {
                    puVar19[1] = puVar20[2];
                    puVar19[2] = puVar23[2];
                    puVar19[3] = puVar23[3];
                    puVar19[4] = puVar23[4];
                    puVar19[5] = puVar23[5];
                    puVar19[6] = puVar23[6];
                    puVar20 = puVar23 + 7;
                    puVar19[7] = *puVar20;
                    puVar23 = puVar23 + 8;
                    uVar21 = uVar21 - 8;
                    puVar19 = puVar19 + 8;
                    *puVar19 = *puVar23;
                  } while (uVar21 != 0);
                }
                puVar20 = puVar23;
                iVar6 = uVar1 + iVar6;
              } while (uVar17 != 0);
              goto LAB_01f8261c;
            }
            goto LAB_01f82634;
          }
        }
      }
      break;
    }
    lVar13 = *plVar26;
    if (*(char *)(lVar13 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
      if (uVar17 == 0) {
        iVar6 = 0;
      }
      else {
        puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar18 + 0x30);
        iVar6 = 0;
        do {
          while( true ) {
            uVar2 = *puVar20;
            *puVar19 = uVar2;
            if (uVar2 == 0) goto LAB_01f82250;
            if (uVar2 == 0x10) break;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar6 = iVar6 + 1;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_01f80d7c;
          }
          puVar23 = puVar20 + 1;
          uVar2 = *puVar23;
          uVar1 = uVar2 + 2;
          bVar4 = uVar17 < uVar1;
          uVar17 = uVar17 - uVar1;
          if (bVar4 || uVar17 == 0) {
            *puVar19 = 0;
            goto LAB_01f82250;
          }
          uVar21 = uVar2 + 1;
          uVar5 = uVar21 & 7;
          puVar19[1] = uVar2;
          puVar24 = puVar19 + 1;
          if (uVar5 != 0) {
            lVar18 = 0;
            do {
              lVar14 = lVar18;
              uVar21 = uVar21 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar14 + 4);
              lVar18 = lVar14 + 2;
            } while (uVar5 != 0);
            puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
            puVar23 = puVar20 + 1;
            puVar24 = puVar19;
          }
          if (6 < uVar2) {
            puVar19 = puVar24;
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar23[2];
              puVar19[3] = puVar23[3];
              puVar19[4] = puVar23[4];
              puVar19[5] = puVar23[5];
              puVar19[6] = puVar23[6];
              puVar20 = puVar23 + 7;
              puVar19[7] = *puVar20;
              puVar23 = puVar23 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar23;
            } while (uVar21 != 0);
          }
          puVar20 = puVar23;
          iVar6 = uVar1 + iVar6;
        } while (uVar17 != 0);
LAB_01f80d7c:
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          puVar19[-1] = 0;
        }
      }
LAB_01f82250:
      *(short *)(lVar13 + 0x52) = *(short *)(lVar13 + 0x52) + (short)iVar6;
      lVar13 = *plVar26;
      if (*(char *)(lVar13 + 0x54) != '\0') {
        uVar2 = *(ushort *)(lVar13 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
          *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
          if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f8238c;
        }
        uVar2 = *(ushort *)(lVar13 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
          *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x74;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
          if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f8238c;
        }
        uVar2 = *(ushort *)(lVar13 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
          *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x68;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
          if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f8238c;
        }
        uVar2 = *(ushort *)(lVar13 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
          *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x65;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
          if (*(char *)(lVar13 + 0x54) == '\0') goto LAB_01f8238c;
        }
        uVar2 = *(ushort *)(lVar13 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
          *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
        }
      }
    }
LAB_01f8238c:
    lVar13 = *plVar26;
    if (*(char *)(lVar13 + 0x54) == '\0') break;
    uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
    if (uVar17 != 0) {
      puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
      puVar20 = *(ushort **)(lVar9 + 0x30);
      iVar6 = 0;
      do {
        uVar2 = *puVar20;
        *puVar19 = uVar2;
        if (uVar2 == 0) goto LAB_01f82638;
        if (uVar2 == 0x10) {
          puVar23 = puVar20 + 1;
          uVar2 = *puVar23;
          uVar1 = uVar2 + 2;
          bVar4 = uVar17 < uVar1;
          uVar17 = uVar17 - uVar1;
          if (bVar4 || uVar17 == 0) goto LAB_01f8262c;
          uVar21 = uVar2 + 1;
          uVar5 = uVar21 & 7;
          puVar19[1] = uVar2;
          puVar24 = puVar19 + 1;
          if (uVar5 != 0) {
            lVar9 = 0;
            do {
              lVar18 = lVar9;
              uVar21 = uVar21 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar18 + 4);
              lVar9 = lVar18 + 2;
            } while (uVar5 != 0);
            puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
            puVar23 = puVar20 + 1;
            puVar24 = puVar19;
          }
          if (6 < uVar2) {
            puVar19 = puVar24;
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar23[2];
              puVar19[3] = puVar23[3];
              puVar19[4] = puVar23[4];
              puVar19[5] = puVar23[5];
              puVar19[6] = puVar23[6];
              puVar20 = puVar23 + 7;
              puVar19[7] = *puVar20;
              puVar23 = puVar23 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar23;
            } while (uVar21 != 0);
          }
          puVar20 = puVar23;
          iVar6 = uVar1 + iVar6;
        }
        else {
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
          iVar6 = iVar6 + 1;
          uVar17 = uVar17 - 1;
        }
      } while (uVar17 != 0);
      goto LAB_01f8261c;
    }
LAB_01f82634:
    iVar6 = 0;
    goto LAB_01f82638;
  case 3:
    lVar14 = *plVar26;
    if (*(char *)(lVar14 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar14 + 0x52);
      if (uVar17 == 0) {
        iVar12 = 0;
      }
      else {
        puVar19 = (ushort *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar18 + 0x30);
        iVar12 = 0;
        do {
          while( true ) {
            uVar2 = *puVar20;
            *puVar19 = uVar2;
            if (uVar2 == 0) goto LAB_01f80edc;
            if (uVar2 == 0x10) break;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar12 = iVar12 + 1;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_01f80514;
          }
          puVar23 = puVar20 + 1;
          uVar2 = *puVar23;
          uVar1 = uVar2 + 2;
          bVar4 = uVar17 < uVar1;
          uVar17 = uVar17 - uVar1;
          if (bVar4 || uVar17 == 0) {
            *puVar19 = 0;
            goto LAB_01f80edc;
          }
          uVar21 = uVar2 + 1;
          uVar5 = uVar21 & 7;
          puVar19[1] = uVar2;
          puVar24 = puVar19 + 1;
          if (uVar5 != 0) {
            lVar18 = 0;
            do {
              lVar22 = lVar18;
              uVar21 = uVar21 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar19 + lVar22 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar22 + 4);
              lVar18 = lVar22 + 2;
            } while (uVar5 != 0);
            puVar19 = (ushort *)((long)puVar19 + lVar22 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar22 + 2);
            puVar23 = puVar20 + 1;
            puVar24 = puVar19;
          }
          if (6 < uVar2) {
            puVar19 = puVar24;
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar23[2];
              puVar19[3] = puVar23[3];
              puVar19[4] = puVar23[4];
              puVar19[5] = puVar23[5];
              puVar19[6] = puVar23[6];
              puVar20 = puVar23 + 7;
              puVar19[7] = *puVar20;
              puVar23 = puVar23 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar23;
            } while (uVar21 != 0);
          }
          puVar20 = puVar23;
          iVar12 = uVar1 + iVar12;
        } while (uVar17 != 0);
LAB_01f80514:
        if (iVar12 != 0) {
          iVar12 = iVar12 + -1;
          puVar19[-1] = 0;
        }
      }
LAB_01f80edc:
      *(short *)(lVar14 + 0x52) = *(short *)(lVar14 + 0x52) + (short)iVar12;
      lVar18 = *plVar26;
      if (*(char *)(lVar18 + 0x54) != '\0') {
        uVar2 = *(ushort *)(lVar18 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
          *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
        }
      }
    }
    if (iVar6 != 3) {
      lVar18 = *(long *)(param_1 + 0x40);
      cVar3 = (&DAT_03cb272c)[uVar29];
      uVar7 = FUN_021737ec(param_1,param_3,0);
      psVar8 = (short *)FUN_021738fc(lVar25,(int)cVar3,uVar7);
      sVar10 = *psVar8;
      if (sVar10 != 0) {
        do {
          psVar8 = psVar8 + 1;
          if (*(char *)(lVar18 + 0x54) != '\0') {
            uVar2 = *(ushort *)(lVar18 + 0x52);
            if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
              *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
              *(short *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = sVar10;
              *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            }
          }
          sVar10 = *psVar8;
        } while (sVar10 != 0);
      }
    }
    lVar18 = *plVar26;
    if (*(char *)(lVar18 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar18 + 0x50) - (uint)*(ushort *)(lVar18 + 0x52);
      if (uVar17 == 0) {
        iVar6 = 0;
      }
      else {
        puVar19 = (ushort *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar9 + 0x30);
        iVar6 = 0;
        do {
          while( true ) {
            uVar2 = *puVar20;
            *puVar19 = uVar2;
            if (uVar2 == 0) goto LAB_01f81268;
            if (uVar2 == 0x10) break;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar6 = iVar6 + 1;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_01f810dc;
          }
          puVar23 = puVar20 + 1;
          uVar2 = *puVar23;
          uVar1 = uVar2 + 2;
          bVar4 = uVar17 < uVar1;
          uVar17 = uVar17 - uVar1;
          if (bVar4 || uVar17 == 0) {
            *puVar19 = 0;
            goto LAB_01f81268;
          }
          uVar21 = uVar2 + 1;
          uVar5 = uVar21 & 7;
          puVar19[1] = uVar2;
          puVar24 = puVar19 + 1;
          if (uVar5 != 0) {
            lVar9 = 0;
            do {
              lVar14 = lVar9;
              uVar21 = uVar21 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar14 + 4);
              lVar9 = lVar14 + 2;
            } while (uVar5 != 0);
            puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
            puVar23 = puVar20 + 1;
            puVar24 = puVar19;
          }
          if (6 < uVar2) {
            puVar19 = puVar24;
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar23[2];
              puVar19[3] = puVar23[3];
              puVar19[4] = puVar23[4];
              puVar19[5] = puVar23[5];
              puVar19[6] = puVar23[6];
              puVar20 = puVar23 + 7;
              puVar19[7] = *puVar20;
              puVar23 = puVar23 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar23;
            } while (uVar21 != 0);
          }
          puVar20 = puVar23;
          iVar6 = uVar1 + iVar6;
        } while (uVar17 != 0);
LAB_01f810dc:
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          puVar19[-1] = 0;
        }
      }
LAB_01f81268:
      *(short *)(lVar18 + 0x52) = *(short *)(lVar18 + 0x52) + (short)iVar6;
    }
LAB_01f82660:
    uVar11 = (ulong)*(ushort *)(lVar13 + (ulong)param_4 * 0x18 + 8);
    uVar27 = (ulong)*(uint6 *)((long)plVar28 + 10);
    break;
  case 4:
    goto switchD_01f80154_caseD_4;
  case 5:
    lVar14 = *plVar26;
    if (iVar6 - 1U < 3) {
      if (*(char *)(lVar14 + 0x54) != '\0') {
        uVar17 = (uint)*(ushort *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar14 + 0x52);
        if (uVar17 == 0) {
          iVar12 = 0;
        }
        else {
          puVar19 = (ushort *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2);
          puVar20 = *(ushort **)(lVar18 + 0x30);
          iVar12 = 0;
          do {
            while( true ) {
              uVar2 = *puVar20;
              *puVar19 = uVar2;
              if (uVar2 == 0) goto LAB_01f81304;
              if (uVar2 == 0x10) break;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
              iVar12 = iVar12 + 1;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_01f80780;
            }
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) {
              *puVar19 = 0;
              goto LAB_01f81304;
            }
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar18 = 0;
              do {
                lVar25 = lVar18;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar25 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar25 + 4);
                lVar18 = lVar25 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar25 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar25 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar12 = uVar1 + iVar12;
          } while (uVar17 != 0);
LAB_01f80780:
          if (iVar12 != 0) {
            iVar12 = iVar12 + -1;
            puVar19[-1] = 0;
          }
        }
LAB_01f81304:
        *(short *)(lVar14 + 0x52) = *(short *)(lVar14 + 0x52) + (short)iVar12;
      }
      if (iVar6 == 1) {
        lVar18 = *plVar26;
        if (*(char *)(lVar18 + 0x54) != '\0') {
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x76;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x6f;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x6e;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 100;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x65;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            lVar14 = *(long *)(lVar18 + 0x30);
            uVar16 = 0x6e;
            goto LAB_01f816cc;
          }
          goto LAB_01f816e4;
        }
      }
      else {
        lVar18 = *plVar26;
        if (*(char *)(lVar18 + 0x54) != '\0') {
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81620;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x76;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81620;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x6f;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81620;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x6e;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81620;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
          }
        }
LAB_01f81620:
        if ((iVar6 != 2) && (*(char *)(lVar18 + 0x54) != '\0')) {
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 100;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x65;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            lVar14 = *(long *)(lVar18 + 0x30);
            uVar16 = 0x72;
LAB_01f816cc:
            *(undefined2 *)(lVar14 + (ulong)uVar2 * 2) = uVar16;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            if (*(char *)(lVar18 + 0x54) == '\0') goto LAB_01f81718;
          }
LAB_01f816e4:
          uVar2 = *(ushort *)(lVar18 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
            *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
          }
        }
      }
LAB_01f81718:
      lVar18 = *plVar26;
      if (*(char *)(lVar18 + 0x54) != '\0') {
        uVar17 = (uint)*(ushort *)(lVar18 + 0x50) - (uint)*(ushort *)(lVar18 + 0x52);
        if (uVar17 == 0) goto LAB_01f81b04;
        puVar19 = (ushort *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar9 + 0x30);
        iVar6 = 0;
        do {
          uVar2 = *puVar20;
          *puVar19 = uVar2;
          if (uVar2 == 0) goto LAB_01f81b08;
          if (uVar2 == 0x10) {
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) goto LAB_01f81afc;
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar9 = 0;
              do {
                lVar14 = lVar9;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar14 + 4);
                lVar9 = lVar14 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar6 = uVar1 + iVar6;
          }
          else {
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar6 = iVar6 + 1;
            uVar17 = uVar17 - 1;
          }
        } while (uVar17 != 0);
        goto LAB_01f81aec;
      }
      goto LAB_01f81b14;
    }
    if (*(char *)(lVar14 + 0x54) == '\0') break;
    uVar17 = (uint)*(ushort *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar14 + 0x52);
    if (uVar17 == 0) {
      iVar6 = 0;
    }
    else {
      puVar19 = (ushort *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2);
      puVar20 = *(ushort **)(lVar9 + 0x30);
      iVar6 = 0;
      do {
        while( true ) {
          uVar2 = *puVar20;
          *puVar19 = uVar2;
          if (uVar2 == 0) goto LAB_01f81b3c;
          if (uVar2 == 0x10) break;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
          iVar6 = iVar6 + 1;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_01f809ec;
        }
        puVar23 = puVar20 + 1;
        uVar2 = *puVar23;
        uVar1 = uVar2 + 2;
        bVar4 = uVar17 < uVar1;
        uVar17 = uVar17 - uVar1;
        if (bVar4 || uVar17 == 0) {
          *puVar19 = 0;
          goto LAB_01f81b3c;
        }
        uVar21 = uVar2 + 1;
        uVar5 = uVar21 & 7;
        puVar19[1] = uVar2;
        puVar24 = puVar19 + 1;
        if (uVar5 != 0) {
          lVar9 = 0;
          do {
            lVar13 = lVar9;
            uVar21 = uVar21 - 1;
            uVar5 = uVar5 - 1;
            *(undefined2 *)((long)puVar19 + lVar13 + 4) =
                 *(undefined2 *)((long)puVar20 + lVar13 + 4);
            lVar9 = lVar13 + 2;
          } while (uVar5 != 0);
          puVar19 = (ushort *)((long)puVar19 + lVar13 + 4);
          puVar20 = (ushort *)((long)puVar20 + lVar13 + 2);
          puVar23 = puVar20 + 1;
          puVar24 = puVar19;
        }
        if (6 < uVar2) {
          puVar19 = puVar24;
          do {
            puVar19[1] = puVar20[2];
            puVar19[2] = puVar23[2];
            puVar19[3] = puVar23[3];
            puVar19[4] = puVar23[4];
            puVar19[5] = puVar23[5];
            puVar19[6] = puVar23[6];
            puVar20 = puVar23 + 7;
            puVar19[7] = *puVar20;
            puVar23 = puVar23 + 8;
            uVar21 = uVar21 - 8;
            puVar19 = puVar19 + 8;
            *puVar19 = *puVar23;
          } while (uVar21 != 0);
        }
        puVar20 = puVar23;
        iVar6 = uVar1 + iVar6;
      } while (uVar17 != 0);
LAB_01f809ec:
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        puVar19[-1] = 0;
      }
    }
LAB_01f81b3c:
    *(short *)(lVar14 + 0x52) = *(short *)(lVar14 + 0x52) + (short)iVar6;
    lVar13 = *plVar26;
    if (*(char *)(lVar13 + 0x54) == '\0') break;
    uVar2 = *(ushort *)(lVar13 + 0x52);
    if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
      *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
      *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
      *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
      lVar13 = *plVar26;
      if (*(char *)(lVar13 + 0x54) == '\0') break;
    }
    uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
    if (uVar17 == 0) goto LAB_01f82634;
    puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
    puVar20 = *(ushort **)(lVar18 + 0x30);
    iVar6 = 0;
    do {
      uVar2 = *puVar20;
      *puVar19 = uVar2;
      if (uVar2 == 0) goto LAB_01f82638;
      if (uVar2 == 0x10) {
        puVar23 = puVar20 + 1;
        uVar2 = *puVar23;
        uVar1 = uVar2 + 2;
        bVar4 = uVar17 < uVar1;
        uVar17 = uVar17 - uVar1;
        if (bVar4 || uVar17 == 0) goto LAB_01f8262c;
        uVar21 = uVar2 + 1;
        uVar5 = uVar21 & 7;
        puVar19[1] = uVar2;
        puVar24 = puVar19 + 1;
        if (uVar5 != 0) {
          lVar9 = 0;
          do {
            lVar18 = lVar9;
            uVar21 = uVar21 - 1;
            uVar5 = uVar5 - 1;
            *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                 *(undefined2 *)((long)puVar20 + lVar18 + 4);
            lVar9 = lVar18 + 2;
          } while (uVar5 != 0);
          puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
          puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
          puVar23 = puVar20 + 1;
          puVar24 = puVar19;
        }
        if (6 < uVar2) {
          puVar19 = puVar24;
          do {
            puVar19[1] = puVar20[2];
            puVar19[2] = puVar23[2];
            puVar19[3] = puVar23[3];
            puVar19[4] = puVar23[4];
            puVar19[5] = puVar23[5];
            puVar19[6] = puVar23[6];
            puVar20 = puVar23 + 7;
            puVar19[7] = *puVar20;
            puVar23 = puVar23 + 8;
            uVar21 = uVar21 - 8;
            puVar19 = puVar19 + 8;
            *puVar19 = *puVar23;
          } while (uVar21 != 0);
        }
        puVar20 = puVar23;
        iVar6 = uVar1 + iVar6;
      }
      else {
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
        iVar6 = iVar6 + 1;
        uVar17 = uVar17 - 1;
      }
    } while (uVar17 != 0);
LAB_01f8261c:
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      puVar19[-1] = 0;
    }
LAB_01f82638:
    *(short *)(lVar13 + 0x52) = *(short *)(lVar13 + 0x52) + (short)iVar6;
    break;
  case 6:
    lVar14 = *plVar26;
    if (1 < iVar6 - 1U) {
      if (*(char *)(lVar14 + 0x54) != '\0') {
        uVar17 = (uint)*(ushort *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar14 + 0x52);
        if (uVar17 == 0) {
          iVar6 = 0;
        }
        else {
          puVar19 = (ushort *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2);
          puVar20 = *(ushort **)(lVar9 + 0x30);
          iVar6 = 0;
          do {
            while( true ) {
              uVar2 = *puVar20;
              *puVar19 = uVar2;
              if (uVar2 == 0) goto LAB_01f81cac;
              if (uVar2 == 0x10) break;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
              iVar6 = iVar6 + 1;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_01f80b14;
            }
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) {
              *puVar19 = 0;
              goto LAB_01f81cac;
            }
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar9 = 0;
              do {
                lVar13 = lVar9;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar13 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar13 + 4);
                lVar9 = lVar13 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar13 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar13 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar6 = uVar1 + iVar6;
          } while (uVar17 != 0);
LAB_01f80b14:
          if (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            puVar19[-1] = 0;
          }
        }
LAB_01f81cac:
        *(short *)(lVar14 + 0x52) = *(short *)(lVar14 + 0x52) + (short)iVar6;
        lVar13 = *plVar26;
        if (*(char *)(lVar13 + 0x54) != '\0') {
          uVar2 = *(ushort *)(lVar13 + 0x52);
          if (uVar2 + 1 < (uint)*(ushort *)(lVar13 + 0x50)) {
            *(ushort *)(lVar13 + 0x52) = uVar2 + 1;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)uVar2 * 2) = 0x20;
            *(undefined2 *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2) = 0;
            lVar13 = *plVar26;
            if (*(char *)(lVar13 + 0x54) == '\0') break;
          }
          uVar17 = (uint)*(ushort *)(lVar13 + 0x50) - (uint)*(ushort *)(lVar13 + 0x52);
          if (uVar17 == 0) goto LAB_01f82634;
          puVar19 = (ushort *)(*(long *)(lVar13 + 0x30) + (ulong)*(ushort *)(lVar13 + 0x52) * 2);
          puVar20 = *(ushort **)(lVar18 + 0x30);
          iVar6 = 0;
          do {
            uVar2 = *puVar20;
            *puVar19 = uVar2;
            if (uVar2 == 0) goto LAB_01f82638;
            if (uVar2 == 0x10) {
              puVar23 = puVar20 + 1;
              uVar2 = *puVar23;
              uVar1 = uVar2 + 2;
              bVar4 = uVar17 < uVar1;
              uVar17 = uVar17 - uVar1;
              if (bVar4 || uVar17 == 0) goto LAB_01f8262c;
              uVar21 = uVar2 + 1;
              uVar5 = uVar21 & 7;
              puVar19[1] = uVar2;
              puVar24 = puVar19 + 1;
              if (uVar5 != 0) {
                lVar9 = 0;
                do {
                  lVar18 = lVar9;
                  uVar21 = uVar21 - 1;
                  uVar5 = uVar5 - 1;
                  *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                       *(undefined2 *)((long)puVar20 + lVar18 + 4);
                  lVar9 = lVar18 + 2;
                } while (uVar5 != 0);
                puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
                puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
                puVar23 = puVar20 + 1;
                puVar24 = puVar19;
              }
              if (6 < uVar2) {
                puVar19 = puVar24;
                do {
                  puVar19[1] = puVar20[2];
                  puVar19[2] = puVar23[2];
                  puVar19[3] = puVar23[3];
                  puVar19[4] = puVar23[4];
                  puVar19[5] = puVar23[5];
                  puVar19[6] = puVar23[6];
                  puVar20 = puVar23 + 7;
                  puVar19[7] = *puVar20;
                  puVar23 = puVar23 + 8;
                  uVar21 = uVar21 - 8;
                  puVar19 = puVar19 + 8;
                  *puVar19 = *puVar23;
                } while (uVar21 != 0);
              }
              puVar20 = puVar23;
              iVar6 = uVar1 + iVar6;
            }
            else {
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
              iVar6 = iVar6 + 1;
              uVar17 = uVar17 - 1;
            }
          } while (uVar17 != 0);
          goto LAB_01f8261c;
        }
      }
      break;
    }
    if (*(char *)(lVar14 + 0x54) == '\0') {
      if (iVar6 != 1) {
        pcVar15 = (char *)(lVar14 + 0x54);
        goto LAB_01f81918;
      }
LAB_01f81894:
      lVar18 = *(long *)(param_1 + 0x40);
      uVar7 = FUN_021737ec(param_1,param_3,0);
      psVar8 = (short *)FUN_021738fc(lVar25,4,uVar7);
      sVar10 = *psVar8;
      if (sVar10 != 0) {
        do {
          psVar8 = psVar8 + 1;
          if (*(char *)(lVar18 + 0x54) != '\0') {
            uVar2 = *(ushort *)(lVar18 + 0x52);
            if (uVar2 + 1 < (uint)*(ushort *)(lVar18 + 0x50)) {
              *(ushort *)(lVar18 + 0x52) = uVar2 + 1;
              *(short *)(*(long *)(lVar18 + 0x30) + (ulong)uVar2 * 2) = sVar10;
              *(undefined2 *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2) = 0;
            }
          }
          sVar10 = *psVar8;
        } while (sVar10 != 0);
      }
    }
    else {
      uVar17 = (uint)*(ushort *)(lVar14 + 0x50) - (uint)*(ushort *)(lVar14 + 0x52);
      if (uVar17 == 0) {
        iVar12 = 0;
      }
      else {
        puVar19 = (ushort *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2);
        puVar20 = *(ushort **)(lVar18 + 0x30);
        iVar12 = 0;
        do {
          while( true ) {
            uVar2 = *puVar20;
            *puVar19 = uVar2;
            if (uVar2 == 0) goto LAB_01f8183c;
            if (uVar2 == 0x10) break;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar12 = iVar12 + 1;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_01f808c4;
          }
          puVar23 = puVar20 + 1;
          uVar2 = *puVar23;
          uVar1 = uVar2 + 2;
          bVar4 = uVar17 < uVar1;
          uVar17 = uVar17 - uVar1;
          if (bVar4 || uVar17 == 0) {
            *puVar19 = 0;
            goto LAB_01f8183c;
          }
          uVar21 = uVar2 + 1;
          uVar5 = uVar21 & 7;
          puVar19[1] = uVar2;
          puVar24 = puVar19 + 1;
          if (uVar5 != 0) {
            lVar18 = 0;
            do {
              lVar22 = lVar18;
              uVar21 = uVar21 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar19 + lVar22 + 4) =
                   *(undefined2 *)((long)puVar20 + lVar22 + 4);
              lVar18 = lVar22 + 2;
            } while (uVar5 != 0);
            puVar19 = (ushort *)((long)puVar19 + lVar22 + 4);
            puVar20 = (ushort *)((long)puVar20 + lVar22 + 2);
            puVar23 = puVar20 + 1;
            puVar24 = puVar19;
          }
          if (6 < uVar2) {
            puVar19 = puVar24;
            do {
              puVar19[1] = puVar20[2];
              puVar19[2] = puVar23[2];
              puVar19[3] = puVar23[3];
              puVar19[4] = puVar23[4];
              puVar19[5] = puVar23[5];
              puVar19[6] = puVar23[6];
              puVar20 = puVar23 + 7;
              puVar19[7] = *puVar20;
              puVar23 = puVar23 + 8;
              uVar21 = uVar21 - 8;
              puVar19 = puVar19 + 8;
              *puVar19 = *puVar23;
            } while (uVar21 != 0);
          }
          puVar20 = puVar23;
          iVar12 = uVar1 + iVar12;
        } while (uVar17 != 0);
LAB_01f808c4:
        if (iVar12 != 0) {
          iVar12 = iVar12 + -1;
          puVar19[-1] = 0;
        }
      }
LAB_01f8183c:
      *(short *)(lVar14 + 0x52) = *(short *)(lVar14 + 0x52) + (short)iVar12;
      lVar14 = *plVar26;
      pcVar15 = (char *)(lVar14 + 0x54);
      if (*pcVar15 != '\0') {
        uVar2 = *(ushort *)(lVar14 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar14 + 0x50)) {
          *(ushort *)(lVar14 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2) = 0;
        }
      }
      if (iVar6 == 1) goto LAB_01f81894;
LAB_01f81918:
      if (*(char *)(lVar14 + 0x54) != '\0') {
        uVar2 = *(ushort *)(lVar14 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar14 + 0x50)) {
          *(ushort *)(lVar14 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)uVar2 * 2) = 100;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2) = 0;
          if (*pcVar15 == '\0') goto LAB_01f819cc;
        }
        uVar2 = *(ushort *)(lVar14 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar14 + 0x50)) {
          *(ushort *)(lVar14 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)uVar2 * 2) = 0x65;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2) = 0;
          if (*pcVar15 == '\0') goto LAB_01f819cc;
        }
        uVar2 = *(ushort *)(lVar14 + 0x52);
        if (uVar2 + 1 < (uint)*(ushort *)(lVar14 + 0x50)) {
          *(ushort *)(lVar14 + 0x52) = uVar2 + 1;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)uVar2 * 2) = 0x20;
          *(undefined2 *)(*(long *)(lVar14 + 0x30) + (ulong)*(ushort *)(lVar14 + 0x52) * 2) = 0;
        }
      }
    }
LAB_01f819cc:
    lVar18 = *plVar26;
    if (*(char *)(lVar18 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar18 + 0x50) - (uint)*(ushort *)(lVar18 + 0x52);
      if (uVar17 == 0) {
LAB_01f81b04:
        iVar6 = 0;
        goto LAB_01f81b08;
      }
      puVar19 = (ushort *)(*(long *)(lVar18 + 0x30) + (ulong)*(ushort *)(lVar18 + 0x52) * 2);
      puVar20 = *(ushort **)(lVar9 + 0x30);
      iVar6 = 0;
      do {
        while( true ) {
          uVar2 = *puVar20;
          *puVar19 = uVar2;
          if (uVar2 == 0) goto LAB_01f81b08;
          if (uVar2 == 0x10) break;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
          iVar6 = iVar6 + 1;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_01f81aec;
        }
        puVar23 = puVar20 + 1;
        uVar2 = *puVar23;
        uVar1 = uVar2 + 2;
        bVar4 = uVar17 < uVar1;
        uVar17 = uVar17 - uVar1;
        if (bVar4 || uVar17 == 0) goto LAB_01f81afc;
        uVar21 = uVar2 + 1;
        uVar5 = uVar21 & 7;
        puVar19[1] = uVar2;
        puVar24 = puVar19 + 1;
        if (uVar5 != 0) {
          lVar9 = 0;
          do {
            lVar14 = lVar9;
            uVar21 = uVar21 - 1;
            uVar5 = uVar5 - 1;
            *(undefined2 *)((long)puVar19 + lVar14 + 4) =
                 *(undefined2 *)((long)puVar20 + lVar14 + 4);
            lVar9 = lVar14 + 2;
          } while (uVar5 != 0);
          puVar19 = (ushort *)((long)puVar19 + lVar14 + 4);
          puVar20 = (ushort *)((long)puVar20 + lVar14 + 2);
          puVar23 = puVar20 + 1;
          puVar24 = puVar19;
        }
        if (6 < uVar2) {
          puVar19 = puVar24;
          do {
            puVar19[1] = puVar20[2];
            puVar19[2] = puVar23[2];
            puVar19[3] = puVar23[3];
            puVar19[4] = puVar23[4];
            puVar19[5] = puVar23[5];
            puVar19[6] = puVar23[6];
            puVar20 = puVar23 + 7;
            puVar19[7] = *puVar20;
            puVar23 = puVar23 + 8;
            uVar21 = uVar21 - 8;
            puVar19 = puVar19 + 8;
            *puVar19 = *puVar23;
          } while (uVar21 != 0);
        }
        puVar20 = puVar23;
        iVar6 = uVar1 + iVar6;
      } while (uVar17 != 0);
LAB_01f81aec:
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        puVar19[-1] = 0;
      }
      goto LAB_01f81b08;
    }
LAB_01f81b14:
    uVar27 = (ulong)*(uint6 *)((long)plVar28 + 10);
    uVar11 = (ulong)(*(ushort *)(lVar13 + (ulong)param_4 * 0x18 + 8) & 0xffffff9f | 0x20);
  }
LAB_01f82670:
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    lVar9 = (ulong)param_2 * 2 + (ulong)param_2;
    lVar18 = *(long *)(param_1 + 0x40);
    *(ulong *)(*(long *)(param_1 + 0x60) + lVar9 * 8 + 8) = uVar11 | uVar27 << 0x10;
    lVar13 = *(long *)(param_1 + 0x60);
    lVar9 = *(long *)(lVar13 + lVar9 * 8);
    if (*(char *)(lVar9 + 0x54) != '\0') {
      uVar17 = (uint)*(ushort *)(lVar9 + 0x50);
      if (*(ushort *)(lVar9 + 0x50) == 0) {
LAB_01f827bc:
        iVar6 = 0;
      }
      else {
        puVar20 = *(ushort **)(lVar18 + 0x30);
        iVar6 = 0;
        puVar19 = *(ushort **)(lVar9 + 0x30);
        do {
          uVar2 = *puVar20;
          *puVar19 = uVar2;
          if (uVar2 == 0) goto LAB_01f827c0;
          if (uVar2 == 0x10) {
            puVar23 = puVar20 + 1;
            uVar2 = *puVar23;
            uVar1 = uVar2 + 2;
            bVar4 = uVar17 < uVar1;
            uVar17 = uVar17 - uVar1;
            if (bVar4 || uVar17 == 0) goto LAB_01f827b4;
            uVar21 = uVar2 + 1;
            uVar5 = uVar21 & 7;
            puVar19[1] = uVar2;
            puVar24 = puVar19 + 1;
            if (uVar5 != 0) {
              lVar13 = 0;
              do {
                lVar18 = lVar13;
                uVar21 = uVar21 - 1;
                uVar5 = uVar5 - 1;
                *(undefined2 *)((long)puVar19 + lVar18 + 4) =
                     *(undefined2 *)((long)puVar20 + lVar18 + 4);
                lVar13 = lVar18 + 2;
              } while (uVar5 != 0);
              puVar19 = (ushort *)((long)puVar19 + lVar18 + 4);
              puVar20 = (ushort *)((long)puVar20 + lVar18 + 2);
              puVar23 = puVar20 + 1;
              puVar24 = puVar19;
            }
            if (6 < uVar2) {
              puVar19 = puVar24;
              do {
                puVar19[1] = puVar20[2];
                puVar19[2] = puVar23[2];
                puVar19[3] = puVar23[3];
                puVar19[4] = puVar23[4];
                puVar19[5] = puVar23[5];
                puVar19[6] = puVar23[6];
                puVar20 = puVar23 + 7;
                puVar19[7] = *puVar20;
                puVar23 = puVar23 + 8;
                uVar21 = uVar21 - 8;
                puVar19 = puVar19 + 8;
                *puVar19 = *puVar23;
              } while (uVar21 != 0);
            }
            puVar20 = puVar23;
            iVar6 = uVar1 + iVar6;
          }
          else {
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
            iVar6 = iVar6 + 1;
            uVar17 = uVar17 - 1;
          }
        } while (uVar17 != 0);
LAB_01f80098:
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          puVar19[-1] = 0;
        }
      }
LAB_01f827c0:
      *(short *)(lVar9 + 0x52) = (short)iVar6;
      lVar13 = *(long *)(param_1 + 0x60);
    }
LAB_01f827c8:
    *(undefined2 *)(lVar13 + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar9 = *(long *)(param_1 + 0x60) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar9 + 0x12) = *(ushort *)(lVar9 + 0x12) & 0xfffe;
  }
  return;
LAB_01f81afc:
  *puVar19 = 0;
LAB_01f81b08:
  *(short *)(lVar18 + 0x52) = *(short *)(lVar18 + 0x52) + (short)iVar6;
  goto LAB_01f81b14;
LAB_01f8262c:
  *puVar19 = 0;
  goto LAB_01f82638;
LAB_01f827b4:
  *puVar19 = 0;
  goto LAB_01f827c0;
}


