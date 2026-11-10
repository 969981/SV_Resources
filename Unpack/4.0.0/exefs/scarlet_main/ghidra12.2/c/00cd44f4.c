/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd44f4; name: FUN_00cd44f4
 */


void FUN_00cd44f4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long local_58;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_045dac40;
  param_1[1] = param_2;
  local_38 = param_2;
  FUN_00cd4648(param_1 + 0x602);
  param_1[0xc08] = 0;
  param_1[0xc0a] = 0x7ffffffffffffff;
  param_1[0xc07] = 0;
  param_1[0xc06] = 0;
  param_1[0xc09] = param_2;
  param_1[0xc0b] = 0;
  *(undefined4 *)(param_1 + 0xc0c) = 0;
  FUN_00cd46b8(param_1 + 0xc0d);
  param_1[0xc0d] = &PTR_LAB_045dac60;
  param_1[0xc0e] = param_2;
  param_1[0xc0f] = 0;
  param_1[0xc10] = 0;
  param_1[0xc11] = 0;
  puVar1 = PTR_DAT_047db018;
  param_1[0xc12] = 0;
  *(undefined8 **)puVar1 = param_1 + 0xc0d;
  param_1[0xc13] = 0;
  FUN_00cd4c10(&local_58,param_2,&local_38);
  FUN_00cd4664(param_1 + 0xc06,&local_58);
  lVar2 = local_58;
  local_58 = 0;
  if (lVar2 != 0) {
    FUN_00ceb448(auStack_50);
  }
  if (((DAT_0485c178 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0485c178), iVar3 != 0)) {
    FUN_015c0004(&DAT_0485c170);
    FUN_00100190(PTR_LAB_047e1900,&DAT_0485c170,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0485c178);
  }
  param_1[0xc05] = &DAT_0485c170;
  return;
}


