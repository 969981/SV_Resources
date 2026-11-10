/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036e300; name: FUN_0036e300
 */


void FUN_0036e300(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  ulong local_40;
  undefined *puStack_38;
  ulong local_30;
  undefined *puStack_28;
  
  local_40 = (ulong)*(uint *)(param_1 + 0x604);
  puStack_38 = PTR_FUN_047cc7b0;
  local_30 = (ulong)*(uint *)(param_1 + 0x600);
  puStack_28 = PTR_FUN_047cc7b0;
  FUN_00391b20(local_78,"Error in incoming message compression (%d) or stream compression (%d).",
               0x46,&local_40,2);
  uVar1 = (ulong)local_78 | 1;
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_68;
  }
                    /* try { // try from 0036e35c to 0036e3bb has its CatchHandler @ 0036e3e4 */
  FUN_00367770(&local_40,uVar1);
  uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2d6,&local_40,
                       0,0);
  FUN_00367770(auStack_60,uVar1);
  uVar2 = FUN_00351fa0(uVar2,5,auStack_60);
  uVar2 = FUN_00351770(uVar2,3,0xd);
  FUN_0036b750(param_1,uVar2);
  if ((local_78[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return;
}


