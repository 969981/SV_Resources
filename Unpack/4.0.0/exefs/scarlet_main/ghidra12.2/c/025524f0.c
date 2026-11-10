/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025524f0; name: FUN_025524f0
 */


undefined8 FUN_025524f0(undefined8 param_1)

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
    if ((*PTR_DAT_047d4d10 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d4d10);
      puVar4 = PTR_DAT_047d4d18;
      if (iVar2 != 0) {
        *PTR_DAT_047d4d18 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d56f0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4d10);
      }
    }
    else {
      puVar4 = PTR_DAT_047d4d18;
    }
  }
  if (((DAT_0484fca0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484fca0), iVar2 != 0)) {
    DAT_04850ac0 = 1;
    __cxa_guard_release(&DAT_0484fca0);
  }
  FUN_02552618(local_48,puVar4);
  FUN_02549fe0(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_0254a0c4(auStack_38);
  }
  return 1;
}


