/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017d4d0; name: FUN_0017d4d0
 */


undefined8 FUN_0017d4d0(long *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong *puVar29;
  uint uVar30;
  byte *pbVar31;
  int *piVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint *puVar36;
  byte *pbVar37;
  int *piVar38;
  byte *pbVar39;
  byte *pbVar40;
  long lVar41;
  uint uVar42;
  ushort local_4c8 [268];
  ulong *local_2b0;
  long local_2a8;
  ulong local_2a0;
  ulong local_298;
  byte abStack_290 [8];
  undefined8 auStack_288 [65];
  byte *local_80;
  long lStack_78;
  uint local_70;
  
  puVar29 = (ulong *)*param_1;
  local_2a8 = param_1[1];
  uVar20 = param_1[3];
  if (local_2a8 - (long)puVar29 < 8) {
    if (local_2a8 - (long)puVar29 < 1) {
      uVar26 = 0;
      if (local_2a8 - (long)((long)puVar29 + 1) < 1) goto LAB_0017d588;
LAB_0017d53c:
      uVar17 = (uint)*(byte *)((long)puVar29 + 1) << 0x10;
      if (0 < local_2a8 - (long)((long)puVar29 + 2)) goto LAB_0017d554;
LAB_0017d59c:
      uVar33 = 0;
      if (local_2a8 - (long)((long)puVar29 + 3) < 1) goto LAB_0017d5b0;
LAB_0017d56c:
      uVar15 = (ulong)*(byte *)((long)puVar29 + 3);
    }
    else {
      uVar26 = (uint)(byte)*puVar29 << 0x18;
      if (0 < local_2a8 - (long)((long)puVar29 + 1)) goto LAB_0017d53c;
LAB_0017d588:
      uVar17 = 0;
      if (local_2a8 - (long)((long)puVar29 + 2) < 1) goto LAB_0017d59c;
LAB_0017d554:
      uVar33 = (uint)*(byte *)((long)puVar29 + 2) << 8;
      if (0 < local_2a8 - (long)((long)puVar29 + 3)) goto LAB_0017d56c;
LAB_0017d5b0:
      uVar15 = 0;
    }
    if (local_2a8 - ((long)puVar29 + 4) < 1) {
      uVar27 = 0;
      if (local_2a8 - (long)((long)puVar29 + 5) < 1) goto LAB_0017d604;
LAB_0017d5e4:
      uVar30 = (uint)*(byte *)((long)puVar29 + 5) << 0x10;
    }
    else {
      uVar27 = (uint)*(byte *)((long)puVar29 + 4) << 0x18;
      if (0 < local_2a8 - (long)((long)puVar29 + 5)) goto LAB_0017d5e4;
LAB_0017d604:
      uVar30 = 0;
    }
    if (local_2a8 - ((long)puVar29 + 6) < 1) {
      uVar34 = 0;
    }
    else {
      uVar34 = (uint)*(byte *)((long)puVar29 + 6) << 8;
    }
    if (local_2a8 - ((long)puVar29 + 7) < 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = (ulong)*(byte *)((long)puVar29 + 7);
    }
    uVar24 = (ulong)(uVar30 | uVar27 | uVar34) | (uVar15 | (uVar17 | uVar26 | uVar33)) << 0x20 |
             uVar24;
  }
  else {
    uVar15 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar15 >> 0x20 | uVar15 << 0x20;
  }
  uVar15 = uVar20 & 7;
  uVar24 = uVar24 >> (0x3f - uVar20 & 0x3f) | param_1[2];
  puVar29 = (ulong *)((long)puVar29 + ((long)uVar20 >> 3));
  uVar26 = (uint)(uVar24 >> 0x20);
  if ((long)uVar24 < 0) {
    uVar17 = uVar26 >> 0x14 & 0xff;
    uVar26 = uVar17 + 1;
    if (uVar26 < 2) {
      return 0;
    }
    lVar41 = uVar15 + 0xc;
    if (uVar26 == 0x100) {
      iVar7 = 0;
    }
    else {
      uVar17 = 0x100 - uVar17;
      uVar33 = uVar26;
      if (uVar17 <= uVar26) {
        uVar33 = uVar17;
      }
      uVar17 = (uint)LZCOUNT(uVar33 * 2 + -1);
      iVar10 = (1 << (ulong)(-uVar17 & 0x1f)) + uVar33 * -2;
      iVar18 = (int)((uVar24 << 0xc) >> (uVar17 | 0x20));
      iVar7 = iVar18 >> 1;
      if (iVar7 < iVar10) {
        uVar17 = uVar17 ^ 0x1f;
      }
      else {
        uVar17 = 0x20 - uVar17;
        iVar7 = iVar18 - iVar10;
      }
      lVar41 = lVar41 + (ulong)uVar17;
    }
    local_80 = (byte *)((long)puVar29 - (0x46U - lVar41 >> 3));
    uVar15 = (ulong)(iVar7 + uVar26);
    local_70 = (int)lVar41 + 1U & 7;
    lStack_78 = local_2a8;
    uVar20 = FUN_00178d10(abStack_290,uVar15,&local_80);
    if (uVar20 != uVar15) {
      return 0;
    }
    pbVar40 = abStack_290 + uVar15;
    pbVar40[0] = 0;
    pbVar40[1] = 0;
    pbVar40[2] = 0;
    pbVar40[3] = 0;
    pbVar40[4] = 0;
    pbVar40[5] = 0;
    pbVar40[6] = 0;
    pbVar40[7] = 0;
    *(undefined8 *)((long)auStack_288 + uVar15) = 0;
    local_2a8 = lStack_78;
    if (lStack_78 - (long)local_80 < 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = (ulong)*local_80 << 0x38;
    }
    puVar29 = (ulong *)(local_80 + 1);
    if (lStack_78 - (long)puVar29 < 8) {
      if (lStack_78 - (long)puVar29 < 1) {
        uVar17 = 0;
        if (lStack_78 - (long)(local_80 + 2) < 1) goto LAB_0017df98;
LAB_0017dcf0:
        uVar33 = (uint)local_80[2] << 0x10;
        if (0 < lStack_78 - (long)(local_80 + 3)) goto LAB_0017dd08;
LAB_0017dfac:
        uVar27 = 0;
        if (lStack_78 - (long)(local_80 + 4) < 1) goto LAB_0017dfc0;
LAB_0017dd20:
        uVar15 = (ulong)local_80[4];
      }
      else {
        uVar17 = (uint)(byte)*puVar29 << 0x18;
        if (0 < lStack_78 - (long)(local_80 + 2)) goto LAB_0017dcf0;
LAB_0017df98:
        uVar33 = 0;
        if (lStack_78 - (long)(local_80 + 3) < 1) goto LAB_0017dfac;
LAB_0017dd08:
        uVar27 = (uint)local_80[3] << 8;
        if (0 < lStack_78 - (long)(local_80 + 4)) goto LAB_0017dd20;
LAB_0017dfc0:
        uVar15 = 0;
      }
      if (lStack_78 - (long)(local_80 + 5) < 1) {
        uVar30 = 0;
      }
      else {
        uVar30 = (uint)local_80[5] << 0x18;
      }
      if (lStack_78 - (long)(local_80 + 6) < 1) {
        uVar34 = 0;
      }
      else {
        uVar34 = (uint)local_80[6] << 0x10;
      }
      if (lStack_78 - (long)(local_80 + 7) < 1) {
        uVar28 = 0;
      }
      else {
        uVar28 = (uint)local_80[7] << 8;
      }
      uVar15 = (ulong)(uVar34 | uVar30 | uVar28) | (uVar15 | (uVar33 | uVar17 | uVar27)) << 0x20;
    }
    else {
      uVar15 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    }
    local_2b0 = (ulong *)(local_80 + 7);
    local_2a0 = (uVar20 | uVar15 >> 8) << ((ulong)local_70 & 0x3f);
    local_298 = (ulong)local_70 + 7;
    iVar7 = FUN_00179460(local_4c8,uVar26,iVar7,abStack_290 + uVar26,&local_2b0);
    if (iVar7 < 0) {
      return 0;
    }
    if (local_2a8 - (long)local_2b0 < 8) {
      if (local_2a8 - (long)local_2b0 < 1) {
        uVar26 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 1) < 1) goto LAB_0017e124;
LAB_0017e0d8:
        uVar17 = (uint)*(byte *)((long)local_2b0 + 1) << 0x10;
        if (0 < local_2a8 - (long)((long)local_2b0 + 2)) goto LAB_0017e0f0;
LAB_0017e138:
        uVar33 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 3) < 1) goto LAB_0017e14c;
