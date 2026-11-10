/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030fc20; name: FUN_0030fc20
 */


undefined8 FUN_0030fc20(undefined4 *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  ulong local_30;
  undefined *puStack_28;
  
  if (param_2 < 8) {
    local_30 = (ulong)param_2;
    puStack_28 = PTR_FUN_047cc7b0;
    FUN_00391b20(local_68,"goaway frame too short (%d bytes)",0x21,&local_30,1);
    uVar1 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar1 = local_58;
    }
                    /* try { // try from 0030fc7c to 0030fc9f has its CatchHandler @ 0030fcfc */
    FUN_00367770(auStack_50,uVar1);
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
                         ,0x2c,auStack_50,0,0);
    if ((local_68[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
  }
  else {
    free(*(void **)(param_1 + 4));
    param_1[6] = param_2 - 8;
    uVar3 = FUN_0038c780();
    uVar2 = 0;
    *(undefined8 *)(param_1 + 4) = uVar3;
    param_1[7] = 0;
    *param_1 = 0;
  }
  return uVar2;
}


