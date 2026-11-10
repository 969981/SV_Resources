/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c57210; name: FUN_01c57210
 */


undefined8 FUN_01c57210(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  
  if (((DAT_04813720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04813720), iVar2 != 0)) {
    DAT_048157d0 = '\x01';
    __cxa_guard_release(&DAT_04813720);
  }
  pcVar3 = (char *)FUN_01929f80(param_1,1);
  lVar1 = 0x28;
  if (DAT_048157d0 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    uVar4 = *(undefined1 *)(*(long *)(pcVar3 + 8) + lVar1);
  }
  else {
    uVar4 = 0;
  }
  FUN_00c5d960(param_1,uVar4);
  return 1;
}


