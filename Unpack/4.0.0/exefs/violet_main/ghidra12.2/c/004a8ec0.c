/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a8ec0; name: FUN_004a8ec0
 */


void FUN_004a8ec0(ulong *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte *pbVar2;
  void *__dest;
  ulong uVar3;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  __n = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  uVar3 = uVar1 + __n;
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar3 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    *param_1 = uVar3 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  if (__n != 0) {
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
                    /* try { // try from 004a8f78 to 004a8f9f has its CatchHandler @ 004a8fa0 */
  FUN_0021d540(param_1,pbVar2,uVar1);
  return;
}


