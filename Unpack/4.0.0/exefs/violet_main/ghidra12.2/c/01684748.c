/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01684748; name: FUN_01684748
 */


undefined8 FUN_01684748(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x128) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x128) + 0x1e8) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    if ((*PTR_DAT_047d8af8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8af8);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8af8);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8b00;
    *(undefined8 *)PTR_DAT_047d8b08 = uVar2;
    FUN_016847f8(uVar2,param_1 + 0x120);
    uVar2 = 1;
  }
  return uVar2;
}


