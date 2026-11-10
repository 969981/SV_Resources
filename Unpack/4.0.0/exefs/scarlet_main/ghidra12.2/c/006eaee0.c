/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006eaee0; name: FUN_006eaee0
 */


void FUN_006eaee0(undefined8 param_1,byte *param_2)

{
  long *plVar1;
  size_t __n;
  byte *pbVar2;
  char *__s;
  void *pvVar3;
  ulong uVar4;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  __s = *(char **)PTR_PTR_047cbd00;
  plVar1 = (long *)FUN_01cf7e20();
  local_48 = plVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006eb000 to 006eb007 has its CatchHandler @ 006eb008 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    pvVar3 = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_006eaf8c;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    local_60 = uVar4 | 1;
    local_58 = __n;
    local_50 = pvVar3;
  }
  memcpy(pvVar3,__s,__n);
LAB_006eaf8c:
  *(undefined1 *)((long)pvVar3 + __n) = 0;
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  pvVar3 = local_50;
  if ((local_60 & 1) == 0) {
    pvVar3 = (void *)((long)&local_60 + 1);
  }
                    /* try { // try from 006eafbc to 006eafc3 has its CatchHandler @ 006eb00c */
  FUN_006fe2d0(param_1,*(undefined8 *)PTR_PTR_047cbcf8,pbVar2,pvVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}


