/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03360070; name: FUN_03360070
 */


void FUN_03360070(undefined8 *param_1)

{
  void *__dest;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) << 3);
      memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 3);
      *param_1 = __dest;
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}


