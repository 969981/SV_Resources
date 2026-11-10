/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00455490; name: FUN_00455490
 */


void FUN_00455490(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_68 [4];
  char local_64 [4];
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      uVar4 = uVar3 >> 3;
      uVar1 = (uint)uVar3 & 7;
      uVar2 = 1 << (ulong)(uVar1 ^ 7);
      local_64[0] = ((uVar2 & *(byte *)(param_1 + uVar4)) != 0) << 7;
      FUN_00455560(local_64,local_68,1,param_4,param_5,param_7,param_8);
      uVar3 = uVar3 + 1;
      *(byte *)(param_2 + uVar4) =
           (byte)((local_68[0] & 0x80) >> (ulong)uVar1) |
           *(byte *)(param_2 + uVar4) & ((byte)uVar2 ^ 0xff);
    } while (param_3 != uVar3);
  }
  return;
}


