/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030b1e4; name: FUN_0030b1e4
 */


long FUN_0030b1e4(char *param_1,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  size_t sVar2;
  char *__s;
  void *pvVar3;
  ulong uVar4;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_70;
  size_t local_68;
  void *local_60;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0xb8);
  if (lVar1 == 0) {
    return 0;
  }
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)sVar2 << 1));
    pvVar3 = (void *)((ulong)&local_58 | 1);
    if (sVar2 != 0) goto LAB_0030b278;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_58 = uVar4 | 1;
    local_50 = sVar2;
    local_48 = pvVar3;
LAB_0030b278:
    memcpy(pvVar3,param_1,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  __s = (char *)*param_2;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0030b3ac to 0030b3b3 has its CatchHandler @ 0030b3b4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar2 << 1));
    pvVar3 = (void *)((ulong)&local_70 | 1);
    if (sVar2 == 0) goto LAB_0030b2fc;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_70 = uVar4 | 1;
    local_68 = sVar2;
    local_60 = pvVar3;
  }
  memcpy(pvVar3,__s,sVar2);
LAB_0030b2fc:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  uStack_88 = param_3[1];
  local_90 = *param_3;
  local_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
                    /* try { // try from 0030b318 to 0030b32b has its CatchHandler @ 0030b3c4 */
  FUN_00348684(lVar1,&local_58,&local_70,&local_90);
  if ((local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return lVar1;
}


