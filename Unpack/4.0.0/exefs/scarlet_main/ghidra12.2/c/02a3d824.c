/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3d824; name: FUN_02a3d824
 */


void FUN_02a3d824(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  int local_18 [2];
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar3 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar3;
  local_18[0] = 0;
  local_18[1] = 0;
  uVar2 = *(ulong *)(lVar3 + 0x90);
  if (1 < uVar2) {
    uVar2 = 2;
  }
  nn::aoc::ListAddOnContent(local_18,0,(int)uVar2);
  if (uVar2 != 0) {
    piVar4 = local_18;
    do {
      FUN_02c737e8(lVar3 + 0x30,*piVar4);
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 != 0);
  }
  return;
}


