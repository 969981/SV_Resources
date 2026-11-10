/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b9d80; name: FUN_003b9d80
 */


void FUN_003b9d80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    local_38 = param_1;
    local_30 = param_2;
    local_28 = lVar2;
    FUN_0047e5e0(*(undefined8 *)(param_1 + 0x378));
    uVar1 = FUN_00451cd0(*(undefined8 *)(param_1 + 0x28));
    FUN_00451ce0(*(undefined8 *)(param_1 + 0x28),0);
    FUN_00451bc0(lVar2,&LAB_003b9e00,&local_38);
    FUN_00451ce0(*(undefined8 *)(param_1 + 0x28),uVar1);
    FUN_0047e600(*(undefined8 *)(param_1 + 0x378));
  }
  return;
}


