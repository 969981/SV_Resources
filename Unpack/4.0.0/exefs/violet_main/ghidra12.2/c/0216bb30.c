/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216bb30; name: FUN_0216bb30
 */


void FUN_0216bb30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *__dest;
  
  __dest = *(long **)(param_2 + 0x648);
  plVar5 = *(long **)(param_2 + 0x650);
  if ((__dest != plVar5) && (*__dest != param_1)) {
    do {
      plVar6 = __dest + 3;
      __dest = plVar5;
      if (plVar5 == plVar6) break;
      __dest = plVar6;
    } while (*plVar6 != param_1);
  }
  plVar5 = *(long **)(param_2 + 8);
  lVar1 = __dest[1];
  lVar2 = __dest[2];
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1,lVar1,lVar2);
  }
  else {
    FUN_00c48fe8(plVar5,param_1,lVar1,lVar2);
  }
  __n = *(long *)(param_2 + 0x650) - (long)(__dest + 3);
  if (__n != 0) {
    memmove(__dest,__dest + 3,__n);
  }
  *(size_t *)(param_2 + 0x650) = (long)__dest + __n;
  return;
}


