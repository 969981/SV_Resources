/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f60a4; name: FUN_001f60a4
 */


ulong FUN_001f60a4(long *param_1,long *param_2,uint *param_3,byte *param_4,long param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  int local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_68 = 0;
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return 0xfffffffffffffdf5;
  }
  lVar16 = param_1[4];
  FUN_001f8300(param_1[0x16]);
  FUN_001f8300(param_1[0x15]);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_3 = 0;
  pbVar15 = param_4;
  if (param_5 == 0) {
LAB_001f6524:
    if (param_6 != 0) {
      if (1 < *(int *)((long)param_1 + 0xe4) - 1U) {
LAB_001f6630:
        uVar14 = 0xfffffffffffffdf5;
LAB_001f6634:
        *(undefined1 *)((long)param_1 + 0x3c) = 1;
        return uVar14;
      }
      *param_3 = *param_3 | 1;
    }
    return (long)pbVar15 - (long)param_4;
  }
  pbVar15 = param_4 + param_5;
  pbVar12 = param_4;
LAB_001f6138:
  pbVar13 = pbVar12;
  switch(*(int *)((long)param_1 + 0xe4)) {
  case 0:
    if ((*pbVar12 & 0xe0) == 0x20) {
LAB_001f618c:
      lVar6 = 0x300000001;
LAB_001f63ec:
      param_1[0x1c] = lVar6;
      goto LAB_001f6508;
    }
    goto LAB_001f6630;
  case 1:
  case 2:
    bVar1 = *pbVar12;
    if ((bVar1 & 0xe0) == 0x20) {
      if (*(int *)((long)param_1 + 0xe4) != 2) goto LAB_001f618c;
      goto LAB_001f6630;
    }
    if ((char)bVar1 < '\0') {
      lVar6 = 0x400000001;
      goto LAB_001f63ec;
    }
    bVar5 = true;
    uVar9 = 2;
    if ((bVar1 == 0) || (bVar1 == 0x10)) {
      uVar8 = 5;
    }
    else {
      uVar8 = 5;
      if (bVar1 != 0x40) {
        bVar5 = false;
        uVar8 = 4;
        uVar9 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar9;
    *(undefined4 *)((long)param_1 + 0xe4) = uVar8;
    *(byte *)((long)param_1 + 0xe9) = *pbVar12 >> 6 & 1;
    pbVar13 = pbVar12 + 1;
    if (!bVar5) {
      pbVar13 = pbVar12;
    }
    *(bool *)((long)param_1 + 0xea) = (*pbVar12 & 0xf0) == 0x10;
LAB_001f6508:
    bVar5 = false;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
LAB_001f6514:
    pbVar12 = pbVar13;
    if ((pbVar13 != pbVar15) || (bVar5)) goto LAB_001f6138;
    goto LAB_001f6524;
  case 3:
    local_68 = 0;
    uVar14 = param_1[0x1a];
    if ((ulong)param_1[0x19] <= (ulong)param_1[0x1a]) {
      uVar14 = param_1[0x19];
    }
    uVar14 = FUN_001f66f4(param_1,&local_68,pbVar12,pbVar15,5,uVar14);
    if (-1 < (long)uVar14) {
      pbVar13 = pbVar12 + uVar14;
      if (local_68 == 0) break;
      param_1[0x1a] = 0xffffffff;
      param_1[6] = param_1[0x17];
      FUN_001f58e4(param_1,0);
      bVar5 = false;
      *(undefined4 *)((long)param_1 + 0xe4) = 1;
      goto LAB_001f6514;
    }
    goto LAB_001f6634;
  case 4:
    if ((int)param_1[0x1c] == 1) {
      uVar4 = 7;
    }
    else {
      uVar4 = 4;
      if (*(char *)((long)param_1 + 0xe9) != '\0') {
        uVar4 = 6;
      }
    }
    local_68 = 0;
    uVar14 = FUN_001f66f4(param_1,&local_68,pbVar12,pbVar15,uVar4,param_1[3] + 0x3d);
    if ((long)uVar14 < 0) goto LAB_001f6634;
    pbVar13 = pbVar12 + uVar14;
    if (local_68 != 0) {
      lVar6 = param_1[0x17];
      if (lVar6 != 0) {
        uVar14 = lVar6 - 1;
        param_1[0x18] = uVar14;
        if ((int)param_1[0x1c] == 1) {
          if (uVar14 < 0x3d) {
            lVar16 = uVar14 * 0x80;
            lVar6 = lVar16 + 0x4485118;
            uVar9 = *(undefined4 *)(&DAT_04485190 + lVar16);
            uVar7 = 0;
            lVar16 = lVar16 + 0x4485140;
          }
          else {
            plVar11 = *(long **)(*param_1 + ((lVar6 + param_1[2]) - 0x3eU & param_1[1]) * 8);
            uVar9 = (undefined4)plVar11[2];
            lVar6 = *plVar11;
            lVar16 = plVar11[1];
            uVar7 = *(undefined1 *)((long)plVar11 + 0x14);
            local_64 = *(undefined2 *)((long)plVar11 + 0x15);
            local_62 = *(undefined1 *)((long)plVar11 + 0x17);
          }
          *param_2 = lVar6;
          param_2[1] = lVar16;
          *(undefined4 *)(param_2 + 2) = uVar9;
          *(undefined1 *)((long)param_2 + 0x14) = uVar7;
          *(undefined2 *)((long)param_2 + 0x15) = local_64;
          *(undefined1 *)((long)param_2 + 0x17) = local_62;
          *(undefined4 *)((long)param_1 + 0xe4) = 2;
          *param_3 = *param_3 | 2;
          goto LAB_001f66ec;
        }
LAB_001f64c8:
        bVar5 = false;
        *(undefined4 *)((long)param_1 + 0xe4) = 9;
        goto LAB_001f6514;
      }
      goto LAB_001f6630;
    }
    break;
  case 5:
    bVar1 = *pbVar12;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    *(byte *)(param_1 + 0x1d) = bVar1 >> 7;
    *(undefined4 *)((long)param_1 + 0xe4) = 6;
  case 6:
    local_68 = 0;
    uVar14 = FUN_001f66f4(param_1,&local_68,pbVar12,pbVar15,7,0x10000);
    if (-1 < (long)uVar14) {
      pbVar13 = pbVar12 + uVar14;
      if (local_68 == 0) break;
      if ((char)param_1[0x1d] == '\0') {
        *(undefined4 *)((long)param_1 + 0xe4) = 8;
        uVar14 = param_1[0x17] + 1;
      }
      else {
        FUN_001f810c(param_1 + 8);
        *(undefined4 *)((long)param_1 + 0xe4) = 7;
        uVar14 = param_1[0x17] << 1 | 1;
      }
      iVar2 = FUN_001f8204(param_1 + 0x13,uVar14,lVar16);
      if (iVar2 == 0) {
        lVar6 = param_1[0x13];
        FUN_001f40c4(param_1 + 9,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
switchD_001f6158_default:
        bVar5 = false;
        goto LAB_001f6514;
      }
LAB_001f6604:
      uVar14 = (ulong)iVar2;
    }
    goto LAB_001f6634;
  case 7:
    uVar14 = FUN_001f6768(param_1,param_1 + 9,pbVar12,pbVar15);
    if ((long)uVar14 < 0) goto LAB_001f6634;
    pbVar13 = pbVar12 + uVar14;
    if (param_1[0x17] == 0) {
      *(undefined1 *)param_1[0xc] = 0;
      lVar6 = param_1[0xc] - param_1[0xb];
      lVar10 = param_1[0x13];
LAB_001f6368:
      *(long *)(lVar10 + 0x18) = lVar6;
      goto LAB_001f64c8;
    }
    break;
  case 8:
    uVar14 = (long)pbVar15 - (long)pbVar12;
    if ((ulong)param_1[0x17] <= (ulong)((long)pbVar15 - (long)pbVar12)) {
      uVar14 = param_1[0x17];
    }
    puVar3 = (undefined1 *)FUN_001ed9b4(param_1[0xc],pbVar12,uVar14);
    lVar6 = param_1[0x17];
    param_1[0xc] = (long)puVar3;
    param_1[0x17] = lVar6 - uVar14;
    if ((long)uVar14 < 0) goto LAB_001f6634;
    pbVar13 = pbVar12 + uVar14;
    if (lVar6 - uVar14 == 0) {
      *puVar3 = 0;
      lVar6 = param_1[0xc] - param_1[0xb];
      lVar10 = param_1[0x13];
      goto LAB_001f6368;
    }
    break;
  case 9:
    bVar1 = *pbVar12;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    *(byte *)(param_1 + 0x1d) = bVar1 >> 7;
    *(undefined4 *)((long)param_1 + 0xe4) = 10;
  case 10:
    local_68 = 0;
    uVar14 = FUN_001f66f4(param_1,&local_68,pbVar12,pbVar15,7,0x10000);
    if (-1 < (long)uVar14) {
      pbVar13 = pbVar12 + uVar14;
      if (local_68 == 0) break;
      if ((char)param_1[0x1d] == '\0') {
        *(undefined4 *)((long)param_1 + 0xe4) = 0xc;
        uVar14 = param_1[0x17] + 1;
      }
      else {
        FUN_001f810c(param_1 + 8);
        *(undefined4 *)((long)param_1 + 0xe4) = 0xb;
        uVar14 = param_1[0x17] << 1 | 1;
      }
      iVar2 = FUN_001f8204(param_1 + 0x14,uVar14,lVar16);
      if (iVar2 != 0) goto LAB_001f6604;
      lVar6 = param_1[0x14];
      FUN_001f40c4(param_1 + 0xe,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
      bVar5 = true;
      goto LAB_001f6514;
    }
    goto LAB_001f6634;
  case 0xb:
    uVar14 = FUN_001f6768(param_1,param_1 + 0xe,pbVar12,pbVar15);
    if (-1 < (long)uVar14) {
      pbVar13 = pbVar12 + uVar14;
      if (param_1[0x17] != 0) break;
      *(undefined1 *)param_1[0x11] = 0;
LAB_001f65c8:
      *(long *)(param_1[0x14] + 0x18) = param_1[0x11] - param_1[0x10];
      if ((int)param_1[0x1c] == 2) {
        iVar2 = FUN_001f67b8(param_1,param_2);
      }
      else {
        iVar2 = FUN_001f6858(param_1,param_2);
      }
      if (iVar2 == 0) {
        *(undefined4 *)((long)param_1 + 0xe4) = 2;
        *param_3 = *param_3 | 2;
        goto LAB_001f66ec;
      }
      goto LAB_001f6604;
    }
    goto LAB_001f6634;
  case 0xc:
    uVar14 = (long)pbVar15 - (long)pbVar12;
    if ((ulong)param_1[0x17] <= (ulong)((long)pbVar15 - (long)pbVar12)) {
      uVar14 = param_1[0x17];
    }
    puVar3 = (undefined1 *)FUN_001ed9b4(param_1[0x11],pbVar12,uVar14);
    lVar16 = param_1[0x17];
    param_1[0x11] = (long)puVar3;
    param_1[0x17] = lVar16 - uVar14;
    if ((long)uVar14 < 0) goto LAB_001f6634;
    pbVar13 = pbVar12 + uVar14;
    if (lVar16 - uVar14 == 0) {
      *puVar3 = 0;
      goto LAB_001f65c8;
    }
    break;
  default:
    goto switchD_001f6158_default;
  }
  if (param_6 == 0) {
LAB_001f66ec:
    return (long)pbVar13 - (long)param_4;
  }
  goto LAB_001f6630;
}


