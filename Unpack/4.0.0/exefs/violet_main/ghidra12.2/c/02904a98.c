/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02904a98; name: FUN_02904a98
 */


undefined2 FUN_02904a98(long param_1,int param_2)

{
  undefined2 uVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30));
    uVar1 = 0;
    if (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x450))();
    }
  }
  return uVar1;
}


