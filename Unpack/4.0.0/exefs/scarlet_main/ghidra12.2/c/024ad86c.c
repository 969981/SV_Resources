/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ad86c; name: FUN_024ad86c
 */


void FUN_024ad86c(long param_1,long param_2)

{
  ulong local_40;
  undefined1 auStack_38 [24];
  
  if (param_2 != param_1) {
    local_40 = 0;
    FUN_024ad8f4(&local_40,param_1);
    FUN_024ad8f4(param_1,param_2);
    FUN_024ad8f4(param_2,&local_40);
    if (((local_40 != 0) && ((local_40 & 1) == 0)) &&
       (*(code **)(local_40 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_40 & 0xfffffffffffffffe))(auStack_38,auStack_38,2);
    }
  }
  return;
}


