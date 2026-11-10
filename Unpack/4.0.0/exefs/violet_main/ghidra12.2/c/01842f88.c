/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01842f88; name: FUN_01842f88
 */


void FUN_01842f88(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  uVar1 = FUN_01843004();
  uVar2 = FUN_01842ff0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18));
  FUN_01842ff8(uVar2,uVar1);
  thunk_FUN_0123bad8(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),9,0);
  *(undefined1 *)(param_1 + 0xa0) = local_28;
  *(undefined8 *)(param_1 + 0x90) = local_38;
  *(undefined8 *)(param_1 + 0x98) = uStack_30;
  return;
}


