/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9bc20; name: FUN_01d9bc20
 */


undefined8 FUN_01d9bc20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00c92df0(param_1,1,0);
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar6 = PTR_DAT_047d38f0;
      if (iVar2 != 0) {
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
  uVar5 = FUN_00c646d0(param_1,3,0);
  iVar2 = FUN_00c92df0(param_1,4,0);
  if (((DAT_04833480 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04833480), iVar3 != 0)) {
    DAT_048337b0 = PTR_LAB_047d8500;
    __cxa_guard_release(&DAT_04833480);
  }
  FUN_01d9bd50((long)iVar1,puVar6,uVar5,(long)iVar2);
  return 0;
}


