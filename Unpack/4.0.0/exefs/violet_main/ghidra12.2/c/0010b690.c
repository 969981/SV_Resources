/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010b690; name: FUN_0010b690
 */


void FUN_0010b690(long param_1,uint *param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  byte bVar26;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  byte local_80 [64];
  
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_100 = 0;
  local_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  uVar22 = param_2[4];
  uVar13 = (ulong)uVar22;
  puVar10 = *(uint **)(param_2 + 2);
  uVar17 = (ulong)*param_2;
  puVar12 = puVar10;
  if (uVar22 < 4) {
    puVar12 = puVar10 + 1;
    Hint_Prefetch(puVar10 + 0x100,0,0,0);
    uVar22 = uVar22 + 0x20;
    uVar17 = (ulong)*puVar10 << (uVar13 & 0x3f) | uVar17;
  }
  uVar9 = (uint)uVar17 & 0xf;
  local_80[0] = 0x10;
  local_80[1] = 0x60;
  local_80[2] = 0xb0;
  local_80[3] = 7;
  uVar13 = uVar17 >> 4;
  uVar22 = uVar22 - 4;
  pbVar14 = local_80;
  local_80[4] = 0xb;
  local_80[5] = 0xf;
  pbVar15 = local_80 + 6;
  if (uVar9 < 2) {
    uVar13 = uVar13 & 0xffffffff;
  }
  else {
    uVar18 = uVar17 & 0xf;
    iVar20 = 1 << (ulong)(uVar9 - 1 & 0x1f);
    do {
      iVar16 = (int)uVar18;
      if (pbVar14 < pbVar15) {
        uVar3 = 1 << (ulong)(iVar16 - 1U & 0x1f);
        uVar7 = (short)uVar3 - 1;
        uVar9 = iVar16 + 1;
        bVar2 = *pbVar14;
        uVar25 = uVar13;
        pbVar19 = pbVar14;
        if (bVar2 != 0) goto LAB_0010b7cc;
LAB_0010b7a4:
        uVar13 = uVar13 & 0xffffffff;
        puVar10 = puVar12;
        pbVar19 = pbVar19 + 1;
LAB_0010b7b0:
        puVar12 = puVar10;
        if (pbVar15 <= pbVar19) goto LAB_0010b754;
        bVar2 = *pbVar19;
        uVar25 = uVar13;
        if (bVar2 == 0) goto LAB_0010b7a4;
LAB_0010b7cc:
        puVar10 = puVar12;
        uVar23 = uVar22;
        if (uVar22 == 0) {
          puVar10 = puVar12 + 1;
          uVar25 = (ulong)*puVar12;
          uVar23 = 0x20;
        }
        uVar13 = uVar25 >> 1 & 0x7fffffff;
        uVar22 = uVar23 - 1;
        uVar24 = (uint)uVar25;
        puVar12 = puVar10;
        if ((uVar25 & 1) == 0) {
          goto LAB_0010b7a4;
        }
        uVar4 = (ushort)iVar20;
        switch(bVar2 & 3) {
        case 0:
          bVar26 = (bVar2 & 0xfc) + 0x11;
          pbVar21 = pbVar19;
          break;
        case 1:
          goto switchD_0010b7f4_caseD_1;
        case 2:
          bVar26 = 0;
          pbVar21 = pbVar19 + 1;
          break;
        case 3:
          goto switchD_0010b7f4_caseD_3;
        }
        bVar6 = bVar2 >> 2;
        *pbVar19 = bVar26;
        pbVar19 = pbVar21;
        if (uVar22 == 0) {
          puVar12 = puVar10 + 1;
          uVar22 = *puVar10;
          uVar24 = uVar22 >> 1;
          if ((uVar22 & 1) != 0) {
            uVar8 = 0x1f;
            goto LAB_0010b8f8;
          }
          uVar22 = uVar22 >> (ulong)(uVar9 & 0x1f);
          uVar8 = 0x1f;
LAB_0010b948:
          uVar5 = (ushort)uVar24 & uVar7 | uVar4;
          uVar8 = uVar8 - iVar16;
          uVar1 = -uVar5;
          if ((uVar24 & uVar3) == 0) {
            uVar1 = uVar5;
          }
          *(ushort *)((long)&local_148 + (ulong)bVar6 * 2) = uVar1;
          uVar24 = uVar22;
          if (uVar8 == 0) goto LAB_0010b968;
LAB_0010b90c:
          uVar22 = uVar8 - 1;
          if ((uVar24 & 1) != 0) {
            uVar23 = uVar24 >> 1;
            goto LAB_0010b984;
          }
          if (uVar22 < uVar18) {
            uVar23 = *puVar12 << (ulong)(uVar22 & 0x1f) | uVar24 >> 1;
            uVar24 = *puVar12 >> (ulong)(iVar16 - uVar22 & 0x1f);
            uVar22 = uVar8 + 0x1f;
            puVar12 = puVar12 + 1;
          }
          else {
            uVar23 = uVar24 >> 1;
            uVar24 = uVar24 >> (ulong)(uVar9 & 0x1f);
          }
LAB_0010b9d8:
          uVar5 = (ushort)uVar23 & uVar7 | uVar4;
          uVar22 = uVar22 - iVar16;
          uVar1 = -uVar5;
          if ((uVar23 & uVar3) == 0) {
            uVar1 = uVar5;
          }
          *(ushort *)((long)&local_148 + (ulong)(bVar6 + 1) * 2) = uVar1;
          uVar23 = uVar24;
          if (uVar22 == 0) goto LAB_0010b9f8;
LAB_0010b99c:
          uVar24 = uVar22 - 1;
          if ((uVar23 & 1) != 0) {
            uVar8 = uVar23 >> 1;
            goto LAB_0010ba14;
          }
          if (uVar24 < uVar18) {
            uVar8 = *puVar12 << (ulong)(uVar24 & 0x1f) | uVar23 >> 1;
            uVar23 = *puVar12 >> (ulong)(iVar16 - uVar24 & 0x1f);
            uVar24 = uVar22 + 0x1f;
            puVar12 = puVar12 + 1;
          }
          else {
            uVar8 = uVar23 >> 1;
            uVar23 = uVar23 >> (ulong)(uVar9 & 0x1f);
          }
LAB_0010ba68:
          uVar5 = (ushort)uVar8 & uVar7 | uVar4;
          uVar24 = uVar24 - iVar16;
          uVar1 = -uVar5;
          if ((uVar8 & uVar3) == 0) {
            uVar1 = uVar5;
          }
          *(ushort *)((long)&local_148 + (ulong)(bVar6 + 2) * 2) = uVar1;
          uVar8 = uVar23;
          if (uVar24 == 0) goto LAB_0010ba88;
LAB_0010ba2c:
          uVar22 = uVar24 - 1;
          if ((uVar8 & 1) != 0) {
            uVar23 = uVar8 >> 1;
            goto LAB_0010baa4;
          }
          if (uVar22 < uVar18) {
            uVar23 = *puVar12 << (ulong)(uVar22 & 0x1f) | uVar8 >> 1;
            uVar13 = (ulong)(*puVar12 >> (ulong)(iVar16 - uVar22 & 0x1f));
            uVar22 = uVar24 + 0x1f;
            puVar12 = puVar12 + 1;
          }
          else {
            uVar23 = uVar8 >> 1;
            uVar13 = (ulong)(uVar8 >> (ulong)(uVar9 & 0x1f));
          }
        }
        else {
          uVar8 = uVar23 - 2;
          if ((uVar24 >> 1 & 1) == 0) {
            if (uVar8 < uVar18) {
              uVar24 = *puVar10 << (ulong)(uVar8 & 0x1f) | uVar24 >> 2;
              uVar22 = *puVar10 >> (ulong)(iVar16 - uVar8 & 0x1f);
              uVar8 = uVar23 + 0x1e;
              puVar12 = puVar10 + 1;
            }
            else {
              uVar24 = uVar24 >> 2;
              uVar22 = (uint)uVar13 >> (ulong)(uVar9 & 0x1f);
            }
            goto LAB_0010b948;
          }
          uVar24 = uVar24 >> 2;
LAB_0010b8f8:
          pbVar14 = pbVar14 + -1;
          *pbVar14 = bVar2 | 3;
          if (uVar8 != 0) goto LAB_0010b90c;
LAB_0010b968:
          uVar24 = *puVar12;
          uVar23 = uVar24 >> 1;
          if ((uVar24 & 1) == 0) {
            uVar24 = uVar24 >> (ulong)(uVar9 & 0x1f);
            uVar22 = 0x1f;
            puVar12 = puVar12 + 1;
            goto LAB_0010b9d8;
          }
          uVar22 = 0x1f;
          puVar12 = puVar12 + 1;
LAB_0010b984:
          pbVar14 = pbVar14 + -1;
          *pbVar14 = (bVar6 + 1) * '\x04' | 3;
          if (uVar22 != 0) goto LAB_0010b99c;
LAB_0010b9f8:
          uVar23 = *puVar12;
          uVar8 = uVar23 >> 1;
          if ((uVar23 & 1) == 0) {
            uVar23 = uVar23 >> (ulong)(uVar9 & 0x1f);
            uVar24 = 0x1f;
            puVar12 = puVar12 + 1;
            goto LAB_0010ba68;
          }
          uVar24 = 0x1f;
          puVar12 = puVar12 + 1;
LAB_0010ba14:
          pbVar14 = pbVar14 + -1;
          *pbVar14 = (bVar6 + 2) * '\x04' | 3;
          if (uVar24 != 0) goto LAB_0010ba2c;
LAB_0010ba88:
          uVar22 = *puVar12;
          uVar23 = uVar22 >> 1;
          if ((uVar22 & 1) != 0) {
            uVar22 = 0x1f;
            puVar12 = puVar12 + 1;
LAB_0010baa4:
            pbVar14 = pbVar14 + -1;
            *pbVar14 = (bVar6 + 3) * '\x04' | 3;
            uVar13 = (ulong)uVar23;
            puVar10 = puVar12;
            goto LAB_0010b7b0;
          }
          uVar13 = (ulong)(uVar22 >> (ulong)(uVar9 & 0x1f));
          uVar22 = 0x1f;
          puVar12 = puVar12 + 1;
        }
        uVar4 = (ushort)uVar23 & uVar7 | uVar4;
        uVar1 = -uVar4;
        if ((uVar23 & uVar3) == 0) {
          uVar1 = uVar4;
        }
        uVar22 = uVar22 - iVar16;
        *(ushort *)((long)&local_148 + (ulong)(bVar6 + 3) * 2) = uVar1;
        puVar10 = puVar12;
        goto LAB_0010b7b0;
      }
      uVar13 = uVar13 & 0xffffffff;
LAB_0010b754:
      iVar20 = iVar20 >> 1;
      uVar18 = uVar18 - 1;
    } while (1 < iVar16 - 1U);
  }
  uVar9 = (uint)uVar13;
  puVar10 = puVar12;
  if (((uVar17 & 0xf) == 0) || (pbVar15 <= pbVar14)) {
LAB_0010bd34:
    *(uint **)(param_2 + 2) = puVar10;
    *param_2 = uVar9;
    param_2[4] = uVar22;
    *(undefined2 *)(param_1 + 2) = local_148._2_2_;
    *(undefined4 *)(param_1 + 4) = (undefined4)local_140;
    *(undefined4 *)(param_1 + 8) = (undefined4)local_138;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)local_130;
    *(undefined4 *)(param_1 + 0x10) = local_148._4_4_;
    *(undefined4 *)(param_1 + 0x14) = local_140._4_4_;
    *(undefined4 *)(param_1 + 0x18) = local_138._4_4_;
    *(undefined4 *)(param_1 + 0x1c) = local_130._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)local_118;
    *(undefined4 *)(param_1 + 0x24) = (undefined4)local_f0;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_128;
    *(undefined4 *)(param_1 + 0x2c) = (undefined4)local_120;
    *(undefined4 *)(param_1 + 0x30) = local_118._4_4_;
    *(undefined4 *)(param_1 + 0x34) = local_f0._4_4_;
    *(undefined4 *)(param_1 + 0x38) = local_128._4_4_;
    *(undefined4 *)(param_1 + 0x3c) = local_120._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_110;
    *(undefined4 *)(param_1 + 0x44) = (undefined4)local_108;
    *(undefined4 *)(param_1 + 0x48) = (undefined4)local_e8;
    *(undefined4 *)(param_1 + 0x4c) = (undefined4)local_e0;
    *(undefined4 *)(param_1 + 0x50) = local_110._4_4_;
    *(undefined4 *)(param_1 + 0x54) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x58) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = local_e0._4_4_;
    *(undefined4 *)(param_1 + 0x60) = (undefined4)local_100;
    *(undefined4 *)(param_1 + 100) = (undefined4)local_f8;
    *(undefined4 *)(param_1 + 0x68) = (undefined4)local_d8;
    *(undefined4 *)(param_1 + 0x6c) = (undefined4)local_d0;
    *(undefined4 *)(param_1 + 0x70) = local_100._4_4_;
    *(undefined4 *)(param_1 + 0x74) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0x78) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 0x7c) = local_d0._4_4_;
    return;
  }
  bVar2 = *pbVar14;
  uVar17 = uVar13;
  pbVar19 = pbVar14;
  if (bVar2 != 0) goto LAB_0010bb4c;
