/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818210; name: FUN_00818210
 */


long FUN_00818210(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_58 | 1);
    if (__n == 0) goto LAB_008182b4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_58 = uVar3 | 1;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_008182b4:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_0081bd28(lVar2,uVar1,&local_58);
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return lVar2;
}


