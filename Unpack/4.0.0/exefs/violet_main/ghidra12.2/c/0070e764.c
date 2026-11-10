/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0070e764; name: FUN_0070e764
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0070e764(undefined *param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  void *__src;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  long *plVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  size_t sVar15;
  uint *puVar16;
  long *plVar17;
  long *local_58;
  long *plStack_50;
  ulong local_48;
  
  pbVar7 = *(byte **)(param_1 + 0x88);
  bVar6 = *pbVar7;
  if ((bVar6 & 1) == 0) {
    if (bVar6 < 2) goto LAB_0070e824;
    FUN_00532960(pbVar7 + 1,bVar6 >> 1);
    pbVar7 = *(byte **)(param_1 + 0x88);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) == 0) goto LAB_0070e7dc;
LAB_0070e7b0:
    sVar15 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar15 < 0x80) goto LAB_0070e7e0;
LAB_0070e860:
    param_2 = (byte *)FUN_0052c95c(param_3,1,pbVar7,param_2);
    pbVar7 = *(byte **)(param_1 + 0x90);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) == 0) goto LAB_0070e830;
LAB_0070e880:
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_0070e8e4;
    FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
    pbVar7 = *(byte **)(param_1 + 0x90);
    bVar6 = *pbVar7;
joined_r0x0070e84c:
    if ((bVar6 & 1) == 0) {
      sVar15 = (size_t)(bVar6 >> 1);
LAB_0070e8a0:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (byte)sVar15;
        pbVar9 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        memcpy(param_2 + 2,pbVar9,sVar15);
        param_2 = param_2 + 2 + sVar15;
        goto LAB_0070e8e4;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar15 < 0x80) goto LAB_0070e8a0;
    }
    param_2 = (byte *)FUN_0052c95c(param_3,2,pbVar7,param_2);
    uVar13 = *(uint *)(param_1 + 0x100);
    if (uVar13 != 0) goto LAB_0070e8ec;
LAB_0070e984:
    plVar8 = *(long **)(param_1 + 0x20);
    lVar10 = *plVar8;
  }
  else {
    if (*(long *)(pbVar7 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
      pbVar7 = *(byte **)(param_1 + 0x88);
      bVar6 = *pbVar7;
      if ((bVar6 & 1) != 0) goto LAB_0070e7b0;
LAB_0070e7dc:
      sVar15 = (size_t)(bVar6 >> 1);
LAB_0070e7e0:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar15) goto LAB_0070e860;
      *param_2 = 10;
      param_2[1] = (byte)sVar15;
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar9,sVar15);
      param_2 = param_2 + 2 + sVar15;
    }
LAB_0070e824:
    pbVar7 = *(byte **)(param_1 + 0x90);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) != 0) goto LAB_0070e880;
LAB_0070e830:
    if (1 < bVar6) {
      FUN_00532960(pbVar7 + 1,bVar6 >> 1);
      pbVar7 = *(byte **)(param_1 + 0x90);
      bVar6 = *pbVar7;
      goto joined_r0x0070e84c;
    }
LAB_0070e8e4:
    uVar13 = *(uint *)(param_1 + 0x100);
    if (uVar13 == 0) goto LAB_0070e984;
LAB_0070e8ec:
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x28;
      if (0x7f < uVar13) goto LAB_0070e964;
LAB_0070e908:
      param_2[1] = (byte)uVar13;
      param_2 = param_2 + 2;
      plVar8 = *(long **)(param_1 + 0x20);
      lVar10 = *plVar8;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x100);
      *param_2 = 0x28;
      if (uVar13 < 0x80) goto LAB_0070e908;
