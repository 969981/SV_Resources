/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01afb770; name: FUN_01afb770
 */


undefined8 FUN_01afb770(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char *pcVar5;
  
  if (((DAT_048022e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048022e0), iVar2 != 0)) {
    DAT_04802420 = '\x01';
    __cxa_guard_release(&DAT_048022e0);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar3, pcVar5 == (char *)0x0)) {
    if ((DAT_048022d0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048022d0);
      if (iVar2 != 0) {
        DAT_048022a8 = 0;
        DAT_048022b0 = 0;
        FUN_00100190(&LAB_01526e08,&DAT_048022a8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048022d0);
      }
      pcVar5 = &DAT_048022a8;
    }
    else {
      pcVar5 = &DAT_048022a8;
    }
  }
  lVar1 = 8;
  if (DAT_04802420 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar5 == '\x01') || (*pcVar5 == '\0')) && (*(long *)(pcVar5 + 8) != 0)) {
    uVar4 = *(undefined1 *)(*(long *)(pcVar5 + 8) + lVar1);
  }
  else {
    uVar4 = 0;
  }
  FUN_00c5d960(param_1,uVar4);
  return 1;
}


