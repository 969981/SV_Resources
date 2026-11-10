/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125ed40; name: FUN_0125ed40
 */


undefined8 FUN_0125ed40(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d48b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d48b8);
      puVar4 = PTR_DAT_047d48c0;
      if (iVar1 != 0) {
        *PTR_DAT_047d48c0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d7b60,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d48b8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d48c0;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if ((DAT_04854698 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04854698);
    if (iVar1 != 0) {
      DAT_04854688 = FUN_00efa060;
      DAT_04854690 = 0;
      __cxa_guard_release(&DAT_04854698,extraout_x1,uVar3);
    }
  }
  uVar3 = FUN_0125ee60(&DAT_04854688,puVar4,uVar3);
  FUN_00c5d960(param_1,uVar3);
  return 1;
}


