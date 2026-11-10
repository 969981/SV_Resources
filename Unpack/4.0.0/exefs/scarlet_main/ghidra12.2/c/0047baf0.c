/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047baf0; name: FUN_0047baf0
 */


undefined8 FUN_0047baf0(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint local_10 [4];
  
  uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_10[0] = (uVar3 >> 0x10 | uVar3 << 0x10) ^ 0xa3b1bac6;
  uVar3 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  local_10[1] = (uVar3 >> 0x10 | uVar3 << 0x10) ^ 0x56aa3350;
  uVar3 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar4 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  local_10[2] = (uVar3 >> 0x10 | uVar3 << 0x10) ^ 0x677d9197;
  local_10[3] = (uVar4 >> 0x10 | uVar4 << 0x10) ^ 0xb27022dc;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar2 = local_10[(ulong)((int)uVar5 + 2) & 3] ^ local_10[uVar1 & 3] ^
            local_10[(ulong)((int)uVar5 - 1) & 3] ^ (&DAT_03d0121c)[uVar5];
    uVar3 = (uint)(byte)(&DAT_03d0129c)[uVar2 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10;
    uVar4 = uVar3 | (uint)(byte)(&DAT_03d0129c)[(ulong)(uVar2 >> 8) & 0xff] << 8;
    uVar2 = uVar4 | (byte)(&DAT_03d0129c)[(ulong)uVar2 & 0xff];
    uVar3 = uVar2 ^ local_10[uVar5 & 3] ^ (uint)(CONCAT44(uVar2,uVar3) >> 0x13) ^
            (uint)(CONCAT44(uVar2,uVar4) >> 9);
    local_10[uVar5 & 3] = uVar3;
    *(uint *)(param_2 + uVar5 * 4) = uVar3;
    uVar5 = uVar1;
  } while (uVar1 != 0x20);
  return 1;
}