LAB_0017e108:
        uVar20 = (ulong)*(byte *)((long)local_2b0 + 3);
      }
      else {
        uVar26 = (uint)(byte)*local_2b0 << 0x18;
        if (0 < local_2a8 - (long)((long)local_2b0 + 1)) goto LAB_0017e0d8;
LAB_0017e124:
        uVar17 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 2) < 1) goto LAB_0017e138;
LAB_0017e0f0:
        uVar33 = (uint)*(byte *)((long)local_2b0 + 2) << 8;
        if (0 < local_2a8 - (long)((long)local_2b0 + 3)) goto LAB_0017e108;
LAB_0017e14c:
        uVar20 = 0;
      }
      if (local_2a8 - ((long)local_2b0 + 4) < 1) {
        uVar27 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 5) < 1) goto LAB_0017e1a0;
LAB_0017e180:
        uVar30 = (uint)*(byte *)((long)local_2b0 + 5) << 0x10;
      }
      else {
        uVar27 = (uint)*(byte *)((long)local_2b0 + 4) << 0x18;
        if (0 < local_2a8 - (long)((long)local_2b0 + 5)) goto LAB_0017e180;
LAB_0017e1a0:
        uVar30 = 0;
      }
      if (local_2a8 - ((long)local_2b0 + 6) < 1) {
        uVar34 = 0;
      }
      else {
        uVar34 = (uint)*(byte *)((long)local_2b0 + 6) << 8;
      }
      if (local_2a8 - ((long)local_2b0 + 7) < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = (ulong)*(byte *)((long)local_2b0 + 7);
      }
      uVar15 = (ulong)(uVar30 | uVar27 | uVar34) | (uVar20 | (uVar17 | uVar26 | uVar33)) << 0x20 |
               uVar15;
    }
    else {
      uVar20 = (*local_2b0 & 0xff00ff00ff00ff00) >> 8 | (*local_2b0 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar20 >> 0x20 | uVar20 << 0x20;
    }
    uVar20 = local_298 & 7;
    puVar29 = (ulong *)((long)local_2b0 + ((long)local_298 >> 3));
    piVar2 = param_3 + 2;
    uVar19 = uVar15 >> (0x3f - local_298 & 0x3f) | local_2a0;
    piVar3 = param_3 + 0x42;
    piVar38 = piVar2;
    piVar32 = piVar3;
    if (0 < iVar7) {
      uVar15 = uVar24 >> 0x3c & 7;
      iVar18 = 0;
      lVar41 = 0;
      iVar10 = 6;
      pbVar40 = abStack_290;
LAB_0017e264:
      uVar9 = local_4c8[lVar41 * 2];
      uVar17 = (uint)*(ushort *)((long)local_4c8 + (lVar41 << 2 | 2U));
      uVar26 = (uint)uVar9 << 0x10 | 1;
      lVar14 = local_2a8 - (long)puVar29;
      uVar24 = uVar20 >> 3;
      if (7 < lVar14) goto LAB_0017e2f0;
      do {
        if (lVar14 < 1) {
          uVar33 = 0;
          if (local_2a8 - (long)((long)puVar29 + 1) < 1) goto LAB_0017e368;
LAB_0017e31c:
          uVar27 = (uint)*(byte *)((long)puVar29 + 1) << 0x10;
          if (0 < local_2a8 - (long)((long)puVar29 + 2)) goto LAB_0017e334;
LAB_0017e37c:
          uVar30 = 0;
          if (local_2a8 - (long)((long)puVar29 + 3) < 1) goto LAB_0017e390;
LAB_0017e34c:
          uVar12 = (ulong)*(byte *)((long)puVar29 + 3);
        }
        else {
          uVar33 = (uint)(byte)*puVar29 << 0x18;
          if (0 < local_2a8 - (long)((long)puVar29 + 1)) goto LAB_0017e31c;
LAB_0017e368:
          uVar27 = 0;
          if (local_2a8 - (long)((long)puVar29 + 2) < 1) goto LAB_0017e37c;
LAB_0017e334:
          uVar30 = (uint)*(byte *)((long)puVar29 + 2) << 8;
          if (0 < local_2a8 - (long)((long)puVar29 + 3)) goto LAB_0017e34c;
LAB_0017e390:
          uVar12 = 0;
        }
        if (local_2a8 - ((long)puVar29 + 4) < 1) {
          uVar34 = 0;
          if (local_2a8 - (long)((long)puVar29 + 5) < 1) goto LAB_0017e3e4;
LAB_0017e3c4:
          uVar28 = (uint)*(byte *)((long)puVar29 + 5) << 0x10;
        }
        else {
          uVar34 = (uint)*(byte *)((long)puVar29 + 4) << 0x18;
          if (0 < local_2a8 - (long)((long)puVar29 + 5)) goto LAB_0017e3c4;
LAB_0017e3e4:
          uVar28 = 0;
        }
        if (local_2a8 - ((long)puVar29 + 6) < 1) {
          uVar42 = 0;
        }
        else {
          uVar42 = (uint)*(byte *)((long)puVar29 + 6) << 8;
        }
        if (local_2a8 - ((long)puVar29 + 7) < 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = (ulong)*(byte *)((long)puVar29 + 7);
        }
        uVar13 = (ulong)(uVar28 | uVar34 | uVar42) | (uVar12 | (uVar27 | uVar33 | uVar30)) << 0x20 |
                 uVar13;
        pbVar25 = pbVar40;
        while( true ) {
          puVar29 = (ulong *)((long)puVar29 + uVar24);
          pbVar40 = pbVar25 + 1;
          uVar12 = uVar13 >> (0x3f - uVar20 & 0x3f) | uVar19;
          uVar24 = uVar15 + *pbVar25;
          if (0xf < (uint)uVar24) {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0017e518;
            pcVar11 = "OODLE ERROR : corruption : nextra <= 15\n";
            uVar8 = 0x492;
            goto LAB_0017e510;
          }
          iVar4 = iVar10 >> 2;
          uVar19 = uVar12 << (uVar24 & 0x3f);
          uVar20 = (uVar20 & 7) + uVar24;
          uVar33 = ((1 << (ulong)((uint)uVar24 & 0x1f)) - (1 << uVar15)) +
                   (int)((uVar12 >> 1) >> (0x3f - uVar24 & 0x3f));
          uVar27 = iVar4 * 2;
          if ((int)uVar33 <= (int)uVar27) {
            uVar33 = (-(uVar33 & 1) ^ uVar33 >> 1) + iVar4;
          }
          uVar30 = uVar33;
          if ((int)uVar27 <= (int)uVar33) {
            uVar30 = uVar27;
          }
          iVar10 = uVar30 + (iVar10 - iVar4);
          iVar4 = uVar33 + uVar26;
          uVar26 = uVar26 + 0x10000;
          iVar18 = uVar33 + 1 + iVar18;
          *(char *)piVar38 = (char)uVar9;
          *piVar32 = iVar4;
          if (uVar33 == 0) {
            piVar38 = (int *)((long)piVar38 + 1);
          }
          piVar32 = piVar32 + (1 < (int)(uVar33 + 1));
          uVar9 = uVar9 + 1;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) {
            lVar41 = lVar41 + 1;
            if (lVar41 != iVar7) goto LAB_0017e264;
            goto LAB_0017e4bc;
          }
          lVar14 = local_2a8 - (long)puVar29;
          uVar24 = uVar20 >> 3;
          if (lVar14 < 8) break;
LAB_0017e2f0:
          uVar12 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar12 >> 0x20 | uVar12 << 0x20;
          pbVar25 = pbVar40;
        }
      } while( true );
    }
    iVar18 = 0;