LAB_0070e964:
      param_2[1] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[2] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 3;
        goto LAB_0070e984;
      }
      uVar12 = (ulong)(long)(int)uVar13 >> 7;
      param_2 = param_2 + 3;
      do {
        pbVar7 = param_2;
        uVar5 = uVar12 >> 7;
        pbVar7[-1] = (byte)uVar12 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar12 >> 0xe;
        uVar12 = uVar5;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar5;
      plVar8 = *(long **)(param_1 + 0x20);
      lVar10 = *plVar8;
    }
  }
  if (lVar10 != 0) {
    if (lVar10 == 1 || *(char *)((long)param_3 + 0x3a) == '\0') {
      local_48 = plVar8[3];
      uVar12 = plVar8[1];
      plStack_50 = plVar8;
      if (local_48 < uVar12) {
        do {
          local_58 = *(long **)(plVar8[4] + local_48 * 8);
          if (local_58 != (long *)0x0) {
            if (local_58 == *(long **)(plVar8[4] + (local_48 ^ 1) * 8)) {
              local_58 = *(long **)(*local_58 + 0x20);
            }
            goto joined_r0x0070ea84;
          }
          local_48 = local_48 + 1;
        } while (uVar12 != local_48);
        local_58 = (long *)0x0;
        local_48 = uVar12;
      }
      else {
        local_58 = (long *)0x0;
      }
joined_r0x0070ea84:
      do {
        if (local_58 == (long *)0x0) goto LAB_0070ec10;
        param_2 = (byte *)FUN_007102fc(6,local_58[1],local_58[1] + 0x18,param_2,param_3);
        pbVar7 = (byte *)local_58[1];
        if ((*pbVar7 & 1) == 0) {
          FUN_00532960(pbVar7 + 1,*pbVar7 >> 1);
          bVar6 = pbVar7[0x18];
          if ((bVar6 & 1) == 0) goto LAB_0070ea8c;
LAB_0070eb04:
          uVar12 = *(ulong *)(pbVar7 + 0x20);
          pbVar7 = *(byte **)(pbVar7 + 0x28);
        }
        else {
          FUN_00532960(*(undefined8 *)(pbVar7 + 0x10),*(undefined8 *)(pbVar7 + 8));
          bVar6 = pbVar7[0x18];
          if ((bVar6 & 1) != 0) goto LAB_0070eb04;
LAB_0070ea8c:
          pbVar7 = pbVar7 + 0x19;
          uVar12 = (ulong)(bVar6 >> 1);
        }
        FUN_00532960(pbVar7,uVar12);
        FUN_006ef338(&local_58);
      } while( true );
    }
    plVar8 = (long *)FUN_0049e7b0(PTR_FUN_047cba38,lVar10 << 3);
    plStack_50 = *(long **)(param_1 + 0x20);
    local_48 = plStack_50[3];
    uVar12 = plStack_50[1];
    if (local_48 < uVar12) {
      do {
        local_58 = *(long **)(plStack_50[4] + local_48 * 8);
        if (local_58 != (long *)0x0) {
          if (local_58 == *(long **)(plStack_50[4] + (local_48 ^ 1) * 8)) {
            local_58 = *(long **)(*local_58 + 0x20);
          }
          goto LAB_0070eb24;
        }
        local_48 = local_48 + 1;
      } while (uVar12 != local_48);
      local_58 = (long *)0x0;
      local_48 = uVar12;
    }
    else {
      local_58 = (long *)0x0;
    }
LAB_0070eb24:
    lVar10 = 0;
    while (local_58 != (long *)0x0) {
      plVar8[lVar10] = local_58[1];
      FUN_006ef338(&local_58);
      lVar10 = lVar10 + 1;
    }
    FUN_0071f930(plVar8,plVar8 + lVar10,&local_58);
    if (lVar10 == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0070ec10;
    }
    else {
      plVar17 = plVar8;
      do {
        while( true ) {
          param_2 = (byte *)FUN_007102fc(6,*plVar17,*plVar17 + 0x18,param_2,param_3);
          pbVar7 = (byte *)*plVar17;
          if ((*pbVar7 & 1) != 0) break;
          FUN_00532960(pbVar7 + 1,*pbVar7 >> 1);
          bVar6 = pbVar7[0x18];
          if ((bVar6 & 1) == 0) goto LAB_0070eb6c;
LAB_0070ebdc:
          FUN_00532960(*(undefined8 *)(pbVar7 + 0x28),*(undefined8 *)(pbVar7 + 0x20));
          lVar10 = lVar10 + -1;
          plVar17 = plVar17 + 1;
          if (lVar10 == 0) goto LAB_0070ebf8;
        }
        FUN_00532960(*(undefined8 *)(pbVar7 + 0x10),*(undefined8 *)(pbVar7 + 8));
        bVar6 = pbVar7[0x18];
        if ((bVar6 & 1) != 0) goto LAB_0070ebdc;
LAB_0070eb6c:
        FUN_00532960(pbVar7 + 0x19,bVar6 >> 1);
        lVar10 = lVar10 + -1;
        plVar17 = plVar17 + 1;
      } while (lVar10 != 0);
    }
LAB_0070ebf8:
    FUN_0049e800(plVar8);
    FUN_0049e7e0(PTR_LAB_047cba48,plVar8);
  }
