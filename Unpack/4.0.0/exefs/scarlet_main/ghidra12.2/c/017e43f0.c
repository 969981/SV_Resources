/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e43f0; name: FUN_017e43f0
 */


ulong FUN_017e43f0(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = 0x3de;
    puVar2 = param_1;
  }
  else {
    uVar1 = 0x40 - param_2;
    uVar5 = (ulong)uVar1;
    if (0x3dd < uVar1) {
      uVar5 = 0x3de;
    }
    puVar2 = param_1 + 1;
    uVar3 = 0xffffffffffffffffU >> (uVar1 - uVar5 & 0x3f) & -1L << ((ulong)param_2 & 0x3f) &
            *param_1;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = 0x3de - uVar5;
    if (0x39e < uVar5) goto LAB_017e44c4;
  }
  uVar5 = -uVar4 + 0x3f;
  if (uVar5 < 0xffffffffffffffc0 || -uVar4 == -0x7f) {
    uVar5 = 0xffffffffffffffc0;
  }
  uVar5 = uVar5 + uVar4;
  if (((uint)uVar5 >> 6 & 1) == 0) {
    uVar6 = *puVar2 - (*puVar2 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = uVar3 + ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    uVar4 = uVar4 - 0x40;
    puVar2 = puVar2 + 1;
  }
  while (0x3f < uVar5) {
    uVar5 = *puVar2 - (*puVar2 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar6 = puVar2[1] - (puVar2[1] >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = uVar3 + ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
            ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    uVar4 = uVar4 - 0x80;
    puVar2 = puVar2 + 2;
    uVar5 = uVar4;
  }
LAB_017e44c4:
  if (uVar4 != 0) {
    uVar5 = *puVar2 & 0xffffffffffffffffU >> (-uVar4 & 0x3f);
    uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = uVar3 + ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  }
  return uVar3;
}