LAB_0017e4bc:
    *param_3 = (int)piVar38 - (int)piVar2;
    param_3[1] = (int)((ulong)((long)piVar32 - (long)piVar3) >> 2);
    if (iVar18 != 1 << (ulong)(param_2 & 0x1f)) {
      FUN_0015c3d0();
      pcVar16 = *(code **)PTR_PTR_047cb868;
      if (pcVar16 != (code *)0x0) {
        pcVar11 = "OODLE ERROR : corruption : count_sum == L\n";
        uVar8 = 0x4ba;
LAB_0017e510:
        (*pcVar16)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",uVar8,pcVar11);
      }
LAB_0017e518:
      FUN_0015c3f0();
      return 0;
    }
LAB_0017e524:
    param_1[2] = uVar19;
    param_1[3] = uVar20;
    *param_1 = (long)puVar29;
    param_1[1] = local_2a8;
    return 1;
  }
  local_4c8[0x78] = 0;
  local_4c8[0x79] = 0;
  local_4c8[0x7a] = 0;
  local_4c8[0x7b] = 0;
  local_4c8[0x7c] = 0;
  local_4c8[0x7d] = 0;
  local_4c8[0x7e] = 0;
  local_4c8[0x7f] = 0;
  local_4c8[0x70] = 0;
  local_4c8[0x71] = 0;
  local_4c8[0x72] = 0;
  local_4c8[0x73] = 0;
  local_4c8[0x74] = 0;
  local_4c8[0x75] = 0;
  local_4c8[0x76] = 0;
  local_4c8[0x77] = 0;
  local_4c8[0x68] = 0;
  local_4c8[0x69] = 0;
  local_4c8[0x6a] = 0;
  local_4c8[0x6b] = 0;
  local_4c8[0x6c] = 0;
  local_4c8[0x6d] = 0;
  local_4c8[0x6e] = 0;
  local_4c8[0x6f] = 0;
  local_4c8[0x60] = 0;
  local_4c8[0x61] = 0;
  local_4c8[0x62] = 0;
  local_4c8[99] = 0;
  local_4c8[100] = 0;
  local_4c8[0x65] = 0;
  local_4c8[0x66] = 0;
  local_4c8[0x67] = 0;
  local_4c8[0x58] = 0;
  local_4c8[0x59] = 0;
  local_4c8[0x5a] = 0;
  local_4c8[0x5b] = 0;
  local_4c8[0x5c] = 0;
  local_4c8[0x5d] = 0;
  local_4c8[0x5e] = 0;
  local_4c8[0x5f] = 0;
  local_4c8[0x50] = 0;
  local_4c8[0x51] = 0;
  local_4c8[0x52] = 0;
  local_4c8[0x53] = 0;
  local_4c8[0x54] = 0;
  local_4c8[0x55] = 0;
  local_4c8[0x56] = 0;
  local_4c8[0x57] = 0;
  local_4c8[0x48] = 0;
  local_4c8[0x49] = 0;
  local_4c8[0x4a] = 0;
  local_4c8[0x4b] = 0;
  local_4c8[0x4c] = 0;
  local_4c8[0x4d] = 0;
  local_4c8[0x4e] = 0;
  local_4c8[0x4f] = 0;
  local_4c8[0x40] = 0;
  local_4c8[0x41] = 0;
  local_4c8[0x42] = 0;
  local_4c8[0x43] = 0;
  local_4c8[0x44] = 0;
  local_4c8[0x45] = 0;
  local_4c8[0x46] = 0;
  local_4c8[0x47] = 0;
  local_4c8[0x38] = 0;
  local_4c8[0x39] = 0;
  local_4c8[0x3a] = 0;
  local_4c8[0x3b] = 0;
  local_4c8[0x3c] = 0;
  local_4c8[0x3d] = 0;
  local_4c8[0x3e] = 0;
  local_4c8[0x3f] = 0;
  local_4c8[0x30] = 0;
  local_4c8[0x31] = 0;
  local_4c8[0x32] = 0;
  local_4c8[0x33] = 0;
  local_4c8[0x34] = 0;
  local_4c8[0x35] = 0;
  local_4c8[0x36] = 0;
  local_4c8[0x37] = 0;
  local_4c8[0x28] = 0;
  local_4c8[0x29] = 0;
  local_4c8[0x2a] = 0;
  local_4c8[0x2b] = 0;
  local_4c8[0x2c] = 0;
  local_4c8[0x2d] = 0;
  local_4c8[0x2e] = 0;
  local_4c8[0x2f] = 0;
  local_4c8[0x20] = 0;
  local_4c8[0x21] = 0;
  local_4c8[0x22] = 0;
  local_4c8[0x23] = 0;
  local_4c8[0x24] = 0;
  local_4c8[0x25] = 0;
  local_4c8[0x26] = 0;
  local_4c8[0x27] = 0;
  local_4c8[0x18] = 0;
  local_4c8[0x19] = 0;
  local_4c8[0x1a] = 0;
  local_4c8[0x1b] = 0;
  local_4c8[0x1c] = 0;
  local_4c8[0x1d] = 0;
  local_4c8[0x1e] = 0;
  local_4c8[0x1f] = 0;
  local_4c8[0x10] = 0;
  local_4c8[0x11] = 0;
  local_4c8[0x12] = 0;
  local_4c8[0x13] = 0;
  local_4c8[0x14] = 0;
  local_4c8[0x15] = 0;
  local_4c8[0x16] = 0;
  local_4c8[0x17] = 0;
  local_4c8[8] = 0;
  local_4c8[9] = 0;
  local_4c8[10] = 0;
  local_4c8[0xb] = 0;
  local_4c8[0xc] = 0;
  local_4c8[0xd] = 0;
  local_4c8[0xe] = 0;
  local_4c8[0xf] = 0;
  local_4c8[0] = 0;
  local_4c8[1] = 0;
  local_4c8[2] = 0;
  local_4c8[3] = 0;
  local_4c8[4] = 0;
  local_4c8[5] = 0;
  local_4c8[6] = 0;
  local_4c8[7] = 0;
  if (local_2a8 - (long)puVar29 < 8) {
    if (local_2a8 - (long)puVar29 < 1) {
      uVar17 = 0;
      if (local_2a8 - (long)((long)puVar29 + 1) < 1) goto LAB_0017d770;
LAB_0017d724:
      uVar33 = (uint)*(byte *)((long)puVar29 + 1) << 0x10;
      if (0 < local_2a8 - (long)((long)puVar29 + 2)) goto LAB_0017d73c;
LAB_0017d784:
      uVar27 = 0;
      if (local_2a8 - (long)((long)puVar29 + 3) < 1) goto LAB_0017d798;
LAB_0017d754:
      uVar20 = (ulong)*(byte *)((long)puVar29 + 3);
    }
    else {
      uVar17 = (uint)(byte)*puVar29 << 0x18;
      if (0 < local_2a8 - (long)((long)puVar29 + 1)) goto LAB_0017d724;
LAB_0017d770:
      uVar33 = 0;
      if (local_2a8 - (long)((long)puVar29 + 2) < 1) goto LAB_0017d784;
LAB_0017d73c:
      uVar27 = (uint)*(byte *)((long)puVar29 + 2) << 8;
      if (0 < local_2a8 - (long)((long)puVar29 + 3)) goto LAB_0017d754;
LAB_0017d798:
      uVar20 = 0;
    }
    if (local_2a8 - ((long)puVar29 + 4) < 1) {
      uVar30 = 0;
      if (local_2a8 - (long)((long)puVar29 + 5) < 1) goto LAB_0017d7ec;
LAB_0017d7cc:
      uVar34 = (uint)*(byte *)((long)puVar29 + 5) << 0x10;
    }
    else {
      uVar30 = (uint)*(byte *)((long)puVar29 + 4) << 0x18;
      if (0 < local_2a8 - (long)((long)puVar29 + 5)) goto LAB_0017d7cc;
LAB_0017d7ec:
      uVar34 = 0;
    }
    if (local_2a8 - ((long)puVar29 + 6) < 1) {
      uVar28 = 0;
    }
    else {
      uVar28 = (uint)*(byte *)((long)puVar29 + 6) << 8;
    }
    if (local_2a8 - ((long)puVar29 + 7) < 1) {
      uVar19 = 0;
    }
    else {
      uVar19 = (ulong)*(byte *)((long)puVar29 + 7);
    }
    uVar19 = (ulong)(uVar34 | uVar30 | uVar28) | (uVar20 | (uVar33 | uVar17 | uVar27)) << 0x20 |
             uVar19;
  }
  else {
    uVar20 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar19 = uVar20 >> 0x20 | uVar20 << 0x20;
  }
  uVar17 = 0;
  if (param_2 != 0) {
    uVar17 = 0x20 - (int)LZCOUNT(param_2);
  }
  uVar19 = (uVar19 >> (0x3e - uVar15 & 0x3f) | uVar24 << 1) << 3;
  uVar20 = uVar19 >> ((ulong)-uVar17 & 0x3f);
  iVar7 = (int)uVar20;
  if (iVar7 == 0) {
    FUN_0015c3d0();
    pcVar16 = *(code **)PTR_PTR_047cb868;
    if (pcVar16 == (code *)0x0) goto LAB_0017def4;
    pcVar11 = "OODLE ERROR : max_delta_bits == 0\n";
    uVar8 = 0x318;
  }
  else {
    if (iVar7 <= (int)param_2) {
      puVar29 = (ulong *)((long)puVar29 + (uVar15 + 1 >> 3));
      uVar33 = 1 << (ulong)(param_2 & 0x1f);
      uVar19 = uVar19 << ((ulong)uVar17 & 0x3f);
      uVar15 = (ulong)uVar17 + (uVar15 + 1 & 7) + 3;
      pbVar40 = (byte *)(param_3 + 2);
      puVar1 = (uint *)(param_3 + 0x42);
      uVar17 = 0;
      iVar18 = 0;
      uVar24 = uVar15 >> 3;
      iVar10 = (uVar26 >> 0x1c & 7) + 1;
      puVar22 = puVar1;
      puVar21 = puVar1;
      pbVar25 = pbVar40;
      if (local_2a8 - (long)puVar29 < 8) goto LAB_0017d9a8;
LAB_0017d99c:
      uVar12 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      do {
        uVar19 = uVar12 >> (0x3f - uVar15 & 0x3f) | uVar19;
        if (*(char *)((long)local_4c8 + (uVar19 >> 0x38)) != '\0') {
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 == (code *)0x0) goto LAB_0017def4;
          pcVar11 = "OODLE ERROR : corruption : ! seen[sym]\n";
          uVar8 = 0x32c;
          goto LAB_0017deec;
        }
        uVar17 = uVar17 + (int)((uVar19 << 8) >> ((ulong)(0x40 - iVar7) & 0x3f));
        if (uVar17 == 0) {
          FUN_0015c3d0();
          pcVar16 = *(code **)PTR_PTR_047cb868;
          if (pcVar16 == (code *)0x0) goto LAB_0017def4;
          pcVar11 = "OODLE ERROR : corruption : cur > 0\n";
          uVar8 = 0x332;
          goto LAB_0017deec;
        }
        *(undefined1 *)((long)local_4c8 + (uVar19 >> 0x38)) = 1;
        bVar5 = (byte)(uVar19 >> 0x38);
        if (uVar17 == 1) {
          *pbVar25 = bVar5;
          uVar26 = uVar33 - (iVar18 + 1U);
          puVar21 = puVar22;
          pbVar25 = pbVar25 + 1;
          if (uVar33 < iVar18 + 1U || uVar26 == 0) {
LAB_0017db34:
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0017def4;
            pcVar11 = "OODLE ERROR : corruption : sum < L\n";
            uVar8 = 0x33b;
            goto LAB_0017deec;
          }
        }
        else {
          puVar21 = puVar22 + 1;
          *puVar22 = uVar17 | (uint)bVar5 << 0x10;
          uVar26 = uVar33 - (uVar17 + iVar18);
          if (uVar33 < uVar17 + iVar18 || uVar26 == 0) goto LAB_0017db34;
        }
        iVar18 = uVar17 + iVar18;
        puVar29 = (ulong *)((long)puVar29 + uVar24);
        lVar41 = local_2a8 - (long)puVar29;
        uVar15 = (uVar15 & 7 | 8) + (long)iVar7;
        uVar19 = (uVar19 << 8) << (uVar20 & 0x3f);
        uVar24 = (long)uVar15 >> 3;
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          if (lVar41 < 8) {
            if (lVar41 < 1) {
              uVar33 = 0;
              if (local_2a8 - (long)((long)puVar29 + 1) < 1) goto LAB_0017dd3c;
LAB_0017dbdc:
              uVar27 = (uint)*(byte *)((long)puVar29 + 1) << 0x10;
              if (0 < local_2a8 - (long)((long)puVar29 + 2)) goto LAB_0017dbf4;
LAB_0017dd50:
              uVar30 = 0;
              if (local_2a8 - (long)((long)puVar29 + 3) < 1) goto LAB_0017dd64;
LAB_0017dc0c:
              uVar20 = (ulong)*(byte *)((long)puVar29 + 3);
            }
            else {
              uVar33 = (uint)(byte)*puVar29 << 0x18;
              if (0 < local_2a8 - (long)((long)puVar29 + 1)) goto LAB_0017dbdc;
LAB_0017dd3c:
              uVar27 = 0;
              if (local_2a8 - (long)((long)puVar29 + 2) < 1) goto LAB_0017dd50;
LAB_0017dbf4:
              uVar30 = (uint)*(byte *)((long)puVar29 + 2) << 8;
              if (0 < local_2a8 - (long)((long)puVar29 + 3)) goto LAB_0017dc0c;
LAB_0017dd64:
              uVar20 = 0;
            }
            if (local_2a8 - ((long)puVar29 + 4) < 1) {
              uVar34 = 0;
              if (local_2a8 - (long)((long)puVar29 + 5) < 1) goto LAB_0017ddb8;
LAB_0017dd98:
              uVar28 = (uint)*(byte *)((long)puVar29 + 5) << 0x10;
            }
            else {
              uVar34 = (uint)*(byte *)((long)puVar29 + 4) << 0x18;
              if (0 < local_2a8 - (long)((long)puVar29 + 5)) goto LAB_0017dd98;
LAB_0017ddb8:
              uVar28 = 0;
            }
            if (local_2a8 - ((long)puVar29 + 6) < 1) {
              uVar42 = 0;
            }
            else {
              uVar42 = (uint)*(byte *)((long)puVar29 + 6) << 8;
            }
            if (local_2a8 - ((long)puVar29 + 7) < 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulong)*(byte *)((long)puVar29 + 7);
            }
            uVar12 = (ulong)(uVar28 | uVar34 | uVar42) |
                     (uVar20 | (uVar27 | uVar33 | uVar30)) << 0x20 | uVar12;
          }
          else {
            uVar20 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar20 >> 0x20 | uVar20 << 0x20;
          }
          uVar19 = uVar12 >> (0x3f - uVar15 & 0x3f) | uVar19;
          if (*(char *)((long)local_4c8 + (uVar19 >> 0x38)) != '\0') {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0017def4;
            pcVar11 = "OODLE ERROR : corruption : ! seen[mps]\n";
            uVar8 = 0x342;
            goto LAB_0017deec;
          }
          if ((uVar26 < uVar17) || (uVar26 < 2)) {
            FUN_0015c3d0();
            pcVar16 = *(code **)PTR_PTR_047cb868;
            if (pcVar16 == (code *)0x0) goto LAB_0017def4;
            pcVar11 = "OODLE ERROR : last too small\n";
            uVar8 = 0x34b;
            goto LAB_0017deec;
          }
          puVar29 = (ulong *)((long)puVar29 + uVar24);
          puVar22 = puVar21 + 1;
          *puVar21 = uVar26 | (uint)(byte)(uVar19 >> 0x38) << 0x10;
          pbVar31 = pbVar40;
          if (pbVar40 == pbVar25) goto LAB_0017df04;
          pbVar31 = (byte *)((long)param_3 + 9);
          goto joined_r0x0017de70;
        }
        puVar22 = puVar21;
        if (7 < lVar41) goto LAB_0017d99c;