LAB_0070ec10:
  plVar8 = *(long **)(param_1 + 0x38);
  lVar10 = *plVar8;
  if (lVar10 != 0) {
    if ((lVar10 == 1) || (*(char *)((long)param_3 + 0x3a) == '\0')) {
      local_48 = plVar8[3];
      uVar12 = plVar8[1];
      plStack_50 = plVar8;
      if (local_48 < uVar12) {
        do {
          local_58 = *(long **)(plVar8[4] + local_48 * 8);
          if (local_58 != (long *)0x0) {
            if (local_58 == *(long **)(plVar8[4] + (local_48 ^ 1) * 8)) {
              local_58 = *(long **)(*local_58 + 0x20);
            }
            goto joined_r0x0070ede4;
          }
          local_48 = local_48 + 1;
        } while (uVar12 != local_48);
        local_58 = (long *)0x0;
        local_48 = uVar12;
      }
      else {
        local_58 = (long *)0x0;
      }
joined_r0x0070ede4:
      do {
        if (local_58 == (long *)0x0) goto LAB_0070ede8;
        param_2 = (byte *)FUN_007102fc(7,local_58[1],local_58[1] + 0x18,param_2,param_3);
        pbVar7 = (byte *)local_58[1];
        if ((*pbVar7 & 1) == 0) {
          FUN_00532960(pbVar7 + 1,*pbVar7 >> 1);
          bVar6 = pbVar7[0x18];
          if ((bVar6 & 1) == 0) goto LAB_0070ee20;
LAB_0070ee98:
          uVar12 = *(ulong *)(pbVar7 + 0x20);
          pbVar7 = *(byte **)(pbVar7 + 0x28);
        }
        else {
          FUN_00532960(*(undefined8 *)(pbVar7 + 0x10),*(undefined8 *)(pbVar7 + 8));
          bVar6 = pbVar7[0x18];
          if ((bVar6 & 1) != 0) goto LAB_0070ee98;
LAB_0070ee20:
          pbVar7 = pbVar7 + 0x19;
          uVar12 = (ulong)(bVar6 >> 1);
        }
        FUN_00532960(pbVar7,uVar12);
        FUN_006ef338(&local_58);
      } while( true );
    }
    plVar8 = (long *)FUN_0049e7b0(PTR_FUN_047cba38,lVar10 << 3);
    plStack_50 = *(long **)(param_1 + 0x38);
    local_48 = plStack_50[3];
    uVar12 = plStack_50[1];
    if (local_48 < uVar12) {
      do {
        local_58 = *(long **)(plStack_50[4] + local_48 * 8);
        if (local_58 != (long *)0x0) {
          if (local_58 == *(long **)(plStack_50[4] + (local_48 ^ 1) * 8)) {
            local_58 = *(long **)(*local_58 + 0x20);
          }
          goto LAB_0070ecd4;
        }
        local_48 = local_48 + 1;
      } while (uVar12 != local_48);
      local_58 = (long *)0x0;
      local_48 = uVar12;
    }
    else {
      local_58 = (long *)0x0;
    }
LAB_0070ecd4:
    lVar10 = 0;
    while (local_58 != (long *)0x0) {
      plVar8[lVar10] = local_58[1];
      FUN_006ef338(&local_58);
      lVar10 = lVar10 + 1;
    }
    FUN_0071f930(plVar8,plVar8 + lVar10,&local_58);
    if (lVar10 == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0070ede8;
    }
    else {
      plVar17 = plVar8;
      do {
        while( true ) {
          param_2 = (byte *)FUN_007102fc(7,*plVar17,*plVar17 + 0x18,param_2,param_3);
          pbVar7 = (byte *)*plVar17;
          if ((*pbVar7 & 1) != 0) break;
          FUN_00532960(pbVar7 + 1,*pbVar7 >> 1);
          bVar6 = pbVar7[0x18];
          if ((bVar6 & 1) == 0) goto LAB_0070ed1c;
LAB_0070ed8c:
          FUN_00532960(*(undefined8 *)(pbVar7 + 0x28),*(undefined8 *)(pbVar7 + 0x20));
          lVar10 = lVar10 + -1;
          plVar17 = plVar17 + 1;
          if (lVar10 == 0) goto LAB_0070eda8;
        }
        FUN_00532960(*(undefined8 *)(pbVar7 + 0x10),*(undefined8 *)(pbVar7 + 8));
        bVar6 = pbVar7[0x18];
        if ((bVar6 & 1) != 0) goto LAB_0070ed8c;
LAB_0070ed1c:
        FUN_00532960(pbVar7 + 0x19,bVar6 >> 1);
        lVar10 = lVar10 + -1;
        plVar17 = plVar17 + 1;
      } while (lVar10 != 0);
    }
LAB_0070eda8:
    FUN_0049e800(plVar8);
    FUN_0049e7e0(PTR_LAB_047cba48,plVar8);
  }
LAB_0070ede8:
  uVar13 = *(uint *)(param_1 + 0x104);
  if (uVar13 == 0) {
LAB_0070eee4:
    uVar13 = *(uint *)(param_1 + 0x108);
    if (uVar13 != 0) goto LAB_0070eeec;
LAB_0070ef90:
    cVar2 = param_1[0x118];
  }
  else {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x40;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x104);
      *param_2 = 0x40;
    }
    if (uVar13 < 0x80) {
      param_2[1] = (byte)uVar13;
      param_2 = param_2 + 2;
      uVar13 = *(uint *)(param_1 + 0x108);
    }
    else {
      param_2[1] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[2] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 3;
        goto LAB_0070eee4;
      }
      uVar12 = (ulong)(long)(int)uVar13 >> 7;
      param_2 = param_2 + 3;
      do {
        pbVar7 = param_2;
        uVar5 = uVar12 >> 7;
        pbVar7[-1] = (byte)uVar12 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar12 >> 0xe;
        uVar12 = uVar5;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar5;
      uVar13 = *(uint *)(param_1 + 0x108);
    }
    if (uVar13 == 0) goto LAB_0070ef90;
LAB_0070eeec:
    uVar12 = (ulong)uVar13;
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x48;
      if (0x7f < uVar13) goto LAB_0070ef70;
LAB_0070ef08:
      param_2[1] = (byte)uVar12;
      param_2 = param_2 + 2;
      cVar2 = param_1[0x118];
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x108);
      uVar12 = (ulong)uVar13;
      *param_2 = 0x48;
      if (uVar13 < 0x80) goto LAB_0070ef08;
