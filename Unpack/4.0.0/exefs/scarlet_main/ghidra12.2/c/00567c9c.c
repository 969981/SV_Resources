/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00567c9c; name: FUN_00567c9c
 */


void FUN_00567c9c(undefined8 param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long *local_58;
  byte local_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)FUN_01cf7e20();
  local_50 = 8;
  uStack_4b = 0;
  uStack_4f = 0x73755f5f;
  plVar1 = (long *)FUN_01cf7e20();
  local_58 = plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00567dc4 to 00567dcb has its CatchHandler @ 00567dcc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_00567d54;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    local_70 = uVar2 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00567d54:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_00567e00(param_1,&local_50,&local_70);
  if ((local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))
              (local_38,local_40,
               CONCAT26(uStack_4a,CONCAT15(uStack_4b,CONCAT41(uStack_4f,local_50))) &
               0xfffffffffffffffe,1);
  }
  return;
}