LAB_0010bb34:
  pbVar19 = pbVar19 + 1;
  puVar10 = puVar12;
LAB_0010bb38:
  uVar9 = (uint)uVar13;
  if (pbVar15 <= pbVar19) goto LAB_0010bd34;
  bVar2 = *pbVar19;
  uVar17 = uVar13;
  puVar12 = puVar10;
  if (bVar2 == 0) goto LAB_0010bb34;
LAB_0010bb4c:
  puVar10 = puVar12;
  if (uVar22 == 0) {
    puVar10 = puVar12 + 1;
    uVar17 = (ulong)*puVar12;
    uVar22 = 0x20;
  }
  uVar13 = uVar17 >> 1;
  uVar9 = (uint)uVar13;
  uVar22 = uVar22 - 1;
  puVar12 = puVar10;
  if ((uVar17 & 1) == 0) goto LAB_0010bb34;
  switch(bVar2 & 3) {
  case 0:
    *pbVar19 = (bVar2 & 0xfc) + 0x11;
    break;
  case 1:
    goto switchD_0010bb78_caseD_1;
  case 2:
    *pbVar19 = 0;
    pbVar19 = pbVar19 + 1;
    break;
  case 3:
    goto switchD_0010bb78_caseD_3;
  }
  if (uVar22 == 0) {
    puVar12 = puVar10 + 1;
    uVar13 = (ulong)*puVar10;
    uVar22 = 0x20;
  }
  bVar26 = bVar2 >> 2;
  uVar17 = uVar13 >> 1;
  uVar9 = (uint)uVar17;
  iVar20 = uVar22 - 1;
  puVar10 = puVar12;
  if ((uVar13 & 1) == 0) {
    if (iVar20 == 0) {
      puVar10 = puVar12 + 1;
      uVar9 = *puVar12;
      iVar20 = 0x20;
    }
    uVar17 = (ulong)(uVar9 >> 1);
    iVar20 = iVar20 + -1;
    *(ushort *)((long)&local_148 + (ulong)bVar26 * 2) = -((ushort)uVar9 & 1) | 1;
  }
  else {
    pbVar14 = pbVar14 + -1;
    *pbVar14 = bVar2 | 3;
  }
  puVar12 = puVar10;
  if (iVar20 == 0) {
    puVar12 = puVar10 + 1;
    uVar17 = (ulong)*puVar10;
    iVar20 = 0x20;
  }
  uVar22 = bVar26 + 1;
  uVar13 = uVar17 >> 1;
  uVar9 = (uint)uVar13;
  iVar20 = iVar20 + -1;
  puVar10 = puVar12;
  if ((uVar17 & 1) == 0) {
    if (iVar20 == 0) {
      puVar10 = puVar12 + 1;
      uVar9 = *puVar12;
      iVar20 = 0x20;
    }
    uVar13 = (ulong)(uVar9 >> 1);
    iVar20 = iVar20 + -1;
    *(ushort *)((long)&local_148 + (ulong)uVar22 * 2) = -((ushort)uVar9 & 1) | 1;
  }
  else {
    pbVar14 = pbVar14 + -1;
    *pbVar14 = (char)uVar22 * '\x04' | 3;
  }
  puVar12 = puVar10;
  if (iVar20 == 0) {
    puVar12 = puVar10 + 1;
    uVar13 = (ulong)*puVar10;
    iVar20 = 0x20;
  }
  uVar22 = bVar26 + 2;
  uVar17 = uVar13 >> 1;
  uVar9 = (uint)uVar17;
  iVar20 = iVar20 + -1;
  puVar11 = puVar12;
  if ((uVar13 & 1) == 0) {
    if (iVar20 == 0) {
      puVar11 = puVar12 + 1;
      uVar9 = *puVar12;
      iVar20 = 0x20;
    }
    uVar17 = (ulong)(uVar9 >> 1);
    iVar20 = iVar20 + -1;
    *(ushort *)((long)&local_148 + (ulong)uVar22 * 2) = -((ushort)uVar9 & 1) | 1;
  }
  else {
    pbVar14 = pbVar14 + -1;
    *pbVar14 = (char)uVar22 * '\x04' | 3;
  }
  puVar10 = puVar11;
  if (iVar20 == 0) {
    puVar10 = puVar11 + 1;
    uVar17 = (ulong)*puVar11;
    iVar20 = 0x20;
  }
  uVar13 = uVar17 >> 1;
  uVar9 = (uint)uVar13;
  uVar22 = iVar20 - 1;
  if ((uVar17 & 1) == 0) {
    puVar12 = puVar10;
    if (uVar22 == 0) {
      puVar12 = puVar10 + 1;
      uVar9 = *puVar10;
      uVar22 = 0x20;
    }
    uVar13 = (ulong)(uVar9 >> 1);
    uVar22 = uVar22 - 1;
    *(ushort *)((long)&local_148 + (ulong)(bVar26 + 3) * 2) = -((ushort)uVar9 & 1) | 1;
    puVar10 = puVar12;
  }
  else {
    pbVar14 = pbVar14 + -1;
    *pbVar14 = (char)(bVar26 + 3) * '\x04' | 3;
  }
  goto LAB_0010bb38;
