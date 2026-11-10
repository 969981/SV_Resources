/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026946ec; name: FUN_026946ec
 */


uint FUN_026946ec(undefined8 param_1,code *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  long local_28;
  
  FUN_02692f24(&local_28);
  if (local_28 == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)();
    param_2 = (code *)(uVar1 & 0xffffffff);
    uVar2 = 1;
  }
  FUN_02692cc8(&local_28);
  return (uint)param_2 & uVar2;
}


