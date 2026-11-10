/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0266a0d0; name: FUN_0266a0d0
 */


undefined8 FUN_0266a0d0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_04855c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04855c28), iVar2 != 0)) {
    DAT_04855cd0 = 1;
    __cxa_guard_release(&DAT_04855c28);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_04855c58 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04855c58);
      if (iVar2 != 0) {
        DAT_04855c30 = 0;
        DAT_04855c38 = 0;
        FUN_00100190(FUN_026693a8,&DAT_04855c30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04855c58);
      }
      pcVar4 = &DAT_04855c30;
    }
    else {
      pcVar4 = &DAT_04855c30;
    }
  }
  if (((*pcVar4 == '\x01') || (*pcVar4 == '\0')) && (*(long *)(pcVar4 + 8) != 0)) {
    bVar1 = *(char *)(*(long *)(pcVar4 + 8) - ((ulong)~(uint)DAT_04855cd0 & 1)) != '\0';
  }
  else {
    bVar1 = false;
  }
  FUN_00c419e0(param_1,bVar1);
  return 1;
}


