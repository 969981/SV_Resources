/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afd78; name: FUN_008afd78
 */


void FUN_008afd78(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,long param_5,
                 long param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  long lVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  long *plVar30;
  undefined8 uVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  long lVar40;
  long lVar41;
  float fVar42;
  long local_88;
  
  FUN_008a6438();
  *param_1 = (long)(PTR_DAT_047d21d0 + 0x10);
  lVar33 = param_5;
  lVar27 = param_5;
  lVar40 = param_5;
  if (param_6 == 0) {
    lVar35 = *(long *)(param_7 + 0x30);
    local_88 = lVar35;
LAB_008afe2c:
    lVar41 = param_5;
  }
  else {
    uVar10 = *(ushort *)(param_7 + 0x40);
    if ((uVar10 != 0) || (*(short *)(param_7 + 0x44) != 0)) {
      lVar35 = *(long *)(param_7 + 0x30);
      local_88 = lVar35;
      if ((uVar10 & 1) != 0) {
        local_88 = *(long *)(param_7 + 0x38);
        lVar40 = param_6;
      }
      if ((uVar10 & 2) != 0) {
        lVar27 = param_6;
      }
      if ((uVar10 & 4) != 0) {
        lVar33 = param_6;
      }
      goto LAB_008afe2c;
    }
    lVar35 = *(long *)(param_7 + 0x38);
    lVar33 = param_6;
    lVar27 = param_6;
    lVar40 = param_6;
    lVar41 = param_6;
    local_88 = lVar35;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = -1;
  *(undefined8 *)((long)param_1 + 0x124) = 0x3f8000003f800000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xff000000ff000000;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0x114) = 0;
  uVar36 = (uint)(*(ushort *)(lVar41 + 0x54) >> 1);
  uVar6 = 0;
  if (uVar36 != 0) {
    uVar6 = (ulong)(uVar36 - 1);
  }
  uVar10 = *(ushort *)(lVar33 + 0x5e);
  uVar12 = *(ushort *)(lVar40 + 0x56) >> 1;
  uVar36 = 0;
  if (uVar12 != 0) {
    uVar36 = uVar12 - 1;
  }
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar41 + 0x68);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar41 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x116) = *(undefined1 *)(lVar27 + 0x5c);
  bVar8 = *(byte *)(lVar27 + 0x5d);
  *(ushort *)((long)param_1 + 0x114) = bVar8 & 3;
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(lVar41 + 0x78);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar41 + 0x7c);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar41 + 0x60);
  uVar12 = *(short *)(lVar41 + 0x5e) << 3;
  uVar11 = (bVar8 | uVar12) & 0x103;
  *(ushort *)((long)param_1 + 0x114) = uVar11;
  uVar5 = (*(ushort *)(lVar41 + 0x5e) >> 10 & 1) << 0xb;
  *(ushort *)((long)param_1 + 0x114) = uVar11 | uVar5;
  uVar10 = bVar8 & 3 | (uVar10 & 1) << 3;
  uVar11 = *(ushort *)(lVar41 + 0x5e);
  *(ushort *)((long)param_1 + 0x114) = uVar12 & 0x100 | uVar5 | uVar10;
  uVar7 = *(undefined4 *)(lVar33 + 0x88);
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(lVar33 + 0x84);
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  uVar7 = *(undefined4 *)(lVar33 + 0x90);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar33 + 0x8c);
  *(undefined4 *)(param_1 + 0x25) = uVar7;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(lVar33 + 0x94);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar33 + 0x98);
  *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(lVar33 + 0x9c);
  uVar10 = uVar10 | (*(ushort *)(lVar41 + 0x5e) >> 2 & 1) << 4;
  *(ushort *)((long)param_1 + 0x114) = uVar12 & 0x100 | uVar5 | uVar10;
  uVar10 = uVar10 | (*(ushort *)(lVar41 + 0x5e) >> 3 & 1) << 5;
  *(ushort *)((long)param_1 + 0x114) = uVar12 & 0x100 | uVar5 | uVar10;
  uVar10 = uVar10 | (*(ushort *)(lVar41 + 0x5e) >> 4 & 1) << 7;
  *(ushort *)((long)param_1 + 0x114) = uVar12 & 0x100 | uVar5 | uVar10;
  uVar5 = uVar5 | uVar12 & 0x100 | uVar10 | (*(ushort *)(lVar41 + 0x5e) >> 8 & 1) << 9;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar41 + 0x5e) & 0x200) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar41 + 0x5e) & 0x800) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | *(ushort *)(lVar41 + 0x5e) & 0x2000;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  uVar5 = uVar5 | (*(ushort *)(lVar41 + 0x5e) & 0xc000) << 1;
  *(ushort *)((long)param_1 + 0x114) = uVar5;
  *(ushort *)((long)param_1 + 0x114) = uVar5 | (ushort)*(byte *)(param_7 + 0xd2) << 0xe | 0x40;
  if (((uVar11 >> 6 & 1) == 0) || (*(uint *)(lVar41 + 0xa0) == 0)) {
    param_1[0x27] = 0;
joined_r0x008b00a8:
    if ((uVar11 >> 7 & 1) == 0) goto LAB_008b00ac;
LAB_008b0424:
    if (*(char *)(param_7 + 0xd1) == '\0') {
      lVar27 = FUN_0088b1cc();
      param_1[0x21] = lVar27;
      cVar9 = *(char *)((long)param_1 + 0x114);
    }
    else {
      lVar27 = FUN_00889a1c();
      param_1[0x21] = lVar27;
      cVar9 = *(char *)((long)param_1 + 0x114);
    }
  }
  else {
    pbVar38 = (byte *)(lVar41 + (ulong)*(uint *)(lVar41 + 0xa0));
    pbVar37 = pbVar38 + 1;
    bVar8 = *pbVar38;
    lVar27 = FUN_00896e78(0x10);
    param_1[0x27] = lVar27;
    plVar30 = param_1 + 0x27;
    uVar28 = FUN_00896e78(0x40);
    *(undefined8 *)(param_1[0x27] + 8) = uVar28;
    uVar28 = FUN_00896e78(0x40);
    *(undefined8 *)param_1[0x27] = uVar28;
    if (bVar8 == 0) {
      **(undefined4 **)(*plVar30 + 8) = 0;
LAB_008b00c4:
      bVar1 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 4) = 0;
LAB_008b00d8:
      bVar13 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 8) = 0;
