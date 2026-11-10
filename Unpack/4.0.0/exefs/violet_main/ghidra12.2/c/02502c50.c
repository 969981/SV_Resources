/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02502c50; name: FUN_02502c50
 */


undefined8 FUN_02502c50(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7b98 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d7b98);
      puVar5 = PTR_DAT_047d7ba0;
      if (iVar2 != 0) {
        *PTR_DAT_047d7ba0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047dea30,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7b98);
      }
    }
    else {
      puVar5 = PTR_DAT_047d7ba0;
    }
  }
  uVar4 = FUN_024c6ea0(param_1,2);
  if ((DAT_0484dd78 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0484dd78);
    if (iVar2 != 0) {
      DAT_0484f1f8 = 1;
      __cxa_guard_release(&DAT_0484dd78,uVar4);
    }
  }
  uVar1 = FUN_02502d5c(puVar5,uVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


