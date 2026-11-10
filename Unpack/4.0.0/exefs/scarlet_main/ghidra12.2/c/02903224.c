/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


