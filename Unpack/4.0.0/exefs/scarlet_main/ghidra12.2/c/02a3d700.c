/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3d700; name: FUN_02a3d700
 */


void FUN_02a3d700(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  char *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [96];
  long *local_50 [4];
  long *local_30;
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar3 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar3;
  local_d0 = "keyfile.dat";
  FUN_00e52f24(local_50,&local_d0);
  local_d0 = " ";
  local_c8 = FUN_02a3d980;
  local_c0 = &LAB_02a3d984;
  puStack_b8 = &LAB_02a3d988;
  FUN_02c74550(lVar3 + 0x30,local_50,&local_d0);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (char *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return;
}