LAB_008b00ec:
      bVar14 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0xc) = 0;
LAB_008b0100:
      bVar15 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x10) = 0;
LAB_008b0114:
      bVar16 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x14) = 0;
LAB_008b0124:
      bVar17 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x18) = 0;
LAB_008b0134:
      bVar18 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x1c) = 0;
LAB_008b0144:
      bVar19 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x20) = 0;
LAB_008b0154:
      bVar20 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x24) = 0;
LAB_008b0164:
      bVar21 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x28) = 0;
LAB_008b0174:
      bVar22 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x2c) = 0;
LAB_008b0184:
      bVar23 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x30) = 0;
LAB_008b0194:
      bVar24 = false;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x34) = 0;
LAB_008b01a4:
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x38) = 0;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x3c) = 0;
      if (bVar8 == 0) {
        **(undefined4 **)*plVar30 = 0;
        pbVar38 = pbVar37;
      }
      else {
        pbVar38 = pbVar37 + 4;
        **(undefined4 **)*plVar30 = *(undefined4 *)pbVar37;
      }
      if (bVar1) {
        bVar1 = false;
        bVar25 = false;
        goto LAB_008b01dc;
      }
      bVar25 = false;
      bVar1 = false;
      *(undefined4 *)(*(long *)*plVar30 + 4) = 0;
      if (!bVar13) goto LAB_008b0320;
