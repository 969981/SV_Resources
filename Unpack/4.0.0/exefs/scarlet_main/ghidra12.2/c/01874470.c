/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01874470; name: FUN_01874470
 */


void FUN_01874470(ulong *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  
  switch(param_2) {
  case 0:
    pcVar4 = "Blur1";
    uVar5 = 0x35728743a0b;
    break;
  case 1:
    pcVar4 = "Blur2";
    uVar5 = 0x45728743bbe;
    break;
  case 2:
    pcVar4 = "Blur3";
    uVar5 = 0x55728743d71;
    break;
  case 3:
    pcVar4 = "Blur4";
    uVar5 = 0x65728743f24;
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
                    /* WARNING: Could not recover jumptable at 0x0187455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  *param_1 = uVar5 | 0x858c000000000000;
  param_1[1] = (ulong)pcVar4;
  param_1[2] = 0x1f;
  param_1[3] = 0;
  return;
}


