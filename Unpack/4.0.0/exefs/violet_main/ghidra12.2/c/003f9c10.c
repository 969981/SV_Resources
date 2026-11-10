/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f9c10; name: thunk_FUN_003df190
 */


long thunk_FUN_003df190(undefined4 *param_1)

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


