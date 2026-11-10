/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024dca50; name: FUN_024dca50
 */


undefined8 FUN_024dca50(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  char local_58 [8];
  long local_50;
  undefined1 auStack_48 [24];
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484cc70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484cc70);
      puVar5 = &DAT_0484cc48;
      if (iVar2 != 0) {
        DAT_0484cc48 = 0;
        DAT_0484cc50 = 0;
        FUN_00100190(&LAB_024c8ee8,&DAT_0484cc48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cc70);
      }
    }
    else {
      puVar5 = &DAT_0484cc48;
    }
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7b98 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d7b98);
      puVar4 = PTR_DAT_047d7ba0;
      if (iVar2 != 0) {
        *PTR_DAT_047d7ba0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047dea30,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7b98);
      }
    }
    else {
      puVar4 = PTR_DAT_047d7ba0;
    }
  }
  if (((DAT_0484d320 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484d320), iVar2 != 0)) {
    DAT_0484f0b8 = 1;
    __cxa_guard_release(&DAT_0484d320,puVar4);
  }
  FUN_024dcbfc(local_58,puVar5,puVar4);
  FUN_024c6930(param_1,local_58);
  lVar1 = local_50;
  if ((local_58[0] == '\x01') && (local_50 = 0, lVar1 != 0)) {
    FUN_024c6a14(auStack_48);
  }
  return 1;
}