LAB_008b01f0:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 8) = *(undefined4 *)pbVar38;
      pbVar38 = pbVar37;
      if (!bVar14) goto LAB_008b0204;
LAB_008b0330:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0xc) = *(undefined4 *)pbVar38;
      if (!bVar15) goto LAB_008b0344;
LAB_008b0214:
      pbVar38 = pbVar37 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x10) = *(undefined4 *)pbVar37;
      pbVar37 = pbVar38;
      if (!bVar16) goto LAB_008b0228;
LAB_008b0354:
      pbVar38 = pbVar37 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x14) = *(undefined4 *)pbVar37;
      if (!bVar17) goto LAB_008b0368;
LAB_008b0238:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x18) = *(undefined4 *)pbVar38;
      pbVar38 = pbVar37;
      if (!bVar18) goto LAB_008b024c;
LAB_008b0378:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x1c) = *(undefined4 *)pbVar38;
      if (!bVar19) goto LAB_008b038c;
LAB_008b025c:
      pbVar38 = pbVar37 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x20) = *(undefined4 *)pbVar37;
      pbVar37 = pbVar38;
      if (!bVar20) goto LAB_008b0270;
LAB_008b039c:
      pbVar38 = pbVar37 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x24) = *(undefined4 *)pbVar37;
      if (!bVar21) goto LAB_008b03b0;
LAB_008b0280:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x28) = *(undefined4 *)pbVar38;
      pbVar38 = pbVar37;
      if (!bVar22) goto LAB_008b0294;
LAB_008b03c0:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x2c) = *(undefined4 *)pbVar38;
      if (!bVar23) goto LAB_008b03d4;
LAB_008b02a4:
      pbVar38 = pbVar37 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x30) = *(undefined4 *)pbVar37;
      pbVar37 = pbVar38;
      if (!bVar24) goto LAB_008b02b8;
LAB_008b03e4:
      pbVar38 = pbVar37 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 0x34) = *(undefined4 *)pbVar37;
      if (!bVar25) goto LAB_008b03f8;
