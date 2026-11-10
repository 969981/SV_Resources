/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9cdb0; name: FUN_01d9cdb0
 */


undefined8 FUN_01d9cdb0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar6 = PTR_DAT_047d38f0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar6 = PTR_DAT_047d38f0;
    }
  }
  uVar5 = FUN_00c646d0(param_1,2,0);
  iVar1 = FUN_00c92df0(param_1,3,0);
  if ((DAT_048334d0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048334d0);
    if (iVar3 != 0) {
      DAT_048337c0 = PTR_LAB_047d8510;
      __cxa_guard_release(&DAT_048334d0);
    }
  }
  uVar2 = FUN_01d9cee4(puVar6,uVar5,(long)iVar1);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


