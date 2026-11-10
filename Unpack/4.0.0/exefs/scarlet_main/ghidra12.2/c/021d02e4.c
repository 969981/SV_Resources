/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d02e4; name: FUN_021d02e4
 */


void FUN_021d02e4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_045a4468;
  param_1[4] = &PTR_LAB_045a45b0;
  param_1[5] = &DAT_045a46d8;
  param_1[6] = &PTR_LAB_045a4730;
  param_1[7] = &PTR_LAB_045a4758;
  if ((param_1[0x25] != 0) && ((*(byte *)(param_1[0x25] + 0x1e8) & 1) != 0)) {
    if (((*PTR_DAT_047d8af8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8af8);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8b00;
    *(undefined8 *)PTR_DAT_047d8b08 = uVar2;
    FUN_0216b608(uVar2,param_1 + 0x24);
  }
  FUN_00fa65c0(param_1 + 0x24);
  FUN_00e6bfa4(param_1);
  return;
}


