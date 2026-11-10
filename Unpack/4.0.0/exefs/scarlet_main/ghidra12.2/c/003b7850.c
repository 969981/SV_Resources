/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b7850; name: FUN_003b7850
 */


undefined8 FUN_003b7850(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    iVar1 = 0x43;
    uVar2 = 0x1f;
  }
  else {
    iVar1 = FUN_003d9b20(param_1,0,param_2,0,1);
    if (iVar1 == 1) {
      uVar2 = FUN_003b78e0(*(undefined8 *)(param_1 + 0x550),param_2);
      return uVar2;
    }
    uVar2 = 0x24;
  }
  FUN_004806c0(0x14,0xc6,iVar1,"external/openssl/ssl/ssl_rsa.c",uVar2);
  return 0;
}