switchD_0010b7f4_caseD_3:
  if (uVar22 < uVar18) {
    puVar12 = puVar10 + 1;
    Hint_Prefetch(puVar10 + 0x100,0,0,0);
    uVar13 = (ulong)*puVar10 << ((ulong)uVar22 & 0x3f) | uVar13;
    uVar22 = uVar23 + 0x1f;
  }
  uVar23 = 0xffffffffU >> (ulong)(-iVar16 & 0x1f) & (uint)uVar13;
  uVar4 = (ushort)uVar23 & uVar7 | uVar4;
  uVar22 = uVar22 - iVar16;
  uVar1 = -uVar4;
  if ((uVar23 & uVar3) == 0) {
    uVar1 = uVar4;
  }
  uVar13 = uVar13 >> (uVar18 & 0x3f);
  *(ushort *)((long)&local_148 + (ulong)(bVar2 >> 2) * 2) = uVar1;
  *pbVar19 = 0;
  goto LAB_0010b7a4;
switchD_0010b7f4_caseD_1:
  bVar26 = bVar2 & 0xfc;
  *pbVar19 = bVar26 | 2;
  pbVar15[1] = bVar26 + 0x22;
  *pbVar15 = bVar26 + 0x12;
  pbVar15[2] = bVar2 + 0x30 & 0xfc | 2;
  pbVar15 = pbVar15 + 3;
  goto LAB_0010b7b0;
switchD_0010bb78_caseD_3:
  if (uVar22 == 0) {
    puVar12 = puVar10 + 1;
    uVar9 = *puVar10;
    uVar22 = 0x20;
  }
  *pbVar19 = 0;
  uVar22 = uVar22 - 1;
  uVar13 = (ulong)(uVar9 >> 1);
  *(ushort *)((long)&local_148 + (ulong)(bVar2 >> 2) * 2) = -((ushort)uVar9 & 1) | 1;
  goto LAB_0010bb34;
switchD_0010bb78_caseD_1:
  bVar26 = bVar2 & 0xfc;
  *pbVar19 = bVar26 | 2;
  pbVar15[1] = bVar26 + 0x22;
  *pbVar15 = bVar26 + 0x12;
  pbVar15[2] = bVar2 + 0x30 & 0xfc | 2;
  pbVar15 = pbVar15 + 3;
  goto LAB_0010bb38;
}


