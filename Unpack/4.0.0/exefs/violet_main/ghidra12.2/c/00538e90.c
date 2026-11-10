/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00538e90; name: FUN_00538e90
 */


void FUN_00538e90(ulong *param_1,byte *param_2,undefined4 param_3)

{
  size_t __n;
  byte *__src;
  bool bVar1;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  
  plVar2 = *(long **)(param_2 + 0x18);
  param_1[2] = 0;
  param_1[3] = (ulong)plVar2;
  *param_1 = 0;
  param_1[1] = 0;
  __src = *(byte **)(param_2 + 0x10);
  bVar1 = (*param_2 & 1) != 0;
  __n = (ulong)(*param_2 >> 1);
  if (bVar1) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (!bVar1) {
    __src = param_2 + 1;
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00538f34;
  }
  else {
    uVar3 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    *param_1 = uVar3 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  memcpy(__dest,__src,__n);
LAB_00538f34:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00538f38 to 00538f5f has its CatchHandler @ 00538f60 */
  FUN_00211ce8(param_1,param_3);
  return;
}


