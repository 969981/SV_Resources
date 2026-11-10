/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a3244; name: FUN_007a3244
 */


undefined8 FUN_007a3244(long *param_1,long *param_2)

{
  uint uVar1;
  int local_28 [5];
  int local_14;
  
  local_14 = 0;
  uVar1 = *(int *)((long)param_1 + 0x1c) + (int)param_1[3];
  (**(code **)(*param_2 + 0x10))
            (local_28,param_2,param_1[1] + (ulong)uVar1,&local_14,(int)param_1[2] - uVar1);
  if (local_28[0] == 0) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + local_14;
    (**(code **)(*param_1 + 0x10))(param_1);
    return 1;
  }
  return 0;
}


