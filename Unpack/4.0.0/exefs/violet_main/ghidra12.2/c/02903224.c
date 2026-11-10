/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02903224; name: FUN_02903224
 */


undefined1 FUN_02903224(long param_1,int param_2)

{
  undefined1 uVar1;
  long *plVar2;
  
  if ((param_2 == 0) ||
     (plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30)),
     plVar2 == (long *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x118))();
  }
  return uVar1;
}


