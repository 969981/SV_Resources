/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00def920; name: FUN_00def920
 */


undefined8 FUN_00def920(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char local_a8 [8];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
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
  if (((DAT_0484fd88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484fd88), iVar2 != 0)) {
    DAT_048508e8 = '\x01';
    __cxa_guard_release(&DAT_0484fd88);
  }
  puVar1 = PTR_FUN_047df508;
  if (DAT_048508e8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_00defa80(auStack_80,puVar4,puVar1,0);
  local_a8[0] = '\x01';
  memcpy(auStack_50,auStack_80,0x30);
  FUN_00defd6c(auStack_a0,auStack_50);
  FUN_00defb30(param_1,local_a8);
  if (local_a8[0] == '\x01') {
    FUN_00d8b4f4(auStack_a0,0);
  }
  return 1;
}


