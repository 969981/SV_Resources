/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c39448; name: FUN_01c39448
 */


void FUN_01c39448(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_2 == 0) {
    return;
  }
  FUN_0196c644();
  lVar2 = FUN_01c394a0();
  iVar1 = FUN_01aacb90();
  FUN_011b8d00(param_1 + 0x814,lVar2 + 2,iVar1 + -1);
  return;
}


