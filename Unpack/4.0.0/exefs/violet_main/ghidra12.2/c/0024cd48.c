/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024cd48; name: FUN_0024cd48
 */


void FUN_0024cd48(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,char *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_3;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar1;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0024ce74 to 0024ce7b has its CatchHandler @ 0024ce7c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0024cdec;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_0024cdec:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *param_5;
  uVar4 = param_5[1];
  *(undefined8 *)(param_1 + 0x10) = param_5[2];
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  lVar2 = param_5[3];
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = lVar2;
  if (lVar2 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    param_5[1] = 0;
    *param_5 = param_5 + 1;
    param_5[3] = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  uVar5 = param_2[2];
  uVar4 = param_2[1];
  uVar6 = param_2[3];
  *(undefined8 *)(param_1 + 0x1c) = param_2[4];
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}


