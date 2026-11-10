/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004397a0; name: FUN_004397a0
 */


void FUN_004397a0(int *param_1,undefined1 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  
  iVar8 = *param_1;
  if (iVar8 == 0) {
    *param_3 = 0;
    return;
  }
  pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((*(byte *)(param_1 + 0x17) & 2) != 0) {
    pcVar2 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
  }
  if (iVar8 < 1) {
    uVar6 = 0;
    *param_2 = 0;
    bVar3 = *(byte *)(param_1 + 0x17);
  }
  else {
    uVar6 = 0;
    pbVar9 = (byte *)((long)param_1 + 9);
    do {
      uVar10 = (ulong)pbVar9[-1] << 0x10;
      if (iVar8 < 3) {
        if (iVar8 == 2) {
          uVar10 = uVar10 | (ulong)*pbVar9 << 8;
        }
        cVar5 = pcVar2[uVar10 >> 0xc & 0x3f];
        pcVar1 = param_2 + uVar6;
        *pcVar1 = pcVar2[uVar10 >> 0x12];
        cVar7 = '=';
        pcVar1[1] = cVar5;
        if (iVar8 != 1) {
          cVar7 = pcVar2[uVar10 >> 6 & 0x3f];
        }
        pcVar1[2] = cVar7;
        uVar6 = (ulong)((int)uVar6 + 4);
        pcVar1[3] = '=';
        pcVar1[4] = '\0';
        bVar3 = *(byte *)(param_1 + 0x17);
        goto joined_r0x004398e0;
      }
      bVar4 = pbVar9[1];
      bVar3 = *pbVar9;
      pcVar1 = param_2 + uVar6;
      cVar5 = pcVar2[(ulong)bVar4 & 0x3f];
      *pcVar1 = pcVar2[pbVar9[-1] >> 2];
      pcVar1[1] = pcVar2[(ulong)(((uint)bVar3 << 8 | (uint)uVar10) >> 0xc) & 0x3f];
      cVar7 = pcVar2[(ulong)(ushort)(CONCAT11(bVar3,bVar4) >> 6) & 0x3f];
      iVar8 = iVar8 + -3;
      uVar6 = uVar6 + 4;
      pcVar1[3] = cVar5;
      pcVar1[2] = cVar7;
      pbVar9 = pbVar9 + 3;
    } while (iVar8 != 0);
    param_2[uVar6] = 0;
    bVar3 = *(byte *)(param_1 + 0x17);
  }
joined_r0x004398e0:
  if ((bVar3 & 1) == 0) {
    param_2[uVar6 & 0xffffffff] = 10;
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  param_2[uVar6 & 0xffffffff] = 0;
  *param_1 = 0;
  *param_3 = (int)uVar6;
  return;
}


