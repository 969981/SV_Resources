/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124cb7c; name: FUN_0124cb7c
 */


void FUN_0124cb7c(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  if ((param_3 & 1) == 0) {
    FUN_0124b0ac(param_1,param_2,param_4);
    return;
  }
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    FUN_018ce0ec(param_1,uVar1,0);
  }
  FUN_0124b0ac(param_1,param_2,param_4);
  FUN_018521d8(param_1,plVar2);
  return;
}


