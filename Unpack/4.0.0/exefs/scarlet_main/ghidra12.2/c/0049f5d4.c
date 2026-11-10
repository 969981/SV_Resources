/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049f5d4; name: FUN_0049f5d4
 */


void FUN_0049f5d4(undefined8 *param_1,ulong *param_2)

{
  void *__src;
  ulong *puVar1;
  undefined1 *__dest;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar1 != (ulong *)0x0) {
    if ((*param_2 & 1) == 0) {
      uVar2 = param_2[1];
      uVar3 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar2;
      *puVar1 = uVar3;
    }
    else {
      uVar3 = param_2[1];
      __src = (void *)param_2[2];
      if (uVar3 < 0x17) {
        __dest = (undefined1 *)((long)puVar1 + 1);
        *(char *)puVar1 = (char)((int)uVar3 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
        puVar1[1] = uVar3;
        puVar1[2] = (ulong)__dest;
        *puVar1 = uVar2 | 1;
      }
      memcpy(__dest,__src,uVar3 + 1);
    }
  }
  *param_1 = puVar1;
  return;
}


