/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d8e94; name: FUN_015d8e94
 */


ulong FUN_015d8e94(long param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  pbVar6 = *(byte **)(param_1 + 0xf8);
  if (*pbVar6 == 0) {
    uVar5 = 0;
  }
  else {
    bVar1 = pbVar6[1];
    cVar3 = FUN_00f1eea8(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),bVar1);
    bVar2 = *(char *)(param_1 + 0x11c) == cVar3;
    if (bVar2) {
      *param_2 = bVar1;
    }
    uVar5 = (ulong)bVar2;
    if (1 < *pbVar6) {
      bVar1 = pbVar6[2];
      cVar3 = FUN_00f1eea8(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),bVar1);
      if (*(char *)(param_1 + 0x11c) == cVar3) {
        param_2[(uint)bVar2] = bVar1;
        uVar5 = (ulong)(bVar2 + 1);
      }
      if (2 < *pbVar6) {
        uVar7 = 3;
        do {
          bVar1 = pbVar6[uVar7];
          cVar3 = FUN_00f1eea8(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),bVar1);
          if (*(char *)(param_1 + 0x11c) == cVar3) {
            uVar4 = uVar5 & 0xff;
            uVar5 = (ulong)((int)uVar5 + 1);
            param_2[uVar4] = bVar1;
          }
          bVar2 = uVar7 < *pbVar6;
          uVar7 = uVar7 + 1;
        } while (bVar2);
      }
    }
  }
  return uVar5;
}


