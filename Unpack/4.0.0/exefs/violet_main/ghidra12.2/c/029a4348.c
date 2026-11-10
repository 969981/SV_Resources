/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a4348; name: FUN_029a4348
 */


uint FUN_029a4348(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar5;
  plVar7 = *(long **)(param_1 + 0x478);
  if (plVar7 == (long *)0x0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 1;
    do {
      uVar3 = FUN_00cf8198(plVar7[4]);
      uVar4 = FUN_00cf8184(uVar5);
      uVar1 = FUN_02327e9c(uVar5,uVar3,uVar4);
      plVar7 = (long *)*plVar7;
      uVar6 = uVar1 & uVar6;
    } while (plVar7 != (long *)0x0);
  }
  uVar1 = FUN_0299af14(param_1);
  return uVar1 & uVar6;
}


