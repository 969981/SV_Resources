/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030f1b8; name: FUN_0030f1b8
 */


void FUN_0030f1b8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
                    /* try { // try from 0030f1d0 to 0030f217 has its CatchHandler @ 0030f23c */
    FUN_003673f0(auStack_40,"Parser destroyed");
    uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0x27,auStack_40,0,0);
    uVar2 = FUN_0030aa74(lVar3,uVar1,0);
    if (4 < uVar2) {
      FUN_00350fd0();
    }
  }
  if (4 < *(ulong *)(param_1 + 0x10)) {
                    /* try { // try from 0030f224 to 0030f227 has its CatchHandler @ 0030f238 */
    FUN_00350fd0();
  }
  return;
}


