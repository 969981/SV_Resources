/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d64030; name: FUN_01d64030
 */


undefined8 FUN_01d64030(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 local_24;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d6390 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d6390);
      puVar5 = PTR_DAT_047d6398;
      if (iVar3 != 0) {
        *PTR_DAT_047d6398 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d7b40,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6390);
      }
    }
    else {
      puVar5 = PTR_DAT_047d6398;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04830b90 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04830b90), iVar3 != 0)) {
    DAT_04830ea8 = '\x01';
    __cxa_guard_release(&DAT_04830b90);
  }
  puVar1 = &LAB_00a0e344;
  if (DAT_04830ea8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = uVar2;
  FUN_01d64150(puVar5,puVar1,0,&local_24);
  return 0;
}


