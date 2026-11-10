/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02115064; name: FUN_02115064
 */


undefined8 FUN_02115064(long param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int local_28 [4];
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar3 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar3;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x70) != 0)) {
      if (*(long *)PTR_DAT_047d0860 == 0) {
        return 0;
      }
      if (*param_2 < DAT_045dfcb0) {
        local_18 = 0;
        FUN_00da4118(local_28,*(long *)PTR_DAT_047d0860,&local_18);
        if (local_28[0] != 0) {
          local_18 = 0;
        }
        return local_18;
      }
    }
  }
  else if ((*(long *)(param_1 + 0xd8) != 0) && (*(short *)(*(long *)(param_1 + 0xd8) + 0x1a) != 0))
  {
    uVar2 = FUN_01e6679c();
    return uVar2;
  }
  return 0;
}


