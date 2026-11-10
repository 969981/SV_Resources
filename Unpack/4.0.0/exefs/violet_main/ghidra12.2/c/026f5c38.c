/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f5c38; name: FUN_026f5c38
 */


void FUN_026f5c38(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_026f5c78(*(undefined8 *)(param_2 + 0x40));
  *param_1 = (long)plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x026f5c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


