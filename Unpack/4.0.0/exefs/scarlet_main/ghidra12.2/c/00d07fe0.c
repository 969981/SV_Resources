/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d07fe0; name: FUN_00d07fe0
 */


void FUN_00d07fe0(ulong *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  
  switch(param_2) {
  case 0:
    pcVar4 = "Shadow";
    uVar5 = 0xe7d5621586e83d61;
    goto LAB_00d0804c;
  case 1:
    pcVar4 = "ShadowCascaded1";
    uVar5 = 0x538c14eaa7d2;
    break;
  case 2:
    pcVar4 = "ShadowCascaded2";
    uVar5 = 0x528c14eaa61f;
    break;
  case 3:
    pcVar4 = "ShadowCascaded3";
    uVar5 = 0x518c14eaa46c;
    break;
  default:
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar2 = PTR_DAT_047d3e30;
    uVar5 = *(ulong *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(ulong *)PTR_DAT_047d3e30;
    param_1[1] = uVar5;
    plVar1 = *(long **)(puVar2 + 0x18);
    param_1[2] = *(ulong *)(puVar2 + 0x10);
    param_1[3] = (ulong)plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00d080a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  uVar5 = uVar5 | 0xeed0000000000000;
LAB_00d0804c:
  *param_1 = uVar5;
  param_1[1] = (ulong)pcVar4;
  param_1[2] = 0x1f;
  param_1[3] = 0;
  return;
}


