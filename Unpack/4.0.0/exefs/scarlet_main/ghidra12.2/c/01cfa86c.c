/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfa86c; name: FUN_01cfa86c
 */


void FUN_01cfa86c(ulong *param_1,void *param_2,ulong param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  
  if (param_3 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
  }
  else {
    if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1,1);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,param_2,param_3 + 1);
  return;
}


