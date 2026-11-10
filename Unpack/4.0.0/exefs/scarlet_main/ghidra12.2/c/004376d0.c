/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004376d0; name: FUN_004376d0
 */


void FUN_004376d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar8 = uVar5 ^ *param_1;
  uVar6 = param_1[1] ^ uVar5 << 4;
  uVar5 = (uVar8 ^ uVar8 << 0x12) & 0xcccc0000;
  uVar8 = uVar5 ^ uVar8 ^ uVar5 >> 0x12;
  uVar5 = (uVar6 ^ uVar6 << 0x12) & 0xcccc0000;
  uVar6 = uVar5 ^ uVar6 ^ uVar5 >> 0x12;
  uVar5 = (uVar8 ^ uVar6 >> 1) & 0x55555555;
  uVar6 = uVar6 ^ uVar5 << 1;
  uVar5 = uVar5 ^ uVar8;
  uVar8 = (uVar6 ^ uVar5 >> 8) & 0xff00ff;
  uVar5 = uVar5 ^ uVar8 << 8;
  uVar8 = uVar8 ^ uVar6;
  uVar6 = (uVar5 ^ uVar8 >> 1) & 0x55555555;
  uVar5 = uVar6 ^ uVar5;
  uVar8 = uVar8 ^ uVar6 << 1;
  uVar8 = uVar5 >> 4 & 0xf000000 | uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | uVar8 >> 0x10 & 0xff;
  uVar4 = 0;
  do {
    uVar2 = uVar4 & 0x3f;
    uVar4 = uVar4 + 1;
    bVar3 = (0x8103UL >> uVar2 & 1) == 0;
    uVar6 = 1;
    if (bVar3) {
      uVar6 = 2;
    }
    uVar7 = 0x1a;
    if (!bVar3) {
      uVar7 = 0x1b;
    }
    uVar1 = (uVar5 & 0xfffffff) >> (ulong)uVar6;
    uVar6 = uVar8 >> (ulong)uVar6;
    uVar5 = uVar1 | uVar5 << (ulong)uVar7;
    uVar8 = uVar6 | uVar8 << (ulong)uVar7;
    uVar7 = *(uint *)(&DAT_03cf56f4 + (ulong)(uVar1 >> 7 & 0x3c | uVar1 >> 6 & 3) * 4) |
            *(uint *)(&DAT_03cf55f4 + (ulong)(uVar1 & 0x3f) * 4) |
            *(uint *)(&DAT_03cf57f4 + (ulong)(uVar1 >> 0xe & 0x30 | uVar1 >> 0xd & 0xf) * 4) |
            *(uint *)(&DAT_03cf58f4 +
                     (ulong)(uVar1 >> 0x15 & 6 | uVar1 >> 0x14 & 1 | uVar5 >> 0x16 & 0x38) * 4);
    uVar6 = *(uint *)(&DAT_03cf5af4 + (ulong)(uVar6 >> 8 & 0x3c | uVar6 >> 7 & 3) * 4) |
            *(uint *)(&DAT_03cf59f4 + (ulong)(uVar6 & 0x3f) * 4) |
            *(uint *)(&DAT_03cf5bf4 + (ulong)(uVar6 >> 0xf & 0x3f) * 4) |
            *(uint *)(&DAT_03cf5cf4 + (ulong)(uVar8 >> 0x16 & 0x30 | uVar6 >> 0x15 & 0xf) * 4);
    uVar8 = uVar8 & 0xfffffff;
    *param_2 = (uVar7 & 0xffff) << 2 | uVar6 << 0x12 | uVar6 >> 0xe & 3;
    param_2[1] = (uint)(CONCAT44(uVar6 & 0x3ff0000 | uVar7 >> 0x10,uVar6) >> 0x1a);
    param_2 = param_2 + 2;
  } while (uVar4 != 0x10);
  return;
}


