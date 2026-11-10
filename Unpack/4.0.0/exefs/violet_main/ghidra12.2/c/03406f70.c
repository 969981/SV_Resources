/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03406f70; name: FUN_03406f70
 */


undefined8 FUN_03406f70(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong *puVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  int iVar30;
  undefined8 local_a0;
  undefined4 local_94;
  uint local_90;
  int local_8c;
  undefined2 local_88;
  undefined2 local_86;
  int local_84;
  ushort *local_78;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar6 = PTR_DAT_047e6c20;
  bVar3 = *(byte *)(param_1 + 1);
  uVar15 = *(ulong *)*param_1;
  uVar2 = *(undefined4 *)(PTR_DAT_047e6c20 + 0x10);
  uVar28 = (ulong)bVar3 + 4;
  uVar20 = uVar28 >> 5;
  *(byte *)(param_1 + 1) = (byte)uVar28 & 0x1f;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar20;
  *param_1 = *param_1 + uVar20 * 4;
  *(byte *)((long)param_2 + 0x1a) = (byte)uVar2 & (byte)(uVar15 >> ((ulong)bVar3 & 0x3f));
  bVar3 = *(byte *)(param_1 + 1);
  uVar29 = *(uint *)(puVar6 + 0x38);
  uVar15 = *(ulong *)*param_1;
  uVar28 = (ulong)bVar3 + 0xe;
  uVar20 = uVar28 >> 5;
  puVar1 = (uint *)(*param_1 + uVar20 * 4);
  uVar17 = (uint)uVar28;
  uVar10 = uVar17 & 0x1f;
  iVar18 = *(int *)((long)param_1 + 0xc) - (int)uVar20;
  *(int *)((long)param_1 + 0xc) = iVar18;
  *(char *)(param_1 + 1) = (char)uVar10;
  uVar15 = uVar15 >> ((ulong)bVar3 & 0x3f) & (ulong)uVar29;
  uVar28 = uVar15 & 0xffff;
  uVar27 = (uint)uVar28;
  *param_1 = (long)puVar1;
  uVar29 = (uint)uVar15;
  local_88 = (undefined2)uVar15;
  local_86 = 0;
  pcVar25 = (char *)((long)&local_a0 - ((ulong)(uVar27 + 0xf) & 0x1fff0));
  uVar26 = *puVar1;
  uVar10 = uVar10 + 1;
  uVar24 = uVar10 & 0x1f;
  iVar18 = iVar18 - (uVar10 >> 5);
  puVar13 = (ulong *)(puVar1 + (uVar10 >> 5));
  *(char *)(param_1 + 1) = (char)uVar24;
  *(int *)((long)param_1 + 0xc) = iVar18;
  *param_1 = (long)puVar13;
  if ((uVar26 >> (ulong)(uVar17 & 0x1f) & 1) == 0) {
    uVar10 = uVar24 + 3;
    iVar18 = iVar18 - (uVar10 >> 5);
    puVar1 = (uint *)((long)puVar13 + (ulong)(uVar10 >> 5) * 4);
    uVar26 = *(uint *)(puVar6 + 0xc) & (uint)(*puVar13 >> uVar24);
    *(char *)(param_1 + 1) = (char)(uVar10 & 0x1f);
    uVar24 = (uVar10 & 0x1f) + 1;
    *(int *)((long)param_1 + 0xc) = iVar18;
    iVar18 = iVar18 - (uVar24 >> 5);
    puVar13 = (ulong *)(puVar1 + (uVar24 >> 5));
    *param_1 = (long)puVar1;
    uVar17 = *puVar1;
    uVar20 = (ulong)(uVar24 & 0x1f);
    *(char *)(param_1 + 1) = (char)(uVar24 & 0x1f);
    *param_1 = (long)puVar13;
    *(int *)((long)param_1 + 0xc) = iVar18;
    if ((uVar17 >> (ulong)(uVar10 & 0x1f) & 1) != 0) {
      uVar29 = 0;
      if (uVar27 != 0) {
        pcVar19 = pcVar25;
        uVar11 = uVar28;
        uVar29 = 0;
        while( true ) {
          uVar11 = uVar11 - 1;
          uVar16 = *puVar13;
          uVar10 = (uint)uVar20 + 1;
          iVar18 = iVar18 - (uVar10 >> 5);
          uVar24 = uVar10 & 0x1f;
          puVar13 = (ulong *)((long)puVar13 + (ulong)(uVar10 >> 5) * 4);
          *(char *)(param_1 + 1) = (char)uVar24;
          *(int *)((long)param_1 + 0xc) = iVar18;
          *param_1 = (long)puVar13;
          if (((uint)uVar16 >> (ulong)((uint)uVar20 & 0x1f) & 1) == 0) {
            *pcVar19 = '\0';
          }
          else {
            uVar29 = uVar29 + 1;
            uVar10 = *(uint *)(puVar6 + (long)(int)uVar26 * 4) & (uint)(*puVar13 >> uVar24);
            *(byte *)(param_1 + 1) = (byte)(uVar26 + uVar24) & 0x1f;
            iVar30 = (int)(uVar26 + uVar24) >> 5;
            *(int *)((long)param_1 + 0xc) = iVar18 - iVar30;
            *param_1 = (long)((long)puVar13 + (long)iVar30 * 4);
            cVar5 = (char)uVar10 + '\x01';
            *pcVar19 = cVar5;
            if ((int)(uint)*(byte *)((long)param_2 + 0x1c) <= (int)uVar10) {
              *(char *)((long)param_2 + 0x1c) = cVar5;
            }
          }
          if (uVar11 == 0) break;
          puVar13 = (ulong *)*param_1;
          pcVar19 = pcVar19 + 1;
          uVar20 = (ulong)*(byte *)(param_1 + 1);
          iVar18 = *(int *)((long)param_1 + 0xc);
        }
        local_86 = (undefined2)uVar29;
      }
      goto LAB_03407308;
    }
    local_86 = local_88;
    if (uVar27 != 0) {
      pcVar19 = pcVar25;
      uVar11 = uVar28;
      while( true ) {
        uVar11 = uVar11 - 1;
        iVar30 = uVar26 + (int)uVar20;
        uVar10 = *(uint *)(puVar6 + (long)(int)uVar26 * 4) & (uint)(*puVar13 >> (uVar20 & 0x3f));
        *(byte *)(param_1 + 1) = (byte)iVar30 & 0x1f;
        iVar30 = iVar30 >> 5;
        *(int *)((long)param_1 + 0xc) = iVar18 - iVar30;
        *param_1 = (long)((long)puVar13 + (long)iVar30 * 4);
        cVar5 = (char)uVar10 + '\x01';
        *pcVar19 = cVar5;
        if ((int)(uint)*(byte *)((long)param_2 + 0x1c) <= (int)uVar10) {
          *(char *)((long)param_2 + 0x1c) = cVar5;
        }
        if (uVar11 == 0) break;
        puVar13 = (ulong *)*param_1;
        pcVar19 = pcVar19 + 1;
        uVar20 = (ulong)*(byte *)(param_1 + 1);
        iVar18 = *(int *)((long)param_1 + 0xc);
      }
    }
  }
  else {
    uVar26 = *(uint *)(puVar6 + 0x14);
    uVar10 = uVar24 + 5;
    uVar20 = *puVar13;
    iVar18 = iVar18 - (uVar10 >> 5);
    puVar13 = (ulong *)((long)puVar13 + (ulong)(uVar10 >> 5) * 4);
    uVar11 = (ulong)(uVar10 & 0x1f);
    *(char *)(param_1 + 1) = (char)(uVar10 & 0x1f);
    *(int *)((long)param_1 + 0xc) = iVar18;
    *param_1 = (long)puVar13;
    local_86 = local_88;
    if (uVar27 != 0) {
      uVar26 = uVar26 & (uint)(uVar20 >> uVar24);
      iVar30 = 0;
      local_a0 = param_3;
      local_94 = param_4;
      while( true ) {
        uVar26 = uVar26 + 1;
        uVar10 = 0;
        if (uVar27 - iVar30 != 0) {
          uVar10 = 0x20 - (int)LZCOUNT(uVar27 - iVar30);
        }
        uVar24 = uVar10 + (int)uVar11;
        uVar10 = *(uint *)(puVar6 + (ulong)uVar10 * 4);
        uVar20 = *puVar13;
        *(byte *)(param_1 + 1) = (byte)uVar24 & 0x1f;
        *(uint *)((long)param_1 + 0xc) = iVar18 - (uVar24 >> 5);
        *param_1 = (long)((long)puVar13 + (ulong)(uVar24 >> 5) * 4);
        if ((iVar30 < (int)uVar27) &&
           (uVar10 = uVar10 & (uint)(uVar20 >> (uVar11 & 0x3f)), uVar20 = (ulong)(uVar10 - 1),
           0 < (int)uVar10)) {
          uVar11 = ~(long)iVar30 + uVar28;
          if (uVar20 <= ~(long)iVar30 + uVar28) {
            uVar11 = uVar20;
          }
          memset(pcVar25 + iVar30,uVar26,uVar11 + 1);
          iVar30 = (int)uVar11 + iVar30 + 1;
        }
        *(char *)((long)param_2 + 0x1c) = (char)uVar26;
        if ((int)uVar27 <= iVar30) break;
        puVar13 = (ulong *)*param_1;
        uVar11 = (ulong)*(byte *)(param_1 + 1);
        iVar18 = *(int *)((long)param_1 + 0xc);
      }
      param_3 = local_a0;
      param_4 = local_94;
      goto LAB_03407308;
    }
  }
LAB_03407308:
  bVar3 = *(byte *)(param_1 + 1);
  uVar20 = (ulong)bVar3 + 1;
  uVar10 = *(uint *)*param_1;
  *(byte *)(param_1 + 1) = (byte)uVar20 & 0x1f;
  uVar10 = uVar10 >> (ulong)(bVar3 & 0x1f);
  uVar20 = uVar20 >> 5;
  *param_1 = (long)((uint *)*param_1 + uVar20);
  local_70 = uVar10 & 1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar20;
  if ((uVar10 & 1) == 0) {
    uVar10 = 1;
    if (uVar27 != 0) {
      uVar10 = (0x20U - (int)LZCOUNT(uVar27) >> 3) + 1;
    }
    local_68 = 4;
    if (1 < (uVar29 & 0xffff)) {
      uVar27 = 4;
      if (uVar10 != 3) {
        uVar27 = uVar10;
      }
      iVar18 = (uVar29 & 0xffff) * 2 + (uVar29 & 0xffff) + -6;
      uVar29 = 0;
      if (iVar18 != 0) {
        uVar29 = 0x20 - (int)LZCOUNT(iVar18);
      }
      local_68 = uVar27;
      if ((uVar29 < uVar27 << 2) && (local_68 = uVar27 >> 1, uVar27 < 2)) {
        local_68 = 1;
      }
    }
    uVar9 = 1;
    if (local_68 < uVar10) {
      uVar9 = 2;
    }
    local_6c = 0;
    *(undefined1 *)((long)param_2 + 0x1b) = uVar9;
    uVar7 = FUN_034077b0(param_2,pcVar25,0,param_1,&local_90,param_3,param_4);
  }
  else {
    lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,0x60,0x10);
    param_2[2] = lVar8;
    if (lVar8 == 0) {
      uVar7 = 0xffffff75;
    }
    else {
      *(undefined8 *)(lVar8 + 0x48) = 0;
      uVar20 = (ulong)*(byte *)(param_1 + 1) + 0x20;
      uVar24 = *(uint *)(puVar6 + 0x80) &
               (uint)(*(ulong *)*param_1 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f));
      uVar10 = (uint)uVar20 & 0x1f;
      uVar20 = uVar20 >> 5;
      puVar13 = (ulong *)(*param_1 + uVar20 * 4);
      local_8c = (uVar24 >> 0x15 & 0x3ff) - 0x314;
      iVar18 = *(int *)((long)param_1 + 0xc) - (int)uVar20;
      uVar9 = (undefined1)uVar10;
      *(undefined1 *)(param_1 + 1) = uVar9;
      *(int *)((long)param_1 + 0xc) = iVar18;
      *param_1 = (long)puVar13;
      uVar26 = uVar24 & 0x1fffff;
      if ((uVar24 & 0x1fffff) == 0) {
        local_90 = 0;
        local_8c = -9999;
      }
      else {
        do {
          uVar17 = uVar26;
          local_8c = local_8c + -1;
          uVar26 = uVar17 * 2;
        } while ((uVar17 >> 0x1d & 1) == 0);
        local_90 = uVar17 * -2;
        if (-1 < (int)uVar24) {
          local_90 = uVar17 * 2;
        }
      }
      uVar24 = *(uint *)(puVar6 + 0x80);
      uVar20 = *puVar13;
      *(undefined1 *)(param_1 + 1) = uVar9;
      uVar24 = uVar24 & (uint)(uVar20 >> uVar10);
      *(int *)((long)param_1 + 0xc) = iVar18 + -1;
      *param_1 = (long)puVar13 + 4;
      local_84 = (uVar24 >> 0x15 & 0x3ff) - 0x314;
      uVar10 = uVar24 & 0x1fffff;
      if ((uVar24 & 0x1fffff) == 0) {
        uVar10 = 0;
        local_84 = -9999;
      }
      else {
        do {
          uVar26 = uVar10;
          local_84 = local_84 + -1;
          uVar10 = uVar26 * 2;
        } while ((uVar26 >> 0x1d & 1) == 0);
        uVar10 = uVar26 * -2;
        if (-1 < (int)uVar24) {
          uVar10 = uVar26 * 2;
        }
      }
      *(uint *)(param_2[2] + 0x40) = uVar10;
      uVar11 = *(ulong *)*param_1;
      bVar3 = *(byte *)(param_1 + 1);
      uVar2 = *(undefined4 *)(puVar6 + 0x10);
      uVar20 = (ulong)bVar3 + 4;
      uVar16 = uVar20 >> 5;
      *(byte *)(param_1 + 1) = (byte)uVar20 & 0x1f;
      *param_1 = *param_1 + uVar16 * 4;
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar16;
      *(byte *)(param_2[2] + 0x50) = ((byte)uVar2 & (byte)(uVar11 >> ((ulong)bVar3 & 0x3f))) + 1;
      uVar20 = (ulong)*(byte *)(param_1 + 1) + 1 >> 5;
      *(byte *)(param_1 + 1) = (byte)((ulong)*(byte *)(param_1 + 1) + 1) & 0x1f;
      *param_1 = *param_1 + uVar20 * 4;
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar20;
      lVar8 = param_2[2];
      *(int *)(lVar8 + 0x40) = *(int *)(lVar8 + 0x40) >> (*(byte *)(lVar8 + 0x50) & 0x1f);
      bVar4 = *(byte *)(param_2[2] + 0x50);
      uVar10 = (uint)bVar4;
      local_84 = local_84 + uVar10;
      bVar3 = *(byte *)((long)param_2 + 0x1a);
      if (bVar3 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar26 = bVar3 - 1;
      uVar24 = (uint)LZCOUNT(uVar27) ^ 0x1f;
      if ((uVar15 & 0xffff) == 0) {
        uVar24 = 0xffffffff;
      }
      uVar17 = 0;
      uVar12 = (uint)bVar3;
      if (uVar12 != 0) {
        uVar17 = (int)(uVar26 * uVar24) / (int)uVar12;
      }
      uVar27 = uVar27 >> (ulong)(uVar17 & 0x1f);
      while( true ) {
        lVar8 = (long)(int)uVar27;
        lVar21 = (long)(int)(uVar27 + 1);
        if (uVar26 < 7) {
          lVar23 = 1;
          lVar22 = 1;
        }
        else {
          lVar23 = 1;
          lVar22 = 1;
          iVar18 = -(uVar12 & 0xf8);
          do {
            iVar18 = iVar18 + 8;
            lVar22 = lVar22 * lVar8 * lVar8 * lVar8 * lVar8 * lVar8 * lVar8 * lVar8 * lVar8;
            lVar23 = lVar23 * lVar21 * lVar21 * lVar21 * lVar21 * lVar21 * lVar21 * lVar21 * lVar21;
          } while (iVar18 != 0);
        }
        if ((bVar3 & 7) != 0) {
          uVar24 = uVar12 & 7;
          do {
            lVar22 = lVar22 * lVar8;
            uVar24 = uVar24 - 1;
            lVar23 = lVar23 * lVar21;
          } while (uVar24 != 0);
        }
        if ((long)uVar28 < lVar23 && lVar22 <= (long)uVar28) break;
        iVar18 = 1;
        if ((long)uVar28 < lVar22) {
          iVar18 = -1;
        }
        uVar27 = iVar18 + uVar27;
      }
      puVar14 = (ushort *)(pcVar25 + -(lVar8 * 2 + 0xfU & 0xfffffffffffffff0));
      local_78 = puVar14;
      if (0 < (int)uVar27) {
        puVar13 = (ulong *)*param_1;
        uVar15 = (ulong)uVar27;
        uVar28 = (ulong)*(byte *)(param_1 + 1);
        iVar18 = *(int *)((long)param_1 + 0xc);
        while( true ) {
          uVar15 = uVar15 - 1;
          uVar11 = *puVar13;
          uVar2 = *(undefined4 *)(puVar6 + (ulong)bVar4 * 4);
          uVar27 = (uint)bVar4 + (int)uVar28;
          iVar18 = iVar18 - (uVar27 >> 5);
          uVar20 = uVar28 & 0x3f;
          puVar13 = (ulong *)((long)puVar13 + (ulong)(uVar27 >> 5) * 4);
          uVar28 = (ulong)(uVar27 & 0x1f);
          *(char *)(param_1 + 1) = (char)(uVar27 & 0x1f);
          *(int *)((long)param_1 + 0xc) = iVar18;
          *param_1 = (long)puVar13;
          *puVar14 = (ushort)uVar2 & (ushort)(uVar11 >> uVar20);
          if (uVar15 == 0) break;
          puVar14 = puVar14 + 1;
          bVar4 = *(byte *)(param_2[2] + 0x50);
        }
      }
      uVar10 = bVar3 * uVar10 + 8 >> 3;
      local_6c = 1;
      local_68 = 4;
      if (1 < (uVar29 & 0xffff)) {
        uVar27 = 4;
        if (uVar10 != 3) {
          uVar27 = uVar10;
        }
        iVar18 = (uVar29 & 0xffff) * 2 + (uVar29 & 0xffff) + -6;
        uVar29 = 0;
        if (iVar18 != 0) {
          uVar29 = 0x20 - (int)LZCOUNT(iVar18);
        }
        local_68 = uVar27;
        if ((uVar29 < uVar27 << 2) && (local_68 = uVar27 >> 1, uVar27 < 2)) {
          local_68 = 1;
        }
      }
      uVar9 = 1;
      if (local_68 < uVar10) {
        uVar9 = 2;
      }
      *(undefined1 *)((long)param_2 + 0x1b) = uVar9;
      uVar7 = FUN_034077b0(param_2,pcVar25,lVar8,param_1,&local_90,param_3,param_4);
    }
  }
  return uVar7;
}


