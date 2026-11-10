/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e114c; name: FUN_005e114c
 */


void FUN_005e114c(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  char *__s;
  ulong uVar3;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x48,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  __s = (char *)*param_3;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(lVar2 + 0x38) = plVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005e1244 to 005e1247 has its CatchHandler @ 005e1248 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)(lVar2 + 0x21);
    *(char *)(lVar2 + 0x20) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_005e1214;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(lVar2 + 0x20) = uVar3 | 1;
    *(size_t *)(lVar2 + 0x28) = __n;
    *(void **)(lVar2 + 0x30) = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_005e1214:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined8 *)(lVar2 + 0x40) = *param_4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


