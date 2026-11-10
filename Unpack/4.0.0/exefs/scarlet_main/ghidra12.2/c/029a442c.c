/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a442c; name: FUN_029a442c
 */


bool FUN_029a442c(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8288;
  *(undefined8 *)PTR_DAT_047d8290 = uVar6;
  lVar4 = FUN_02327f1c(uVar6,param_2);
  if (lVar4 == -1) {
    bVar1 = false;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x478);
    if (plVar8 == (long *)0x0) {
      uVar7 = 1;
    }
    else {
      uVar7 = 1;
      do {
        uVar5 = FUN_00cf8198(plVar8[4]);
        uVar2 = FUN_02327e9c(uVar6,uVar5,lVar4);
        plVar8 = (long *)*plVar8;
        uVar7 = uVar2 & uVar7;
      } while (plVar8 != (long *)0x0);
    }
    uVar5 = FUN_0177fff8(param_1);
    uVar2 = FUN_02327e9c(uVar6,uVar5,lVar4);
    bVar1 = (uVar2 & uVar7) != 0;
  }
  return bVar1;
}


