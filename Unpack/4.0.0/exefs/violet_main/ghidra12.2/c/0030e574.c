/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030e574; name: FUN_0030e574
 */


undefined8 FUN_0030e574(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  long local_30;
  undefined *puStack_28;
  long local_20;
  undefined *puStack_18;
  
  local_20 = *(long *)(param_1 + 0x18);
  if (param_2 <= local_20) {
    return 0;
  }
  puStack_28 = PTR_FUN_047cc7c0;
  puStack_18 = PTR_FUN_047cc7c0;
  local_30 = param_2;
  FUN_00391b20(local_68,"frame of size %ld overflows local window of %ld",0x2f,&local_30,2);
  uVar1 = (ulong)local_68 | 1;
  if ((local_68[0] & 1) != 0) {
    uVar1 = local_58;
  }
                    /* try { // try from 0030e5cc to 0030e5ef has its CatchHandler @ 0030e630 */
  FUN_00367770(auStack_50,uVar1);
  uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/flow_control.cc"
                       ,0xd2,auStack_50,0,0);
  if ((local_68[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  return uVar2;
}


