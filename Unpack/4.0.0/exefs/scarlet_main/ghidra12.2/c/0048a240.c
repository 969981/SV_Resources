/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048a240; name: FUN_0048a240
 */


void FUN_0048a240(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) goto LAB_0048a278;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x48);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == lVar2) goto LAB_0048a278;
  }
  FUN_00452f80(lVar1,"external/openssl/crypto/x509/x509_vpm.c",0x1a1);
  *(long *)(param_1 + 0x48) = lVar2;
LAB_0048a278:
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}


