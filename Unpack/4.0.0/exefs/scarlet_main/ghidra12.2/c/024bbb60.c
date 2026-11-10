/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bbb60; name: FUN_024bbb60
 */


void FUN_024bbb60(long param_1)

{
  void *__src;
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *__src_00;
  long lVar6;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [44];
  undefined4 local_54;
  
  local_54 = *(undefined4 *)(param_1 + 8);
  iVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x120))
                    (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xb8),0x10,&local_54);
  __src_00 = *(void **)(param_1 + 0xb8);
  lVar6 = *(long *)(param_1 + 0xc0);
  iVar2 = 0x10 - iVar2;
  pvVar5 = __src_00;
  if (lVar6 != 0) {
    pvVar5 = (void *)((long)__src_00 + lVar6 * 0x28);
  }
  pvVar3 = (void *)((long)pvVar5 + (long)iVar2 * -0x28);
  if (pvVar3 != __src_00) {
    if (*(long *)((long)pvVar3 + -0x28) <= *(long *)(param_1 + 0x88)) {
      lVar1 = (long)pvVar5 + (long)iVar2 * -0x28 + 0x280;
      do {
        lVar4 = lVar1;
        if ((long)__src_00 + 0x2a8 == lVar4) {
          pvVar3 = __src_00;
          goto LAB_024bbbec;
        }
        lVar1 = lVar4 + -0x28;
      } while (*(long *)(lVar4 + -0x2d0) <= *(long *)(param_1 + 0x88));
      pvVar3 = (void *)(lVar4 + -0x2a8);
    }
  }
LAB_024bbbec:
  if (__src_00 != pvVar3) {
    pvVar5 = __src_00;
    while( true ) {
      __src_00 = (void *)((long)pvVar3 + -0x28);
      memcpy(auStack_80,__src_00,0x28);
      if (lVar6 != 0) {
        pvVar5 = (void *)((long)pvVar5 + lVar6 * 0x28);
      }
      __src = (void *)(param_1 + 0x88);
      if (pvVar3 != (void *)((long)pvVar5 + (long)iVar2 * -0x28)) {
        __src = pvVar3;
      }
      memcpy(auStack_a8,__src,0x28);
      FUN_024bbccc(param_1,auStack_80,auStack_a8);
      pvVar5 = *(void **)(param_1 + 0xb8);
      if (__src_00 == pvVar5) break;
      lVar6 = *(long *)(param_1 + 0xc0);
      pvVar3 = __src_00;
    }
  }
  memcpy((void *)(param_1 + 0x88),__src_00,0x28);
  return;
}


