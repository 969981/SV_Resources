/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b3804; name: FUN_002b3804
 */


undefined1  [16] FUN_002b3804(long *param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong __n;
  undefined8 *puVar4;
  void *__src;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  
  puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  __n = *param_3;
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002b3950 to 002b3957 has its CatchHandler @ 002b3958 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)*param_2;
  if (__n < 0x17) {
    __dest = (void *)((long)puVar1 + 0x21);
    *(char *)(puVar1 + 4) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_002b38a0;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    puVar1[4] = uVar5 | 1;
    puVar1[5] = __n;
    puVar1[6] = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_002b38a0:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar2 = (undefined8 *)FUN_002a4d2c(param_1,&local_48,puVar1 + 4);
  puVar4 = (undefined8 *)*puVar2;
  if (puVar4 == (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = local_48;
    *puVar2 = puVar1;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar1;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_010108e0(param_1[1],puVar2);
    param_1[2] = param_1[2] + 1;
    uVar3 = 1;
  }
  else {
    if ((*(byte *)(puVar1 + 4) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar1[6]);
    }
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
    uVar3 = 0;
    puVar1 = puVar4;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = puVar1;
  return auVar6;
}


