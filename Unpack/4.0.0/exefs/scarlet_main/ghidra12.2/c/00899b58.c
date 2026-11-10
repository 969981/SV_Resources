/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00899b58; name: FUN_00899b58
 */


long FUN_00899b58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  while( true ) {
    if (lVar2 == param_1 + 0x48) {
      return 0;
    }
    uVar1 = FUN_0088fc10(param_2,lVar2 + -0x28);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2 + -0xd8;
}


