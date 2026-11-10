/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b2ed0; name: FUN_003b2ed0
 */


bool FUN_003b2ed0(undefined4 *param_1,void *param_2,uint param_3)

{
  long lVar1;
  undefined4 local_2a0 [84];
  ulong local_150;
  undefined1 auStack_148 [296];
  
  if (param_3 < 0x21) {
    local_2a0[0] = *param_1;
    local_150 = (ulong)param_3;
    memcpy(auStack_148,param_2,local_150);
    FUN_0047e5c0(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x378));
    lVar1 = FUN_00451a40(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x28),local_2a0);
    FUN_0047e600(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x378));
    return lVar1 != 0;
  }
  return false;
}


