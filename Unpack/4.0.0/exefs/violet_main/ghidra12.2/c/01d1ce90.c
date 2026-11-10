/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1ce90; name: FUN_01d1ce90
 */


undefined8 FUN_01d1ce90(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar6 = PTR_DAT_047d3b08;
      if (iVar4 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar6 = PTR_DAT_047d3b08;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar1 = FUN_00c92df0(param_1,3,0);
  if ((DAT_0482ce80 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_0482ce80);
    if (iVar4 != 0) {
      __cxa_guard_release(&DAT_0482ce80);
    }
  }
  uVar3 = FUN_01d1cfb4(puVar6,uVar2,uVar1);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


