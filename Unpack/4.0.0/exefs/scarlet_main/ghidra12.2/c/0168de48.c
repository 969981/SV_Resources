/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168de48; name: FUN_0168de48
 */


void FUN_0168de48(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *apuStack_80 [12];
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(&LAB_00a2e334,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar4 = *(undefined1 **)PTR_DAT_047d4e00;
  local_90 = &LAB_00a2f34c;
  local_a0 = &LAB_01db8a34;
  local_98 = FUN_00a2f300;
  *(undefined1 **)PTR_DAT_047d4e08 = puVar4;
  local_88 = &LAB_00a2f358;
  apuStack_80[0] = puVar4;
  FUN_0168dfc8(puVar4,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(apuStack_80);
  }
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar2 != 0))
  {
    FUN_00100190(&LAB_00a2f364,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar3 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar3;
  local_a0 = puVar4;
  FUN_0168df94(*(undefined8 *)(lVar3 + 0x30),&local_a0);
  return;
}


