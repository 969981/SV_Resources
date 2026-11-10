/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212750c; name: FUN_0212750c
 */


void FUN_0212750c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar2;
  FUN_021a49fc(uVar2,param_1 + 0x120);
  return;
}


