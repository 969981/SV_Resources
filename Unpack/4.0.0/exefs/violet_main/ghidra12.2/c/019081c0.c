/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019081c0; name: FUN_019081c0
 */


undefined8 FUN_019081c0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar4 = PTR_DAT_047d3b08;
      if (iVar1 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar4 = PTR_DAT_047d3b08;
    }
  }
  if (((DAT_048522b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048522b0), iVar1 != 0)) {
    DAT_048522d0 = 1;
    __cxa_guard_release(&DAT_048522b0);
  }
  uVar3 = FUN_019082b8(puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


