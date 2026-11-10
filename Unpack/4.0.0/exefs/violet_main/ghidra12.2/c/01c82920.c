/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c82920; name: FUN_01c82920
 */


undefined8 FUN_01c82920(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  if (((DAT_048153a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048153a0), iVar1 != 0)) {
    DAT_04815be8 = 1;
    __cxa_guard_release(&DAT_048153a0);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048152e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048152e8);
      puVar3 = &DAT_048152c0;
      if (iVar1 != 0) {
        DAT_048152c0 = 0;
        DAT_048152c8 = 0;
        FUN_00100190(&LAB_0117fe5c,&DAT_048152c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048152e8);
      }
    }
    else {
      puVar3 = &DAT_048152c0;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar4 = PTR_DAT_047d38f0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d38f0;
    }
  }
  FUN_01c82a80(puVar3,puVar4);
  return 0;
}


