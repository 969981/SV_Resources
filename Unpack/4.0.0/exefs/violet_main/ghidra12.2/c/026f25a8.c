/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f25a8; name: FUN_026f25a8
 */


void FUN_026f25a8(long *param_1,undefined8 *param_2)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((*param_1 == 0) || (plVar2 = (long *)FUN_026e4c70(*param_1 + 8), plVar2 == (long *)0x0)) ||
     (uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar3 & 1) != 0)) {
    return;
  }
  sVar1 = FUN_026f20f4(plVar2);
  if (*(short *)(param_2[2] + 2) == sVar1) {
                    /* WARNING: Could not recover jumptable at 0x026f2660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x158))(plVar2,*(undefined8 *)*param_2,*(undefined4 *)param_2[1]);
    return;
  }
  return;
}


