/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01822fb8; name: FUN_01822fb8
 */


undefined8 FUN_01822fb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  uVar1 = 8;
  if (DAT_04831048 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_01823014(auStack_40,param_1,uVar1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


