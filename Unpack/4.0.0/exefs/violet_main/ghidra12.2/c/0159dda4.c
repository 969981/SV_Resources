/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159dda4; name: FUN_0159dda4
 */


void FUN_0159dda4(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047d8a70 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d8a78;
  *(long *)PTR_DAT_047d8a80 = lVar2;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar2 + 0x488);
  return;
}


