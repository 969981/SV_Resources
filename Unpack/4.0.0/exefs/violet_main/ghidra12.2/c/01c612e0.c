/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c612e0; name: FUN_01c612e0
 */


undefined8 FUN_01c612e0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
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
  if (((DAT_04813b60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04813b60), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04813b60);
  }
  uVar3 = FUN_01c613e0(puVar4);
  if ((uVar3 & 0xff) == 0) {
    FUN_00ca1a30(param_1);
  }
  else {
    FUN_00c5d960(param_1,uVar3 >> 8 & 0xff);
  }
  return 1;
}


