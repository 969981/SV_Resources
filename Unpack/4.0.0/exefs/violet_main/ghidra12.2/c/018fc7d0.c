/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fc7d0; name: FUN_018fc7d0
 */


undefined8 FUN_018fc7d0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  if ((*PTR_DAT_047d38a0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d38a0);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38a0);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d38a8;
  *(undefined8 *)PTR_DAT_047d38b0 = uVar3;
  FUN_018fc878(uVar3,uVar4);
  return 0;
}


