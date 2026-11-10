/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a74f0; name: FUN_016a74f0
 */


undefined8 FUN_016a74f0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d8368 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8368);
      puVar5 = PTR_DAT_047d8370;
      if (iVar1 != 0) {
        *PTR_DAT_047d8370 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047dfb50,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8368);
      }
    }
    else {
      puVar5 = PTR_DAT_047d8370;
    }
  }
  iVar1 = FUN_00c92df0(param_1,2,0);
  uVar4 = FUN_00c646d0(param_1,3,0);
  if (((DAT_048526b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048526b8), iVar2 != 0)) {
    DAT_04852a38 = 1;
    __cxa_guard_release(&DAT_048526b8);
  }
  FUN_016a7604(puVar5,(long)iVar1,uVar4);
  return 0;
}


