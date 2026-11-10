/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e4cc0; name: FUN_026e4cc0
 */


void FUN_026e4cc0(long *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (((*param_1 == 0) || (plVar1 = (long *)FUN_026e4c70(*param_1 + 8), plVar1 == (long *)0x0)) ||
     (uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar2 & 1) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x026e4d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x178))(plVar1,*param_2 != '\0');
  return;
}