LAB_0070ef70:
      param_2[1] = (byte)uVar12 | 0x80;
      uVar5 = (ulong)(long)(int)uVar12 >> 7;
      if (uVar12 >> 0xe == 0) {
        param_2[2] = (byte)uVar5;
        param_2 = param_2 + 3;
        goto LAB_0070ef90;
      }
      param_2 = param_2 + 3;
      do {
        pbVar7 = param_2;
        uVar12 = uVar5 >> 7;
        pbVar7[-1] = (byte)uVar5 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar5 >> 0xe;
        uVar5 = uVar12;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar12;
      cVar2 = param_1[0x118];
    }
  }
  if (cVar2 != '\0') {
    if (param_2 < (byte *)*param_3) {
      bVar6 = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      bVar6 = param_1[0x118];
    }
    *param_2 = 0x50;
    param_2[1] = bVar6;
    param_2 = param_2 + 2;
  }
  uVar13 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar13) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x5a;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      *param_2 = 0x5a;
    }
    pbVar7 = param_2 + 1;
    if (0x7f < uVar13) {
      pbVar9 = pbVar7;
      uVar14 = uVar13;
      do {
        uVar13 = uVar14 >> 7;
        uVar3 = uVar14 >> 0xe;
        pbVar7 = pbVar9 + 1;
        *pbVar9 = (byte)uVar14 | 0x80;
        pbVar9 = pbVar7;
        uVar14 = uVar13;
      } while (uVar3 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x48);
    puVar1 = puVar16 + *(int *)(param_1 + 0x40);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar13 = *puVar16;
        pbVar7 = param_2;
        if (uVar13 < 0x80) goto LAB_0070eff4;
LAB_0070f018:
        *param_2 = (byte)uVar13 | 0x80;
        uVar12 = (ulong)(long)(int)uVar13 >> 7;
        if (((ulong)(long)(int)uVar13 >> 0xe & 0x3ffff) == 0) {
          param_2[1] = (byte)uVar12;
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          do {
            pbVar7 = param_2;
            uVar5 = uVar12 >> 7;
            pbVar7[-1] = (byte)uVar12 | 0x80;
            param_2 = pbVar7 + 1;
            uVar11 = uVar12 >> 0xe;
            uVar12 = uVar5;
          } while (uVar11 != 0);
          *pbVar7 = (byte)uVar5;
        }
      }
      else {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        uVar13 = *puVar16;
        pbVar7 = param_2;
        if (0x7f < uVar13) goto LAB_0070f018;
LAB_0070eff4:
        param_2 = pbVar7 + 1;
        *pbVar7 = (byte)uVar13;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 < puVar1);
  }
  pbVar7 = *(byte **)(param_1 + 0x98);
  bVar6 = *pbVar7;
  if ((bVar6 & 1) == 0) {
    if (bVar6 < 2) goto LAB_0070f120;
    FUN_00532960(pbVar7 + 1,bVar6 >> 1);
    pbVar7 = *(byte **)(param_1 + 0x98);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) == 0) goto LAB_0070f0d8;
LAB_0070f0ac:
    sVar15 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar15 < 0x80) goto LAB_0070f0dc;
LAB_0070f18c:
    param_2 = (byte *)FUN_0052c95c(param_3,0xc,pbVar7,param_2);
    pbVar7 = *(byte **)(param_1 + 0xa0);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) == 0) goto LAB_0070f12c;
LAB_0070f1ac:
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_0070f210;
    FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
    pbVar7 = *(byte **)(param_1 + 0xa0);
    bVar6 = *pbVar7;
joined_r0x0070f1c4:
    if ((bVar6 & 1) == 0) {
      sVar15 = (size_t)(bVar6 >> 1);
LAB_0070f1cc:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x6a;
        param_2[1] = (byte)sVar15;
        pbVar9 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        memcpy(param_2 + 2,pbVar9,sVar15);
        param_2 = param_2 + 2 + sVar15;
        goto LAB_0070f210;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar15 < 0x80) goto LAB_0070f1cc;
    }
    param_2 = (byte *)FUN_0052c95c(param_3,0xd,pbVar7,param_2);
    uVar13 = *(uint *)(param_1 + 0x10c);
    if (uVar13 != 0) goto LAB_0070f218;
LAB_0070f348:
    uVar13 = *(uint *)(param_1 + 0x110);
joined_r0x0070f240:
    if (uVar13 != 0) goto LAB_0070f350;
LAB_0070f244:
    uVar13 = *(uint *)(param_1 + 0x114);
joined_r0x0070f428:
    if (uVar13 != 0) goto LAB_0070f42c;
LAB_0070f24c:
    pbVar7 = *(byte **)(param_1 + 0xa8);
    bVar6 = *pbVar7;
joined_r0x0070f568:
    if ((bVar6 & 1) != 0) goto LAB_0070f45c;
LAB_0070f258:
    if (1 < bVar6) {
      FUN_00532960(pbVar7 + 1,bVar6 >> 1);
      pbVar7 = *(byte **)(param_1 + 0xa8);
      bVar6 = *pbVar7;
      goto joined_r0x0070f474;
    }
LAB_0070f4c0:
    uVar13 = *(uint *)(param_1 + 0x11c);
    if (uVar13 == 0) goto LAB_0070f5e8;
LAB_0070f4c8:
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0x90;
      param_2[1] = 1;
      if (0x7f < uVar13) goto LAB_0070f5c8;
LAB_0070f4e4:
      param_2[2] = (byte)uVar13;
      param_2 = param_2 + 3;
      uVar13 = *(uint *)(param_1 + 0x68);
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x11c);
      param_2[0] = 0x90;
      param_2[1] = 1;
      if (uVar13 < 0x80) goto LAB_0070f4e4;
