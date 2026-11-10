/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6ef54; name: FUN_01f6ef54
 */


void FUN_01f6ef54(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[5] = plVar3;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 01f6f028 to 01f6f02f has its CatchHandler @ 01f6f030 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x11);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_01f6f010;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
    param_1[2] = uVar5 | 1;
    param_1[3] = __n;
    param_1[4] = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_01f6f010:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


