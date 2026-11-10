/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0180d920; name: FUN_0180d920
 */


undefined8 FUN_0180d920(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar3 = PTR_DAT_047d38f0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(FUN_00cecfd8,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar3 = PTR_DAT_047d38f0;
    }
  }
  if (((DAT_04800b08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04800b08), iVar1 != 0)) {
    DAT_048020f8 = 1;
    __cxa_guard_release(&DAT_04800b08);
  }
  FUN_0180dcd4(auStack_38,puVar3);
  FUN_0180da30(param_1,auStack_38);
  FUN_0180dffc(auStack_38);
  return 1;
}


