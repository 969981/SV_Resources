/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfafc; name: FUN_007bfafc
 */


uint FUN_007bfafc(byte *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_047d0fd0;
  puVar2 = PTR_DAT_047d0fc8;
  if (*PTR_DAT_047d0fc8 == '\0') {
    uVar4 = 0;
    do {
      uVar5 = (uint)(uVar4 >> 1) & 0x7fffffff;
      if ((uVar4 & 1) != 0) {
        uVar5 = uVar5 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      uVar5 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 >> 1 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      uVar5 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 >> 1 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      uVar5 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar5 = uVar1 >> 1 ^ 0xedb88320;
      }
      uVar1 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        uVar1 = uVar5 >> 1 ^ 0xedb88320;
      }
      *(uint *)(puVar3 + uVar4 * 4) = uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x100);
    *puVar2 = 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  do {
    uVar5 = *(uint *)(puVar3 + (ulong)(uVar5 & 0xff ^ (uint)*param_1) * 4) ^ uVar5 >> 8;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return ~uVar5;
}


