/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019070c4; name: FUN_019070c4
 */


void FUN_019070c4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  (**(code **)(*DAT_0485a020 + 0x108))(auStack_40);
  puVar1 = (undefined8 *)FUN_00e514cc(*(undefined8 *)(param_2 + 0x208));
  FUN_00fff044(param_1,*puVar1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


