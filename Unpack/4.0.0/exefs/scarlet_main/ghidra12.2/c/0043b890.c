/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043b890; name: FUN_0043b890
 */


int FUN_0043b890(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *__src;
  
  if ((*param_1 == 4) && (*(long *)(param_1 + 2) != 0)) {
    __src = (void *)FUN_003df520();
    iVar2 = FUN_003df510(*(undefined8 *)(param_1 + 2));
    iVar1 = iVar2;
    if (param_3 <= iVar2) {
      iVar1 = param_3;
    }
    memcpy(param_2,__src,(long)iVar1);
  }
  else {
    FUN_004806c0(0xd,0x87,0x6d,"external/openssl/crypto/asn1/evp_asn1.c",0x24);
    iVar2 = -1;
  }
  return iVar2;
}


