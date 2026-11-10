/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036e510; name: FUN_0036e510
 */


void FUN_0036e510(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_80 [16];
  ulong local_70;
  undefined8 local_68;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined *puStack_38;
  
  local_68 = 0;
  FUN_0034c7b0(param_2,&local_68);
  local_40 = local_68;
  puStack_38 = PTR_LAB_047cc7b8;
  FUN_00391b20(local_80,"Compression algorithm \'%s\' is disabled.",0x27,&local_40,1);
  uVar1 = (ulong)local_80 | 1;
  if ((local_80[0] & 1) != 0) {
    uVar1 = local_70;
  }
                    /* try { // try from 0036e578 to 0036e5d7 has its CatchHandler @ 0036e600 */
  FUN_00367770(&local_40,uVar1);
  uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2d6,&local_40,
                       0,0);
  FUN_00367770(auStack_60,uVar1);
  uVar2 = FUN_00351fa0(uVar2,5,auStack_60);
  uVar2 = FUN_00351770(uVar2,3,0xc);
  FUN_0036b750(param_1,uVar2);
  if ((local_80[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return;
}


