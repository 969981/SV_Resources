/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fc5c8; name: FUN_028fc5c8
 */


void FUN_028fc5c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    lVar1 = lVar2 + -0x40;
    lVar2 = lVar2 + -0x80;
    FUN_028fd75c(lVar1);
    FUN_00db239c(lVar2);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


