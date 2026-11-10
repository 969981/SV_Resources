/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3f240; name: FUN_01a3f240
 */


undefined8 FUN_01a3f240(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined *)*puVar3, puVar5 == (undefined *)0x0))
  {
    if ((*PTR_DAT_047d6570 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d6570);
      puVar5 = PTR_DAT_047d6578;
      if (iVar2 != 0) {
        *PTR_DAT_047d6578 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(&LAB_01c9b0d8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6570);
      }
    }
    else {
      puVar5 = PTR_DAT_047d6578;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar4 = PTR_DAT_047d38f0;
      if (iVar2 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d38f0;
    }
  }
  if (((DAT_04816f20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04816f20), iVar2 != 0)) {
    DAT_0481b7d0 = PTR_FUN_047d6580;
    __cxa_guard_release(&DAT_04816f20,puVar4);
  }
  uVar1 = FUN_01a3f3c0(puVar5,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


