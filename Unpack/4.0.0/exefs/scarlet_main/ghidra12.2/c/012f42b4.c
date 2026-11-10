/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012f42b4; name: FUN_012f42b4
 */


void FUN_012f42b4(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *local_a0;
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
  local_a0 = &LAB_0179c9f4;
  local_98 = FUN_02b55c78;
  local_90 = &LAB_02b55c7c;
  puStack_88 = &LAB_02b55c88;
  FUN_014e0a64(lVar3 + 0xb1c8,param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


