/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017527fc; name: FUN_017527fc
 */


void FUN_017527fc(long param_1,long param_2)

{
  undefined8 uVar1;
  size_t __n;
  char *__s;
  void *__dest;
  ulong uVar2;
  ulong local_68;
  size_t local_60;
  void *local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_28 [8];
  
  uVar1 = FUN_0126a9c0();
  FUN_0135d328(auStack_50,uVar1,0);
  __s = *(char **)(param_2 + 8);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_68 | 1);
    if (__n == 0) goto LAB_01752874;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_68 = uVar2 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_01752874:
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_017528f0(auStack_28,&local_68,*(long *)(param_1 + 0x68) + 8);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_0135d2ec(auStack_50);
  return;
}


