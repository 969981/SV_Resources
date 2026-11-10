/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b5d9f0; name: FUN_01b5d9f0
 */


undefined8 FUN_01b5d9f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  
  if (((DAT_04808008 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04808008), iVar2 != 0)) {
    DAT_04809818 = '\x01';
    __cxa_guard_release(&DAT_04808008);
  }
  pcVar3 = (char *)FUN_01b5d880(param_1,1);
  lVar1 = 4;
  if (DAT_04809818 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    iVar2 = *(int *)(*(long *)(pcVar3 + 8) + lVar1);
  }
  else {
    iVar2 = 0;
  }
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


