/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d53ef8; name: FUN_00d53ef8
 */


void FUN_00d53ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)FUN_00d53f4c();
  if ((plVar1 == (long *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x28))(), (uVar2 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d53f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
  return;
}


