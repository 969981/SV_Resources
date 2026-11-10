/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c8378; name: FUN_019c8378
 */


void FUN_019c8378(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((DAT_04839720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839720), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1b6d8,&DAT_04839710,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839720);
  }
  lVar1 = DAT_04839710;
  DAT_04839708 = DAT_04839710;
  if (DAT_04839710 == 0) {
    return;
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar4 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar4;
  if (lVar4 != 0) {
    if ((*(long *)PTR_DAT_047d0a08 != 0) && (iVar2 = FUN_00f21480(), iVar2 == 1)) {
      *(undefined1 *)(lVar1 + 0x39) = 1;
      uVar3 = FUN_013fbe50(lVar4);
      *(undefined8 *)(lVar1 + 0x40) = uVar3;
      *(undefined4 *)(lVar1 + 0x48) = 0;
    }
  }
  return;
}


