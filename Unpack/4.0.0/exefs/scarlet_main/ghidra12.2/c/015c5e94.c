/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c5e94; name: FUN_015c5e94
 */


void FUN_015c5e94(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8 [2];
  
  if ((DAT_04840858 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840858);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840858);
    }
  }
  DAT_04840840 = DAT_04840848;
  local_8[0] = (undefined4)*param_1;
  puVar2 = (undefined4 *)FUN_015c5f60(DAT_04840848 + 0x678,local_8);
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  return;
}


