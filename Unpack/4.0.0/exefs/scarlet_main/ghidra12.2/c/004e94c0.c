/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e94c0; name: FUN_004e94c0
 */


void FUN_004e94c0(ulong *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  bool bVar2;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  bVar2 = (*param_2 & 1) != 0;
  pbVar3 = *(byte **)(param_2 + 0x10);
  __n = (ulong)(*param_2 >> 1);
  if (bVar2) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar4 = uVar1 + __n;
  if (!bVar2) {
    pbVar3 = param_2 + 1;
  }
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    *param_1 = uVar4 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  if (__n != 0) {
    memcpy(__dest,pbVar3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
                    /* try { // try from 004e9584 to 004e95ab has its CatchHandler @ 004e95ac */
  FUN_0021d540(param_1,pbVar3,uVar1);
  return;
}


