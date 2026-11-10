/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025bffc; name: FUN_0025bffc
 */


byte * FUN_0025bffc(long param_1,byte *param_2)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  void *__dest;
  ulong uVar5;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long *local_38;
  
  plVar1 = (long *)FUN_01cf7e20();
  local_38 = plVar1;
  __n = strlen((char *)param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0025c16c to 0025c173 has its CatchHandler @ 0025c174 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_50 | 1);
    if (__n == 0) goto LAB_0025c094;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    local_50 = uVar5 | 1;
    local_48 = __n;
    local_40 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0025c094:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0025c098 to 0025c0a3 has its CatchHandler @ 0025c17c */
  lVar2 = FUN_01f785ec(param_1,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
  }
  if (param_1 + 8 == lVar2) {
    local_38 = (long *)FUN_01cf7e20();
    uVar5 = local_50 >> 0x10;
    local_50 = CONCAT62((uint6)uVar5 & 0xffffffffff00,0x2a02);
                    /* try { // try from 0025c100 to 0025c10b has its CatchHandler @ 0025c178 */
    lVar3 = FUN_01f785ec(param_1,&local_50);
    if ((local_50 & 1) != 0) {
      (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
    }
    if (lVar2 == lVar3) {
      return param_2;
    }
    pbVar4 = (byte *)(lVar3 + 0x40);
    if ((*pbVar4 & 1) != 0) {
      return *(byte **)(lVar3 + 0x50);
    }
  }
  else {
    pbVar4 = (byte *)(lVar2 + 0x40);
    if ((*pbVar4 & 1) != 0) {
      return *(byte **)(lVar2 + 0x50);
    }
  }
  return pbVar4 + 1;
}


