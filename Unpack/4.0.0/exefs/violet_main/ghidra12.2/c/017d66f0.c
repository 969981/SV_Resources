/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d66f0; name: FUN_017d66f0
 */


undefined8 FUN_017d66f0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3ad8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3ad8);
      puVar5 = PTR_DAT_047d3ae0;
      if (iVar2 != 0) {
        *PTR_DAT_047d3ae0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d3ff8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3ad8);
      }
    }
    else {
      puVar5 = PTR_DAT_047d3ae0;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3ad8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3ad8);
      puVar4 = PTR_DAT_047d3ae0;
      if (iVar2 != 0) {
        *PTR_DAT_047d3ae0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d3ff8,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3ad8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d3ae0;
    }
  }
  if (((DAT_04814f08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04814f08), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04814f08,puVar4);
  }
  uVar1 = FUN_017d6860(puVar5,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


