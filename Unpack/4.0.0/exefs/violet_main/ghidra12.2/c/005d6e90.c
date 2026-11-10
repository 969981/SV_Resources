/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005d6e90; name: FUN_005d6e90
 */


void FUN_005d6e90(long param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong local_50;
  size_t sStack_48;
  void *pvStack_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  plVar1 = (long *)FUN_01cf7e20();
  local_38 = plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005d6f84 to 005d6f8b has its CatchHandler @ 005d6f8c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_50 | 1);
    if (__n == 0) goto LAB_005d6f38;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    local_50 = uVar3 | 1;
    sStack_48 = __n;
    pvStack_40 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_005d6f38:
  *(undefined1 *)((long)__dest + __n) = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x38));
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(long **)(lVar2 + 0x70) = local_38;
  *(void **)(lVar2 + 0x68) = pvStack_40;
  *(size_t *)(lVar2 + 0x60) = sStack_48;
  *(ulong *)(lVar2 + 0x58) = local_50;
  nn::os::SignalEvent((EventType *)(lVar2 + 0x10));
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x38));
  return;
}


