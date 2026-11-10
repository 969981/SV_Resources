/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e8908; name: FUN_026e8908
 */


void FUN_026e8908(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  long *local_60;
  long *local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_00f830a8(auStack_40,uVar1);
  FUN_00f834a4(auStack_78,uVar1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_026e89a0(param_1,auStack_78);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


