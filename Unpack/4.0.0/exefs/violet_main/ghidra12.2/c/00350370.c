/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350370; name: FUN_00350370
 */


undefined8 FUN_00350370(int *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [32];
  
  if (*param_1 == 2) {
    return 0;
  }
  FUN_003673f0(auStack_30,"Did not finish headers");
  uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/lib/http/parser.cc",0x171,auStack_30,
                       0,0);
  return uVar1;
}


