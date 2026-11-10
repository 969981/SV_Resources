/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bfa40; name: FUN_007bfa40
 */


void FUN_007bfa40(undefined8 param_1,long *param_2,undefined4 param_3)

{
  if ((param_2 == (long *)0x0) &&
     (param_2 = (long *)FUN_007c4038(*(undefined8 *)PTR_DAT_047d0fc0), param_2 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007bfa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1,param_3);
  return;
}


