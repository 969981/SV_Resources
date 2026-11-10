/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172c3c8; name: FUN_0172c3c8
 */


undefined8 FUN_0172c3c8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    if ((*PTR_DAT_047d8c40 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8c48;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar2;
    FUN_0172c9fc(uVar2,*(long *)(param_1 + 8) + 0x70,param_2);
    FUN_0172c480(param_1);
    uVar2 = 1;
  }
  return uVar2;
}


