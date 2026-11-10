/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002583f0; name: FUN_002583f0
 */


void FUN_002583f0(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  size_t __n;
  void *__dest;
  long lVar5;
  char *__s;
  ulong uVar6;
  
  plVar3 = *(long **)(param_2 + 0x10);
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0x50,8);
  *param_1 = lVar4;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  __s = (char *)*param_3;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(lVar4 + 0x38) = plVar3;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00258508 to 0025850b has its CatchHandler @ 0025850c */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)(lVar4 + 0x21);
    *(char *)(lVar4 + 0x20) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_002584b8;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar6,1);
    *(ulong *)(lVar4 + 0x20) = uVar6 | 1;
    *(size_t *)(lVar4 + 0x28) = __n;
    *(void **)(lVar4 + 0x30) = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_002584b8:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined8 *)(lVar4 + 0x40) = *param_4;
  lVar5 = param_4[1];
  *(long *)(lVar4 + 0x48) = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


