/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f6d80; name: FUN_003f6d80
 */


byte FUN_003f6d80(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    bVar3 = 0;
    uVar4 = 0;
  }
  else {
    bVar3 = 0;
    uVar4 = 0;
    do {
      pbVar1 = (byte *)(param_1 + uVar4);
      pbVar2 = (byte *)(param_2 + uVar4);
      uVar4 = uVar4 + 2;
      bVar3 = bVar3 | *pbVar2 ^ *pbVar1 | pbVar2[1] ^ pbVar1[1];
    } while ((param_3 & 0xfffffffffffffffe) != uVar4);
  }
  if ((param_3 & 1) != 0) {
    bVar3 = bVar3 | *(byte *)(param_2 + uVar4) ^ *(byte *)(param_1 + uVar4);
  }
  return bVar3;
}


