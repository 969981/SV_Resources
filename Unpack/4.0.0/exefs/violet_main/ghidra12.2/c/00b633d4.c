/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b633d4; name: FUN_00b633d4
 */


undefined8 FUN_00b633d4(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int local_30 [4];
  byte local_4 [4];
  
  if (((DAT_0483a3b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483a3b8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b651c8,&DAT_0483a3a8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a3b8);
  }
  lVar1 = DAT_0483a3a8;
  DAT_0483a3a0 = DAT_0483a3a8;
  if (DAT_0483a3a8 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar4 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar4;
    if (lVar4 != 0) {
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
      }
      if ((*(long *)(lVar4 + 0x70) != 0) && (*(long *)PTR_DAT_047d0860 != 0)) {
        local_4[0] = 0xfd;
        FUN_00f42ddc(local_30,*(long *)PTR_DAT_047d0860,local_4,uVar3);
        if ((local_4[0] != 0xfd) &&
           ((local_30[0] == 0 && (local_4[0] <= DAT_045dfcb0 && DAT_045dfcb0 != local_4[0])))) {
          if (*(long *)(lVar1 + (ulong)local_4[0] * 8 + 0x40) != 0) {
            uVar3 = FUN_00b64f8c();
            return uVar3;
          }
        }
      }
    }
  }
  return 0;
}


