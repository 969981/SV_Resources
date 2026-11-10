/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f29560; name: FUN_00f29560
 */


undefined8 FUN_00f29560(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d39d0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d39d0);
      puVar5 = PTR_DAT_047d39d8;
      if (iVar3 != 0) {
        *PTR_DAT_047d39d8 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047d4210,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d39d0);
      }
    }
    else {
      puVar5 = PTR_DAT_047d39d8;
    }
  }
  if (((DAT_04849ac8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04849ac8), iVar3 != 0)) {
    DAT_0484b810 = '\x01';
    DAT_0484b818 = 1;
    __cxa_guard_release(&DAT_04849ac8);
  }
  uVar1 = 0x210;
  if (DAT_0484b810 == '\0') {
    uVar1 = 0;
  }
  auVar2 = FUN_00f296b0(puVar5,uVar1,DAT_0484b818);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


