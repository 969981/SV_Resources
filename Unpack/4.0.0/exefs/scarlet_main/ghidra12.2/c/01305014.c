/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01305014; name: FUN_01305014
 */


void FUN_01305014(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x5075075075075075) < param_2) {
    FUN_013051bc(auStack_48,param_2,(param_1[1] - *param_1 >> 4) * -0x5075075075075075,param_1 + 3);
    FUN_013052f4(param_1,auStack_48);
    FUN_013056e8(auStack_48);
  }
  return;
}


