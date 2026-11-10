/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b782c; name: FUN_027b782c
 */


void FUN_027b782c(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  
  local_40 = *param_2;
  local_38 = (long *)param_2[1];
  if (local_38 != (long *)0x0) {
    plVar3 = local_38 + 1;
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
  local_48 = plVar3;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 027b7968 to 027b796f has its CatchHandler @ 027b7970 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_027b78e4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_027b78e4:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_0066adc0(param_1,&local_40,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (local_38 != (long *)0x0) {
    plVar3 = local_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


