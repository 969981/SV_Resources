/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0214ee08; name: FUN_0214ee08
 */


void FUN_0214ee08(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *(undefined8 *)(param_1 + 0x88);
  uStack_48 = *(undefined8 *)(param_1 + 0x90);
  plVar1 = *(long **)(param_1 + 200);
  local_40 = *(undefined8 *)(param_1 + 0x98);
  local_38 = *(long **)(param_1 + 0xa0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  (**(code **)(*plVar1 + 0xf8))(plVar1,&local_50,param_2);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = *(undefined8 *)(param_1 + 0x88);
  uStack_48 = *(undefined8 *)(param_1 + 0x90);
  plVar1 = *(long **)(param_1 + 200);
  local_40 = *(undefined8 *)(param_1 + 0x98);
  local_38 = *(long **)(param_1 + 0xa0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  auVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_50);
  *(undefined1 (*) [16])(param_1 + 0x2f0) = auVar2;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