LAB_008b02c8:
      *(undefined4 *)(*(long *)*plVar30 + 0x38) = *(undefined4 *)pbVar38;
      pbVar38 = pbVar38 + 4;
      if (bVar1) {
LAB_008b0408:
        *(undefined4 *)(*(long *)*plVar30 + 0x3c) = *(undefined4 *)pbVar38;
        goto joined_r0x008b00a8;
      }
    }
    else {
      **(undefined4 **)(*plVar30 + 8) = *(undefined4 *)pbVar37;
      pbVar37 = pbVar38 + 5;
      if (bVar8 == 1) goto LAB_008b00c4;
      pbVar37 = pbVar38 + 9;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 4) = *(undefined4 *)(pbVar38 + 5);
      if (bVar8 < 3) {
        bVar1 = true;
        goto LAB_008b00d8;
      }
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 8) = *(undefined4 *)pbVar37;
      if (bVar8 == 3) {
        bVar1 = true;
        bVar13 = true;
        pbVar37 = pbVar38 + 0xd;
        goto LAB_008b00ec;
      }
      pbVar37 = pbVar38 + 0x11;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0xc) = *(undefined4 *)(pbVar38 + 0xd);
      if (bVar8 < 5) {
        bVar13 = true;
        bVar1 = true;
        bVar14 = true;
        goto LAB_008b0100;
      }
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x10) = *(undefined4 *)pbVar37;
      if (bVar8 == 5) {
        bVar14 = true;
        bVar1 = true;
        bVar13 = true;
        bVar15 = true;
        pbVar37 = pbVar38 + 0x15;
        goto LAB_008b0114;
      }
      pbVar37 = pbVar38 + 0x19;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x14) = *(undefined4 *)(pbVar38 + 0x15);
      if (bVar8 < 7) {
        bVar15 = true;
        bVar13 = true;
        bVar1 = true;
        bVar14 = true;
        bVar16 = true;
        goto LAB_008b0124;
      }
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x18) = *(undefined4 *)pbVar37;
      if (bVar8 == 7) {
        bVar16 = true;
        bVar14 = true;
        bVar1 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        pbVar37 = pbVar38 + 0x1d;
        goto LAB_008b0134;
      }
      pbVar37 = pbVar38 + 0x21;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x1c) = *(undefined4 *)(pbVar38 + 0x1d);
      if (bVar8 < 9) {
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar1 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        goto LAB_008b0144;
      }
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x20) = *(undefined4 *)pbVar37;
      if (bVar8 == 9) {
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar1 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        pbVar37 = pbVar38 + 0x25;
        goto LAB_008b0154;
      }
      pbVar37 = pbVar38 + 0x29;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x24) = *(undefined4 *)(pbVar38 + 0x25);
      if (bVar8 < 0xb) {
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar1 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        goto LAB_008b0164;
      }
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x28) = *(undefined4 *)pbVar37;
      if (bVar8 == 0xb) {
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar1 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        pbVar37 = pbVar38 + 0x2d;
        goto LAB_008b0174;
      }
      pbVar37 = pbVar38 + 0x31;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x2c) = *(undefined4 *)(pbVar38 + 0x2d);
      if (bVar8 < 0xd) {
        bVar21 = true;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar1 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        goto LAB_008b0184;
      }
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x30) = *(undefined4 *)pbVar37;
      if (bVar8 == 0xd) {
        bVar22 = true;
        bVar20 = true;
        bVar18 = true;
        bVar16 = true;
        bVar14 = true;
        bVar1 = true;
        bVar13 = true;
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar21 = true;
        bVar23 = true;
        pbVar37 = pbVar38 + 0x35;
        goto LAB_008b0194;
      }
      pbVar37 = pbVar38 + 0x39;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x34) = *(undefined4 *)(pbVar38 + 0x35);
      if (bVar8 < 0xf) {
        bVar23 = true;
        bVar21 = true;
        bVar19 = true;
        bVar17 = true;
        bVar15 = true;
        bVar13 = true;
        bVar1 = true;
        bVar14 = true;
        bVar16 = true;
        bVar18 = true;
        bVar20 = true;
        bVar22 = true;
        bVar24 = true;
        goto LAB_008b01a4;
      }
      pbVar39 = pbVar38 + 0x3d;
      bVar1 = bVar8 != 0xf;
      *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x38) = *(undefined4 *)pbVar37;
      if (bVar8 == 0xf) {
        *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x3c) = 0;
      }
      else {
        *(undefined4 *)(*(long *)(*plVar30 + 8) + 0x3c) = *(undefined4 *)pbVar39;
        pbVar39 = pbVar38 + 0x41;
      }
      pbVar38 = pbVar39 + 4;
      bVar24 = true;
      bVar22 = true;
      bVar20 = true;
      bVar18 = true;
      bVar16 = true;
      bVar14 = true;
      bVar13 = true;
      bVar15 = true;
      bVar17 = true;
      **(undefined4 **)*plVar30 = *(undefined4 *)pbVar39;
      bVar19 = true;
      bVar21 = true;
      bVar23 = true;
      bVar25 = true;
LAB_008b01dc:
      pbVar37 = pbVar38 + 4;
      *(undefined4 *)(*(long *)*plVar30 + 4) = *(undefined4 *)pbVar38;
      pbVar38 = pbVar37;
      if (bVar13) goto LAB_008b01f0;
LAB_008b0320:
      *(undefined4 *)(*(long *)*plVar30 + 8) = 0;
      if (bVar14) goto LAB_008b0330;
LAB_008b0204:
      *(undefined4 *)(*(long *)*plVar30 + 0xc) = 0;
      pbVar37 = pbVar38;
      if (bVar15) goto LAB_008b0214;
LAB_008b0344:
      *(undefined4 *)(*(long *)*plVar30 + 0x10) = 0;
      if (bVar16) goto LAB_008b0354;
