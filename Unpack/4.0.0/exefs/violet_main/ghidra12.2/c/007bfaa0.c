/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bfaa0; name: FUN_007bfaa0
 */


void FUN_007bfaa0(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_007c3d34(*(undefined8 *)PTR_DAT_047d0fc0,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007bfad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}


