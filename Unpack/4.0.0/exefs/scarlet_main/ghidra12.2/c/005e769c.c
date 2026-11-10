/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e769c; name: FUN_005e769c
 */


void FUN_005e769c(undefined4 *param_1,undefined4 param_2,char *param_3,undefined2 param_4,
                 char *param_5,char *param_6)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  void *pvVar4;
  
  *param_1 = param_2;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005e786c to 005e7873 has its CatchHandler @ 005e78c4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005e7738;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = sVar2;
    *(void **)(param_1 + 6) = pvVar4;
LAB_005e7738:
    memcpy(pvVar4,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  *(undefined2 *)(param_1 + 10) = param_4;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x12) = plVar1;
  sVar2 = strlen(param_5);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005e7874 to 005e787b has its CatchHandler @ 005e78b0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x31);
    *(char *)(param_1 + 0xc) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_005e77c0;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 0xc) = uVar3 | 1;
    *(size_t *)(param_1 + 0xe) = sVar2;
    *(void **)(param_1 + 0x10) = pvVar4;
LAB_005e77c0:
    memcpy(pvVar4,param_5,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  plVar1 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x1a) = plVar1;
  sVar2 = strlen(param_6);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 005e787c to 005e7883 has its CatchHandler @ 005e7884 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x51);
    *(char *)(param_1 + 0x14) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_005e7850;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 0x14) = uVar3 | 1;
    *(size_t *)(param_1 + 0x16) = sVar2;
    *(void **)(param_1 + 0x18) = pvVar4;
  }
  memcpy(pvVar4,param_6,sVar2);
LAB_005e7850:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  return;
}


