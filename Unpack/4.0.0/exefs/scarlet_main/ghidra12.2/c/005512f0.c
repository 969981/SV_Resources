/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005512f0; name: FUN_005512f0
 */


void FUN_005512f0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,char *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  
  *param_1 = param_3;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar3;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00551424 to 0055142b has its CatchHandler @ 0055142c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00551394;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
    *(ulong *)(param_1 + 2) = uVar5 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_00551394:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *param_5;
  uVar6 = param_5[1];
  *(undefined8 *)(param_1 + 0x10) = param_5[2];
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  lVar4 = param_5[3];
  plVar3 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = lVar4;
  if (lVar4 == 0) {
    *(long **)(param_1 + 0xc) = plVar3;
  }
  else {
    *(long **)(*plVar3 + 0x10) = plVar3;
    param_5[1] = 0;
    *param_5 = param_5 + 1;
    param_5[3] = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  lVar4 = param_2[1];
  *(long *)(param_1 + 0x16) = lVar4;
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
  return;
}


