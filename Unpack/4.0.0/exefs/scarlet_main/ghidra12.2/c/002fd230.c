/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fd230; name: FUN_002fd230
 */


long FUN_002fd230(long param_1,long param_2)

{
  size_t __n;
  char cVar1;
  bool bVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined1 auStack_48 [24];
  
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_0036a9d0(auStack_48,param_1);
  FUN_0036aad0(&local_68,auStack_48);
  __n = uStack_60 & 0xff;
  if (local_68 != (undefined8 *)0x0) {
    __n = uStack_60;
  }
  uVar4 = __n + 0xf & 0xfffffffffffffff0;
  __dest = *(void **)(param_2 + 8);
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)__dest) < uVar4) {
    __dest = (void *)FUN_0038bad0(param_2);
  }
  else {
    *(ulong *)(param_2 + 8) = (long)__dest + uVar4;
  }
  if (local_68 == (undefined8 *)0x0) {
    local_58 = (void *)((long)&uStack_60 + 1);
  }
  memcpy(__dest,local_58,__n);
  lVar3 = FUN_0038ad50(PTR_PTR_047cca68,param_2);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = FUN_00385610(__dest,__n,lVar3,PTR_PTR_047cca68,param_2);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
    }
  }
  if ((local_68 != (undefined8 *)0x0) && (plVar5 = (long *)*local_68, plVar5 != (long *)0x0)) {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)local_68[3])(local_68[4]);
    }
  }
  FUN_0036aa00(auStack_48);
  return lVar3;
}


