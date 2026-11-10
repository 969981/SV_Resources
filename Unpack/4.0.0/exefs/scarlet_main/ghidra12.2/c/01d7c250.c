/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d7c250; name: FUN_01d7c250
 */


undefined8 FUN_01d7c250(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  puVar1 = PTR_DAT_047d50a8;
  if ((puVar4 == (undefined8 *)0x0) || (puVar6 = (undefined *)*puVar4, puVar6 == (undefined *)0x0))
  {
    if ((*PTR_DAT_047d50a8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d50a8);
      puVar6 = PTR_DAT_047d50b0;
      if (iVar3 != 0) {
        *PTR_DAT_047d50b0 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_FUN_047d7d48,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d50a8);
      }
    }
    else {
      puVar6 = PTR_DAT_047d50b0;
    }
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined *)*puVar4, puVar5 == (undefined *)0x0))
  {
    if ((*puVar1 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d50a8);
      puVar5 = PTR_DAT_047d50b0;
      if (iVar3 != 0) {
        *PTR_DAT_047d50b0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d7d48,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d50a8);
      }
    }
    else {
      puVar5 = PTR_DAT_047d50b0;
    }
  }
  uVar2 = FUN_0152abd0(puVar6,puVar5);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


