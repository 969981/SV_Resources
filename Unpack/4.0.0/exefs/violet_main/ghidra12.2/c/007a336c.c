/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a336c; name: FUN_007a336c
 */


void FUN_007a336c(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 != (void *)0x0) {
    uVar1 = *(int *)((long)param_1 + 0x1c) + (int)param_1[3];
    if (uVar1 + param_3 <= *(uint *)(param_1 + 2)) {
      memcpy((void *)(param_1[1] + (ulong)uVar1),param_2,(ulong)param_3);
      *(uint *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + param_3;
                    /* WARNING: Could not recover jumptable at 0x007a33d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
  }
  return;
}


