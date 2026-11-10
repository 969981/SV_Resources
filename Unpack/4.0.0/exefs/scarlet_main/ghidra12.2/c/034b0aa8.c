/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b0aa8; name: FUN_034b0aa8
 */


byte FUN_034b0aa8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined4 local_4;
  
  while (*(long *)(param_1 + 0x98) != 0 && (*(uint *)(param_1 + 0xda) & 0x1000000) == 0) {
    param_1 = *(long *)(param_1 + 0x98);
  }
  local_4 = DAT_048b01fc._4_4_;
  pbVar4 = *(byte **)(param_1 + 0xb0);
  if (pbVar4 != (byte *)0x0) {
    bVar2 = *pbVar4;
    uVar1 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar1 = 1;
    }
    uVar6 = (ulong)uVar1;
    pbVar3 = pbVar4 + ((ulong)(bVar2 + 4) & 0x1fc);
    pbVar5 = pbVar4;
    do {
      pbVar4 = pbVar3;
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == 0x2d) goto LAB_034b0b14;
      uVar6 = uVar6 - 1;
      pbVar3 = pbVar4 + 4;
    } while (uVar6 != 0);
    pbVar4 = (byte *)0x0;
  }
LAB_034b0b14:
  pbVar5 = (byte *)&local_4;
  if (pbVar4 != (byte *)0x0) {
    pbVar5 = pbVar4;
  }
  *param_2 = *(undefined4 *)pbVar5;
  return *(byte *)(param_1 + 0xdd) >> 1 & 1;
}


