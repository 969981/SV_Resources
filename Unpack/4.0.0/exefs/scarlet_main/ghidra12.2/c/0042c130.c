/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042c130; name: FUN_0042c130
 */


bool FUN_0042c130(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00452ce0(0x30,"external/openssl/crypto/evp/digest.c",0x33);
  if (plVar3 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    FUN_0043b7a0(plVar3,1);
    iVar2 = FUN_0042bc40(plVar3,param_5);
    if ((iVar2 == 0) ||
       ((param_2 != 0 && (iVar2 = (*(code *)plVar3[5])(plVar3,param_1,param_2), iVar2 == 0)))) {
      bVar1 = false;
    }
    else {
      if (0x40 < *(int *)(*plVar3 + 8)) {
                    /* WARNING: Subroutine does not return */
        FUN_003f6d60("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                     "external/openssl/crypto/evp/digest.c",0xad);
      }
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_3);
      lVar4 = *plVar3;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(lVar4 + 8);
      }
      if (*(code **)(lVar4 + 0x38) != (code *)0x0) {
        (**(code **)(lVar4 + 0x38))(plVar3);
        FUN_0043b7a0(plVar3,2);
        lVar4 = *plVar3;
      }
      FUN_00453300(plVar3[3],(long)*(int *)(lVar4 + 0x44));
      bVar1 = iVar2 != 0;
    }
    FUN_0042bb10(plVar3);
    FUN_00452f80(plVar3,"external/openssl/crypto/evp/digest.c",0x39);
  }
  return bVar1;
}


