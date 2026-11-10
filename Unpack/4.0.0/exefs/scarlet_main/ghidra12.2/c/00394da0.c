/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00394da0; name: FUN_00394da0
 */


undefined1 * FUN_00394da0(double param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 uVar7;
  double dVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  undefined1 uVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int local_34;
  
  if (NAN(param_1)) {
    *param_2 = 0x6e616e;
    return (undefined1 *)0x3;
  }
  if (param_1 == 0.0) {
    puVar14 = param_2;
    if ((long)param_1 < 0) {
      puVar14 = (undefined4 *)((long)param_2 + 1);
      *(undefined1 *)param_2 = 0x2d;
    }
    *(undefined2 *)puVar14 = 0x30;
    return (undefined1 *)((long)puVar14 + (1 - (long)param_2));
  }
  if (0.0 <= param_1) {
    puVar14 = param_2;
  }
  else {
    param_1 = -param_1;
    *(undefined1 *)param_2 = 0x2d;
    puVar14 = (undefined4 *)((long)param_2 + 1);
  }
  if (ABS(param_1) == INFINITY) {
    *puVar14 = 0x666e69;
    return (undefined1 *)((long)puVar14 + (3 - (long)param_2));
  }
  if (999999.5 <= param_1) {
    dVar22 = param_1;
    if (1e+261 <= param_1) {
      dVar22 = param_1 * 1e-256;
    }
    uVar12 = 5;
    if (1e+261 <= param_1) {
      uVar12 = 0x105;
    }
    if (1e+133 <= dVar22) {
      dVar22 = dVar22 * 1e-128;
      uVar12 = uVar12 | 0x80;
    }
    dVar23 = dVar22;
    if (1e+69 <= dVar22) {
      dVar23 = dVar22 * 1e-64;
    }
    if (1e+69 <= dVar22) {
      uVar12 = uVar12 | 0x40;
    }
    if (1e+37 <= dVar23) {
      dVar23 = dVar23 * 1e-32;
      uVar12 = uVar12 | 0x20;
    }
    dVar22 = dVar23;
    if (1e+21 <= dVar23) {
      dVar22 = dVar23 * 1e-16;
    }
    if (1e+21 <= dVar23) {
      uVar12 = uVar12 + 0x10;
    }
    if (10000000000000.0 <= dVar22) {
      dVar22 = dVar22 * 1e-08;
      uVar12 = uVar12 + 8;
    }
    if (1000000000.0 <= dVar22) {
      uVar12 = uVar12 + 4;
      dVar22 = dVar22 * 0.0001;
    }
    if (10000000.0 <= dVar22) {
      dVar22 = dVar22 * 0.01;
      uVar12 = uVar12 + 2;
    }
    if (1000000.0 <= dVar22) {
      uVar12 = uVar12 + 1;
      dVar23 = 0.1;
      goto LAB_00395204;
    }
  }
  else {
    dVar22 = param_1 * 1e+256;
    if (1e-250 <= param_1) {
      dVar22 = param_1;
    }
    uVar12 = 0xffffff05;
    if (1e-250 <= param_1) {
      uVar12 = 5;
    }
    dVar23 = dVar22 * 1e+128;
    uVar13 = uVar12 - 0x80;
    if (1e-122 <= dVar22) {
      dVar23 = dVar22;
      uVar13 = uVar12;
    }
    dVar22 = dVar23 * 1e+64;
    if (1e-58 <= dVar23) {
      dVar22 = dVar23;
    }
    uVar12 = uVar13 - 0x40;
    if (1e-58 <= dVar23) {
      uVar12 = uVar13;
    }
    dVar23 = dVar22 * 1e+32;
    uVar13 = uVar12 - 0x20;
    if (1e-26 <= dVar22) {
      dVar23 = dVar22;
      uVar13 = uVar12;
    }
    dVar22 = dVar23 * 1e+16;
    if (1e-10 <= dVar23) {
      dVar22 = dVar23;
    }
    uVar12 = uVar13 - 0x10;
    if (1e-10 <= dVar23) {
      uVar12 = uVar13;
    }
    dVar23 = dVar22 * 100000000.0;
    if (0.01 <= dVar22) {
      dVar23 = dVar22;
    }
    uVar13 = uVar12 - 8;
    if (0.01 <= dVar22) {
      uVar13 = uVar12;
    }
    uVar2 = uVar13 - 4;
    dVar8 = dVar23 * 10000.0;
    if (100.0 <= dVar23) {
      uVar2 = uVar13;
      dVar8 = dVar23;
    }
    dVar22 = dVar8 * 100.0;
    uVar12 = uVar2 - 2;
    if (10000.0 <= dVar8) {
      dVar22 = dVar8;
      uVar12 = uVar2;
    }
    if (dVar22 < 100000.0) {
      dVar23 = 10.0;
      uVar12 = uVar12 - 1;
LAB_00395204:
      dVar22 = dVar22 * dVar23;
    }
  }
  uVar15 = (ulong)(dVar22 * 65536.0);
  if ((uVar15 & 0xffff) - 0x7fff < 2) {
    dVar22 = frexp(param_1,&local_34);
    uVar21 = (long)(dVar22 * -9.223372036854776e+18) << 1;
    local_34 = local_34 + -0x40;
    uVar10 = -(uVar15 >> 0x2e & 1) & 0xffffffff00000000 | (uVar15 >> 0x10 & 0x7fffffff) << 1 | 1;
    uVar13 = (uint)(uVar15 >> 0x10);
    if ((int)uVar12 < 6) {
      uVar10 = uVar10 << (LZCOUNT(uVar10) & 0x3fU);
      auVar25 = FUN_00395870(uVar21,5 - uVar12);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar10;
      if (auVar25._0_8_ <= uVar10) goto LAB_003952a0;
    }
    else {
      auVar24 = FUN_00395870(uVar10,uVar12 - 5);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar21;
      if (uVar21 <= auVar24._0_8_) {
LAB_003952a0:
        if ((auVar25._8_8_ <= auVar24._8_8_) || (auVar25._0_8_ < auVar24._0_8_)) {
          uVar2 = uVar13;
          if (auVar25._0_8_ == auVar24._0_8_) {
            uVar2 = (uVar13 & 1) + uVar13;
          }
          if (auVar25._8_8_ == auVar24._8_8_) {
            uVar13 = uVar2;
          }
          goto LAB_003952d0;
        }
      }
    }
    uVar13 = uVar13 + 1;
  }
  else {
    uVar13 = (uint)(uVar15 + 0x8000 >> 0x10);
  }
LAB_003952d0:
  puVar9 = PTR_DAT_047cd030;
  uVar2 = 100000;
  if (uVar13 != 1000000) {
    uVar2 = uVar13;
  }
  uVar3 = *(ushort *)(PTR_DAT_047cd030 + (long)((int)uVar2 / 10000) * 2);
  if (uVar13 == 1000000) {
    uVar12 = uVar12 + 1;
  }
  uVar4 = *(ushort *)(PTR_DAT_047cd030 + (long)(((int)uVar2 % 10000) / 100) * 2);
  uVar5 = *(ushort *)(PTR_DAT_047cd030 + (long)(((int)uVar2 % 10000) % 100) * 2);
  uVar6 = uVar3 >> 8 | (ushort)(((ulong)uVar4 << 0x30) >> 0x28);
  *(undefined2 *)puVar14 = 0x2e30;
  uVar20 = (undefined1)uVar3;
  uVar7 = (undefined1)(uVar4 >> 8);
  switch(uVar12) {
  case 0:
    *(ushort *)((long)puVar14 + 2) = uVar6;
    *(undefined1 *)((long)puVar14 + 1) = 0x2e;
    *(undefined1 *)(puVar14 + 1) = uVar7;
    puVar19 = puVar14 + 2;
    *(undefined1 *)puVar14 = uVar20;
    *(ushort *)((long)puVar14 + 5) = uVar5;
    do {
      cVar11 = *(char *)((long)puVar19 + -2);
      puVar19 = (undefined4 *)((long)puVar19 + -1);
    } while (cVar11 == '0');
    break;
  case 1:
    *(undefined1 *)puVar14 = uVar20;
    *(ushort *)((long)puVar14 + 3) = uVar4;
    puVar19 = puVar14 + 2;
    *(char *)((long)puVar14 + 1) = (char)(uVar3 >> 8);
    *(undefined1 *)((long)puVar14 + 2) = 0x2e;
    *(ushort *)((long)puVar14 + 5) = uVar5;
    do {
      cVar11 = *(char *)((long)puVar19 + -2);
      puVar19 = (undefined4 *)((long)puVar19 + -1);
    } while (cVar11 == '0');
    break;
  case 2:
    *(undefined1 *)puVar14 = uVar20;
    *(undefined1 *)(puVar14 + 1) = uVar7;
    puVar19 = puVar14 + 2;
    *(ushort *)((long)puVar14 + 1) = uVar6;
    *(undefined1 *)((long)puVar14 + 3) = 0x2e;
    *(ushort *)((long)puVar14 + 5) = uVar5;
    do {
      cVar11 = *(char *)((long)puVar19 + -2);
      puVar19 = (undefined4 *)((long)puVar19 + -1);
    } while (cVar11 == '0');
    break;
  case 3:
    *(ushort *)((long)puVar14 + 1) = uVar6;
    *(undefined1 *)((long)puVar14 + 3) = uVar7;
    *(undefined1 *)puVar14 = uVar20;
    if ((ushort)(uVar5 >> 8 | uVar5 & 0xff) == 0x30) {
      puVar17 = puVar14 + 1;
      *(undefined1 *)puVar17 = 0;
      goto LAB_003955dc;
    }
    *(char *)((long)puVar14 + 5) = (char)uVar5;
    *(undefined1 *)(puVar14 + 1) = 0x2e;
    if (uVar5 >> 8 == 0x30) {
      puVar17 = (undefined4 *)((long)puVar14 + 6);
      *(undefined1 *)puVar17 = 0;
      goto LAB_003955dc;
    }
    goto LAB_00395594;
  case 4:
    *(ushort *)((long)puVar14 + 1) = uVar6;
    *(undefined1 *)((long)puVar14 + 3) = uVar7;
    *(undefined1 *)puVar14 = uVar20;
    *(char *)(puVar14 + 1) = (char)uVar5;
    if ((uVar5 & 0xff00) == 0x3000) {
      puVar17 = (undefined4 *)((long)puVar14 + 5);
      *(undefined1 *)puVar17 = 0;
      goto LAB_003955dc;
    }
    *(undefined1 *)((long)puVar14 + 5) = 0x2e;
LAB_00395594:
    puVar17 = (undefined4 *)((long)puVar14 + 7);
    *(char *)((long)puVar14 + 6) = (char)(uVar5 >> 8);
    *(undefined1 *)puVar17 = 0;
    goto LAB_003955dc;
  case 5:
    *(ushort *)((long)puVar14 + 1) = uVar6;
    *(undefined1 *)puVar14 = uVar20;
    *(undefined1 *)((long)puVar14 + 3) = uVar7;
    *(ushort *)(puVar14 + 1) = uVar5;
    *(undefined1 *)((long)puVar14 + 6) = 0;
    return (undefined1 *)((long)((long)puVar14 + 6) - (long)param_2);
  case 0xfffffffc:
    *(undefined1 *)((long)puVar14 + 2) = 0x30;
    puVar14 = (undefined4 *)((long)puVar14 + 1);
  case 0xfffffffd:
    *(undefined1 *)((long)puVar14 + 2) = 0x30;
    puVar14 = (undefined4 *)((long)puVar14 + 1);
  case 0xfffffffe:
    goto switchD_00395378_caseD_fffffffe;
  case 0xffffffff:
    goto switchD_00395378_caseD_ffffffff;
  default:
    *(undefined1 *)puVar14 = uVar20;
    *(undefined1 *)(puVar14 + 1) = uVar7;
    *(ushort *)((long)puVar14 + 2) = uVar6;
    *(ushort *)((long)puVar14 + 5) = uVar5;
    puVar14 = puVar14 + 2;
    do {
      puVar17 = puVar14;
      puVar14 = (undefined4 *)((long)puVar17 + -1);
    } while (*(char *)((long)puVar17 + -2) == '0');
    puVar14 = (undefined4 *)((long)puVar17 + -2);
    if (*(char *)((long)puVar17 + -2) != '.') {
      puVar14 = (undefined4 *)((long)puVar17 + -1);
    }
    puVar16 = (undefined2 *)((long)puVar14 + 2);
    *(undefined1 *)puVar14 = 0x65;
    if ((int)uVar12 < 1) {
      uVar20 = 0x2d;
      uVar12 = -uVar12;
    }
    else {
      uVar20 = 0x2b;
    }
    *(undefined1 *)((long)puVar14 + 1) = uVar20;
    if (99 < (int)uVar12) {
      uVar13 = uVar12 / 100;
      uVar12 = uVar12 % 100;
      puVar16 = (undefined2 *)((long)puVar14 + 3);
      *(char *)((long)puVar14 + 2) = (char)uVar13 + '0';
    }
    *puVar16 = *(undefined2 *)(puVar9 + (long)(int)uVar12 * 2);
    puVar17 = (undefined4 *)(puVar16 + 1);
    *(undefined1 *)puVar17 = 0;
    goto LAB_003955dc;
  }
  puVar17 = (undefined4 *)((long)puVar19 + -1);
  if (cVar11 != '.') {
    puVar17 = puVar19;
  }
  *(undefined1 *)puVar17 = 0;
LAB_003955dc:
  return (undefined1 *)((long)puVar17 - (long)param_2);
switchD_00395378_caseD_fffffffe:
  *(undefined1 *)((long)puVar14 + 2) = 0x30;
  puVar14 = (undefined4 *)((long)puVar14 + 1);
switchD_00395378_caseD_ffffffff:
  *(ushort *)((long)puVar14 + 3) = uVar6;
  *(undefined1 *)((long)puVar14 + 5) = uVar7;
  puVar18 = (undefined1 *)((long)puVar14 + 9);
  *(undefined1 *)((long)puVar14 + 2) = uVar20;
  *(ushort *)((long)puVar14 + 6) = uVar5;
  do {
    pcVar1 = puVar18 + -2;
    puVar18 = puVar18 + -1;
  } while (*pcVar1 == '0');
  *puVar18 = 0;
  return puVar18 + -(long)param_2;
}


