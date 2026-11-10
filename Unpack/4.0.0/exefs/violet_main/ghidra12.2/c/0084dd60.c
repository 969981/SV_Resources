/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084dd60; name: FUN_0084dd60
 */


undefined4 FUN_0084dd60(undefined1 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  char *pcVar25;
  char *pcVar26;
  char *local_120;
  char *local_118;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *local_70;
  
  FUN_018a2d8c(&local_120,*(long *)PTR_DAT_047d1b90 + 0x18);
  local_78 = local_120;
  local_70 = local_118;
  if (local_120 == local_118) {
    uVar16 = 0xffff000b;
    goto LAB_0084e1d8;
  }
  pcVar25 = local_78;
  if (((((int)local_118 - (int)local_120) - 0x24U < 0xdd) && (*local_120 == '0')) &&
     (local_120[1] == 'x')) {
    uVar15 = (byte)local_120[2] - 0x30;
    if ((0x36 < uVar15) || ((0x7e0000007e03ffU >> ((ulong)uVar15 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar17 = (byte)local_120[3] - 0x30;
    if ((0x36 < uVar17) || ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar23 = (byte)local_120[4] - 0x30;
    if ((0x36 < uVar23) || ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar19 = (byte)local_120[5] - 0x30;
    if ((0x36 < uVar19) || ((0x7e0000007e03ffU >> ((ulong)uVar19 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar18 = (byte)local_120[6] - 0x30;
    if ((0x36 < uVar18) || ((0x7e0000007e03ffU >> ((ulong)uVar18 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar13 = (byte)local_120[7] - 0x30;
    if ((0x36 < uVar13) || ((0x7e0000007e03ffU >> ((ulong)uVar13 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar14 = (byte)local_120[8] - 0x30;
    if ((0x36 < uVar14) || ((0x7e0000007e03ffU >> ((ulong)uVar14 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar5 = (byte)local_120[9] - 0x30;
    if ((0x36 < uVar5) || ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) == 0))
    goto LAB_0084e1d4;
    uVar15 = *(int *)(&DAT_03d0e978 + (long)(char)uVar5 * 4) + (uint)(byte)local_120[9] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar14 * 4) + (uint)(byte)local_120[8] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar13 * 4) + (uint)(byte)local_120[7] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar18 * 4) + (uint)(byte)local_120[6] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar19 * 4) + (uint)(byte)local_120[5] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar23 * 4) + (uint)(byte)local_120[4] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar17 * 4) + (uint)(byte)local_120[3] +
             (*(int *)(&DAT_03d0e978 + (long)(char)uVar15 * 4) + (uint)(byte)local_120[2]) * 0x10) *
             0x10) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10;
    local_78 = local_120 + 10;
    if (-1 < (int)uVar15) {
      pcVar25 = local_78;
      if (((*local_78 == '-') && (pcVar25 = local_120 + 0xb, local_120[0xb] == '0')) &&
         (local_120[0xc] == 'x')) {
        uVar17 = (byte)local_120[0xd] - 0x30;
        if ((uVar17 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) != 0)) {
          uVar23 = (byte)local_120[0xe] - 0x30;
          if ((uVar23 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) != 0)) {
            uVar19 = (byte)local_120[0xf] - 0x30;
            if ((uVar19 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar19 & 0x3f) & 1) != 0)) {
              uVar18 = (byte)local_120[0x10] - 0x30;
              if ((uVar18 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar18 & 0x3f) & 1) != 0)) {
                uVar13 = (byte)local_120[0x11] - 0x30;
                if ((uVar13 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar13 & 0x3f) & 1) != 0)) {
                  uVar14 = (byte)local_120[0x12] - 0x30;
                  if ((uVar14 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar14 & 0x3f) & 1) != 0)) {
                    uVar5 = (byte)local_120[0x13] - 0x30;
                    if ((uVar5 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
                      uVar6 = (byte)local_120[0x14] - 0x30;
                      if ((uVar6 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0))
                      {
                        local_78 = local_120 + 0x15;
                        uVar17 = *(int *)(&DAT_03d0e978 + (long)(char)uVar6 * 4) +
                                 (uint)(byte)local_120[0x14] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar5 * 4) +
                                  (uint)(byte)local_120[0x13] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar14 * 4) +
                                  (uint)(byte)local_120[0x12] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar13 * 4) +
                                  (uint)(byte)local_120[0x11] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar18 * 4) +
                                  (uint)(byte)local_120[0x10] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar19 * 4) +
                                  (uint)(byte)local_120[0xf] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar23 * 4) +
                                  (uint)(byte)local_120[0xe] +
                                 (*(int *)(&DAT_03d0e978 + (long)(char)uVar17 * 4) +
                                 (uint)(byte)local_120[0xd]) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10)
                                 * 0x10) * 0x10;
                        goto LAB_0084e0ac;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0084e1d4;
    }
    uVar17 = 0xffffffff;
LAB_0084e0ac:
    pcVar25 = local_78;
    if (*local_78 != ':') goto LAB_0084e1d4;
    pcVar25 = local_78 + 1;
    if (9 < (uint)((ulong)(byte)local_78[1] - 0x30)) goto LAB_0084e1d4;
    pcVar25 = local_78 + 2;
    if (9 < (uint)((ulong)(byte)local_78[2] - 0x30)) goto LAB_0084e1d4;
    pcVar25 = local_78 + 3;
    if (9 < (uint)((ulong)(byte)local_78[3] - 0x30)) goto LAB_0084e1d4;
    pcVar25 = local_78 + 4;
    if ((9 < (uint)((ulong)(byte)local_78[4] - 0x30)) ||
       (pcVar25 = local_78 + 5, local_78[5] != '-')) goto LAB_0084e1d4;
    pbVar1 = (byte *)(local_78 + 6);
    pcVar25 = local_78 + 6;
    if (9 < (uint)((ulong)*pbVar1 - 0x30)) goto LAB_0084e1d4;
    pbVar2 = (byte *)(local_78 + 7);
    pcVar25 = local_78 + 7;
    if ((9 < (uint)((ulong)*pbVar2 - 0x30)) || (pcVar25 = local_78 + 8, local_78[8] != '-'))
    goto LAB_0084e1d4;
    pbVar3 = (byte *)(local_78 + 9);
    pcVar25 = local_78 + 9;
    if (9 < (uint)((ulong)*pbVar3 - 0x30)) goto LAB_0084e1d4;
    pbVar4 = (byte *)(local_78 + 10);
    pcVar25 = local_78 + 10;
    if ((9 < (uint)((ulong)*pbVar4 - 0x30)) || (pcVar25 = local_78 + 0xb, local_78[0xb] != '.'))
    goto LAB_0084e1d4;
    uVar24 = ((ulong)(byte)local_78[4] - 0x30) +
             (((ulong)(byte)local_78[3] - 0x30) +
             (((ulong)(byte)local_78[2] - 0x30) + ((ulong)(byte)local_78[1] - 0x30) * 10) * 10) * 10
    ;
    local_78 = local_78 + 0xc;
    uVar23 = (uint)uVar24;
    pcVar25 = local_78;
    if ((int)uVar23 < 0x7ce) goto LAB_0084e1d4;
    lVar20 = ((ulong)*pbVar2 - 0x30) + ((ulong)*pbVar1 - 0x30) * 10;
    uVar16 = 0xffff000c;
    uVar19 = (uint)lVar20;
    if (uVar19 < 0xd) {
      lVar22 = ((ulong)*pbVar4 - 0x30) + ((ulong)*pbVar3 - 0x30) * 10;
      uVar18 = 1 << (ulong)(uVar19 & 0x1f);
      iVar21 = (int)lVar22;
      if ((uVar18 & 0x15aa) == 0) {
        if ((uVar18 & 0xa50) == 0) {
          if (((uVar19 == 2) && (uVar16 = 0xffff000c, iVar21 != 0)) && (iVar21 < 0x1e))
          goto LAB_0084e2a8;
        }
        else {
          uVar16 = 0xffff000c;
          if ((iVar21 != 0) && (iVar21 < 0x1f)) {
LAB_0084e2a8:
            uVar8 = FUN_00864984(0);
            FUN_018a2d8c(&local_88,uVar8);
            local_120 = local_88;
            local_118 = pcStack_80;
            uVar10 = FUN_031c63d8(&local_78,&local_120);
            pcVar25 = local_78;
            if ((uVar10 & 1) != 0) {
              pcVar25 = local_78 + ((int)local_118 - (int)local_120);
              if (*pcVar25 == '.') {
                uVar18 = 0x35e3d938;
                pcVar25 = pcVar25 + 1;
                local_78 = pcVar25;
                if ((int)uVar15 < 0) {
                  local_120 = "Evaluation.";
                  local_118 = "";
                  uVar10 = FUN_031c63d8(&local_78,&local_120);
                  pcVar26 = local_70;
                  pcVar25 = local_78;
                  if ((uVar10 & 1) == 0) goto LAB_0084e1d4;
                  pcVar25 = local_78 + ((int)local_118 - (int)local_120);
                  local_78 = pcVar25;
                  uVar10 = thunk_FUN_031bf030();
                  lVar11 = FUN_008647b0();
                  if ((uVar10 < lVar11 - 0x1e13380U) ||
                     (uVar13 = uVar15 & 0x7fffffff ^ 0x35e3d938, uVar13 < (uint)(uVar10 >> 8))) {
                    uVar16 = 0xffff000f;
                    goto LAB_0084e1d8;
                  }
                }
                else {
                  uVar13 = uVar15 ^ 0x35e3d938;
                  pcVar26 = local_70;
                }
                uVar14 = uVar23 & 0xffff;
                iVar21 = (int)((ulong)((long)(int)uVar23 * -0x51eb851f) >> 0x20);
                if ((uVar24 & 3) == 0) {
                  if ((uVar14 * -0x3d70a3d7 >> 2 | uVar23 * 0x40000000) < 0x28f5c29) {
                    bVar7 = (uVar23 + (uVar14 / 400) * -400 & 0xffff) == 0;
                  }
                  else {
                    bVar7 = true;
                  }
                }
                else {
                  bVar7 = false;
                }
                lVar11 = -0x1de;
                if (!(bool)((int)uVar19 < 3 & bVar7)) {
                  lVar11 = -0x1dd;
                }
                uVar19 = uVar13 + 0x3f4;
                uVar14 = (uint)((lVar22 + (long)((iVar21 >> 5) - (iVar21 >> 0x1f)) +
                                          (ulong)(uVar23 >> 2) + (ulong)uVar14 / 400 +
                                          uVar24 * 0x16d + -0xaf8ca +
                                 *(long *)(&DAT_03d0e910 + lVar20 * 8) + lVar11) * 0x15180 +
                                -0x15180 >> 8);
                uVar23 = uVar14 + 0x3f4;
                if (((int)uVar15 < 0) || (uVar19 < uVar14 || uVar23 < uVar13)) {
                  uVar16 = 0xffff000f;
                  if (uVar19 >= uVar14 && uVar23 >= uVar13) {
                    uVar16 = 0;
                  }
                  if ((uVar19 < uVar14) || (uVar23 < uVar13)) goto LAB_0084e1d8;
                }
                else {
                  uVar24 = (long)pcVar26 - (long)pcVar25;
                  if (0 < (int)uVar24) {
                    if ((uVar24 & 0xffffffff) == 1) {
                      lVar20 = 0;
                      uVar15 = 0;
                    }
                    else {
                      lVar20 = 0;
                      uVar15 = 0;
                      do {
                        pbVar1 = (byte *)(pcVar25 + lVar20);
                        lVar20 = lVar20 + 2;
                        uVar15 = ((uint)pbVar1[1] + (uVar15 + *pbVar1) * 0x17) * 0x17;
                      } while ((uVar24 & 0xffffffff) - (uVar24 & 1) != lVar20);
                    }
                    if ((uVar24 & 1) != 0) {
                      uVar15 = (uVar15 + (byte)pcVar25[lVar20]) * 0x17;
                    }
                    uVar18 = uVar15 & 0x7fffffff ^ 0x35e3d938;
                  }
                  pcVar25 = local_78;
                  if (uVar17 != uVar18) goto LAB_0084e1d4;
                }
                uVar16 = 0;
                uVar12 = 1;
                goto LAB_0084e220;
              }
            }
            goto LAB_0084e1d4;
          }
        }
      }
      else {
        uVar16 = 0xffff000c;
        if ((iVar21 != 0) && (iVar21 < 0x20)) goto LAB_0084e2a8;
      }
    }
  }
  else {
LAB_0084e1d4:
    local_78 = pcVar25;
    uVar16 = 0xffff000c;
  }
LAB_0084e1d8:
  FUN_031c6adc(&local_120);
  uVar8 = FUN_008649b0(uVar16);
  uVar9 = FUN_00864984(0);
  FUN_031c6c18(&local_120,
               "Keycode Error: %s\n Product: %s Key Code is invalid or is for a different product version.\nPlease contact Havok.com\nNo simulation possible."
               ,uVar8,uVar9);
  FUN_032261f0(local_120);
  FUN_031c6a8c(&local_120);
  uVar12 = 0;
LAB_0084e220:
  *param_1 = uVar12;
  return uVar16;
}


