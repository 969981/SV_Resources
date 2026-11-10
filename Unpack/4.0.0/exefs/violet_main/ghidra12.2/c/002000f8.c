/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002000f8; name: FUN_002000f8
 */


void FUN_002000f8(undefined4 *param_1,undefined4 param_2,char *param_3,undefined8 *param_4)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar1;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002001f8 to 002001ff has its CatchHandler @ 00200200 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00200194;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_00200194:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *param_4;
  uVar4 = param_4[1];
  *(undefined8 *)(param_1 + 0x10) = param_4[2];
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  lVar2 = param_4[3];
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = lVar2;
  if (lVar2 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    param_4[1] = 0;
    *param_4 = param_4 + 1;
    param_4[3] = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}


