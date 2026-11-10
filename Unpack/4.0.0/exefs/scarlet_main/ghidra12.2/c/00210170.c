/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00210170; name: FUN_00210170
 */


void FUN_00210170(undefined8 *param_1,undefined4 param_2)

{
  long *plVar1;
  size_t __n;
  undefined8 uVar2;
  char *__s;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *plStack_80;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long *local_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  undefined4 local_38 [2];
  
  local_38[0] = param_2;
  FUN_0024d9c0(&local_98,local_38);
  __s = *(char **)PTR_PTR_047cbc98;
  plVar1 = (long *)FUN_01cf7e20();
  local_60 = plVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002102f8 to 002102ff has its CatchHandler @ 00210300 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n == 0) goto LAB_00210220;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    local_78 = uVar4 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_00210220:
  local_48 = local_88;
  uStack_50 = uStack_90;
  local_58 = local_98;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  plStack_40 = plStack_80;
  uVar2 = FUN_01cf7e20();
  param_1[2] = uVar2;
  param_1[3] = 0;
  *param_1 = puVar3;
                    /* try { // try from 00210250 to 00210263 has its CatchHandler @ 00210314 */
  FUN_01d0202c(param_1,puVar3,&local_78,&local_78);
  if ((local_58 & 1) != 0) {
    (**(code **)(*plStack_40 + 0x18))(plStack_40,local_48,local_58 & 0xfffffffffffffffe,1);
  }
  if ((local_78 & 1) != 0) {
    (**(code **)(*local_60 + 0x18))(local_60,local_68,local_78 & 0xfffffffffffffffe,1);
  }
  if ((local_98 & 1) != 0) {
    (**(code **)(*plStack_80 + 0x18))(plStack_80,local_88,local_98 & 0xfffffffffffffffe,1);
  }
  return;
}


