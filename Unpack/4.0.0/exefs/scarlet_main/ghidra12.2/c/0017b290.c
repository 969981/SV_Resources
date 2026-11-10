/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0017b290; name: FUN_0017b290
 */


long FUN_0017b290(byte *param_1,long param_2,byte *param_3,long param_4,long param_5,long param_6)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  char *pcVar11;
  code *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  ulong uVar23;
  ulong *__src;
  ulong *__dest;
  byte *pbVar24;
  size_t __n;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  byte *local_5f8;
  byte *local_5f0;
  byte *local_5e8;
  byte *local_5e0;
  byte *pbStack_5d8;
  uint local_5d0;
  uint uStack_5cc;
  uint local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  uint uStack_5b8;
  uint local_5b4;
  uint uStack_5b0;
  undefined8 local_5a8;
  ulong local_5a0 [2];
  undefined1 auStack_590 [1288];
  byte local_88 [32];
  byte abStack_68 [8];
  
  if (param_2 < 8) {
    FUN_0015c3d0();
    pcVar12 = *(code **)PTR_PTR_047cb868;
    if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
    pcVar11 = "OODLE ERROR : corruption : comp_len >= 8\n";
    uVar10 = 0x4f0;
  }
  else if (param_4 < 5) {
    FUN_0015c3d0();
    pcVar12 = *(code **)PTR_PTR_047cb868;
    if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
    pcVar11 = "OODLE ERROR : corruption : to_len >= 5\n";
    uVar10 = 0x4f1;
  }
  else {
    pbVar28 = param_1 + param_2;
    bVar4 = *param_1;
    if (param_2 < 9) {
      uVar20 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8
      ;
      uVar14 = (ulong)param_1[5] << 0x18 | (ulong)param_1[6] << 0x10 | (ulong)param_1[7] << 8 |
               (ulong)(uVar20 >> 0x10 | uVar20 << 0x10) << 0x20;
    }
    else {
      uVar14 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    }
    uVar14 = (ulong)bVar4 << 0x38 | uVar14 >> 8;
    local_5f8 = param_1 + 7;
    local_5e8 = (byte *)(uVar14 << 1);
    local_5e0 = &DAT_00000008;
    local_5f0 = pbVar28;
    if ((char)bVar4 < '\0') {
      FUN_0015c3d0();
      pcVar12 = *(code **)PTR_PTR_047cb868;
      if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
      pcVar11 = "OODLE ERROR : corruption : flag == 0\n";
      uVar10 = 0x502;
    }
    else {
      uVar23 = (ulong)(bVar4 >> 5) & 3 | 8;
      local_5e8 = (byte *)(uVar14 << 3);
      local_5e0 = &DAT_0000000a;
      uVar14 = FUN_0017d4d0(&local_5f8,uVar23,auStack_590);
      if ((uVar14 & 1) == 0) {
        return -1;
      }
      lVar8 = 0x46 - (long)local_5e0;
      if (-1 < 0x3f - (long)local_5e0) {
        lVar8 = 0x3f - (long)local_5e0;
      }
      __src = (ulong *)(local_5f8 + -(lVar8 >> 3));
      __n = (long)pbVar28 - (long)__src;
      __dest = __src;
      if ((long)__n < 8) {
        if ((long)__n < 1) {
          FUN_0015c3d0();
          pcVar12 = *(code **)PTR_PTR_047cb868;
          if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
          pcVar11 = "OODLE ERROR : corruption : tans_compLen > 0\n";
          uVar10 = 0x524;
          goto LAB_0017b9dc;
        }
        __dest = local_5a0;
        local_5a0[0] = 0;
        local_5a0[1] = 0;
        local_5a8 = 0;
        memcpy(__dest,__src,__n);
        pbVar28 = (byte *)((long)__dest + __n);
      }
      lVar8 = FUN_0017ba30(uVar23);
      if (param_6 - param_5 < 0x10) {
        return -1;
      }
      uVar14 = param_5 + 0xfU & 0xfffffffffffffff0;
      if ((long)(param_6 - uVar14) < lVar8) {
        return -1;
      }
      lVar8 = FUN_0017ba90(uVar14,lVar8,uVar23);
      FUN_0017bfd0(lVar8,auStack_590);
      uVar20 = (int)uVar23 * -2 + 0x40;
      uVar22 = uVar20 - (int)uVar23;
      uVar14 = *(ulong *)(pbVar28 + -8);
      local_5e8 = param_3 + param_4 + -5;
      local_5c8 = uVar22 & 7;
      local_5c4 = uVar20 & 7;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar16 = *__dest >> uVar23;
      uVar15 = (uVar14 >> 0x20 | uVar14 << 0x20) >> uVar23;
      uVar18 = uVar16 >> uVar23;
      pbStack_5d8 = (byte *)((long)(pbVar28 + -8) + (ulong)(uVar20 >> 3));
      local_5e0 = (byte *)((long)__dest + (long)(int)-(uVar22 >> 3) + 8);
      local_5d0 = (uint)(uVar18 >> uVar23);
      uStack_5cc = (uint)(uVar15 >> uVar23);
      uVar20 = -1 << uVar23;
      local_5f8 = *(byte **)(lVar8 + 8);
      local_5c0 = (uint)*__dest & (uVar20 ^ 0xffffffff);
      local_5bc = (uint)(uVar14 >> 0x20) & (uVar20 ^ 0xffffffff);
      uStack_5b8 = (uint)uVar16 & (uVar20 ^ 0xffffffff);
      local_5b4 = (uint)uVar15 & (uVar20 ^ 0xffffffff);
      uStack_5b0 = (uint)uVar18 & (uVar20 ^ 0xffffffff);
      local_5f0 = param_3;
      uVar14 = FUN_0017e600(&local_5f8);
      pbVar7 = local_5e8;
      pbVar28 = local_5f8;
      if ((uVar14 & 1) == 0) {
        return -1;
      }
      if (pbStack_5d8 < local_5e0) {
        FUN_0015c3d0();
        pcVar12 = *(code **)PTR_PTR_047cb868;
        if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
        pcVar11 = "OODLE ERROR : corruption : in1 >= in0\n";
        uVar10 = 0x314;
      }
      else {
        pbVar13 = (byte *)0x0;
        uVar23 = (ulong)uStack_5b8;
        uVar14 = (ulong)local_5b4;
        uVar15 = (ulong)uStack_5b0;
        pbVar21 = local_5e0;
        pbVar24 = pbStack_5d8;
        uVar26 = local_5c4;
        uVar20 = local_5c0;
        uVar27 = local_5c8;
        uVar22 = local_5bc;
        if (local_5f0 < local_5e8) {
          pbVar25 = local_5f0;
          uVar19 = local_5d0;
          uVar17 = uStack_5cc;
          do {
            if ((long)pbVar24 - (long)pbVar21 < 10) {
              if (pbVar13 != (byte *)0x0) {
                FUN_0015c3d0();
                pcVar12 = *(code **)PTR_PTR_047cb868;
                if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
                pcVar11 = "OODLE ERROR : corruption : final_nbytes == 0\n";
                uVar10 = 0x33b;
                goto LAB_0017b9dc;
              }
              pbVar9 = pbVar21 + -(ulong)(uVar27 >> 3);
              uVar5 = uVar26 >> 3;
              pbVar13 = pbVar24 + ((ulong)uVar5 - (long)pbVar9);
              if ((long)pbVar13 < 0) {
                FUN_0015c3d0();
                pcVar12 = *(code **)PTR_PTR_047cb868;
                if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
                pcVar11 = "OODLE ERROR : corruption : in_left >= 0\n";
                uVar10 = 0x341;
                goto LAB_0017b9dc;
              }
              pbVar21 = local_88;
              uVar26 = uVar26 & 7;
              uVar27 = uVar27 & 7;
              memcpy(local_88,pbVar9,(size_t)pbVar13);
              memcpy(abStack_68 + -(long)pbVar13,pbVar24 + ((ulong)uVar5 - (long)pbVar13),
                     (size_t)pbVar13);
              pbVar13 = (byte *)(0x20 - (long)pbVar13);
              pbVar24 = abStack_68;
            }
            puVar1 = (uint *)(pbVar28 + (ulong)uVar20 * 8);
            iVar3 = *(int *)pbVar21;
            pbVar21 = pbVar21 + (0x1f - uVar27 >> 3);
            uVar19 = iVar3 << (ulong)(uVar27 & 0x1f) | uVar19;
            *pbVar25 = *(byte *)((long)puVar1 + 5);
            uVar20 = (*puVar1 & uVar19) + (uint)*(ushort *)((long)puVar1 + 6);
            uVar27 = (uVar27 | 0x18) - (uint)(byte)puVar1[1];
            if (pbVar7 <= pbVar25 + 1) break;
            puVar2 = (uint *)(pbVar28 + (ulong)uVar22 * 8);
            uVar19 = uVar19 >> (ulong)((byte)puVar1[1] & 0x1f);
            pbVar25[1] = *(byte *)((long)puVar2 + 5);
            uVar22 = (*puVar2 & uVar19) + (uint)*(ushort *)((long)puVar2 + 6);
            uVar27 = uVar27 - (byte)puVar2[1];
            if (pbVar7 <= pbVar25 + 2) break;
            puVar1 = (uint *)(pbVar28 + uVar23 * 8);
            uVar19 = *(int *)pbVar21 << (ulong)(uVar27 & 0x1f) |
                     uVar19 >> (ulong)((byte)puVar2[1] & 0x1f);
            pbVar21 = pbVar21 + (0x1f - uVar27 >> 3);
            pbVar25[2] = *(byte *)((long)puVar1 + 5);
            uVar23 = (ulong)((*puVar1 & uVar19) + (uint)*(ushort *)((long)puVar1 + 6));
            uVar27 = (uVar27 | 0x18) - (uint)(byte)puVar1[1];
            if (pbVar7 <= pbVar25 + 3) break;
            puVar2 = (uint *)(pbVar28 + uVar14 * 8);
            uVar19 = uVar19 >> (ulong)((byte)puVar1[1] & 0x1f);
            pbVar25[3] = *(byte *)((long)puVar2 + 5);
            uVar14 = (ulong)((*puVar2 & uVar19) + (uint)*(ushort *)((long)puVar2 + 6));
            uVar27 = uVar27 - (byte)puVar2[1];
            if (pbVar7 <= pbVar25 + 4) break;
            puVar1 = (uint *)(pbVar28 + uVar15 * 8);
            uVar19 = *(int *)pbVar21 << (ulong)(uVar27 & 0x1f) |
                     uVar19 >> (ulong)((byte)puVar2[1] & 0x1f);
            pbVar21 = pbVar21 + (0x1f - uVar27 >> 3);
            pbVar25[4] = *(byte *)((long)puVar1 + 5);
            uVar5 = puVar1[1];
            uVar15 = (ulong)((*puVar1 & uVar19) + (uint)*(ushort *)((long)puVar1 + 6));
            uVar27 = (uVar27 | 0x18) - (uint)(byte)uVar5;
            if (pbVar7 <= pbVar25 + 5) break;
            uVar6 = (*(uint *)(pbVar24 + -4) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar24 + -4) & 0xff00ff) << 8;
            puVar1 = (uint *)(pbVar28 + (ulong)uVar20 * 8);
            pbVar24 = pbVar24 + -(ulong)(0x1f - uVar26 >> 3);
            uVar17 = (uVar6 >> 0x10 | uVar6 << 0x10) << (ulong)(uVar26 & 0x1f) | uVar17;
            pbVar25[5] = *(byte *)((long)puVar1 + 5);
            uVar20 = (*puVar1 & uVar17) + (uint)*(ushort *)((long)puVar1 + 6);
            uVar26 = (uVar26 | 0x18) - (uint)(byte)puVar1[1];
            if (pbVar7 <= pbVar25 + 6) break;
            puVar2 = (uint *)(pbVar28 + (ulong)uVar22 * 8);
            uVar17 = uVar17 >> (ulong)((byte)puVar1[1] & 0x1f);
            pbVar25[6] = *(byte *)((long)puVar2 + 5);
            uVar22 = (*puVar2 & uVar17) + (uint)*(ushort *)((long)puVar2 + 6);
            uVar26 = uVar26 - (byte)puVar2[1];
            if (pbVar7 <= pbVar25 + 7) break;
            puVar1 = (uint *)(pbVar28 + uVar23 * 8);
            uVar6 = (*(uint *)(pbVar24 + -4) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar24 + -4) & 0xff00ff) << 8;
            uVar17 = (uVar6 >> 0x10 | uVar6 << 0x10) << (ulong)(uVar26 & 0x1f) |
                     uVar17 >> (ulong)((byte)puVar2[1] & 0x1f);
            pbVar25[7] = *(byte *)((long)puVar1 + 5);
            pbVar24 = pbVar24 + -(ulong)(0x1f - uVar26 >> 3);
            uVar23 = (ulong)((*puVar1 & uVar17) + (uint)*(ushort *)((long)puVar1 + 6));
            uVar26 = (uVar26 | 0x18) - (uint)(byte)puVar1[1];
            if (pbVar7 <= pbVar25 + 8) break;
            puVar2 = (uint *)(pbVar28 + uVar14 * 8);
            uVar17 = uVar17 >> (ulong)((byte)puVar1[1] & 0x1f);
            pbVar9 = pbVar25 + 9;
            pbVar25[8] = *(byte *)((long)puVar2 + 5);
            uVar6 = puVar2[1];
            uVar14 = (ulong)((*puVar2 & uVar17) + (uint)*(ushort *)((long)puVar2 + 6));
            uVar26 = uVar26 - (byte)uVar6;
            if (pbVar7 <= pbVar9) break;
            uVar19 = uVar19 >> (ulong)((byte)uVar5 & 0x1f);
            puVar1 = (uint *)(pbVar28 + uVar15 * 8);
            uVar5 = (*(uint *)(pbVar24 + -4) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar24 + -4) & 0xff00ff) << 8;
            pbVar25 = pbVar25 + 10;
            *pbVar9 = *(byte *)((long)puVar1 + 5);
            uVar17 = (uVar5 >> 0x10 | uVar5 << 0x10) << (ulong)(uVar26 & 0x1f) |
                     uVar17 >> (ulong)((byte)uVar6 & 0x1f);
            pbVar24 = pbVar24 + -(ulong)(0x1f - uVar26 >> 3);
            uVar26 = (uVar26 | 0x18) - (uint)(byte)puVar1[1];
            uVar15 = (ulong)((*puVar1 & uVar17) + (uint)*(ushort *)((long)puVar1 + 6));
            uVar17 = uVar17 >> (ulong)((byte)puVar1[1] & 0x1f);
          } while (pbVar25 < pbVar7);
        }
        if (pbVar24 + ((ulong)(uVar27 >> 3) - (long)pbVar21) + (ulong)(uVar26 >> 3) == pbVar13) {
          if ((uVar22 | uVar20 | (uint)uVar23 | (uint)uVar14 | (uint)uVar15) < 0x100) {
            *pbVar7 = (byte)uVar20;
            pbVar7[1] = (byte)uVar22;
            pbVar7[2] = (byte)uVar23;
            pbVar7[3] = (byte)uVar14;
            pbVar7[4] = (byte)uVar15;
            return param_2;
          }
          FUN_0015c3d0();
          pcVar12 = *(code **)PTR_PTR_047cb868;
          if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
          pcVar11 = "OODLE ERROR : corruption : tans_states_or <= 255\n";
          uVar10 = 0x3b7;
        }
        else {
          FUN_0015c3d0();
          pcVar12 = *(code **)PTR_PTR_047cb868;
          if (pcVar12 == (code *)0x0) goto LAB_0017b9e4;
          pcVar11 = "OODLE ERROR : corruption : rrPtrDiff(in1 - in0) == (SINTa)final_nbytes\n";
          uVar10 = 0x3b0;
        }
      }
    }
  }
LAB_0017b9dc:
  (*pcVar12)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_tans.cpp",uVar10,pcVar11);
LAB_0017b9e4:
  FUN_0015c3f0();
  return -1;
}


