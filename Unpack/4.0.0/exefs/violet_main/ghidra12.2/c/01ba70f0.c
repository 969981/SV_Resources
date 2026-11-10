/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ba70f0; name: FUN_01ba70f0
 */


undefined8 FUN_01ba70f0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (((DAT_0480c0d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480c0d0), iVar1 != 0)) {
    DAT_0480c658 = 1;
    __cxa_guard_release(&DAT_0480c0d0);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (pcVar3 = (char *)*puVar2, pcVar3 == (char *)0x0)) {
    if ((DAT_0480c100 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480c100);
      if (iVar1 != 0) {
        DAT_0480c0d8 = 0;
        DAT_0480c0e0 = 0;
        FUN_00100190(FUN_011e1288,&DAT_0480c0d8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480c100);
      }
      pcVar3 = &DAT_0480c0d8;
    }
    else {
      pcVar3 = &DAT_0480c0d8;
    }
  }
  if ((*pcVar3 == '\x01') || (*pcVar3 == '\0')) {
    iVar1 = 0;
    if (*(long *)(pcVar3 + 8) != 0) {
      iVar1 = *(int *)(*(long *)(pcVar3 + 8) - ((ulong)~(uint)DAT_0480c658 & 1));
    }
  }
  else {
    iVar1 = 0;
  }
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