LAB_0070f5c8:
      param_2[2] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[3] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 4;
        goto LAB_0070f5e8;
      }
      uVar12 = (ulong)(long)(int)uVar13 >> 7;
      param_2 = param_2 + 4;
      do {
        pbVar7 = param_2;
        uVar5 = uVar12 >> 7;
        pbVar7[-1] = (byte)uVar12 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar12 >> 0xe;
        uVar12 = uVar5;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar5;
      uVar13 = *(uint *)(param_1 + 0x68);
    }
  }
  else {
    if (*(long *)(pbVar7 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
      pbVar7 = *(byte **)(param_1 + 0x98);
      bVar6 = *pbVar7;
      if ((bVar6 & 1) != 0) goto LAB_0070f0ac;
LAB_0070f0d8:
      sVar15 = (size_t)(bVar6 >> 1);
LAB_0070f0dc:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar15) goto LAB_0070f18c;
      *param_2 = 0x62;
      param_2[1] = (byte)sVar15;
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar9,sVar15);
      param_2 = param_2 + 2 + sVar15;
    }
LAB_0070f120:
    pbVar7 = *(byte **)(param_1 + 0xa0);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) != 0) goto LAB_0070f1ac;
LAB_0070f12c:
    if (1 < bVar6) {
      FUN_00532960(pbVar7 + 1,bVar6 >> 1);
      pbVar7 = *(byte **)(param_1 + 0xa0);
      bVar6 = *pbVar7;
      goto joined_r0x0070f1c4;
    }
LAB_0070f210:
    uVar13 = *(uint *)(param_1 + 0x10c);
    if (uVar13 == 0) goto LAB_0070f348;
LAB_0070f218:
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x70;
      if (0x7f < uVar13) goto LAB_0070f328;
LAB_0070f234:
      param_2[1] = (byte)uVar13;
      param_2 = param_2 + 2;
      uVar13 = *(uint *)(param_1 + 0x110);
      goto joined_r0x0070f240;
    }
    param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
    uVar13 = *(uint *)(param_1 + 0x10c);
    *param_2 = 0x70;
    if (uVar13 < 0x80) goto LAB_0070f234;
LAB_0070f328:
    param_2[1] = (byte)uVar13 | 0x80;
    if (uVar13 >> 0xe == 0) {
      param_2[2] = (byte)((ulong)(long)(int)uVar13 >> 7);
      param_2 = param_2 + 3;
      goto LAB_0070f348;
    }
    uVar12 = (ulong)(long)(int)uVar13 >> 7;
    param_2 = param_2 + 3;
    do {
      pbVar7 = param_2;
      uVar5 = uVar12 >> 7;
      pbVar7[-1] = (byte)uVar12 | 0x80;
      param_2 = pbVar7 + 1;
      uVar11 = uVar12 >> 0xe;
      uVar12 = uVar5;
    } while (uVar11 != 0);
    *pbVar7 = (byte)uVar5;
    uVar13 = *(uint *)(param_1 + 0x110);
    if (uVar13 == 0) goto LAB_0070f244;
LAB_0070f350:
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x78;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x110);
      *param_2 = 0x78;
    }
    if (uVar13 < 0x80) {
      param_2[1] = (byte)uVar13;
      param_2 = param_2 + 2;
      uVar13 = *(uint *)(param_1 + 0x114);
    }
    else {
      param_2[1] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe != 0) {
        uVar12 = (ulong)(long)(int)uVar13 >> 7;
        param_2 = param_2 + 3;
        do {
          pbVar7 = param_2;
          uVar5 = uVar12 >> 7;
          pbVar7[-1] = (byte)uVar12 | 0x80;
          param_2 = pbVar7 + 1;
          uVar11 = uVar12 >> 0xe;
          uVar12 = uVar5;
        } while (uVar11 != 0);
        *pbVar7 = (byte)uVar5;
        uVar13 = *(uint *)(param_1 + 0x114);
        goto joined_r0x0070f428;
      }
      param_2[2] = (byte)((ulong)(long)(int)uVar13 >> 7);
      param_2 = param_2 + 3;
      uVar13 = *(uint *)(param_1 + 0x114);
    }
    if (uVar13 == 0) goto LAB_0070f24c;
LAB_0070f42c:
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0x80;
      param_2[1] = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x114);
      param_2[0] = 0x80;
      param_2[1] = 1;
    }
    if (uVar13 < 0x80) {
      param_2[2] = (byte)uVar13;
      param_2 = param_2 + 3;
      pbVar7 = *(byte **)(param_1 + 0xa8);
      bVar6 = *pbVar7;
      goto joined_r0x0070f568;
    }
    param_2[2] = (byte)uVar13 | 0x80;
    if (uVar13 >> 0xe == 0) {
      param_2[3] = (byte)((ulong)(long)(int)uVar13 >> 7);
      param_2 = param_2 + 4;
      pbVar7 = *(byte **)(param_1 + 0xa8);
      bVar6 = *pbVar7;
      goto joined_r0x0070f568;
    }
    uVar12 = (ulong)(long)(int)uVar13 >> 7;
    param_2 = param_2 + 4;
    do {
      pbVar7 = param_2;
      uVar5 = uVar12 >> 7;
      pbVar7[-1] = (byte)uVar12 | 0x80;
      param_2 = pbVar7 + 1;
      uVar11 = uVar12 >> 0xe;
      uVar12 = uVar5;
    } while (uVar11 != 0);
    *pbVar7 = (byte)uVar5;
    pbVar7 = *(byte **)(param_1 + 0xa8);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) == 0) goto LAB_0070f258;
LAB_0070f45c:
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_0070f4c0;
    FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
    pbVar7 = *(byte **)(param_1 + 0xa8);
    bVar6 = *pbVar7;
