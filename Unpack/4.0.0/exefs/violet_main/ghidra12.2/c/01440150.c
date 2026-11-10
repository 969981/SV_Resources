/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01440150; name: FUN_01440150
 */


undefined8 FUN_01440150(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4518 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d4518);
      puVar4 = PTR_DAT_047d4520;
      if (iVar2 != 0) {
        *PTR_DAT_047d4520 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d47c8,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4518);
      }
    }
    else {
      puVar4 = PTR_DAT_047d4520;
    }
  }
  if (((DAT_048511c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048511c0), iVar2 != 0)) {
    DAT_04851c38 = '\x01';
    __cxa_guard_release(&DAT_048511c0);
  }
  puVar1 = PTR_LAB_047df858;
  if (DAT_04851c38 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01440250(puVar4,puVar1,0);
  return 0;
}