LAB_008b0228:
      *(undefined4 *)(*(long *)*plVar30 + 0x14) = 0;
      pbVar38 = pbVar37;
      if (bVar17) goto LAB_008b0238;
LAB_008b0368:
      *(undefined4 *)(*(long *)*plVar30 + 0x18) = 0;
      if (bVar18) goto LAB_008b0378;
LAB_008b024c:
      *(undefined4 *)(*(long *)*plVar30 + 0x1c) = 0;
      pbVar37 = pbVar38;
      if (bVar19) goto LAB_008b025c;
LAB_008b038c:
      *(undefined4 *)(*(long *)*plVar30 + 0x20) = 0;
      if (bVar20) goto LAB_008b039c;
LAB_008b0270:
      *(undefined4 *)(*(long *)*plVar30 + 0x24) = 0;
      pbVar38 = pbVar37;
      if (bVar21) goto LAB_008b0280;
LAB_008b03b0:
      *(undefined4 *)(*(long *)*plVar30 + 0x28) = 0;
      if (bVar22) goto LAB_008b03c0;
LAB_008b0294:
      *(undefined4 *)(*(long *)*plVar30 + 0x2c) = 0;
      pbVar37 = pbVar38;
      if (bVar23) goto LAB_008b02a4;
LAB_008b03d4:
      *(undefined4 *)(*(long *)*plVar30 + 0x30) = 0;
      if (bVar24) goto LAB_008b03e4;
LAB_008b02b8:
      *(undefined4 *)(*(long *)*plVar30 + 0x34) = 0;
      pbVar38 = pbVar37;
      if (bVar25) goto LAB_008b02c8;
LAB_008b03f8:
      *(undefined4 *)(*(long *)*plVar30 + 0x38) = 0;
      if (bVar1) goto LAB_008b0408;
    }
    *(undefined4 *)(*(long *)*plVar30 + 0x3c) = 0;
    if ((uVar11 >> 7 & 1) != 0) goto LAB_008b0424;
LAB_008b00ac:
    cVar9 = *(char *)((long)param_1 + 0x114);
  }
  if ((-1 < cVar9) || (*(uint *)(lVar41 + 0xa4) == 0)) goto LAB_008b05b8;
  puVar3 = (undefined4 *)(lVar41 + (ulong)*(uint *)(lVar41 + 0xa4));
  if (*(char *)((long)puVar3 + 10) == '\0') {
    lVar27 = 0;
LAB_008b04a8:
    lVar33 = 0x30;
  }
  else {
    lVar27 = 0xc;
    if (0x800 < *(ushort *)(param_7 + 0xd6)) {
      lVar27 = 0x20;
    }
    lVar27 = (long)puVar3 + lVar27;
    if ((ulong)*(byte *)(lVar27 + 4) == 0) goto LAB_008b04a8;
    lVar33 = (ulong)*(byte *)(lVar27 + 4) * 0x10 + 0x20;
  }
  puVar29 = (undefined4 *)FUN_00896e78(lVar33);
  param_1[0x2a] = (long)puVar29;
  *puVar29 = *puVar3;
  *(undefined4 *)(param_1[0x2a] + 4) = puVar3[1];
  *(undefined8 *)(param_1[0x2a] + 8) = 0;
  *(undefined1 *)(param_1[0x2a] + 0x10) = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(param_1[0x2a] + 0x11) = *(undefined1 *)((long)puVar3 + 9);
  if (*(ushort *)(param_7 + 0xd6) < 0x801) {
    *(undefined4 *)(param_1[0x2a] + 0x14) = 0;
    uVar32 = 0;
    *(undefined4 *)(param_1[0x2a] + 0x18) = 0;
  }
  else {
    *(undefined4 *)(param_1[0x2a] + 0x14) = puVar3[3];
    *(undefined4 *)(param_1[0x2a] + 0x18) = puVar3[4];
    uVar32 = (uint)*(byte *)(puVar3 + 5);
  }
  *(uint *)(param_1[0x2a] + 0x1c) = uVar32;
  if (lVar27 == 0) {
    *(undefined1 *)(param_1[0x2a] + 0x12) = 0;
  }
  else {
    *(undefined1 *)(param_1[0x2a] + 0x12) = *(undefined1 *)(lVar27 + 4);
    if (*(char *)(lVar27 + 4) != '\0') {
      lVar33 = 0;
      uVar34 = 0;
      do {
        lVar2 = uVar34 * 4;
        uVar34 = uVar34 + 1;
        lVar2 = lVar27 + (ulong)*(uint *)(lVar27 + 8 + lVar2);
        *(long *)(param_1[0x2a] + lVar33 + 0x20) = lVar2;
        lVar4 = param_1[0x2a] + lVar33;
        lVar33 = lVar33 + 0x10;
        *(uint *)(lVar4 + 0x28) = (uint)*(byte *)(lVar2 + 1);
      } while (uVar34 < *(byte *)(lVar27 + 4));
    }
  }
