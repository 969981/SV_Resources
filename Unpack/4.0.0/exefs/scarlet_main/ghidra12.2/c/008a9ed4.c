/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a9ed4; name: FUN_008a9ed4
 */


void FUN_008a9ed4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(long **)(param_1 + 0x28) != (long *)0x0) &&
     (plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0x48))(), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_00896e98(plVar1);
  }
  if ((((*(byte *)(param_1 + 0x228) & 1) != 0) && (*(long **)(param_1 + 0x18) != (long *)0x0)) &&
     (plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x18) + 0x48))(), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_00896e98(plVar1);
  }
  if ((*(long **)(param_1 + 0x68) == (long *)0x0) ||
     (plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x68) + 0x48))(), plVar1 == (long *)0x0))
  {
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  (**(code **)(*plVar1 + 8))(plVar1);
  FUN_00896e98(plVar1);
  return;
}


