/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02286880; name: FUN_02286880
 */


undefined8 FUN_02286880(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048428c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048428c0);
      puVar4 = &DAT_048428a8;
      if (iVar1 != 0) {
        DAT_048428a8 = 0;
        DAT_048428b0 = 0;
        FUN_00100190(PTR_FUN_047ddde0,&DAT_048428a8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048428c0);
      }
    }
    else {
      puVar4 = &DAT_048428a8;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3ad8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3ad8);
      puVar5 = PTR_DAT_047d3ae0;
      if (iVar1 != 0) {
        *PTR_DAT_047d3ae0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d3ff8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3ad8);
      }
    }
    else {
      puVar5 = PTR_DAT_047d3ae0;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,3);
  if (((DAT_04842958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04842958), iVar2 != 0)) {
    DAT_04842948 = FUN_0228a2d4;
    DAT_04842950 = 0;
    __cxa_guard_release(&DAT_04842958);
  }
  FUN_02285d7c(&DAT_04842948,puVar4,puVar5,iVar1 != 0);
  return 0;
}


