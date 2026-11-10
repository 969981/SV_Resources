/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0029150c; name: FUN_0029150c
 */


void FUN_0029150c(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  void *__src;
  undefined *puVar1;
  ulong *puVar2;
  undefined1 *__dest;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((long)param_3 - (long)param_2 != 0) {
    lVar3 = (long)param_3 - (long)param_2 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar3 * -0x5555555555555555)) {
                    /* try { // try from 0029163c to 00291643 has its CatchHandler @ 00291644 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38);
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + lVar3;
    puVar1 = PTR_FUN_047cba38;
    for (; puVar4 = puVar2, param_2 != param_3; param_2 = param_2 + 3) {
      while ((*param_2 & 1) == 0) {
        uVar5 = param_2[1];
        uVar6 = *param_2;
        puVar4[2] = param_2[2];
        puVar2 = puVar4 + 3;
        puVar4[1] = uVar5;
        *puVar4 = uVar6;
        param_2 = param_2 + 3;
        puVar4 = puVar2;
        if (param_3 == param_2) goto LAB_00291618;
      }
      uVar6 = param_2[1];
      __src = (void *)param_2[2];
      if (uVar6 < 0x17) {
        __dest = (undefined1 *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uVar6 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00291634 to 0029163b has its CatchHandler @ 0029164c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(puVar1,uVar5);
        puVar4[1] = uVar6;
        puVar4[2] = (ulong)__dest;
        *puVar4 = uVar5 | 1;
      }
      memcpy(__dest,__src,uVar6 + 1);
      puVar2 = puVar4 + 3;
    }
LAB_00291618:
    param_1[1] = puVar2;
  }
  return;
}


