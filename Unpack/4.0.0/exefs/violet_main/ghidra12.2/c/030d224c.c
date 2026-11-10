/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d224c; name: FUN_030d224c
 */


void FUN_030d224c(undefined8 *param_1)

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