joined_r0x0070f474:
    if ((bVar6 & 1) == 0) {
      sVar15 = (size_t)(bVar6 >> 1);
LAB_0070f47c:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xd) {
        param_2[0] = 0x8a;
        param_2[1] = 1;
        param_2[2] = (byte)sVar15;
        pbVar9 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        memcpy(param_2 + 3,pbVar9,sVar15);
        param_2 = param_2 + 3 + sVar15;
        goto LAB_0070f4c0;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar15 < 0x80) goto LAB_0070f47c;
    }
    param_2 = (byte *)FUN_0052c95c(param_3,0x11,pbVar7,param_2);
    uVar13 = *(uint *)(param_1 + 0x11c);
    if (uVar13 != 0) goto LAB_0070f4c8;
LAB_0070f5e8:
    uVar13 = *(uint *)(param_1 + 0x68);
  }
  if (0 < (int)uVar13) {
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0x9a;
      param_2[1] = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      param_2[0] = 0x9a;
      param_2[1] = 1;
    }
    pbVar7 = param_2 + 2;
    if (0x7f < uVar13) {
      pbVar9 = pbVar7;
      uVar14 = uVar13;
      do {
        uVar13 = uVar14 >> 7;
        uVar3 = uVar14 >> 0xe;
        pbVar7 = pbVar9 + 1;
        *pbVar9 = (byte)uVar14 | 0x80;
        pbVar9 = pbVar7;
        uVar14 = uVar13;
      } while (uVar3 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x60);
    puVar1 = puVar16 + *(int *)(param_1 + 0x58);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar13 = *puVar16;
        pbVar7 = param_2;
        if (uVar13 < 0x80) goto LAB_0070f624;
LAB_0070f648:
        *param_2 = (byte)uVar13 | 0x80;
        uVar12 = (ulong)(long)(int)uVar13 >> 7;
        if (((ulong)(long)(int)uVar13 >> 0xe & 0x3ffff) == 0) {
          param_2[1] = (byte)uVar12;
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          do {
            pbVar7 = param_2;
            uVar5 = uVar12 >> 7;
            pbVar7[-1] = (byte)uVar12 | 0x80;
            param_2 = pbVar7 + 1;
            uVar11 = uVar12 >> 0xe;
            uVar12 = uVar5;
          } while (uVar11 != 0);
          *pbVar7 = (byte)uVar5;
        }
      }
      else {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        uVar13 = *puVar16;
        pbVar7 = param_2;
        if (0x7f < uVar13) goto LAB_0070f648;
LAB_0070f624:
        param_2 = pbVar7 + 1;
        *pbVar7 = (byte)uVar13;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 < puVar1);
  }
  uVar13 = *(uint *)(param_1 + 0x120);
  if (uVar13 == 0) {
LAB_0070f7c0:
    uVar13 = *(uint *)(param_1 + 0x124);
    if (uVar13 != 0) goto LAB_0070f7c8;
LAB_0070f714:
    uVar13 = *(uint *)(param_1 + 0x128);
joined_r0x0070f718:
    if (uVar13 != 0) goto LAB_0070f8a4;
LAB_0070f71c:
    cVar2 = param_1[0x119];
  }
  else {
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0xa0;
      param_2[1] = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x120);
      param_2[0] = 0xa0;
      param_2[1] = 1;
    }
    if (uVar13 < 0x80) {
      param_2[2] = (byte)uVar13;
      param_2 = param_2 + 3;
      uVar13 = *(uint *)(param_1 + 0x124);
    }
    else {
      param_2[2] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[3] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 4;
        goto LAB_0070f7c0;
      }
      uVar12 = (ulong)(long)(int)uVar13 >> 7;
      param_2 = param_2 + 4;
      do {
        pbVar7 = param_2;
        uVar5 = uVar12 >> 7;
        pbVar7[-1] = (byte)uVar12 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar12 >> 0xe;
        uVar12 = uVar5;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar5;
      uVar13 = *(uint *)(param_1 + 0x124);
    }
    if (uVar13 == 0) goto LAB_0070f714;
LAB_0070f7c8:
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0xa8;
      param_2[1] = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x124);
      param_2[0] = 0xa8;
      param_2[1] = 1;
    }
    if (0x7f < uVar13) {
      param_2[2] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[3] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 4;
        uVar13 = *(uint *)(param_1 + 0x128);
        goto joined_r0x0070f870;
      }
      uVar12 = (ulong)(long)(int)uVar13 >> 7;
      param_2 = param_2 + 4;
      do {
        pbVar7 = param_2;
        uVar5 = uVar12 >> 7;
        pbVar7[-1] = (byte)uVar12 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar12 >> 0xe;
        uVar12 = uVar5;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar5;
      uVar13 = *(uint *)(param_1 + 0x128);
      goto joined_r0x0070f718;
    }
    param_2[2] = (byte)uVar13;
    param_2 = param_2 + 3;
    uVar13 = *(uint *)(param_1 + 0x128);
joined_r0x0070f870:
    if (uVar13 == 0) goto LAB_0070f71c;
