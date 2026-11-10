/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f6ea4; name: FUN_007f6ea4
 */


void FUN_007f6ea4(long param_1)

{
  long *plVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  FUN_007ece04(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_007f99ac();
  }
  FUN_007eca48(param_1 + 0x10);
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_007f7830();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_007e9dfc();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_007e9dfc();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_007e9dfc();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_007e9dfc();
  }
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0xc4,local_28);
  *(undefined2 *)(param_1 + 0x52) = 0;
  return;
}


