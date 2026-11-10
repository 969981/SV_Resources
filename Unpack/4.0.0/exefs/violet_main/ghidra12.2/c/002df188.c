/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002df188; name: FUN_002df188
 */


undefined8 FUN_002df188(undefined4 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar4;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar2 != 0) {
    FUN_002e4418(lVar2,0x16,*param_1);
  }
  iVar1 = param_1[10];
  param_1[10] = iVar1 + 1;
  *(int *)(lVar2 + 0x18) = iVar1 + 1;
  if (*param_2 == 0) goto LAB_002df274;
  puVar3 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar3 != (ulong *)0x0) {
    __src = (void *)*param_2;
    if (__src == (void *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    else {
      __n = param_2[1];
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((long)puVar3 + 1);
        *(char *)puVar3 = (char)((int)__n << 1);
        if (__n != 0) goto LAB_002df25c;
      }
      else {
        uVar4 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
        *puVar3 = uVar4 | 1;
        puVar3[1] = __n;
        puVar3[2] = (ulong)__dest;
LAB_002df25c:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
  }
  *(ulong **)(lVar2 + 0x20) = puVar3;
LAB_002df274:
  FUN_002de558(param_1,lVar2);
  return 1;
}


