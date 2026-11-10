/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d1dd60; name: FUN_01d1dd60
 */


undefined8 FUN_01d1dd60(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  uVar3 = FUN_01d1d820(param_1,1);
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3db8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3db8);
      puVar5 = PTR_DAT_047d3dc0;
      if (iVar2 != 0) {
        *PTR_DAT_047d3dc0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d3f90,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3db8);
      }
    }
    else {
      puVar5 = PTR_DAT_047d3dc0;
    }
  }
  if (((DAT_0482ceb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0482ceb8), iVar2 != 0)) {
    DAT_0482cfd0 = 1;
    __cxa_guard_release(&DAT_0482ceb8,puVar5);
  }
  uVar1 = FUN_01d1de70(uVar3,puVar5);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


