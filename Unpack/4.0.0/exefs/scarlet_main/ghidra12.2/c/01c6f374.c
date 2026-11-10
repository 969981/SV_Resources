/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6f374; name: FUN_01c6f374
 */


uint FUN_01c6f374(short param_1,char param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  size_t __n;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  void *__src;
  undefined8 *local_b0 [4];
  short local_90;
  char local_8e;
  long local_88;
  undefined1 local_38 [8];
  
  lVar4 = FUN_016a48e4();
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + 0x40);
    lVar1 = *(long *)(lVar4 + 0x48);
    if (lVar7 != lVar1) {
      do {
        if (((*(short *)(lVar7 + 0x20) == param_1) && (*(char *)(lVar7 + 0x26) == param_2)) &&
           (*(long *)(lVar7 + 0x28) == param_3)) goto LAB_01c6f3f0;
        lVar7 = lVar7 + 0x40;
      } while (lVar1 != lVar7);
      lVar7 = lVar1;
    }
LAB_01c6f3f0:
    if (lVar1 == lVar7) {
      uVar3 = 1;
    }
    else {
      FUN_016947d8(local_b0);
      local_38[0] = 2;
      local_90 = param_1;
      local_8e = param_2;
      local_88 = param_3;
      if (local_b0[0] == (undefined8 *)0x0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        FUN_01876124(&local_90,local_38,local_b0[0] + 1);
        FUN_01ec7390(local_38,&local_90,local_b0[0] + 1);
        uVar5 = *local_b0[0];
        uVar6 = *(undefined4 *)(local_b0[0] + 3);
      }
      uVar3 = (**(code **)(**(long **)(lVar4 + 0x78) + 0x70))(*(long **)(lVar4 + 0x78),uVar5,uVar6);
      if ((uVar3 & 1) != 0) {
        __src = *(void **)(lVar4 + 0x40);
        pvVar2 = *(void **)(lVar4 + 0x48);
        if (__src != pvVar2) {
          do {
            if (((*(short *)((long)__src + 0x20) == param_1) &&
                (*(char *)((long)__src + 0x26) == param_2)) &&
               (*(long *)((long)__src + 0x28) == param_3)) goto LAB_01c6f4bc;
            __src = (void *)((long)__src + 0x40);
          } while (pvVar2 != __src);
          __src = pvVar2;
        }
LAB_01c6f4bc:
        if (pvVar2 != __src) {
          memcpy(&local_90,__src,0x40);
          __n = (long)pvVar2 - ((long)__src + 0x40);
          if (__n != 0) {
            memmove(__src,(void *)((long)__src + 0x40),__n);
          }
          *(size_t *)(lVar4 + 0x48) = (long)__src + __n;
          if (*(code **)(lVar4 + 0x100) != (code *)0x0) {
            (**(code **)(lVar4 + 0x100))(lVar4 + 0x120,&local_90);
          }
        }
      }
      FUN_01694aa8(local_b0);
    }
  }
  return uVar3 & 1;
}


