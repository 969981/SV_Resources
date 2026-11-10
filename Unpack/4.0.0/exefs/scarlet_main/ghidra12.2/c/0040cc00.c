/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040cc00; name: FUN_0040cc00
 */


void FUN_0040cc00(long *param_1)

{
  code *pcVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0x60);
  if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  FUN_00453260(param_1,0x30,"external/openssl/crypto/ec/ec_lib.c",699);
  return;
}


