/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00318ed0; name: FUN_00318ed0
 */


undefined8 FUN_00318ed0(undefined1 *param_1,uint param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  ulong local_30;
  undefined *puStack_28;
  ulong local_20;
  undefined *puStack_18;
  
  if ((param_2 == 4) && (param_3 == 0)) {
    uVar2 = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    local_30 = (ulong)param_2;
    puStack_28 = PTR_FUN_047cc7b0;
    local_20 = (ulong)param_3;
    puStack_18 = PTR_FUN_047ccb10;
    FUN_00391b20(local_68,"invalid window update: length=%d, flags=%02x",0x2c,&local_30,2);
    uVar1 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar1 = local_58;
    }
                    /* try { // try from 00318f58 to 00318f7b has its CatchHandler @ 00318fa8 */
    FUN_00367770(auStack_50,uVar1);
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_window_update.cc"
                         ,0x3e,auStack_50,0,0);
    if ((local_68[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
      return uVar2;
    }
  }
  return uVar2;
}


