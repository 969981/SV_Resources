/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c18bc; name: FUN_014c18bc
 */


bool FUN_014c18bc(uint param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((*PTR_DAT_047d8938 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
  }
  uVar4 = (ulong)(param_1 & 0xffff | param_2 << 0x10);
  uVar5 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar5;
  lVar2 = FUN_011b047c(uVar5,uVar4,0);
  lVar3 = FUN_011b047c(uVar5,uVar4 | 0x100000000,0);
  return lVar2 != 0 && lVar3 != 0;
}


