/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109cbdc; name: FUN_0109cbdc
 */


short * FUN_0109cbdc(long param_1,long param_2,short *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ulong uVar18;
  uint uVar19;
  ushort *puVar20;
  ulong uVar21;
  long lVar22;
  
  if (*param_3 == 0x10) {
    uVar11 = (ulong)(ushort)param_3[1];
    if (uVar11 < 2) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulong)(ushort)param_3[3];
    }
    if (*(uint *)(param_1 + 0x58) <= (uint)uVar21) goto LAB_0109d614;
  }
  else {
    if (*(int *)(param_1 + 0x58) == 0) {
      return param_3;
    }
    uVar21 = 0;
  }
  if (*(short *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18 + 0x10) != 0) {
    param_4 = param_4 & 0xffffffff;
    if (*(char *)(param_2 + 0x54) != '\0') {
      uVar13 = *(ushort *)(param_2 + 0x52);
      if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = 0x10;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
        if (*(char *)(param_2 + 0x54) == '\0') goto LAB_0109d04c;
      }
      uVar13 = *(ushort *)(param_2 + 0x52);
      if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = 2;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
      }
    }
LAB_0109d04c:
    sVar7 = FUN_0109e330(0xbd,7);
    if (*(char *)(param_2 + 0x54) != '\0') {
      uVar13 = *(ushort *)(param_2 + 0x52);
      uVar11 = (ulong)uVar13;
      uVar14 = uVar13 + 1;
      if (uVar14 < *(ushort *)(param_2 + 0x50)) {
        *(short *)(param_2 + 0x52) = (short)uVar14;
        *(short *)(*(long *)(param_2 + 0x30) + uVar11 * 2) = sVar7;
        uVar11 = (ulong)*(ushort *)(param_2 + 0x52);
LAB_0109d08c:
        *(undefined2 *)(*(long *)(param_2 + 0x30) + uVar11 * 2) = 0;
      }
      else if ((sVar7 == 0) && (uVar14 == *(ushort *)(param_2 + 0x50))) {
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
        goto LAB_0109d08c;
      }
      if (*(char *)(param_2 + 0x54) != '\0') {
        sVar7 = *(short *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18 + 0x10);
        uVar13 = *(ushort *)(param_2 + 0x52);
        if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
          *(ushort *)(param_2 + 0x52) = uVar13 + 1;
          *(short *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = sVar7;
          *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
        }
        else if ((sVar7 == 0) && (uVar13 + 1 == (uint)*(ushort *)(param_2 + 0x50))) {
          *(ushort *)(param_2 + 0x52) = uVar13 + 1;
          *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = 0;
        }
      }
    }
  }
  if ((*param_3 != 0x10) || (*(char *)((long)param_3 + 5) != '\x02')) {
    if ((param_4 & 1) == 0) {
      *(int *)(param_1 + 0xcc) = (int)uVar21;
      FUN_0109c76c(param_1,*(undefined8 *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18));
      if (((*param_3 == 0x10) && ((param_3[2] & 0xff00U) == 0x100)) &&
         ((param_3[2] + 0x33U & 0xff) < 2)) {
        FUN_0109e4b0(param_1,uVar21);
        uVar10 = *(undefined8 *)(param_1 + 0x48);
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18);
      }
      FUN_0109c334(param_1,param_2,uVar10,1,param_5 & 1);
      goto LAB_0109d550;
    }
    if ((param_5 & 1) != 0) {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18);
      puVar17 = *(ushort **)(param_1 + 0x80);
      uVar8 = FUN_02173564(uVar10);
      FUN_014ed770(uVar10,puVar17,uVar8);
      do {
        uVar13 = *puVar17;
LAB_0109d134:
        if (uVar13 == 0) goto LAB_0109d2a8;
        if (uVar13 != 0x10) goto code_r0x0109d140;
        puVar17 = puVar17 + (ulong)puVar17[1] + 2;
      } while( true );
    }
    if (((*param_3 != 0x10) || ((param_3[2] & 0xff00U) != 0x100)) ||
       (1 < (param_3[2] + 0x33U & 0xff))) {
      if (*(char *)(param_2 + 0x54) == '\0') goto LAB_0109d550;
      uVar14 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0x52);
      if (uVar14 == 0) goto LAB_0109d468;
      puVar16 = *(ushort **)(*(long *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18) + 0x30);
      puVar17 = (ushort *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2);
      iVar9 = 0;
      do {
        uVar13 = *puVar16;
        *puVar17 = uVar13;
        if (uVar13 == 0) goto LAB_0109d544;
        if (uVar13 == 0x10) {
          puVar20 = puVar16 + 1;
          uVar13 = *puVar20;
          uVar1 = uVar13 + 2;
          bVar6 = uVar14 < uVar1;
          uVar14 = uVar14 - uVar1;
          if (bVar6 || uVar14 == 0) goto LAB_0109d540;
          uVar19 = uVar13 + 1;
          uVar2 = uVar19 & 7;
          puVar15 = puVar17 + 1;
          *puVar15 = uVar13;
          if (uVar2 != 0) {
            lVar22 = 0;
            do {
              lVar12 = lVar22;
              uVar19 = uVar19 - 1;
              uVar2 = uVar2 - 1;
              *(undefined2 *)((long)puVar17 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar16 + lVar12 + 4);
              lVar22 = lVar12 + 2;
            } while (uVar2 != 0);
            puVar17 = (ushort *)((long)puVar17 + lVar12 + 4);
            puVar16 = (ushort *)((long)puVar16 + lVar12 + 2);
            puVar20 = puVar16 + 1;
            puVar15 = puVar17;
          }
          if (6 < uVar13) {
            do {
              puVar15[1] = puVar16[2];
              puVar15[2] = puVar20[2];
              puVar15[3] = puVar20[3];
              puVar15[4] = puVar20[4];
              puVar15[5] = puVar20[5];
              puVar15[6] = puVar20[6];
              puVar16 = puVar20 + 7;
              puVar15[7] = *puVar16;
              puVar20 = puVar20 + 8;
              uVar19 = uVar19 - 8;
              puVar15 = puVar15 + 8;
              *puVar15 = *puVar20;
              puVar17 = puVar15;
            } while (uVar19 != 0);
          }
          puVar16 = puVar20;
          iVar9 = uVar1 + iVar9;
        }
        else {
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
          iVar9 = iVar9 + 1;
          uVar14 = uVar14 - 1;
        }
      } while (uVar14 != 0);
      goto LAB_0109d458;
    }
    FUN_0109e4b0(param_1,uVar21);
    if (*(char *)(param_2 + 0x54) == '\0') goto LAB_0109d550;
    uVar14 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0x52);
    if (uVar14 != 0) {
      iVar9 = 0;
      puVar17 = (ushort *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2);
      puVar16 = *(ushort **)(*(long *)(param_1 + 0x48) + 0x30);
      do {
        uVar13 = *puVar16;
        *puVar17 = uVar13;
        if (uVar13 == 0) goto LAB_0109d544;
        if (uVar13 == 0x10) {
          puVar20 = puVar16 + 1;
          uVar13 = *puVar20;
          uVar1 = uVar13 + 2;
          bVar6 = uVar14 < uVar1;
          uVar14 = uVar14 - uVar1;
          if (bVar6 || uVar14 == 0) goto LAB_0109d540;
          uVar19 = uVar13 + 1;
          uVar2 = uVar19 & 7;
          puVar15 = puVar17 + 1;
          *puVar15 = uVar13;
          if (uVar2 != 0) {
            lVar22 = 0;
            do {
              lVar12 = lVar22;
              uVar19 = uVar19 - 1;
              uVar2 = uVar2 - 1;
              *(undefined2 *)((long)puVar17 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar16 + lVar12 + 4);
              lVar22 = lVar12 + 2;
            } while (uVar2 != 0);
            puVar17 = (ushort *)((long)puVar17 + lVar12 + 4);
            puVar16 = (ushort *)((long)puVar16 + lVar12 + 2);
            puVar20 = puVar16 + 1;
            puVar15 = puVar17;
          }
          if (6 < uVar13) {
            do {
              puVar15[1] = puVar16[2];
              puVar15[2] = puVar20[2];
              puVar15[3] = puVar20[3];
              puVar15[4] = puVar20[4];
              puVar15[5] = puVar20[5];
              puVar15[6] = puVar20[6];
              puVar16 = puVar20 + 7;
              puVar15[7] = *puVar16;
              puVar20 = puVar20 + 8;
              uVar19 = uVar19 - 8;
              puVar15 = puVar15 + 8;
              *puVar15 = *puVar20;
              puVar17 = puVar15;
            } while (uVar19 != 0);
          }
          puVar16 = puVar20;
          iVar9 = uVar1 + iVar9;
        }
        else {
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
          iVar9 = iVar9 + 1;
          uVar14 = uVar14 - 1;
        }
      } while (uVar14 != 0);
      goto LAB_0109d458;
    }
