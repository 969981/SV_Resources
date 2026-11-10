/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00439b20; name: FUN_00439b20
 */


ulong FUN_00439b20(long param_1,long param_2,byte *param_3,uint param_4)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x5c) >> 1 & 1) == 0)) {
    puVar4 = &DAT_03cf5e94;
  }
  else {
    puVar4 = &DAT_03cf5e14;
  }
  if (0 < (int)param_4) {
    uVar7 = param_4;
    do {
      if (((char)*param_3 < '\0') || (puVar4[*param_3] != -0x20)) {
        param_4 = 3;
        if ((int)uVar7 < 3) {
          param_4 = uVar7;
        }
        goto LAB_00439b98;
      }
      param_3 = param_3 + 1;
      bVar1 = 1 < (int)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
    param_4 = 0;
  }
  uVar7 = param_4;
LAB_00439b98:
  uVar9 = uVar7;
  do {
    uVar3 = uVar9;
    uVar7 = uVar7 - 1;
    if ((int)uVar3 < 4) goto LAB_00439bd4;
    if ((char)param_3[uVar7] < '\0') {
      if ((uVar3 & 3) != 0) {
        return 0xffffffff;
      }
      goto LAB_00439bf0;
    }
    uVar9 = uVar3 - 1;
  } while ((puVar4[param_3[uVar7]] & 0xec) == 0xe0);
  param_4 = uVar3;
LAB_00439bd4:
  uVar3 = param_4;
  if ((param_4 & 3) != 0) {
    return 0xffffffff;
  }
LAB_00439bf0:
  if ((int)uVar3 < 1) {
    return 0;
  }
  lVar6 = 0;
  uVar5 = 0;
  do {
    pbVar2 = param_3 + lVar6;
    if ((char)*pbVar2 < '\0') {
      uVar7 = 0xff;
      bVar8 = pbVar2[1];
      if ((char)bVar8 < '\0') goto LAB_00439c58;
LAB_00439c20:
      uVar9 = (uint)(byte)puVar4[bVar8];
      bVar8 = pbVar2[2];
      if (-1 < (char)bVar8) goto LAB_00439c30;
LAB_00439c64:
      uVar10 = 0xff;
      bVar8 = pbVar2[3];
      if ((char)bVar8 < '\0') goto LAB_00439c70;
LAB_00439c40:
      bVar8 = puVar4[bVar8];
    }
    else {
      uVar7 = (uint)(byte)puVar4[*pbVar2];
      bVar8 = pbVar2[1];
      if (-1 < (char)bVar8) goto LAB_00439c20;
LAB_00439c58:
      uVar9 = 0xff;
      bVar8 = pbVar2[2];
      if ((char)bVar8 < '\0') goto LAB_00439c64;
LAB_00439c30:
      uVar10 = (uint)(byte)puVar4[bVar8];
      bVar8 = pbVar2[3];
      if (-1 < (char)bVar8) goto LAB_00439c40;
LAB_00439c70:
      bVar8 = 0xff;
    }
    if ((char)((byte)uVar9 | (byte)uVar7 | (byte)uVar10 | bVar8) < '\0') {
      return 0xffffffff;
    }
    lVar6 = lVar6 + 4;
    pbVar2 = (byte *)(param_2 + uVar5);
    pbVar2[2] = bVar8 | (byte)(uVar10 << 6);
    pbVar2[1] = (byte)((uVar10 << 6) >> 8) | (byte)((uVar9 << 0xc) >> 8);
    *pbVar2 = (byte)((uVar9 << 0xc) >> 0x10) | (byte)((uVar7 << 0x12) >> 0x10);
    uVar5 = uVar5 + 3;
    if ((int)uVar3 <= (int)lVar6) {
      return uVar5 & 0xffffffff;
    }
  } while( true );
}


