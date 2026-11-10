/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a7e5c; name: FUN_034a7e5c
 */


undefined8
FUN_034a7e5c(long param_1,byte *param_2,undefined4 param_3,char *param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  float fVar15;
  float fVar16;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  byte local_78;
  byte local_70;
  undefined8 local_68;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_047e70a8;
  local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(PTR_DAT_047e70a8 + 0xd4));
  puVar7 = *(uint **)(param_1 + 0xb0);
  if (puVar7 != (uint *)0x0) {
    bVar2 = (byte)*puVar7;
    uVar6 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar6 = 1;
    }
    uVar12 = (ulong)uVar6;
    puVar4 = (uint *)((long)puVar7 + ((ulong)(bVar2 + 4) & 0x1fc));
    puVar9 = puVar7;
    do {
      puVar7 = puVar4;
      puVar9 = (uint *)((long)puVar9 + 1);
      if (*(char *)puVar9 == '5') goto LAB_034a7ee8;
      uVar12 = uVar12 - 1;
      puVar4 = puVar7 + 1;
    } while (uVar12 != 0);
    puVar7 = (uint *)0x0;
  }
LAB_034a7ee8:
  puVar9 = (uint *)&local_90;
  if (puVar7 != (uint *)0x0) {
    puVar9 = puVar7;
  }
  local_78 = param_2[1];
  if ((*puVar9 >> (ulong)(local_78 & 0x1f) & 1) == 0) {
    uVar5 = 0x52;
  }
  else {
    if (*param_4 != '\0') {
      if ((*(long *)(param_1 + 0x98) != 0) &&
         (uVar5 = FUN_034a7e5c(*(long *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6),
         (int)uVar5 != 1)) {
        return uVar5;
      }
      *param_4 = '\0';
      local_78 = param_2[1];
    }
    local_70 = 0xff;
    if ((*param_2 - 0x80 < 0x21) && ((1L << ((ulong)(*param_2 - 0x80) & 0x3f) & 0x100010001U) != 0))
    {
      local_70 = param_2[4];
    }
    local_68 = 0;
    local_90 = param_5;
    local_88 = param_6;
    local_80 = param_3;
    local_34 = *(undefined4 *)(puVar3 + 0xbc);
    pbVar8 = *(byte **)(param_1 + 0xb0);
    if (pbVar8 != (byte *)0x0) {
      bVar2 = *pbVar8;
      uVar6 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar6 = 1;
      }
      uVar12 = (ulong)uVar6;
      pbVar13 = pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc);
      pbVar10 = pbVar8;
      do {
        pbVar8 = pbVar13;
        pbVar10 = pbVar10 + 1;
        if (*pbVar10 == 0x2f) goto LAB_034a7fd0;
        uVar12 = uVar12 - 1;
        pbVar13 = pbVar8 + 4;
      } while (uVar12 != 0);
      pbVar8 = (byte *)0x0;
    }