LAB_0109d468:
    iVar9 = 0;
    goto LAB_0109d544;
  }
  if ((2 < (ushort)param_3[1]) && (1 < (ushort)param_3[1] - 1)) {
    sVar7 = param_3[4];
    lVar22 = *(long *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18);
    if ((sVar7 == 0) || (*(short *)(lVar22 + 0x52) == 0)) goto LAB_0109cc9c;
    if (((*PTR_DAT_047d8c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
    lVar12 = *(long *)PTR_DAT_047d8ca0;
    *(long *)PTR_DAT_047d8ca8 = lVar12;
    puVar17 = *(ushort **)(lVar22 + 0x30);
    puVar16 = puVar17 + -1;
    do {
      puVar16 = puVar16 + 1;
      if (*puVar16 == 0) break;
    } while (9 < (ushort)(*puVar16 - 0x30));
    lVar3 = 4;
    if (*(int *)(lVar12 + 0x2b0) - 5U < 2) {
      lVar3 = 5;
    }
    uVar13 = *(ushort *)(lVar22 + 0x52);
    uVar11 = (long)puVar16 - (long)puVar17 >> 1;
    if (lVar3 <= (long)(uVar13 - uVar11)) {
      for (; puVar17 < puVar16; puVar17 = puVar17 + 1) {
        uVar4 = *puVar17;
        if (uVar4 == 0x10) goto LAB_0109d550;
        if (*(char *)(param_2 + 0x54) != '\0') {
          uVar5 = *(ushort *)(param_2 + 0x52);
          uVar18 = (ulong)uVar5;
          if (uVar5 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
            *(ushort *)(param_2 + 0x52) = uVar5 + 1;
            *(ushort *)(*(long *)(param_2 + 0x30) + uVar18 * 2) = uVar4;
            uVar18 = (ulong)*(ushort *)(param_2 + 0x52);
          }
          else {
            if ((uVar4 != 0) || (uVar5 + 1 != (uint)*(ushort *)(param_2 + 0x50))) goto LAB_0109d8a0;
            *(ushort *)(param_2 + 0x52) = uVar5 + 1;
          }
          *(undefined2 *)(*(long *)(param_2 + 0x30) + uVar18 * 2) = 0;
        }
LAB_0109d8a0:
      }
      lVar22 = ~uVar11 + (ulong)uVar13;
      do {
        uVar13 = *puVar17;
        if (uVar13 == 0x10) break;
        if (*(char *)(param_2 + 0x54) != '\0') {
          uVar4 = *(ushort *)(param_2 + 0x52);
          uVar11 = (ulong)uVar4;
          if (uVar4 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
            *(ushort *)(param_2 + 0x52) = uVar4 + 1;
            *(ushort *)(*(long *)(param_2 + 0x30) + uVar11 * 2) = uVar13;
            uVar11 = (ulong)*(ushort *)(param_2 + 0x52);
          }
          else {
            if ((uVar13 != 0) || (uVar4 + 1 != (uint)*(ushort *)(param_2 + 0x50)))
            goto LAB_0109d900;
            *(ushort *)(param_2 + 0x52) = uVar4 + 1;
          }
          *(undefined2 *)(*(long *)(param_2 + 0x30) + uVar11 * 2) = 0;
        }
LAB_0109d900:
        puVar17 = puVar17 + 1;
        if (((lVar22 != 0) && (lVar22 % 3 == 0)) && (*(char *)(param_2 + 0x54) != '\0')) {
          uVar13 = *(ushort *)(param_2 + 0x52);
          if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
            *(ushort *)(param_2 + 0x52) = uVar13 + 1;
            *(short *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = sVar7;
            *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
          }
        }
        lVar12 = lVar22 + 1;
        lVar22 = lVar22 + -1;
      } while (1 < lVar12);
      goto LAB_0109d550;
    }
    if (*(char *)(param_2 + 0x54) == '\0') goto LAB_0109d550;
    uVar14 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0x52);
    if (uVar14 == 0) {
      iVar9 = 0;
    }
    else {
      puVar16 = (ushort *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2);
      iVar9 = 0;
      do {
        uVar13 = *puVar17;
        *puVar16 = uVar13;
        if (uVar13 == 0) goto LAB_0109d768;
        if (uVar13 == 0x10) {
          puVar20 = puVar17 + 1;
          uVar13 = *puVar20;
          uVar1 = uVar13 + 2;
          bVar6 = uVar14 < uVar1;
          uVar14 = uVar14 - uVar1;
          if (bVar6 || uVar14 == 0) {
            *puVar16 = 0;
            goto LAB_0109d768;
          }
          uVar19 = uVar13 + 1;
          uVar2 = uVar19 & 7;
          puVar15 = puVar16 + 1;
          *puVar15 = uVar13;
          if (uVar2 != 0) {
            lVar22 = 0;
            do {
              lVar12 = lVar22;
              uVar19 = uVar19 - 1;
              uVar2 = uVar2 - 1;
              *(undefined2 *)((long)puVar16 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar17 + lVar12 + 4);
              lVar22 = lVar12 + 2;
            } while (uVar2 != 0);
            puVar16 = (ushort *)((long)puVar16 + lVar12 + 4);
            puVar17 = (ushort *)((long)puVar17 + lVar12 + 2);
            puVar20 = puVar17 + 1;
            puVar15 = puVar16;
          }
          if (6 < uVar13) {
            do {
              puVar15[1] = puVar17[2];
              puVar15[2] = puVar20[2];
              puVar15[3] = puVar20[3];
              puVar15[4] = puVar20[4];
              puVar15[5] = puVar20[5];
              puVar15[6] = puVar20[6];
              puVar17 = puVar20 + 7;
              puVar15[7] = *puVar17;
              puVar20 = puVar20 + 8;
              uVar19 = uVar19 - 8;
              puVar15 = puVar15 + 8;
              *puVar15 = *puVar20;
              puVar16 = puVar15;
            } while (uVar19 != 0);
          }
          puVar17 = puVar20;
          iVar9 = uVar1 + iVar9;
        }
        else {
          puVar16 = puVar16 + 1;
          puVar17 = puVar17 + 1;
          iVar9 = iVar9 + 1;
          uVar14 = uVar14 - 1;
        }
      } while (uVar14 != 0);
      if (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        puVar16[-1] = 0;
      }
    }
LAB_0109d768:
    sVar7 = *(short *)(param_2 + 0x52) + (short)iVar9;
    goto LAB_0109d54c;
  }
  lVar22 = *(long *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18);
LAB_0109cc9c:
  if (*(char *)(param_2 + 0x54) != '\0') {
    uVar14 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0x52);
    if (uVar14 == 0) goto LAB_0109d468;
    puVar17 = (ushort *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2);
    puVar16 = *(ushort **)(lVar22 + 0x30);
    iVar9 = 0;
    do {
      uVar13 = *puVar16;
      *puVar17 = uVar13;
      if (uVar13 == 0) goto LAB_0109d544;
      if (uVar13 == 0x10) {
        puVar20 = puVar16 + 1;
        uVar13 = *puVar20;
        uVar1 = uVar13 + 2;
        bVar6 = uVar14 < uVar1;
        uVar14 = uVar14 - uVar1;
        if (bVar6 || uVar14 == 0) goto LAB_0109d540;
        uVar19 = uVar13 + 1;
        uVar2 = uVar19 & 7;
        puVar15 = puVar17 + 1;
        *puVar15 = uVar13;
        if (uVar2 != 0) {
          lVar22 = 0;
          do {
            lVar12 = lVar22;
            uVar19 = uVar19 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar17 + lVar12 + 4) =
                 *(undefined2 *)((long)puVar16 + lVar12 + 4);
            lVar22 = lVar12 + 2;
          } while (uVar2 != 0);
          puVar17 = (ushort *)((long)puVar17 + lVar12 + 4);
          puVar16 = (ushort *)((long)puVar16 + lVar12 + 2);
          puVar20 = puVar16 + 1;
          puVar15 = puVar17;
        }
        if (6 < uVar13) {
          do {
            puVar15[1] = puVar16[2];
            puVar15[2] = puVar20[2];
            puVar15[3] = puVar20[3];
            puVar15[4] = puVar20[4];
            puVar15[5] = puVar20[5];
            puVar15[6] = puVar20[6];
            puVar16 = puVar20 + 7;
            puVar15[7] = *puVar16;
            puVar20 = puVar20 + 8;
            uVar19 = uVar19 - 8;
            puVar15 = puVar15 + 8;
            *puVar15 = *puVar20;
            puVar17 = puVar15;
          } while (uVar19 != 0);
        }
        puVar16 = puVar20;
        iVar9 = uVar1 + iVar9;
      }
      else {
        puVar17 = puVar17 + 1;
        puVar16 = puVar16 + 1;
        iVar9 = iVar9 + 1;
        uVar14 = uVar14 - 1;
      }
    } while (uVar14 != 0);
LAB_0109d458:
    if (iVar9 != 0) {
      iVar9 = iVar9 + -1;
      puVar17[-1] = 0;
    }
    goto LAB_0109d544;
  }
  goto LAB_0109d550;
