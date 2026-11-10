/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00258fd4; name: FUN_00258fd4
 */


void FUN_00258fd4(long param_1,void *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  void *__dest;
  ulong uVar4;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  puVar1 = PTR_DAT_047cba80;
  if (*(int *)(param_1 + 0x1c) != 8) {
    FUN_002679fc(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 8;
    *(undefined **)(param_1 + 0x10) = puVar1;
  }
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)param_3 << 1));
    __dest = (void *)((ulong)&local_58 | 1);
    if (param_3 == 0) goto LAB_0025907c;
  }
  else {
    uVar4 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_58 = uVar4 | 1;
    local_50 = param_3;
    local_48 = __dest;
  }
  memcpy(__dest,param_2,param_3);
LAB_0025907c:
  *(undefined1 *)((long)__dest + param_3) = 0;
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar2 = *(undefined **)(param_1 + 0x10);
  }
  else {
    puVar3 = (ulong *)*puVar3;
    puVar2 = *(undefined **)(param_1 + 0x10);
  }
  if (puVar2 == puVar1) {
    FUN_001fcdc8(param_1 + 0x10,puVar3,&local_58);
  }
  else {
                    /* try { // try from 00259098 to 002590bf has its CatchHandler @ 002590f8 */
    FUN_001fcec0(puVar2,&local_58);
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


