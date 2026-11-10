/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053f1a8; name: FUN_0053f1a8
 */


void FUN_0053f1a8(ulong *param_1,long param_2)

{
  void *__src;
  long *plVar1;
  undefined1 *__dest;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    uVar2 = *(ulong *)(param_2 + 0x80);
    uVar3 = *(ulong *)(param_2 + 0x78);
    param_1[2] = *(ulong *)(param_2 + 0x88);
    param_1[1] = uVar2;
    *param_1 = uVar3;
    return;
  }
  uVar3 = *(ulong *)(param_2 + 0x80);
  __src = *(void **)(param_2 + 0x88);
  if (uVar3 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar3 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0053f258 to 0053f25f has its CatchHandler @ 0053f260 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    param_1[1] = uVar3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,__src,uVar3 + 1);
  return;
}


