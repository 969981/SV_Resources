/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016973b0; name: FUN_016973b0
 */


void FUN_016973b0(undefined8 *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined4 local_18 [2];
  
  auVar3 = *param_2;
  if ((DAT_04840858 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840858);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840858);
    }
  }
  DAT_04840840 = DAT_04840848;
  local_18[0] = (undefined4)*param_1;
  puVar2 = (undefined8 *)FUN_015c5f60(DAT_04840848 + 0x678,local_18);
  *puVar2 = auVar3._0_8_;
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  puVar2[1] = auVar3._0_8_;
  return;
}


