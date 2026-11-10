/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b62fcc; name: FUN_00b62fcc
 */


uint FUN_00b62fcc(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint local_40 [4];
  byte local_14 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar6 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar6;
  puVar3 = PTR_DAT_047d0a08;
  puVar2 = PTR_DAT_047d0860;
  if (lVar6 != 0) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
    if ((*(long *)(lVar6 + 0x70) != 0) && (*(long *)PTR_DAT_047d0860 != 0)) {
      local_14[0] = 0xfd;
      FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,uVar5);
      if (local_14[0] == 0xfd) {
        return 0xffffffff;
      }
      if (local_40[0] != 0) {
        return 0xffffffff;
      }
      if (DAT_045dfcb0 < local_14[0] || DAT_045dfcb0 == local_14[0]) {
        return 0xffffffff;
      }
      lVar6 = *(long *)(param_1 + (ulong)local_14[0] * 8 + 0x40);
      if ((lVar6 != 0) && (*(long *)puVar3 != 0)) {
        cVar1 = *(char *)(lVar6 + 0x68);
        iVar4 = FUN_00f21480();
        if ((iVar4 == 1) &&
           ((((byte)(cVar1 + 4U) < 8 && (*(long *)puVar2 != 0)) &&
            (lVar6 = FUN_00f21488(*(long *)puVar2 + 0x10,(&DAT_0485ea48)[(byte)(cVar1 + 4)],0x81),
            lVar6 != 0)))) {
          FUN_01977ebc(local_40);
          return local_40[0] & 0x3ff;
        }
      }
    }
  }
  return 0xffffffff;
}


