/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004938c0; name: FUN_004938c0
 */


undefined8 FUN_004938c0(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    lVar1 = FUN_00491c40(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_0049b0f0(param_2);
  }
  if (lVar1 == 0) {
    FUN_004806c0(0x22,0x9c,0x96,"external/openssl/crypto/x509v3/v3_crld.c",0x37);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00494720(0,param_1,lVar1);
    if (*param_2 == '@') {
      FUN_00491c90(param_1,lVar1);
    }
    else {
      FUN_0047e3b0(lVar1,PTR_LAB_047cd418);
    }
  }
  return uVar2;
}


