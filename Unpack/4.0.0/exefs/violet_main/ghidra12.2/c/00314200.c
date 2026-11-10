/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00314200; name: FUN_00314200
 */


void FUN_00314200(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [32];
  
  FUN_003673f0(auStack_30,"Invalid HPACK index received");
  uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x301,auStack_30,0,0);
  uVar1 = FUN_00351770(uVar1,5,*(undefined4 *)(param_1 + 0xb0));
  FUN_00351770(uVar1,6,*(undefined4 *)(param_1 + 0xdc));
  return;
}


