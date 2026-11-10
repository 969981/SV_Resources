/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d2cd0; name: FUN_024d2cd0
 */


undefined8 FUN_024d2cd0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  
  uVar4 = FUN_024d2bf0(param_1,1);
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7bd0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d7bd0);
      puVar6 = PTR_DAT_047d7bd8;
      if (iVar1 != 0) {
        *PTR_DAT_047d7bd8 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_FUN_047dea28,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7bd0);
      }
    }
    else {
      puVar6 = PTR_DAT_047d7bd8;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,3);
  if ((DAT_0484d0b0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484d0b0);
    if (iVar3 != 0) {
      DAT_0484f040 = 1;
      __cxa_guard_release(&DAT_0484d0b0);
    }
  }
  uVar2 = FUN_024d2dfc(uVar4,puVar6,iVar1 != 0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


