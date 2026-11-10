/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043fe30; name: FUN_0043fe30
 */


int FUN_0043fe30(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar3 = *(code **)(*param_1 + 0x38), pcVar3 == (code *)0x0)) {
    FUN_004806c0(6,0x92,0x96,"external/openssl/crypto/evp/pmeth_gn.c",0x5c);
    return -2;
  }
  if ((int)param_1[4] == 4) {
    if (param_2 != (long *)0x0) {
      lVar2 = *param_2;
      if (lVar2 == 0) {
        lVar2 = FUN_0043def0();
        *param_2 = lVar2;
        if (lVar2 == 0) {
          return -1;
        }
        pcVar3 = *(code **)(*param_1 + 0x38);
      }
      iVar1 = (*pcVar3)(param_1,lVar2);
      if (iVar1 < 1) {
        FUN_0043e1f0(*param_2);
        *param_2 = 0;
      }
      return iVar1;
    }
  }
  else {
    FUN_004806c0(6,0x92,0x97,"external/openssl/crypto/evp/pmeth_gn.c",0x60);
  }
  return -1;
}


