/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027147a0; name: FUN_027147a0
 */


undefined * FUN_027147a0(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar2 = PTR_DAT_047d3e30, iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar2 = PTR_DAT_047d3e30;
    }
  }
  else {
    puVar2 = (undefined *)(*(long *)(*(long *)(param_1 + 0x38) + 0xd0) + (long)param_2 * 0x20);
  }
  return puVar2;
}


