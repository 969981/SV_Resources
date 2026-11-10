/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b707f8; name: FUN_02b707f8
 */


uint FUN_02b707f8(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x68))(param_1,uVar3);
      if (lVar2 == param_2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (bVar1 != uVar3);
  }
  return 6;
}