LAB_008b05b8:
  lVar27 = *(long *)(lVar35 + 8) + 0xc;
  plVar30 = (long *)(**(code **)(**(long **)(lVar35 + 0x30) + 0x68))
                              (*(long **)(lVar35 + 0x30),param_3,
                               lVar27 + (ulong)*(uint *)(lVar27 + (ulong)*(ushort *)(lVar41 + 0x5a)
                                                                  * 4));
  param_1[0x1e] = (long)plVar30;
  fVar42 = *(float *)(lVar41 + 0x70);
  if ((*(byte *)(lVar41 + 0x5f) >> 4 & 1) == 0) {
    *(float *)(param_1 + 0x1f) = fVar42;
    *(undefined4 *)((long)param_1 + 0xfc) = *(undefined4 *)(lVar41 + 0x74);
  }
  else {
    iVar26 = (**(code **)(*plVar30 + 0x20))();
    *(float *)(param_1 + 0x1f) = fVar42 * (float)iVar26;
    fVar42 = *(float *)(lVar41 + 0x74);
    iVar26 = (**(code **)(*(long *)param_1[0x1e] + 0x28))();
    *(float *)((long)param_1 + 0xfc) = fVar42 * (float)iVar26;
  }
  uVar31 = FUN_00892a10(*(undefined8 *)(param_7 + 0x30),*(undefined2 *)(param_5 + 0x58));
  uVar28 = 0;
  if (param_6 != 0) {
    uVar28 = FUN_00892a10(*(undefined8 *)(param_7 + 0x38),*(undefined2 *)(param_6 + 0x58));
  }
  plVar30 = (long *)FUN_00896e78(0x50);
  if (plVar30 != (long *)0x0) {
    *plVar30 = (long)(PTR_DAT_047d2360 + 0x10);
    FUN_0089f120(plVar30,param_2,param_3,uVar31,uVar28,param_7);
  }
  param_1[0x28] = (long)plVar30;
  if (*(uint *)(lVar40 + 0x80) != 0) {
    param_1[0x1c] = lVar40 + (ulong)*(uint *)(lVar40 + 0x80);
  }
  *param_4 = (uint)*(ushort *)(lVar41 + 0x5e);
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(local_88 + 0x38);
  uVar32 = *(uint *)(lVar40 + 100);
  param_4[8] = uVar36;
  *(ulong *)(param_4 + 4) = lVar40 + (ulong)uVar32;
  *(ulong *)(param_4 + 6) = uVar6;
  *(undefined1 *)((long)param_1 + 0x117) = *(undefined1 *)(param_7 + 0xd1);
  if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
    lVar27 = FUN_008a8338(param_1);
    *(byte *)(lVar27 + 0x228) = *(byte *)(lVar27 + 0x228) & 0xfd | *(char *)(param_7 + 0xdc) << 1;
  }
  return;
}