code_r0x0109d140:
  if (uVar13 != 0x1b && 9 < uVar13 - 0x11) {
    if (((*PTR_DAT_047d8c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d8ca0;
    *(undefined8 *)PTR_DAT_047d8ca8 = uVar10;
    FUN_021722d4(uVar10,puVar17);
LAB_0109d2a8:
    FUN_019202d0(*(undefined8 *)(param_1 + 0x40),puVar17);
    if (*(char *)(param_2 + 0x54) == '\0') goto LAB_0109d550;
    uVar14 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0x52);
    if (uVar14 == 0) goto LAB_0109d468;
    iVar9 = 0;
    puVar17 = (ushort *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2);
    puVar16 = *(ushort **)(*(long *)(param_1 + 0x40) + 0x30);
    goto LAB_0109d2e0;
  }
  goto LAB_0109d134;
  while( true ) {
    if (uVar13 == 0x10) {
      puVar20 = puVar16 + 1;
      uVar13 = *puVar20;
      uVar1 = uVar13 + 2;
      bVar6 = uVar14 < uVar1;
      uVar14 = uVar14 - uVar1;
      if (bVar6 || uVar14 == 0) goto LAB_0109d540;
      uVar19 = uVar13 + 1;
      uVar2 = uVar19 & 7;
      puVar15 = puVar17 + 1;
      *puVar15 = uVar13;
      if (uVar2 != 0) {
        lVar22 = 0;
        do {
          lVar12 = lVar22;
          uVar19 = uVar19 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar17 + lVar12 + 4) = *(undefined2 *)((long)puVar16 + lVar12 + 4);
          lVar22 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar17 = (ushort *)((long)puVar17 + lVar12 + 4);
        puVar16 = (ushort *)((long)puVar16 + lVar12 + 2);
        puVar20 = puVar16 + 1;
        puVar15 = puVar17;
      }
      if (6 < uVar13) {
        do {
          puVar15[1] = puVar16[2];
          puVar15[2] = puVar20[2];
          puVar15[3] = puVar20[3];
          puVar15[4] = puVar20[4];
          puVar15[5] = puVar20[5];
          puVar15[6] = puVar20[6];
          puVar16 = puVar20 + 7;
          puVar15[7] = *puVar16;
          puVar20 = puVar20 + 8;
          uVar19 = uVar19 - 8;
          puVar15 = puVar15 + 8;
          *puVar15 = *puVar20;
          puVar17 = puVar15;
        } while (uVar19 != 0);
      }
      puVar16 = puVar20;
      iVar9 = uVar1 + iVar9;
    }
    else {
      puVar17 = puVar17 + 1;
      puVar16 = puVar16 + 1;
      iVar9 = iVar9 + 1;
      uVar14 = uVar14 - 1;
    }
    if (uVar14 == 0) break;
LAB_0109d2e0:
    uVar13 = *puVar16;
    *puVar17 = uVar13;
    if (uVar13 == 0) goto LAB_0109d544;
  }
  goto LAB_0109d458;
LAB_0109d540:
  *puVar17 = 0;
LAB_0109d544:
  sVar7 = *(short *)(param_2 + 0x52) + (short)iVar9;
LAB_0109d54c:
  *(short *)(param_2 + 0x52) = sVar7;
LAB_0109d550:
  lVar22 = *(long *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18);
  uVar13 = *(ushort *)(lVar22 + 0x52);
  if ((ulong)uVar13 != 0) {
    puVar17 = *(ushort **)(lVar22 + 0x30);
    puVar16 = puVar17 + uVar13;
    uVar4 = *puVar17;
    if (uVar4 == 0x10) {
      uVar13 = 0;
      goto LAB_0109d598;
    }
    puVar17 = puVar17 + 1;
    uVar13 = 0;
    if (9 < uVar4 - 0x11 && uVar4 != 0x1b) {
      uVar13 = uVar4;
    }
    while (puVar17 < puVar16) {
      uVar4 = *puVar17;
      if (uVar4 == 0x10) {
LAB_0109d598:
        puVar17 = puVar17 + (ulong)puVar17[1] + 2;
      }
      else {
        puVar17 = puVar17 + 1;
        if (9 < uVar4 - 0x11 && uVar4 != 0x1b) {
          uVar13 = uVar4;
        }
      }
    }
  }
  *(ushort *)(param_1 + 0xd0) = uVar13;
  if (*(short *)(*(long *)(param_1 + 0x60) + uVar21 * 0x18 + 0x10) != 0) {
    if (*(char *)(param_2 + 0x54) != '\0') {
      uVar13 = *(ushort *)(param_2 + 0x52);
      if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = 0x10;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
        if (*(char *)(param_2 + 0x54) == '\0') goto LAB_0109d698;
      }
      uVar13 = *(ushort *)(param_2 + 0x52);
      if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)uVar13 * 2) = 1;
        *(undefined2 *)(*(long *)(param_2 + 0x30) + (ulong)*(ushort *)(param_2 + 0x52) * 2) = 0;
      }
    }
LAB_0109d698:
    sVar7 = FUN_0109e330(0xbd,9);
    if (*(char *)(param_2 + 0x54) != '\0') {
      uVar13 = *(ushort *)(param_2 + 0x52);
      uVar21 = (ulong)uVar13;
      if (uVar13 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
        *(short *)(*(long *)(param_2 + 0x30) + uVar21 * 2) = sVar7;
        uVar21 = (ulong)*(ushort *)(param_2 + 0x52);
      }
      else {
        if ((sVar7 != 0) || (uVar13 + 1 != (uint)*(ushort *)(param_2 + 0x50))) goto LAB_0109d5e4;
        *(ushort *)(param_2 + 0x52) = uVar13 + 1;
      }
      *(undefined2 *)(*(long *)(param_2 + 0x30) + uVar21 * 2) = 0;
    }
  }
LAB_0109d5e4:
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (*param_3 != 0x10) {
    return param_3;
  }
  uVar11 = (ulong)(ushort)param_3[1];
LAB_0109d614:
  return param_3 + uVar11 + 2;
}


