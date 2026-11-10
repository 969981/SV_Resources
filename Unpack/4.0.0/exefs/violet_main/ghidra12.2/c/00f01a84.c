/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f01a84; name: FUN_00f01a84
 */


void FUN_00f01a84(undefined1 *param_1,long param_2,long *param_3)

{
  void *pvVar1;
  void *__src;
  
  if ((*param_3 == 0) || (*(short *)(*param_3 + 0x1a) == 0)) {
LAB_00f01a98:
    *param_1 = 0;
  }
  else {
    __src = *(void **)(param_2 + 0x50);
    pvVar1 = *(void **)(param_2 + 0x58);
    if (__src == pvVar1) {
LAB_00f01ac4:
      if (__src == pvVar1) goto LAB_00f01acc;
      *param_1 = 0;
    }
    else {
      do {
        if (*(long *)((long)__src + 0x78) == *param_3) goto LAB_00f01ac4;
        __src = (void *)((long)__src + 0xd0);
      } while (pvVar1 != __src);
LAB_00f01acc:
      __src = *(void **)(param_2 + 0x88);
      pvVar1 = *(void **)(param_2 + 0x90);
      if (__src != pvVar1) {
        do {
          if (*(long *)((long)__src + 0x78) == *param_3) goto LAB_00f01ad8;
          __src = (void *)((long)__src + 0xc0);
        } while (pvVar1 != __src);
        goto LAB_00f01a98;
      }
LAB_00f01ad8:
      *param_1 = 0;
      if (__src == pvVar1) {
        return;
      }
    }
    memcpy(param_1 + 0x10,__src,0x28);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)((long)__src + 0x28);
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)((long)__src + 0x2a);
    param_1[0x3c] = *(undefined1 *)((long)__src + 0x2c);
    param_1[0x3d] = *(undefined1 *)((long)__src + 0x2d);
    param_1[0x3e] = *(undefined1 *)((long)__src + 0x2e);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((long)__src + 0x30);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((long)__src + 0x34);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((long)__src + 0x38);
    memcpy(param_1 + 0x50,(void *)((long)__src + 0x40),0x32);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_00ca1a48(param_1 + 0x88,(long)__src + 0x78);
    *param_1 = 1;
  }
  return;
}


