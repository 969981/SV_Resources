/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fe135c; name: FUN_01fe135c
 */


bool FUN_01fe135c(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60));
  if (lVar3 == 0x133a8707be4aa423) {
    if (((*PTR_DAT_047d7d30 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar2 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    lVar3 = *(long *)PTR_DAT_047d7d38;
    *(long *)PTR_DAT_047d7d40 = lVar3;
    lVar3 = *(long *)(lVar3 + 0x398);
    if (lVar3 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(short *)(lVar3 + 0x1a) == 0;
    }
  }
  else {
    if (lVar3 == 0x137e8707be8470ef) {
      if (((*PTR_DAT_047d7d30 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar2 != 0)) {
        FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7d30);
      }
      lVar3 = *(long *)PTR_DAT_047d7d38;
      *(long *)PTR_DAT_047d7d40 = lVar3;
      lVar3 = *(long *)(lVar3 + 0x398);
      if (lVar3 != 0) {
        return *(short *)(lVar3 + 0x1a) != 0;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


