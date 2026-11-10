/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b63270; name: FUN_00b63270
 */


bool FUN_00b63270(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int local_38 [5];
  byte local_24 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar2 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar2;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x70) != 0)) {
    if (*(long *)PTR_DAT_047d0860 == 0) {
      return false;
    }
    local_24[0] = 0xfd;
    FUN_00f42ddc(local_38,*(long *)PTR_DAT_047d0860,local_24,param_2);
    if (local_24[0] == 0xfd) {
      return false;
    }
    if (local_38[0] != 0) {
      return false;
    }
    if (DAT_045dfcb0 < local_24[0] || DAT_045dfcb0 == local_24[0]) {
      return false;
    }
    if (param_2 == 0) {
      return false;
    }
    lVar2 = *(long *)(param_1 + (ulong)local_24[0] * 8 + 0x40);
    if (lVar2 == 0) {
      return false;
    }
    if (*(long *)(lVar2 + 0xd0) == param_2) {
      plVar3 = (long *)(lVar2 + 0xb0);
    }
    else if (*(long *)(lVar2 + 0x100) == param_2) {
      plVar3 = (long *)(lVar2 + 0xe0);
    }
    else if (*(long *)(lVar2 + 0x130) == param_2) {
      plVar3 = (long *)(lVar2 + 0x110);
    }
    else {
      if (*(long *)(lVar2 + 0x160) != param_2) {
        return false;
      }
      plVar3 = (long *)(lVar2 + 0x140);
    }
    if ((char)plVar3[5] != '\0') {
      return *plVar3 != 0;
    }
  }
  return false;
}


