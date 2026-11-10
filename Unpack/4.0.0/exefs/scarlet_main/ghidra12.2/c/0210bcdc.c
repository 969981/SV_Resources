/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210bcdc; name: FUN_0210bcdc
 */


long * FUN_0210bcdc(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x930))();
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x3b8))(plVar2), (uVar3 & 1) == 0))
  {
    return plVar2;
  }
  uVar1 = (**(code **)(*plVar2 + 0x2d8))(plVar2);
  uVar4 = (**(code **)(*param_1 + 0x928))(param_1);
  plVar2 = (long *)FUN_01021c94(uVar4,uVar1);
  return plVar2;
}


