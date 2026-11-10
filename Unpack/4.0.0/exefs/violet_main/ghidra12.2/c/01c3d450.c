/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c3d450; name: FUN_01c3d450
 */


undefined * FUN_01c3d450(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d5fb0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d5fb0);
      puVar3 = PTR_DAT_047d5fb8;
      if (iVar1 != 0) {
        *PTR_DAT_047d5fb8 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(&LAB_01c3efa0,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5fb0);
      }
    }
    else {
      puVar3 = PTR_DAT_047d5fb8;
    }
  }
  return puVar3;
}


