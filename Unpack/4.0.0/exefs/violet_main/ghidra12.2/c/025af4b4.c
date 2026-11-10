/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025af4b4; name: FUN_025af4b4
 */


void FUN_025af4b4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((*param_1 == 0) || (plVar1 = (long *)FUN_025af3c8(*param_1 + 8), plVar1 == (long *)0x0)) ||
     (uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar2 & 1) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x025af510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x140))(plVar1);
  return;
}


