/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ceb880; name: FUN_01ceb880
 */


undefined8 FUN_01ceb880(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38c8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d38c8);
      puVar4 = PTR_DAT_047d38d0;
      if (iVar2 != 0) {
        *PTR_DAT_047d38d0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d6020,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38c8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d38d0;
    }
  }
  if (((DAT_0481a590 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0481a590), iVar2 != 0)) {
    DAT_0481a580 = PTR_FUN_047d6cd0;
    DAT_0481a588 = 0;
    __cxa_guard_release(&DAT_0481a590,puVar4);
  }
  FUN_01ceb834(local_48,&DAT_0481a580,puVar4);
  FUN_01ceaf60(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_01ceb044(auStack_38);
  }
  return 1;
}


