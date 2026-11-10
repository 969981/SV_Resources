/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0256fa30; name: FUN_0256fa30
 */


undefined8 FUN_0256fa30(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04850c28 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04850c28);
      puVar3 = &DAT_04850c10;
      if (iVar1 != 0) {
        DAT_04850c10 = 0;
        DAT_04850c18 = 0;
        FUN_00100190(&LAB_01a68604,&DAT_04850c10,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04850c28);
      }
    }
    else {
      puVar3 = &DAT_04850c10;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047df4e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047df4e0);
      puVar4 = PTR_DAT_047df4e8;
      if (iVar1 != 0) {
        *PTR_DAT_047df4e8 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047df618,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047df4e0);
      }
    }
    else {
      puVar4 = PTR_DAT_047df4e8;
    }
  }
  if (((DAT_04850c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04850c30), iVar1 != 0)) {
    DAT_04851ec0 = 1;
    __cxa_guard_release(&DAT_04850c30);
  }
  FUN_0256fb8c(puVar3,puVar4);
  return 0;
}


