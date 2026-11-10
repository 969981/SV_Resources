/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236f598; name: FUN_0236f598
 */


void FUN_0236f598(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x60);
  if ((*PTR_DAT_047d88d0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar2;
  if (uVar3 < 0xfffffffffffffffe) {
    FUN_0236fb08(uVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
  }
  else {
    FUN_0236f878(uVar2);
  }
  return;
}


