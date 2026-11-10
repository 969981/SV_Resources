/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00343d90; name: FUN_00343d90
 */


void FUN_00343d90(ulong *param_1)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  __ptr = (void *)param_1[1];
  if (*param_1 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if (*(int *)((long)__ptr + lVar1) == 2) {
        (**(code **)(*(long *)((long)__ptr + lVar1 + 0x18) + 8))
                  (*(undefined8 *)((long)__ptr + lVar1 + 0x10));
      }
      else if (*(int *)((long)__ptr + lVar1) == 0) {
        free(*(void **)((long)__ptr + lVar1 + 0x10));
      }
      free(*(void **)(param_1[1] + lVar1 + 8));
      __ptr = (void *)param_1[1];
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *param_1);
  }
  free(__ptr);
  free(param_1);
  return;
}


