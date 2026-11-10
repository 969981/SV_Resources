/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a3e98; name: FUN_018a3e98
 */


void FUN_018a3e98(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d8a70 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8a78;
  *(undefined8 *)PTR_DAT_047d8a80 = uVar2;
  FUN_0159baf4(uVar2,param_1 + 8,0,1);
  return;
}


