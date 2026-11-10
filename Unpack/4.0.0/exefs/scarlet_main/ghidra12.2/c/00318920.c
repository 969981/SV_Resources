/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00318920; name: FUN_00318920
 */


undefined8 FUN_00318920(undefined4 *param_1,int param_2,char param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [32];
  
  *(undefined8 **)(param_1 + 2) = param_4;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  uVar4 = *(undefined8 *)((long)param_4 + 0x14);
  uVar3 = *(undefined8 *)((long)param_4 + 0xc);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xb) = uVar4;
  *(undefined8 *)(param_1 + 9) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  if (param_3 == '\0') {
    if (((uint)(param_2 * -0x55555555) >> 1 | param_2 * -0x80000000) < 0x2aaaaaab) {
      return 0;
    }
    FUN_003673f0(auStack_30,"settings frames must be a multiple of six bytes");
    uVar1 = 0x6b;
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(param_1 + 4) = 1;
    if (param_2 == 0) {
      return 0;
    }
    FUN_003673f0(auStack_30,"non-empty settings ack frame received");
    uVar1 = 99;
  }
  else {
    FUN_003673f0(auStack_30,"invalid flags on settings frame");
    uVar1 = 0x68;
  }
  uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_settings.cc"
                       ,uVar1,auStack_30,0,0);
  return uVar1;
}


