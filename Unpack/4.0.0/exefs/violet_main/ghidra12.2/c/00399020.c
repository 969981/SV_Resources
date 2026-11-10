/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00399020; name: FUN_00399020
 */


undefined8 FUN_00399020(byte *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  byte bVar4;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar4 = *param_1;
  uVar10 = *(ulong *)(param_1 + 8);
  uVar3 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar3 = uVar10;
  }
  __n = uVar3;
  if (2 < uVar3) {
    __n = 3;
  }
  if (__n == 0) {
    if (uVar3 == 3) goto LAB_003990b0;
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    iVar6 = memcmp(pbVar9,&DAT_03c16be5,__n);
    if (uVar3 == 3 && iVar6 == 0) {
LAB_003990b0:
      *param_2 = 0;
      return 1;
    }
  }
  if ((bVar4 & 1) == 0) {
    if ((bVar4 & 0xfe) != 0x24) {
      return 0;
    }
    pbVar9 = param_1 + 1;
    bVar5 = *pbVar9;
  }
  else {
    if (uVar10 != 0x12) {
      return 0;
    }
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar5 = *pbVar9;
  }
  if (((((bVar5 == 0x46) && (pbVar9[1] == 0x69)) && (pbVar9[2] == 0x78)) &&
      (((pbVar9[3] == 0x65 && (pbVar9[4] == 100)) &&
       ((pbVar9[5] == 0x2f && ((pbVar9[6] == 0x55 && (pbVar9[7] == 0x54)))))))) &&
     (pbVar9[8] == 0x43)) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    bVar4 = pbVar9[9];
    if ((((bVar4 == 0x2d) || (bVar4 == 0x2b)) && (pbVar9[0xc] == 0x3a)) && (pbVar9[0xf] == 0x3a)) {
      pvVar7 = memchr("0123456789",(uint)pbVar9[10],0xb);
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
      pvVar8 = memchr("0123456789",(uint)pbVar9[0xb],0xb);
      if (pvVar8 == (void *)0x0) {
        return 0;
      }
      iVar6 = ((int)pvVar7 + -0x3cdc21c) * 10 + -0x3cdc21c + (int)pvVar8;
      if (iVar6 == -1) {
        return 0;
      }
      pvVar7 = memchr("0123456789",(uint)pbVar9[0xd],0xb);
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
      pvVar8 = memchr("0123456789",(uint)pbVar9[0xe],0xb);
      if (pvVar8 == (void *)0x0) {
        return 0;
      }
      iVar1 = ((int)pvVar7 + -0x3cdc21c) * 10 + -0x3cdc21c + (int)pvVar8;
      if (iVar1 == -1) {
        return 0;
      }
      pvVar7 = memchr("0123456789",(uint)pbVar9[0x10],0xb);
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
      pvVar8 = memchr("0123456789",(uint)pbVar9[0x11],0xb);
      if (pvVar8 == (void *)0x0) {
        return 0;
      }
      iVar2 = ((int)pvVar7 + -0x3cdc21c) * 10 + -0x3cdc21c + (int)pvVar8;
      if (iVar2 == -1) {
        return 0;
      }
      iVar2 = iVar2 + (iVar1 + iVar6 * 0x3c) * 0x3c;
      if (iVar2 < 0x15181) {
        iVar6 = -iVar2;
        if (bVar4 != 0x2d) {
          iVar6 = iVar2;
        }
        *param_2 = (long)iVar6;
        return 1;
      }
    }
  }
  return 0;
}


