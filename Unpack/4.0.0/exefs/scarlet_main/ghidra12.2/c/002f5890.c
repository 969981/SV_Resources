/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f5890; name: FUN_002f5890
 */


undefined8 FUN_002f5890(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [32];
  
  lVar2 = FUN_0038c320(param_1,"ssl_alpn_selected_protocol");
  if (lVar2 == 0) {
    FUN_003673f0(auStack_30,"Cannot check peer: missing selected ALPN property.");
    uVar3 = 0xa0;
  }
  else {
    iVar1 = FUN_0038be00(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 != 0) {
      return 0;
    }
    FUN_003673f0(auStack_30,"Cannot check peer: invalid ALPN value.");
    uVar3 = 0xa4;
  }
  uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                       ,uVar3,auStack_30,0,0);
  return uVar3;
}