LAB_0070f8a4:
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0xb0;
      param_2[1] = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x128);
      param_2[0] = 0xb0;
      param_2[1] = 1;
    }
    if (uVar13 < 0x80) {
      param_2[2] = (byte)uVar13;
      param_2 = param_2 + 3;
      cVar2 = param_1[0x119];
    }
    else {
      param_2[2] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[3] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 4;
        cVar2 = param_1[0x119];
      }
      else {
        uVar12 = (ulong)(long)(int)uVar13 >> 7;
        param_2 = param_2 + 4;
        do {
          pbVar7 = param_2;
          uVar5 = uVar12 >> 7;
          pbVar7[-1] = (byte)uVar12 | 0x80;
          param_2 = pbVar7 + 1;
          uVar11 = uVar12 >> 0xe;
          uVar12 = uVar5;
        } while (uVar11 != 0);
        *pbVar7 = (byte)uVar5;
        cVar2 = param_1[0x119];
      }
    }
  }
  puVar4 = PTR_DAT_047cfc00;
  if (cVar2 != '\0') {
    if (param_2 < (byte *)*param_3) {
      bVar6 = 1;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      bVar6 = param_1[0x119];
    }
    param_2[0] = 0xb8;
    param_2[1] = 1;
    param_2[2] = bVar6;
    param_2 = param_2 + 3;
    puVar4 = PTR_DAT_047cfc00;
  }
  PTR_DAT_047cfc00 = puVar4;
  if (param_1 != puVar4) {
    lVar10 = *(long *)(param_1 + 0xb8);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xb8);
      }
      param_2[0] = 0xc2;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x28);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_0026a5b8(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 0xc0);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xc0);
      }
      param_2[0] = 0xca;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 200);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 200);
      }
      param_2[0] = 0xd2;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 0xd0);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xd0);
      }
      param_2[0] = 0xda;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 0xd8);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xd8);
      }
      param_2[0] = 0xe2;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 0xe0);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xe0);
      }
      param_2[0] = 0xea;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 0xe8);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xe8);
      }
      param_2[0] = 0xf2;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
    lVar10 = *(long *)(param_1 + 0xf0);
    if (lVar10 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        lVar10 = *(long *)(param_1 + 0xf0);
      }
      param_2[0] = 0xfa;
      param_2[1] = 1;
      uVar13 = *(uint *)(lVar10 + 0x1c);
      if (uVar13 < 0x80) {
        param_2[2] = (byte)uVar13;
        param_2 = param_2 + 3;
      }
      else {
        param_2[2] = (byte)uVar13 | 0x80;
        if (uVar13 >> 0xe == 0) {
          param_2[3] = (byte)(uVar13 >> 7);
          param_2 = param_2 + 4;
        }
        else {
          param_2 = param_2 + 4;
          uVar13 = uVar13 >> 7;
          do {
            pbVar7 = param_2;
            uVar14 = uVar13 >> 7;
            pbVar7[-1] = (byte)uVar13 | 0x80;
            param_2 = pbVar7 + 1;
            uVar3 = uVar13 >> 0xe;
            uVar13 = uVar14;
          } while (uVar3 != 0);
          *pbVar7 = (byte)uVar14;
        }
      }
      param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
    }
  }
  pbVar7 = *(byte **)(param_1 + 0xb0);
  bVar6 = *pbVar7;
  if ((bVar6 & 1) == 0) {
    if (bVar6 < 2) goto LAB_0070fe78;
    FUN_00532960(pbVar7 + 1,bVar6 >> 1);
    pbVar7 = *(byte **)(param_1 + 0xb0);
    bVar6 = *pbVar7;
    if ((bVar6 & 1) == 0) goto LAB_0070fe30;
LAB_0070fe04:
    sVar15 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar15 < 0x80) goto LAB_0070fe34;
LAB_0070feb4:
    param_2 = (byte *)FUN_0052c95c(param_3,0x20,pbVar7,param_2);
    uVar13 = *(uint *)(param_1 + 300);
  }
  else {
    if (*(long *)(pbVar7 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
      pbVar7 = *(byte **)(param_1 + 0xb0);
      bVar6 = *pbVar7;
      if ((bVar6 & 1) != 0) goto LAB_0070fe04;
LAB_0070fe30:
      sVar15 = (size_t)(bVar6 >> 1);
LAB_0070fe34:
      if ((*param_3 - (long)param_2) + 0xd < (long)sVar15) goto LAB_0070feb4;
      param_2[0] = 0x82;
      param_2[1] = 2;
      param_2[2] = (byte)sVar15;
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      memcpy(param_2 + 3,pbVar9,sVar15);
      param_2 = param_2 + 3 + sVar15;
    }
LAB_0070fe78:
    uVar13 = *(uint *)(param_1 + 300);
  }
  if (uVar13 != 0) {
    if (param_2 < (byte *)*param_3) {
      *(undefined2 *)param_2 = 0x288;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 300);
      param_2[0] = 0x88;
      param_2[1] = 2;
    }
    if (uVar13 < 0x80) {
      *(char *)((long)param_2 + 2) = (char)uVar13;
      param_2 = (byte *)((long)param_2 + 3);
      uVar13 = *(uint *)(param_1 + 0x80);
      goto joined_r0x0070feac;
    }
    *(byte *)((long)param_2 + 2) = (char)uVar13 | 0x80;
    if (uVar13 >> 0xe != 0) {
      uVar12 = (ulong)(long)(int)uVar13 >> 7;
      param_2 = (byte *)((long)param_2 + 4);
      do {
        pbVar7 = param_2;
        uVar5 = uVar12 >> 7;
        pbVar7[-1] = (byte)uVar12 | 0x80;
        param_2 = pbVar7 + 1;
        uVar11 = uVar12 >> 0xe;
        uVar12 = uVar5;
      } while (uVar11 != 0);
      *pbVar7 = (byte)uVar5;
      uVar13 = *(uint *)(param_1 + 0x80);
      goto joined_r0x0070feac;
    }
    *(byte *)((long)param_2 + 3) = (byte)((ulong)(long)(int)uVar13 >> 7);
    param_2 = (byte *)((long)param_2 + 4);
  }
  uVar13 = *(uint *)(param_1 + 0x80);
