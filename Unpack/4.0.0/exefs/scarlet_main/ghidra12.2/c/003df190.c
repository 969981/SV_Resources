/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003df190; name: FUN_003df190
 */


long FUN_003df190(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    lVar2 = FUN_00452ce0(0x18,"external/openssl/crypto/asn1/asn1_lib.c",0x151);
    if (lVar2 == 0) {
      FUN_004806c0(0xd,0x82,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x153);
      return 0;
    }
    *(undefined4 *)(lVar2 + 4) = 4;
    *(undefined4 *)(lVar2 + 4) = param_1[1];
    iVar1 = FUN_003df070(lVar2,*(undefined8 *)(param_1 + 2),*param_1);
    if (iVar1 != 0) {
      uVar3 = *(ulong *)(lVar2 + 0x10) & 0x80;
      *(ulong *)(lVar2 + 0x10) = uVar3;
      *(ulong *)(lVar2 + 0x10) = *(ulong *)(param_1 + 4) & 0xffffffffffffff7f | uVar3;
      return lVar2;
    }
    uVar4 = (uint)*(ulong *)(lVar2 + 0x10);
    if ((uVar4 >> 4 & 1) == 0) {
      FUN_00452f80(*(undefined8 *)(lVar2 + 8),"external/openssl/crypto/asn1/asn1_lib.c",0x15f);
    }
    if ((uVar4 >> 7 & 1) == 0) {
      FUN_00452f80(lVar2,"external/openssl/crypto/asn1/asn1_lib.c",0x161);
    }
  }
  return 0;
}


