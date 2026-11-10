/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00404bf0; name: FUN_00404bf0
 */


int * FUN_00404bf0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_003e49a0(PTR_DAT_047cd290);
    if (param_2 == (int *)0x0) {
      FUN_004806c0(0x10,0x106,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x21c);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 1) {
    if (*(long *)(param_2 + 2) != 0) {
      FUN_003e4550(*(long *)(param_2 + 2),PTR_DAT_047cd288);
    }
  }
  else if (*param_2 == 0) {
    FUN_003dffa0(*(undefined8 *)(param_2 + 2));
  }
  iVar1 = FUN_0040d5a0(param_1);
  if (iVar1 == 0) {
    *param_2 = 1;
    lVar2 = FUN_00404410(param_1,0);
    *(long *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      return param_2;
    }
  }
  else {
    iVar1 = FUN_0040d580(param_1);
    if (iVar1 != 0) {
      lVar2 = FUN_0045bc10();
      if ((lVar2 != 0) && (lVar3 = FUN_0045cdb0(lVar2), lVar3 != 0)) {
        *param_2 = 0;
        *(long *)(param_2 + 2) = lVar2;
        return param_2;
      }
      FUN_003dffa0(lVar2);
      FUN_004806c0(0x10,0x106,0xa7,"external/openssl/crypto/ec/ec_asn1.c",0x231);
    }
  }
  FUN_003e4550(param_2,PTR_DAT_047cd290);
  return (int *)0x0;
}


