/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078db98; name: FUN_0078db98
 */


void FUN_0078db98(undefined4 *param_1,byte *param_2,uint param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *__dest;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  __dest = (ulong *)(param_1 + 10);
  *__dest = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  if (param_3 == 0xc) {
    memcpy(__dest,param_2,0xc);
    uVar11 = 1;
    *(undefined1 *)((long)param_1 + 0x37) = 1;
  }
  else {
    uVar11 = param_3 << 3;
    if (0xf < param_3) {
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar13 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
LAB_0078dca4:
      *(byte *)(param_1 + 10) = (byte)uVar25 ^ *param_2;
      *(byte *)((long)param_1 + 0x29) = (byte)uVar24 ^ param_2[1];
      *(byte *)((long)param_1 + 0x2a) = (byte)uVar23 ^ param_2[2];
      *(byte *)((long)param_1 + 0x2b) = (byte)uVar22 ^ param_2[3];
      *(byte *)(param_1 + 0xb) = (byte)uVar10 ^ param_2[4];
      *(byte *)((long)param_1 + 0x2d) = (byte)uVar9 ^ param_2[5];
      *(byte *)((long)param_1 + 0x2e) = (byte)uVar8 ^ param_2[6];
      *(byte *)((long)param_1 + 0x2f) = (byte)uVar7 ^ param_2[7];
      *(byte *)(param_1 + 0xc) = (byte)uVar13 ^ param_2[8];
      *(byte *)((long)param_1 + 0x31) = (byte)uVar6 ^ param_2[9];
      *(byte *)((long)param_1 + 0x32) = (byte)uVar5 ^ param_2[10];
      *(byte *)((long)param_1 + 0x33) = (byte)uVar21 ^ param_2[0xb];
      *(byte *)(param_1 + 0xd) = (byte)uVar20 ^ param_2[0xc];
      *(byte *)((long)param_1 + 0x35) = (byte)uVar19 ^ param_2[0xd];
      *(byte *)((long)param_1 + 0x36) = (byte)uVar18 ^ param_2[0xe];
      lVar15 = 0;
      uVar16 = (uint)uVar17 ^ (uint)param_2[0xf];
      *(char *)((long)param_1 + 0x37) = (char)uVar16;
      uVar12 = uVar16 >> 4;
      uVar16 = uVar16 & 0xf;
      do {
        uVar2 = *(undefined8 *)(param_1 + (ulong)uVar16 * 4 + 0x24);
        *(ulong *)(param_1 + 0x16) = *(ulong *)(param_1 + (ulong)uVar16 * 4 + 0x22);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        uVar5 = *(ulong *)(param_1 + 0x16);
        uVar6 = *(ulong *)(param_1 + 0x18);
        while( true ) {
          uVar7 = *(ulong *)(param_1 + (ulong)uVar12 * 4 + 0x24);
          *(ulong *)(param_1 + 0x16) =
               *(ulong *)(param_1 + (ulong)uVar12 * 4 + 0x22) ^ uVar5 >> 4 ^
               (ulong)*(uint *)(&DAT_03d0adac + (uVar6 & 0xf) * 4) << 0x20;
          *(ulong *)(param_1 + 0x18) = uVar7 ^ (uVar6 >> 4 | uVar5 << 0x3c);
          if (lVar15 == -0xf) {
            param_3 = param_3 - 0x10;
            *__dest = *(ulong *)(param_1 + 0x16);
            *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
            param_2 = param_2 + 0x10;
            uVar5 = (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar5 >> 0x20 | uVar5 << 0x20;
            uVar6 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar13 = uVar17 >> 0x20 | uVar17 << 0x20;
            uVar24 = uVar25 >> 8;
            uVar23 = uVar25 >> 0x10;
            uVar22 = uVar25 >> 0x18;
            uVar10 = uVar5 & 0xffffffff;
            uVar9 = (uVar5 & 0xffffffff) >> 8;
            uVar8 = (uVar5 & 0xffffffff) >> 0x10;
            uVar7 = (uVar5 & 0xffffffff) >> 0x18;
            uVar6 = uVar13 >> 8;
            uVar5 = uVar13 >> 0x10;
            uVar21 = uVar13 >> 0x18;
            uVar20 = uVar17 & 0xffffffff;
            uVar19 = (uVar17 & 0xffffffff) >> 8;
            uVar18 = (uVar17 & 0xffffffff) >> 0x10;
            uVar17 = (uVar17 & 0xffffffff) >> 0x18;
            *(ulong *)(param_1 + 10) = uVar25;
            *(ulong *)(param_1 + 0xc) = uVar13;
            if (0xf < param_3) goto LAB_0078dca4;
            goto LAB_0078ddfc;
          }
          bVar3 = *(byte *)((long)param_1 + lVar15 + 0x36);
          lVar15 = lVar15 + -1;
          uVar12 = (uint)(bVar3 >> 4);
          uVar16 = bVar3 & 0xf;
          if (lVar15 == 0) break;
          uVar5 = *(ulong *)(param_1 + (ulong)uVar16 * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4 ^
                  (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) << 0x20;
          uVar6 = *(ulong *)(param_1 + (ulong)uVar16 * 4 + 0x24) ^
                  (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
          *(ulong *)(param_1 + 0x16) = uVar5;
          *(ulong *)(param_1 + 0x18) = uVar6;
        }
      } while( true );
    }
    uVar13 = 0;
LAB_0078ddfc:
    uVar5 = ((ulong)uVar11 & 0xff00ff00ff00ff00) >> 8 | ((ulong)uVar11 & 0xff00ff00ff00ff) << 8;
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar7 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(byte *)((long)param_1 + uVar6 + 0x28) =
               *(byte *)((long)param_1 + uVar6 + 0x28) ^ param_2[uVar6];
          uVar7 = uVar6 + 2;
          *(byte *)((long)param_1 + uVar6 + 0x29) =
               *(byte *)((long)param_1 + uVar6 + 0x29) ^ (param_2 + uVar6)[1];
          uVar6 = uVar7;
        } while (((ulong)param_3 & 0xfffffffe) != uVar7);
      }
      if ((param_3 & 1) != 0) {
        *(byte *)((long)__dest + uVar7) = *(byte *)((long)__dest + uVar7) ^ param_2[uVar7];
      }
      uVar6 = *(ulong *)(param_1 + ((ulong)*(byte *)((long)param_1 + 0x37) & 0xf) * 4 + 0x22);
      uVar7 = *(ulong *)((long)(param_1 + ((ulong)*(byte *)((long)param_1 + 0x37) & 0xf) * 4 + 0x22)
                        + 8);
      puVar1 = (ulong *)((long)param_1 + ((ulong)*(byte *)((long)param_1 + 0x37) & 0xf0) + 0x88);
      puVar14 = (ulong *)(param_1 + 0x16);
      *puVar14 = uVar6;
      *(ulong *)(param_1 + 0x18) = uVar7;
      uVar8 = puVar1[1];
      *puVar14 = *puVar1 ^ uVar6 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar7 & 0xf) * 4) << 0x20;
      *(ulong *)(param_1 + 0x18) = uVar8 ^ (uVar7 >> 4 | uVar6 << 0x3c);
      lVar15 = 0;
      do {
        uVar6 = (ulong)*(byte *)((long)param_1 + lVar15 + 0x36);
        uVar9 = *(ulong *)(param_1 + (uVar6 & 0xf) * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4;
        uVar8 = uVar9 ^ (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) <<
                        0x20;
        uVar7 = *(ulong *)((long)(param_1 + (uVar6 & 0xf) * 4 + 0x22) + 8) ^
                (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
        puVar1 = (ulong *)((long)param_1 + (uVar6 & 0xf0) + 0x88);
        *(ulong *)(param_1 + 0x16) = uVar8;
        *(ulong *)(param_1 + 0x18) = uVar7;
        uVar6 = puVar1[1];
        bVar4 = lVar15 != -0xe;
        *(ulong *)(param_1 + 0x16) =
             *puVar1 ^ uVar8 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar7 & 0xf) * 4) << 0x20;
        *(ulong *)(param_1 + 0x18) = uVar6 ^ (uVar7 >> 4 | uVar9 << 0x3c);
        lVar15 = lVar15 + -1;
      } while (bVar4);
      *__dest = *puVar14;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
      uVar6 = (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar7 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar7 >> 0x20 | uVar7 << 0x20;
      *(ulong *)(param_1 + 10) = uVar6 >> 0x20 | uVar6 << 0x20;
      *(ulong *)(param_1 + 0xc) = uVar13;
    }
    uVar13 = uVar13 ^ (uVar5 >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10) << 0x20;
    uVar7 = uVar13 >> 0x38;
    *(ulong *)(param_1 + 0xc) = uVar13;
    uVar5 = *(ulong *)(param_1 + (uVar7 & 0xf) * 4 + 0x22);
    uVar6 = *(ulong *)((long)(param_1 + (uVar7 & 0xf) * 4 + 0x22) + 8);
    puVar1 = (ulong *)((long)param_1 + (uVar7 & 0xf0) + 0x88);
    puVar14 = (ulong *)(param_1 + 0x16);
    *puVar14 = uVar5;
    *(ulong *)(param_1 + 0x18) = uVar6;
    uVar7 = puVar1[1];
    *puVar14 = *puVar1 ^ uVar5 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar6 & 0xf) * 4) << 0x20;
    *(ulong *)(param_1 + 0x18) = uVar7 ^ (uVar6 >> 4 | uVar5 << 0x3c);
    lVar15 = 0;
    do {
      uVar5 = (ulong)*(byte *)((long)param_1 + lVar15 + 0x36);
      uVar8 = *(ulong *)(param_1 + (uVar5 & 0xf) * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4;
      uVar7 = uVar8 ^ (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) <<
                      0x20;
      uVar6 = *(ulong *)((long)(param_1 + (uVar5 & 0xf) * 4 + 0x22) + 8) ^
              (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
      puVar1 = (ulong *)((long)param_1 + (uVar5 & 0xf0) + 0x88);
      *(ulong *)(param_1 + 0x16) = uVar7;
      *(ulong *)(param_1 + 0x18) = uVar6;
      uVar5 = puVar1[1];
      bVar4 = lVar15 != -0xe;
      *(ulong *)(param_1 + 0x16) =
           *puVar1 ^ uVar7 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar6 & 0xf) * 4) << 0x20;
      *(ulong *)(param_1 + 0x18) = uVar5 ^ (uVar6 >> 4 | uVar8 << 0x3c);
      lVar15 = lVar15 + -1;
    } while (bVar4);
    *__dest = *puVar14;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
    uVar5 = (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 10) & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar6 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 10) = uVar5 >> 0x20 | uVar5 << 0x20;
    *(ulong *)(param_1 + 0xc) = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar11 = ((uint)uVar6 & 0xff00ff00) >> 8 | ((uint)uVar6 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  }
  param_1[0x20] = uVar11;
  (**(code **)(param_1 + 4))(param_1 + 0x12,__dest,*(undefined8 *)(param_1 + 2));
  *param_1 = 2;
  return;
}


