/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c291a8; name: FUN_01c291a8
 */


undefined4 FUN_01c291a8(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined4 uVar1;
  long local_28;
  
  FUN_01c27d8c(&local_28);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)();
  }
  FUN_01c1abf8(&local_28);
  return uVar1;
}


