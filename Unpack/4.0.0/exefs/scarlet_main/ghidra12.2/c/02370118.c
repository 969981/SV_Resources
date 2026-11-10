/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02370118; name: FUN_02370118
 */


void FUN_02370118(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_1 + 0x40);
  if ((*(ulong *)(lVar3 + 0x60) < 0xfffffffffffffffe) &&
     ((*(long *)(lVar3 + 0x40) != 0 || (*(long *)(lVar3 + 0x48) != 0)))) {
    FUN_02370200(param_2);
    auVar4._0_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
    auVar4._4_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
    auVar4._8_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
    auVar4._12_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
    auVar4 = NEON_ext(auVar4,auVar4,4,1);
    if ((1.1920929e-07 < auVar4._0_4_ + auVar4._4_4_) && (*(char *)(lVar3 + 0x68) == '\0')) {
      if (((*PTR_DAT_047d88d0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      uVar2 = *(undefined8 *)PTR_DAT_047d88d8;
      *(undefined8 *)PTR_DAT_047d88e0 = uVar2;
      FUN_00dc21b8(uVar2,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x48),
                   *(undefined8 *)(lVar3 + 0x60),param_2);
      return;
    }
  }
  return;
}


