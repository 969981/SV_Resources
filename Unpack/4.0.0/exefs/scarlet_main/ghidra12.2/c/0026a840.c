/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026a840; name: FUN_0026a840
 */


void FUN_0026a840(uint param_1,byte *param_2,long param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  size_t __n;
  
  if (param_4 < (byte *)*param_5) {
    uVar6 = param_1 << 3 | 2;
    if (uVar6 < 0x80) goto LAB_0026a878;
LAB_0026a8a0:
    *param_4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      param_4[1] = (byte)(param_1 >> 4);
      pbVar4 = param_4 + 2;
    }
    else {
      pbVar4 = param_4 + 2;
      uVar6 = param_1 >> 4 & 0x1ffffff;
      do {
        pbVar5 = pbVar4;
        uVar3 = uVar6 >> 7;
        pbVar5[-1] = (byte)uVar6 | 0x80;
        pbVar4 = pbVar5 + 1;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar2 != 0);
      *pbVar5 = (byte)uVar3;
    }
  }
  else {
    param_4 = (byte *)FUN_0052c6d8(param_5,param_4);
    uVar6 = param_1 << 3 | 2;
    if (0x7f < uVar6) goto LAB_0026a8a0;
LAB_0026a878:
    pbVar4 = param_4 + 1;
    *param_4 = (byte)uVar6;
  }
  uVar6 = (uint)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar6 = *(uint *)(param_2 + 8);
  }
  uVar6 = *(uint *)(param_3 + 0x18) + uVar6 +
          (((uint)LZCOUNT(*(uint *)(param_3 + 0x18) | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
          (((uint)LZCOUNT(uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
  if (uVar6 < 0x80) {
    pbVar5 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
  }
  else {
    *pbVar4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      pbVar4[1] = (byte)(uVar6 >> 7);
      pbVar5 = pbVar4 + 2;
    }
    else {
      pbVar5 = pbVar4 + 2;
      uVar6 = uVar6 >> 7;
      do {
        pbVar4 = pbVar5;
        uVar3 = uVar6 >> 7;
        pbVar4[-1] = (byte)uVar6 | 0x80;
        pbVar5 = pbVar4 + 1;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar2 != 0);
      *pbVar4 = (byte)uVar3;
    }
  }
  if (pbVar5 < (byte *)*param_5) {
    bVar1 = *param_2;
    if ((bVar1 & 1) == 0) goto LAB_0026a9a0;
LAB_0026a9c0:
    __n = *(size_t *)(param_2 + 8);
    if ((long)__n < 0x80) goto LAB_0026a9cc;
LAB_0026aa98:
    pbVar4 = (byte *)FUN_0052cbdc(param_5,1,param_2);
    if (pbVar4 < (byte *)*param_5) goto LAB_0026aa1c;
  }
  else {
    pbVar5 = (byte *)FUN_0052c6d8(param_5,pbVar5);
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) goto LAB_0026a9c0;
LAB_0026a9a0:
    __n = (size_t)(bVar1 >> 1);
LAB_0026a9cc:
    if ((*param_5 - (long)pbVar5) + 0xe < (long)__n) goto LAB_0026aa98;
    *pbVar5 = 10;
    pbVar5[1] = (byte)__n;
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    memcpy(pbVar5 + 2,pbVar4,__n);
    pbVar4 = pbVar5 + 2 + __n;
    if (pbVar4 < (byte *)*param_5) goto LAB_0026aa1c;
  }
  pbVar4 = (byte *)FUN_0052c6d8(param_5);
LAB_0026aa1c:
  *pbVar4 = 0x12;
  uVar6 = *(uint *)(param_3 + 0x18);
  if (uVar6 < 0x80) {
    pbVar4[1] = (byte)uVar6;
    pbVar4 = pbVar4 + 2;
  }
  else {
    pbVar4[1] = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      pbVar4[2] = (byte)(uVar6 >> 7);
      pbVar4 = pbVar4 + 3;
    }
    else {
      pbVar4 = pbVar4 + 3;
      uVar6 = uVar6 >> 7;
      do {
        pbVar5 = pbVar4;
        uVar3 = uVar6 >> 7;
        pbVar5[-1] = (byte)uVar6 | 0x80;
        pbVar4 = pbVar5 + 1;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar3;
      } while (uVar2 != 0);
      *pbVar5 = (byte)uVar3;
    }
  }
  FUN_00268924(param_3,pbVar4,param_5);
  return;
}


