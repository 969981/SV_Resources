/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299afb0; name: FUN_0299afb0
 */


void FUN_0299afb0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_01064488();
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x318);
  uVar2 = FUN_02327f1c(uVar4,param_2);
  FUN_02327e9c(uVar4,uVar3,uVar2);
  return;
}


