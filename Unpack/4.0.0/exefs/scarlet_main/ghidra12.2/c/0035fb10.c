/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035fb10; name: FUN_0035fb10
 */


void FUN_0035fb10(void *param_1)

{
  long lVar1;
  void *__ptr;
  undefined8 *puVar2;
  undefined1 auStack_18 [8];
  
  lVar1 = (long)param_1 + 0x18;
  FUN_0038db40(lVar1);
  if (*(char *)((long)param_1 + 0x48) != '\x01') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_0038db60(lVar1);
  if (*(long *)((long)param_1 + 0x78) != 0) {
    FUN_0035351c(auStack_18,*(long *)((long)param_1 + 0x78),0);
  }
  FUN_0038db20(lVar1);
  __ptr = *(void **)((long)param_1 + 0x50);
  while (__ptr != (void *)0x0) {
    *(undefined8 *)((long)param_1 + 0x50) = *(undefined8 *)((long)__ptr + 0xe8);
    free(__ptr);
    __ptr = *(void **)((long)param_1 + 0x50);
  }
  FUN_00343d90(*(undefined8 *)((long)param_1 + 0x90));
  puVar2 = *(undefined8 **)((long)param_1 + 0x98);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0049e790(PTR_LAB_047cba48,puVar2);
  }
  free(param_1);
  return;
}


