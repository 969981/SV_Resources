/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027058d0; name: FUN_027058d0
 */


long FUN_027058d0(long param_1)

{
  size_t __len;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x378));
  lVar2 = 0;
  puVar4 = (undefined8 *)(param_1 + 0x398);
  do {
    puVar3 = (undefined8 *)puVar4[2];
    if ((*(uint *)(puVar4 + 3) & 9) == 1) {
      __len = puVar4[1];
      iVar1 = munmap((void *)*puVar4,__len);
      if (iVar1 != 0) {
        __len = 0;
      }
      lVar2 = __len + lVar2;
    }
    puVar4 = puVar3;
  } while (puVar3 != (undefined8 *)0x0);
  return lVar2;
}