joined_r0x0070feac:
  if (0 < (int)uVar13) {
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0x92;
      param_2[1] = 2;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      param_2[0] = 0x92;
      param_2[1] = 2;
    }
    pbVar7 = param_2 + 2;
    if (0x7f < uVar13) {
      pbVar9 = pbVar7;
      uVar14 = uVar13;
      do {
        uVar13 = uVar14 >> 7;
        uVar3 = uVar14 >> 0xe;
        pbVar7 = pbVar9 + 1;
        *pbVar9 = (byte)uVar14 | 0x80;
        pbVar9 = pbVar7;
        uVar14 = uVar13;
      } while (uVar3 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x78);
    puVar1 = puVar16 + *(int *)(param_1 + 0x70);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar13 = *puVar16;
        pbVar7 = param_2;
        if (uVar13 < 0x80) goto LAB_0070ff6c;
LAB_0070ff90:
        *param_2 = (byte)uVar13 | 0x80;
        uVar12 = (ulong)(long)(int)uVar13 >> 7;
        if (((ulong)(long)(int)uVar13 >> 0xe & 0x3ffff) == 0) {
          param_2[1] = (byte)uVar12;
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          do {
            pbVar7 = param_2;
            uVar5 = uVar12 >> 7;
            pbVar7[-1] = (byte)uVar12 | 0x80;
            param_2 = pbVar7 + 1;
            uVar11 = uVar12 >> 0xe;
            uVar12 = uVar5;
          } while (uVar11 != 0);
          *pbVar7 = (byte)uVar5;
        }
      }
      else {
        param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
        uVar13 = *puVar16;
        pbVar7 = param_2;
        if (0x7f < uVar13) goto LAB_0070ff90;
LAB_0070ff6c:
        param_2 = pbVar7 + 1;
        *pbVar7 = (byte)uVar13;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 < puVar1);
  }
  uVar13 = *(uint *)(param_1 + 0x130);
  if (uVar13 != 0) {
    if (param_2 < (byte *)*param_3) {
      param_2[0] = 0x98;
      param_2[1] = 2;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0x130);
      param_2[0] = 0x98;
      param_2[1] = 2;
    }
    if (uVar13 < 0x80) {
      param_2[2] = (byte)uVar13;
      param_2 = param_2 + 3;
    }
    else {
      param_2[2] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[3] = (byte)((ulong)(long)(int)uVar13 >> 7);
        param_2 = param_2 + 4;
      }
      else {
        uVar12 = (ulong)(long)(int)uVar13 >> 7;
        param_2 = param_2 + 4;
        do {
          pbVar7 = param_2;
          uVar5 = uVar12 >> 7;
          pbVar7[-1] = (byte)uVar12 | 0x80;
          param_2 = pbVar7 + 1;
          uVar11 = uVar12 >> 0xe;
          uVar12 = uVar5;
        } while (uVar11 != 0);
        *pbVar7 = (byte)uVar5;
      }
    }
  }
  if ((param_1 != puVar4) && (lVar10 = *(long *)(param_1 + 0xf8), lVar10 != 0)) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      lVar10 = *(long *)(param_1 + 0xf8);
    }
    param_2[0] = 0xa2;
    param_2[1] = 2;
    uVar13 = *(uint *)(lVar10 + 0x1c);
    if (uVar13 < 0x80) {
      param_2[2] = (byte)uVar13;
      param_2 = param_2 + 3;
    }
    else {
      param_2[2] = (byte)uVar13 | 0x80;
      if (uVar13 >> 0xe == 0) {
        param_2[3] = (byte)(uVar13 >> 7);
        param_2 = param_2 + 4;
      }
      else {
        param_2 = param_2 + 4;
        uVar13 = uVar13 >> 7;
        do {
          pbVar7 = param_2;
          uVar14 = uVar13 >> 7;
          pbVar7[-1] = (byte)uVar13 | 0x80;
          param_2 = pbVar7 + 1;
          uVar3 = uVar13 >> 0xe;
          uVar13 = uVar14;
        } while (uVar3 != 0);
        *pbVar7 = (byte)uVar14;
      }
    }
    param_2 = (byte *)FUN_00513f18(lVar10,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar12 + 8) & 1) == 0) {
      __src = (void *)(uVar12 + 9);
      uVar5 = (ulong)(*(byte *)(uVar12 + 8) >> 1);
    }
    else {
      uVar5 = *(ulong *)(uVar12 + 0x10);
      __src = *(void **)(uVar12 + 0x18);
    }
    sVar15 = (size_t)(int)uVar5;
    if (*param_3 - (long)param_2 < (long)sVar15) {
      param_2 = (byte *)FUN_0052c7dc(param_3,__src,uVar5,param_2);
    }
    else {
      memcpy(param_2,__src,sVar15);
      param_2 = param_2 + sVar15;
    }
  }
  return param_2;
}


