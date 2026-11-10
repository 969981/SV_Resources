/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5e4f0; name: FUN_00d5e4f0
 */


void FUN_00d5e4f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047e0d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar1 != 0))
  {
    FUN_00100190(&LAB_02baf110,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047e0d88;
  *(undefined8 *)PTR_DAT_047e0d90 = uVar2;
  FUN_00d5e584(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00d5e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 200))();
  return;
}