LAB_0017d9a8:
        if (local_2a8 - (long)puVar29 < 1) {
          uVar26 = 0;
          if (local_2a8 - (long)((long)puVar29 + 1) < 1) goto LAB_0017da18;
LAB_0017d9cc:
          uVar27 = (uint)*(byte *)((long)puVar29 + 1) << 0x10;
          if (0 < local_2a8 - (long)((long)puVar29 + 2)) goto LAB_0017d9e4;
LAB_0017da2c:
          uVar30 = 0;
          if (local_2a8 - (long)((long)puVar29 + 3) < 1) goto LAB_0017da40;
LAB_0017d9fc:
          uVar13 = (ulong)*(byte *)((long)puVar29 + 3);
        }
        else {
          uVar26 = (uint)(byte)*puVar29 << 0x18;
          if (0 < local_2a8 - (long)((long)puVar29 + 1)) goto LAB_0017d9cc;
LAB_0017da18:
          uVar27 = 0;
          if (local_2a8 - (long)((long)puVar29 + 2) < 1) goto LAB_0017da2c;
LAB_0017d9e4:
          uVar30 = (uint)*(byte *)((long)puVar29 + 2) << 8;
          if (0 < local_2a8 - (long)((long)puVar29 + 3)) goto LAB_0017d9fc;
LAB_0017da40:
          uVar13 = 0;
        }
        if (local_2a8 - ((long)puVar29 + 4) < 1) {
          uVar34 = 0;
          if (local_2a8 - (long)((long)puVar29 + 5) < 1) goto LAB_0017da94;
LAB_0017da74:
          uVar28 = (uint)*(byte *)((long)puVar29 + 5) << 0x10;
        }
        else {
          uVar34 = (uint)*(byte *)((long)puVar29 + 4) << 0x18;
          if (0 < local_2a8 - (long)((long)puVar29 + 5)) goto LAB_0017da74;
LAB_0017da94:
          uVar28 = 0;
        }
        if (local_2a8 - ((long)puVar29 + 6) < 1) {
          uVar42 = 0;
        }
        else {
          uVar42 = (uint)*(byte *)((long)puVar29 + 6) << 8;
        }
        if (local_2a8 - ((long)puVar29 + 7) < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulong)*(byte *)((long)puVar29 + 7);
        }
        uVar12 = (ulong)(uVar28 | uVar34 | uVar42) | (uVar13 | (uVar27 | uVar26 | uVar30)) << 0x20 |
                 uVar12;
        puVar22 = puVar21;
      } while( true );
    }
    FUN_0015c3d0();
    pcVar16 = *(code **)PTR_PTR_047cb868;
    if (pcVar16 == (code *)0x0) goto LAB_0017def4;
    pcVar11 = "OODLE ERROR : max_delta_bits > L_bits\n";
    uVar8 = 0x31d;
  }
