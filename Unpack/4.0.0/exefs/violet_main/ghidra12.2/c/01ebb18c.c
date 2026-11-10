/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebb18c; name: FUN_01ebb18c
 */


void FUN_01ebb18c(undefined1 *param_1,int param_2)

{
  int iVar1;
  void *__src;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839b78), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 != 0) {
    __src = *(void **)(DAT_04839b68 + 0x50);
    if (__src == *(void **)(DAT_04839b68 + 0x58)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      do {
        if ((*(long *)((long)__src + 0x78) != 0) &&
           (*(short *)(*(long *)((long)__src + 0x78) + 0x1a) != 0)) {
          if (iVar1 == param_2) goto LAB_01ebb250;
          iVar1 = iVar1 + 1;
        }
        __src = (void *)((long)__src + 0xd0);
      } while (*(void **)(DAT_04839b68 + 0x58) != __src);
    }
    for (__src = *(void **)(DAT_04839b68 + 0x88); __src != *(void **)(DAT_04839b68 + 0x90);
        __src = (void *)((long)__src + 0xc0)) {
      if ((*(long *)((long)__src + 0x78) != 0) &&
         (*(short *)(*(long *)((long)__src + 0x78) + 0x1a) != 0)) {
        if (iVar1 == param_2) {
LAB_01ebb250:
          *param_1 = 0;
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
          return;
        }
        iVar1 = iVar1 + 1;
      }
    }
  }
  *param_1 = 0;
  return;
}


