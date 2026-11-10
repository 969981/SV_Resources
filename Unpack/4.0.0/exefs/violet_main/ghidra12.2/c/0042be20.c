/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0042be20; name: FUN_0042be20
 */


undefined4 FUN_0042be20(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (0x40 < *(int *)(*param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_003f6d60("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                 "external/openssl/crypto/evp/digest.c",0xad);
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  lVar2 = *param_1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (*(code **)(lVar2 + 0x38) != (code *)0x0) {
    (**(code **)(lVar2 + 0x38))(param_1);
    FUN_0043b7a0(param_1,2);
    lVar2 = *param_1;
  }
  FUN_00453300(param_1[3],(long)*(int *)(lVar2 + 0x44));
  return uVar1;
}


