/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01419540; name: FUN_01419540
 */


undefined8 FUN_01419540(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4760 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d4760);
      puVar5 = PTR_DAT_047d4768;
      if (iVar3 != 0) {
        *PTR_DAT_047d4768 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d4d00,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4760);
      }
    }
    else {
      puVar5 = PTR_DAT_047d4768;
    }
  }
  if (((DAT_04848620 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04848620), iVar3 != 0)) {
    DAT_04848ec0 = '\x01';
    __cxa_guard_release(&DAT_04848620);
  }
  puVar1 = PTR_FUN_047de960;
  if (DAT_04848ec0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  auVar2 = FUN_01419684(puVar5,puVar1,0);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