LAB_034a7fd0:
    pbVar10 = (byte *)&local_34;
    if (pbVar8 != (byte *)0x0) {
      pbVar10 = pbVar8;
    }
    iVar11 = *(int *)pbVar10;
    fVar15 = (float)FUN_034a9a38(param_1,0xb,&local_90);
    fVar16 = 0.5;
    if (fVar15 <= 0.0) {
      fVar16 = -0.5;
    }
    uVar6 = iVar11 + (uint)param_2[4] + (int)(fVar16 + fVar15);
    if (0x7e < (int)uVar6) {
      uVar6 = 0x7f;
    }
    local_34 = *(undefined4 *)(puVar3 + 0xc4);
    pbVar8 = *(byte **)(param_1 + 0xb0);
    if (pbVar8 != (byte *)0x0) {
      bVar2 = *pbVar8;
      uVar1 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar1 = 1;
      }
      uVar12 = (ulong)uVar1;
      pbVar10 = pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc);
      pbVar13 = pbVar8;
      do {
        pbVar13 = pbVar13 + 1;
        if (*pbVar13 == 0x31) goto LAB_034a806c;
        pbVar10 = pbVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    pbVar10 = (byte *)0x0;
LAB_034a806c:
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    pbVar13 = (byte *)&local_34;
    if (pbVar10 != (byte *)0x0) {
      pbVar13 = pbVar10;
    }
    local_34 = *(undefined4 *)(puVar3 + 200);
    if (pbVar8 != (byte *)0x0) {
      bVar2 = *pbVar8;
      uVar1 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar1 = 1;
      }
      uVar12 = (ulong)uVar1;
      pbVar10 = pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc);
      pbVar14 = pbVar8;
      do {
        pbVar14 = pbVar14 + 1;
        if (*pbVar14 == 0x32) goto LAB_034a80c4;
        pbVar10 = pbVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    pbVar10 = (byte *)0x0;
LAB_034a80c4:
    pbVar14 = (byte *)&local_34;
    if (pbVar10 != (byte *)0x0) {
      pbVar14 = pbVar10;
    }
    uVar5 = 0x52;
    if ((*(int *)pbVar13 <= (int)uVar6) && ((int)uVar6 <= *(int *)pbVar14)) {
      local_34 = *(undefined4 *)(puVar3 + 0xc0);
      if (pbVar8 != (byte *)0x0) {
        bVar2 = *pbVar8;
        uVar1 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar1 = 1;
        }
        uVar12 = (ulong)uVar1;
        pbVar13 = pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc);
        pbVar10 = pbVar8;
        do {
          pbVar8 = pbVar13;
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 == 0x30) goto LAB_034a8130;
          uVar12 = uVar12 - 1;
          pbVar13 = pbVar8 + 4;
        } while (uVar12 != 0);
        pbVar8 = (byte *)0x0;
      }
LAB_034a8130:
      pbVar10 = (byte *)&local_34;
      if (pbVar8 != (byte *)0x0) {
        pbVar10 = pbVar8;
      }
      iVar11 = *(int *)pbVar10;
      fVar15 = (float)FUN_034a9a38(param_1,0xc,&local_90);
      fVar16 = 0.5;
      if (fVar15 <= 0.0) {
        fVar16 = -0.5;
      }
      iVar11 = iVar11 + (uint)param_2[5] + (int)(fVar16 + fVar15);
      local_34 = *(undefined4 *)(puVar3 + 0xcc);
      if (0x7e < iVar11) {
        iVar11 = 0x7f;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      pbVar8 = *(byte **)(param_1 + 0xb0);
      if (pbVar8 != (byte *)0x0) {
        bVar2 = *pbVar8;
        uVar1 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar1 = 1;
        }
        uVar12 = (ulong)uVar1;
        pbVar10 = pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc);
        pbVar13 = pbVar8;
        do {
          pbVar13 = pbVar13 + 1;
          if (*pbVar13 == 0x33) goto LAB_034a81cc;
          pbVar10 = pbVar10 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      pbVar10 = (byte *)0x0;
LAB_034a81cc:
      pbVar13 = (byte *)&local_34;
      if (pbVar10 != (byte *)0x0) {
        pbVar13 = pbVar10;
      }
      local_34 = *(undefined4 *)(puVar3 + 0xd0);
      if (pbVar8 != (byte *)0x0) {
        bVar2 = *pbVar8;
        uVar1 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar1 = 1;
        }
        uVar12 = (ulong)uVar1;
        pbVar14 = pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc);
        pbVar10 = pbVar8;
        do {
          pbVar8 = pbVar14;
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 == 0x34) goto LAB_034a8220;
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar8 + 4;
        } while (uVar12 != 0);
        pbVar8 = (byte *)0x0;
      }
LAB_034a8220:
      pbVar10 = (byte *)&local_34;
      if (pbVar8 != (byte *)0x0) {
        pbVar10 = pbVar8;
      }
      uVar5 = 0x52;
      if ((*(int *)pbVar13 <= iVar11) && (iVar11 <= *(int *)pbVar10)) {
        uVar5 = 1;
        param_2[4] = (byte)uVar6;
        param_2[5] = (byte)iVar11;
      }
    }
  }
  return uVar5;
}


