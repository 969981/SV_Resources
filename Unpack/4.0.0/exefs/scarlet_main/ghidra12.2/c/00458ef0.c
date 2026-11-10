/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00458ef0; name: FUN_00458ef0
 */


undefined8 FUN_00458ef0(undefined8 *param_1,void *param_2,size_t param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  byte local_70 [15];
  byte abStack_61 [33];
  ulong local_40;
  long lStack_38;
  undefined1 local_30 [16];
  
  uVar5 = 0xffffffff;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    lVar4 = -param_3;
    abStack_61[0] = 0;
    memcpy(abStack_61 + lVar4 + 1,param_2,param_3);
    abStack_61[lVar4] = abStack_61[lVar4] | 1;
    local_40 = (ulong)(byte)((int)param_4 << 4);
    lStack_38 = ((ulong)abStack_61[0] & 0xc0) << 0x38;
    (*(code *)*param_1)(&local_40,local_30,param_1[2]);
    uVar5 = 1;
    pcVar6 = (char *)((ulong)(abStack_61 + 1) | (ulong)(abStack_61[0] >> 3) & 7);
    bVar1 = pcVar6[0xf];
    uVar7 = (ulong)abStack_61[0] & 7;
    uVar3 = 8 - (int)uVar7;
    *(byte *)((long)param_1 + 0x9f) = bVar1 << uVar7;
    bVar2 = pcVar6[0xe];
    *(byte *)((long)param_1 + 0x9e) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[0xd];
    *(byte *)((long)param_1 + 0x9d) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    bVar2 = pcVar6[0xc];
    *(byte *)((long)param_1 + 0x9c) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[0xb];
    *(byte *)((long)param_1 + 0x9b) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    bVar2 = pcVar6[10];
    *(byte *)((long)param_1 + 0x9a) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[9];
    *(byte *)((long)param_1 + 0x99) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    bVar2 = pcVar6[8];
    *(byte *)(param_1 + 0x13) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[7];
    *(byte *)((long)param_1 + 0x97) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    bVar2 = pcVar6[6];
    *(byte *)((long)param_1 + 0x96) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[5];
    *(byte *)((long)param_1 + 0x95) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    bVar2 = pcVar6[4];
    *(byte *)((long)param_1 + 0x94) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[3];
    *(byte *)((long)param_1 + 0x93) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    bVar2 = pcVar6[2];
    *(byte *)((long)param_1 + 0x92) = bVar2 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    bVar1 = pcVar6[1];
    *(byte *)((long)param_1 + 0x91) = bVar1 << uVar7 | bVar2 >> (ulong)(uVar3 & 0x1f);
    *(byte *)(param_1 + 0x12) = *pcVar6 << uVar7 | bVar1 >> (ulong)(uVar3 & 0x1f);
    *(byte *)((long)param_1 + 0x9f) =
         *(byte *)((long)param_1 + 0x9f) |
         (byte)((0xff << (ulong)(uVar3 & 0x1f) & (uint)(byte)pcVar6[0x10]) >> (ulong)(uVar3 & 0x1f))
    ;
  }
  return uVar5;
}


