/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00439900; name: FUN_00439900
 */


uint FUN_00439900(uint *param_1,long param_2,int *param_3,byte *param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = *param_1;
  if ((int)uVar6 < 1) {
    iVar10 = 0;
  }
  else if (*(char *)((long)param_1 + (ulong)(uVar6 - 1) + 8) == '=') {
    iVar10 = 1;
    if ((1 < (int)uVar6) && (iVar10 = 1, *(char *)((long)param_1 + (ulong)(uVar6 - 2) + 8) == '='))
    {
      iVar10 = 2;
    }
  }
  else {
    iVar10 = 0;
  }
  if (param_5 == 0) {
    uVar7 = 0;
    iVar9 = 0;
    goto LAB_00439af0;
  }
  puVar2 = &DAT_03cf5e94;
  if ((param_1[0x17] & 2) != 0) {
    puVar2 = &DAT_03cf5e14;
  }
  if (param_5 < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    uVar7 = 0xffffffff;
    do {
      bVar4 = *param_4;
      if (((char)bVar4 < '\0') || (bVar3 = puVar2[bVar4], bVar3 == 0xff)) goto LAB_00439af0;
      if (bVar4 == 0x3d) {
        iVar10 = iVar10 + 1;
LAB_004399f0:
        if (2 < iVar10) goto LAB_00439af0;
      }
      else {
        if (0 < iVar10) {
          if ((bVar3 & 0xec) == 0xe0) goto LAB_004399f0;
          goto LAB_00439af0;
        }
        iVar10 = 0;
      }
      if (bVar3 == 0xf2) {
        uVar8 = 0;
        goto joined_r0x00439a68;
      }
      if ((bVar3 & 0xec) != 0xe0) {
        if (0x3f < (int)uVar6) goto LAB_00439af0;
        lVar1 = (long)(int)uVar6;
        uVar6 = uVar6 + 1;
        *(byte *)((long)param_1 + lVar1 + 8) = bVar4;
      }
      if (uVar6 == 0x40) {
        iVar5 = FUN_00439b20(param_1,param_2,param_1 + 2);
        uVar6 = 0;
        if ((iVar5 < 0) || (iVar5 < iVar10)) goto LAB_00439af0;
        param_2 = param_2 + (iVar5 - iVar10);
        iVar9 = (iVar5 - iVar10) + iVar9;
        uVar6 = 0;
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  uVar8 = 1;
joined_r0x00439a68:
  if (0 < (int)uVar6) {
    if ((uVar6 & 3) == 0) {
      iVar5 = FUN_00439b20(param_1,param_2,param_1 + 2);
      uVar6 = 0;
      uVar7 = 0xffffffff;
      if ((iVar5 < 0) || (iVar5 < iVar10)) goto LAB_00439af0;
      uVar6 = 0;
      iVar9 = (iVar9 - iVar10) + iVar5;
    }
    else if (uVar8 == 0) {
      uVar7 = 0xffffffff;
      goto LAB_00439af0;
    }
  }
  uVar7 = uVar8 & (iVar10 == 0 || uVar6 != 0);
LAB_00439af0:
  *param_3 = iVar9;
  *param_1 = uVar6;
  return uVar7;
}


