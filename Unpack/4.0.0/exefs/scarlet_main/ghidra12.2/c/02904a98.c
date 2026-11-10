/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


