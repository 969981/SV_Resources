/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024863e0; name: FUN_024863e0
 */


undefined8 FUN_024863e0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484a8f0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484a8f0);
      puVar4 = &DAT_0484a8d8;
      if (iVar1 != 0) {
        DAT_0484a8d8 = 0;
        DAT_0484a8e0 = 0;
        FUN_00100190(FUN_01796ebc,&DAT_0484a8d8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484a8f0);
      }
    }
    else {
      puVar4 = &DAT_0484a8d8;
    }
  }
  uVar3 = FUN_024864d0(param_1,2);
  if (((DAT_0484a978 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0484a978), iVar1 != 0)) {
    DAT_0484c330 = 1;
    __cxa_guard_release(&DAT_0484a978);
  }
  FUN_0248655c(puVar4,uVar3);
  return 0;
}


