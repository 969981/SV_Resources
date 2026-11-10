/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0251f850; name: FUN_0251f850
 */


undefined8 FUN_0251f850(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  char local_58 [8];
  long local_50;
  undefined1 auStack_48 [24];
  
  uVar3 = FUN_024dd250(param_1,1);
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484cc70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0484cc70);
      if (iVar2 != 0) {
        DAT_0484cc48 = 0;
        DAT_0484cc50 = 0;
        FUN_00100190(&LAB_024c8ee8,&DAT_0484cc48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cc70);
      }
      puVar5 = &DAT_0484cc48;
    }
    else {
      puVar5 = &DAT_0484cc48;
    }
  }
  if (((DAT_0484e378 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484e378), iVar2 != 0)) {
    DAT_0484f2b8 = 1;
    __cxa_guard_release(&DAT_0484e378,puVar5);
  }
  FUN_0251f990(local_58,uVar3,puVar5);
  FUN_024c6930(param_1,local_58);
  lVar1 = local_50;
  if (local_58[0] == '\x01') {
    local_50 = 0;
    if (lVar1 != 0) {
      FUN_024c6a14(auStack_48);
    }
  }
  return 1;
}


