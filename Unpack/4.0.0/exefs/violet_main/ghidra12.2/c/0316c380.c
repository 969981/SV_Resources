/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316c380; name: FUN_0316c380
 */


void FUN_0316c380(undefined8 *param_1,long *param_2)

{
  void *__dest;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      __dest = (void *)(**(code **)(*param_2 + 0x18))(param_2,(long)*(int *)(param_1 + 1) << 4);
      memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 4);
      *param_1 = __dest;
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}


