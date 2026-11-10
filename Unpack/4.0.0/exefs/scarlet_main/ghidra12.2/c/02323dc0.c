/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02323dc0; name: FUN_02323dc0
 */


undefined8 FUN_02323dc0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined1 *puVar6;
  double dVar7;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar3, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846e20 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04846e20);
      puVar6 = &DAT_04846df8;
      if (iVar2 != 0) {
        DAT_04846df8 = 0;
        DAT_04846e00 = 0;
        FUN_00100190(&LAB_023275a0,&DAT_04846df8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846e20);
      }
    }
    else {
      puVar6 = &DAT_04846df8;
    }
  }
  dVar7 = (double)FUN_00c41790(param_1,2,0);
  uVar4 = FUN_00c646d0(param_1,3,0);
  uVar5 = FUN_00c92df0(param_1,4,0);
  if ((DAT_04846f58 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04846f58);
    if (iVar2 != 0) {
      DAT_04847760 = 1;
      __cxa_guard_release(&DAT_04846f58,extraout_x1,uVar5);
    }
  }
  uVar1 = FUN_02323f14((double)(float)dVar7,puVar6,uVar4,uVar5);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


