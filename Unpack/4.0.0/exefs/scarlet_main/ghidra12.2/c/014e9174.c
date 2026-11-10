/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e9174; name: FUN_014e9174
 */


void FUN_014e9174(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 auStack_90 [96];
  
  local_b0 = 0xca1f3c5bbb8b7011;
  local_a8 = (code *)0x3c42937;
  local_a0 = 7;
  local_98 = (long *)0x0;
  lVar3 = FUN_00e895f4(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x170),&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (lVar3 != 0) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar5 = *(long *)PTR_DAT_047d8288;
    local_d0 = 0x2e48dbf7dd0394d8;
    pcStack_c8 = "PLAY_UI_COMMON_SLIDE";
    *(long *)PTR_DAT_047d8290 = lVar5;
    local_c0 = 0x14;
    local_b8 = (long *)0x0;
    uVar4 = FUN_01a3354c(lVar5);
    memset(&local_b0,0,0x80);
    iVar2 = FUN_0177ffac(lVar5,&local_d0,uVar4,0);
    if ((iVar2 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar5 + 0x220),&local_d0,iVar2,uVar4,0,&local_b0,0),
       pcVar1 = local_a8, local_a8 != (code *)0x0)) {
      local_a0 = 0;
      local_98 = (long *)0x0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(auStack_90);
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    FUN_00dfcea4(lVar3);
  }
  return;
}