LAB_0017deec:
  (*pcVar16)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",uVar8,pcVar11);
LAB_0017def4:
  FUN_0015c3f0();
  return 0;
joined_r0x0017de70:
  if (pbVar31 == pbVar25) goto LAB_0017df00;
  bVar5 = *pbVar31;
  pbVar37 = pbVar31;
  if (pbVar40 < pbVar31) {
    pbVar39 = pbVar31;
    do {
      pbVar37 = pbVar39 + -1;
      if (*pbVar37 <= bVar5) {
        pbVar37 = pbVar39;
        break;
      }
      *pbVar39 = *pbVar37;
      pbVar39 = pbVar37;
    } while (pbVar40 < pbVar37);
  }
  *pbVar37 = bVar5;
  pbVar31 = pbVar31 + 1;
  goto joined_r0x0017de70;
LAB_0017df00:
  pbVar31 = pbVar25;
LAB_0017df04:
  uVar20 = uVar15 & 7 | 8;
  uVar19 = uVar19 << 8;
  if ((puVar1 != puVar22) && (puVar23 = (uint *)(param_3 + 0x43), puVar23 != puVar22)) {
    do {
      uVar26 = *puVar23;
      puVar35 = puVar23;
      if (puVar1 < puVar23) {
        puVar36 = puVar23;
        do {
          puVar35 = puVar36 + -1;
          if (*puVar35 <= uVar26) {
            puVar35 = puVar36;
            break;
          }
          *puVar36 = *puVar35;
          puVar36 = puVar35;
        } while (puVar1 < puVar35);
      }
      bVar6 = puVar23 != puVar21;
      puVar23 = puVar23 + 1;
      *puVar35 = uVar26;
    } while (bVar6);
  }
  *param_3 = (int)pbVar31 - (int)pbVar40;
  param_3[1] = (int)((ulong)((long)puVar22 - (long)puVar1) >> 2);
  goto LAB_0017e524;
}


