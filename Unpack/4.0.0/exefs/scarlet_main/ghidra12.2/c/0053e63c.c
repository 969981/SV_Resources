/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053e63c; name: FUN_0053e63c
 */


void FUN_0053e63c(ulong *param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar2;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 0x18);
    uVar3 = *(ulong *)(param_2 + 0x10);
    param_1[2] = *(ulong *)(param_2 + 0x20);
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x18);
    pvVar1 = *(void **)(param_2 + 0x20);
    if (uVar3 < 0x17) {
      puVar5 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar3 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0053e800 to 0053e807 has its CatchHandler @ 0053e858 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      param_1[1] = uVar3;
      param_1[2] = (ulong)puVar5;
      *param_1 = uVar4 | 1;
    }
    memcpy(puVar5,pvVar1,uVar3 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar2;
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 0x38);
    uVar3 = *(ulong *)(param_2 + 0x30);
    param_1[6] = *(ulong *)(param_2 + 0x40);
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x38);
    pvVar1 = *(void **)(param_2 + 0x40);
    if (uVar3 < 0x17) {
      puVar5 = (undefined1 *)((long)param_1 + 0x21);
      *(char *)(param_1 + 4) = (char)((int)uVar3 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0053e808 to 0053e80f has its CatchHandler @ 0053e844 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      param_1[5] = uVar3;
      param_1[6] = (ulong)puVar5;
      param_1[4] = uVar4 | 1;
    }
    memcpy(puVar5,pvVar1,uVar3 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[0xb] = (ulong)plVar2;
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 0x58);
    uVar3 = *(ulong *)(param_2 + 0x50);
    param_1[10] = *(ulong *)(param_2 + 0x60);
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x58);
    pvVar1 = *(void **)(param_2 + 0x60);
    if (uVar3 < 0x17) {
      puVar5 = (undefined1 *)((long)param_1 + 0x41);
      *(char *)(param_1 + 8) = (char)((int)uVar3 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0053e810 to 0053e817 has its CatchHandler @ 0053e818 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      param_1[8] = uVar4 | 1;
      param_1[9] = uVar3;
      param_1[10] = (ulong)puVar5;
    }
    memcpy(puVar5,pvVar1,uVar3 + 1);
  }
  uVar3 = FUN_002490c0();
  param_1[0xc] = 0;
  param_1[0xd] = uVar3;
  FUN_01e74fb0(param_1 + 0xe);
  return;
}


