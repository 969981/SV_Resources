/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0265c480; name: FUN_0265c480
 */


undefined8 FUN_0265c480(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x1;
  undefined *puVar4;
  
  uVar2 = FUN_0265bdc0(param_1,1);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42b8);
      puVar4 = PTR_DAT_047d42c0;
      if (iVar1 != 0) {
        *PTR_DAT_047d42c0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d5820,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d42b8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d42c0;
    }
  }
  if (((DAT_048554a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048554a0), iVar1 != 0)) {
    DAT_04855490 = PTR_FUN_047e0418;
    DAT_04855498 = 0;
    __cxa_guard_release(&DAT_048554a0,extraout_x1,puVar4);
  }
  FUN_0265c3dc(&DAT_04855490,uVar2,puVar4);
  return 0;
}


