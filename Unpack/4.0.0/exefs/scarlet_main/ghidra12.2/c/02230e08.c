/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02230e08; name: FUN_02230e08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02230e08(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  char local_d8 [8];
  undefined1 auStack_d0 [24];
  long *local_b8;
  ulong local_b0;
  code *local_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined1 auStack_90 [96];
  
  local_b0 = 0xa5d87c9ff14c683c;
  local_a8 = (code *)0x3c2f425;
  local_a0 = 9;
  plStack_98 = (long *)0x0;
  FUN_01315eac(local_d8,param_1,&local_b0);
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 0x20))();
  }
  if (local_d8[0] != '\0') {
    local_f8 = 0x66d37eabd3010e26;
    pcStack_f0 = "Location";
    local_e8 = 8;
    local_e0 = (long *)0x0;
    FUN_015eea10(&local_b0,param_1,&local_f8);
    uVar2 = local_a0;
    bVar5 = -((char)local_b0 == '\0');
    if ((char)local_b0 != '\0') {
      local_b0 = local_b0 & 0xffffffffffffff00;
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar4 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar4;
    memset(&local_b0,0,0x80);
    iVar3 = FUN_02231004(CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~bVar5,
                                  CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~bVar5,
                                           CONCAT15((byte)((ulong)uVar2 >> 0x28) & ~bVar5,
                                                    CONCAT14((byte)((ulong)uVar2 >> 0x20) & ~bVar5,
                                                             CONCAT13((byte)((ulong)uVar2 >> 0x18) &
                                                                      ~bVar5,CONCAT12((byte)((ulong)
                                                  uVar2 >> 0x10) & ~bVar5,
                                                  CONCAT11((byte)((ulong)uVar2 >> 8) & ~bVar5,
                                                           (byte)uVar2 & ~bVar5))))))),_DAT_03d634e0
                         ,_DAT_03d634f0,lVar4,auStack_d0);
    if ((iVar3 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar4 + 0x220),auStack_d0,iVar3,0xffffffffffffffff,0,&local_b0,
                     0), pcVar1 = local_a8, local_a8 != (code *)0x0)) {
      local_a0 = 0;
      plStack_98 = (long *)0x0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(auStack_90);
    }
    if ((local_d8[0] != '\0') && (local_b8 != (long *)0x0)) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  return;
}


