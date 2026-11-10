/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178294c; name: FUN_0178294c
 */


void FUN_0178294c(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [104];
  undefined8 local_18;
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    local_18 = param_1;
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    param_1 = local_18;
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
      param_1 = local_18;
    }
  }
  lVar3 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar3;
  local_a0 = FUN_010f58f8;
  local_98 = FUN_02a14564;
  local_90 = &LAB_02a14568;
  puStack_88 = &LAB_02a14574;
  FUN_01782a4c(lVar3 + 0xb1c8,param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


