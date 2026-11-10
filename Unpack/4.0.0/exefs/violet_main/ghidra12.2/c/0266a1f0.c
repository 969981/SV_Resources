/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0266a1f0; name: FUN_0266a1f0
 */


undefined8 FUN_0266a1f0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (((DAT_04855c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04855c60), iVar1 != 0)) {
    DAT_04855cd8 = 1;
    __cxa_guard_release(&DAT_04855c60);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (pcVar3 = (char *)*puVar2, pcVar3 == (char *)0x0)) {
    if ((DAT_04855c58 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04855c58);
      pcVar3 = &DAT_04855c30;
      if (iVar1 != 0) {
        DAT_04855c30 = 0;
        DAT_04855c38 = 0;
        FUN_00100190(FUN_026693a8,&DAT_04855c30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04855c58);
      }
    }
    else {
      pcVar3 = &DAT_04855c30;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,2);
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar3 + 8) - ((ulong)~(uint)DAT_04855cd8 & 1)) = iVar1 != 0;
  }
  return 0;
}


