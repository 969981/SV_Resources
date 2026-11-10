/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00258540; name: FUN_00258540
 */


void FUN_00258540(ulong *param_1,long *param_2)

{
  long *plVar1;
  size_t __n;
  byte *__s;
  undefined1 *__dest;
  ulong uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*param_2 + 8);
  if ((*pbVar3 & 1) == 0) {
    __s = pbVar3 + 1;
  }
  else {
    __s = *(byte **)(pbVar3 + 0x10);
  }
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_002585ec;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    *param_1 = uVar2 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  memcpy(__dest,__s,__n);
LAB_002585ec:
  __dest[__n] = 0;
  FUN_002634a4(param_1 + 4,pbVar3 + 0x18);
  return;
}


