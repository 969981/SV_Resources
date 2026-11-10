/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024b5948; name: FUN_024b5948
 */


void FUN_024b5948(undefined8 param_1,undefined8 param_2)

{
  ulong local_40;
  undefined8 auStack_38 [3];
  
  local_40 = 0x45bc829;
  auStack_38[0] = param_2;
  FUN_024ad86c(&local_40,param_1);
  if (((local_40 != 0) && ((local_40 & 1) == 0)) &&
     (*(code **)(local_40 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)(local_40 & 0xfffffffffffffffe))(auStack_38,auStack_38,2);
  }
  return;
}


