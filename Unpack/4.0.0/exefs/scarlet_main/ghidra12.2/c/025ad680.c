/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ad680; name: FUN_025ad680
 */


undefined8 FUN_025ad680(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  float fVar4;
  
  if (((DAT_04851968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04851968), iVar1 != 0)) {
    DAT_04851a88 = 1;
    __cxa_guard_release(&DAT_04851968);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (pcVar3 = (char *)*puVar2, pcVar3 == (char *)0x0)) {
    if ((DAT_04851948 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04851948);
      if (iVar1 != 0) {
        DAT_04851920 = 0;
        DAT_04851928 = 0;
        FUN_00100190(FUN_0169c848,&DAT_04851920,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04851948);
      }
      pcVar3 = &DAT_04851920;
    }
    else {
      pcVar3 = &DAT_04851920;
    }
  }
  fVar4 = 0.0;
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    fVar4 = *(float *)(*(long *)(pcVar3 + 8) - ((ulong)~(uint)DAT_04851a88 & 1));
  }
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


