/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01797c70; name: FUN_01797c70
 */


undefined8 FUN_01797c70(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047de038 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047de038);
      puVar3 = PTR_DAT_047de040;
      if (iVar1 != 0) {
        *PTR_DAT_047de040 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(FUN_010e66e4,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047de038);
      }
    }
    else {
      puVar3 = PTR_DAT_047de040;
    }
  }
  FUN_017984d0(auStack_38,puVar3);
  FUN_01797d30(param_1,auStack_38);
  FUN_01797fd8(auStack_38);
  return 1;
}


