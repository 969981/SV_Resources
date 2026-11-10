/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02325da0; name: FUN_02325da0
 */


undefined8 FUN_02325da0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  double dVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846e20 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04846e20);
      puVar4 = &DAT_04846df8;
      if (iVar2 != 0) {
        DAT_04846df8 = 0;
        DAT_04846e00 = 0;
        FUN_00100190(&LAB_023275a0,&DAT_04846df8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846e20);
      }
    }
    else {
      puVar4 = &DAT_04846df8;
    }
  }
  uVar1 = FUN_00c92df0(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  if ((DAT_04846fd8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04846fd8);
    if (iVar2 != 0) {
      DAT_04846fc8 = &LAB_02328610;
      DAT_04846fd0 = 0;
      __cxa_guard_release(&DAT_04846fd8);
    }
  }
  FUN_02325d60((double)(float)dVar5,&DAT_04846fc8,puVar4,uVar1);
  return 0;
}


