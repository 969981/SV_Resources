/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0222bb00; name: FUN_0222bb00
 */


void FUN_0222bb00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_00d8fb98(auStack_40,PTR_DAT_047d9c40);
  FUN_0222bce4(param_1,param_2,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


