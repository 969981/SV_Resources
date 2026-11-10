/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039a0cc; name: FUN_0039a0cc
 */


ulong * FUN_0039a0cc(char *param_1)

{
  size_t sVar1;
  undefined1 *__src;
  ulong *puVar2;
  size_t __n;
  ulong uVar3;
  undefined1 *puVar4;
  ulong local_48;
  size_t sStack_40;
  undefined1 *local_38;
  
  puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (puVar2 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n << 1));
    puVar4 = (undefined1 *)((ulong)&local_48 | 1);
    if (__n == 0) {
      *puVar4 = 0;
      goto LAB_0039a134;
    }
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    puVar4 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_48 = uVar3 | 1;
    sStack_40 = __n;
    local_38 = puVar4;
  }
  memcpy(puVar4,param_1,__n);
  __src = local_38;
  sVar1 = sStack_40;
  puVar4[__n] = 0;
  if ((local_48 & 1) != 0) {
    if (sStack_40 < 0x17) {
      puVar4 = (undefined1 *)((long)puVar2 + 1);
      *(char *)puVar2 = (char)((int)sStack_40 << 1);
    }
    else {
      if (0xffffffffffffffef < sStack_40) {
                    /* try { // try from 0039a21c to 0039a223 has its CatchHandler @ 0039a224 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = sStack_40 + 0x10 & 0xfffffffffffffff0;
      puVar4 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      puVar2[1] = sVar1;
      puVar2[2] = (ulong)puVar4;
      *puVar2 = uVar3 | 1;
    }
    memcpy(puVar4,__src,sVar1 + 1);
    puVar2[3] = 0;
    if ((local_48 & 1) == 0) {
      return puVar2;
    }
    FUN_0049e790(PTR_LAB_047cba48,local_38);
    return puVar2;
  }
LAB_0039a134:
  puVar2[2] = (ulong)local_38;
  puVar2[3] = 0;
  puVar2[1] = sStack_40;
  *puVar2 = local_48;
  return puVar2;
}


