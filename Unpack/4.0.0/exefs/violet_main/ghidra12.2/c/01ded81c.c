/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ded81c; name: FUN_01ded81c
 */


void FUN_01ded81c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),5,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),5,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_014fa9b4(auStack_40);
  FUN_015d8984(uVar1,5,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


