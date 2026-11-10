/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030f240; name: FUN_0030f240
 */


undefined8 FUN_0030f240(undefined8 param_1,ulong param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  ulong local_30;
  undefined *puStack_28;
  
  if ((param_2 & 0xfe) == 0) {
    uVar2 = 0;
    if ((param_2 & 1) == 0) {
      *(undefined1 *)(param_4 + 0x8e8) = 0;
    }
    else {
      *(undefined1 *)(param_4 + 0x8e8) = 1;
      *(undefined1 *)(param_4 + 0x1b5) = 1;
    }
  }
  else {
    local_30 = param_2 & 0xff;
    puStack_28 = PTR_FUN_047ccb10;
    FUN_00391b20(local_68,"unsupported data flags: 0x%02x",0x1e,&local_30,1);
    uVar1 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar1 = local_58;
    }
                    /* try { // try from 0030f29c to 0030f2cb has its CatchHandler @ 0030f320 */
    FUN_00367770(auStack_50,uVar1);
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0x32,auStack_50,0,0);
    uVar2 = FUN_00351770(uVar2,2,param_3);
    if ((local_68[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
  }
  return uVar2;
}


