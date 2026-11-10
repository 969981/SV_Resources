/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4cbb4; name: FUN_00a4cbb4
 */


undefined8 FUN_00a4cbb4(long param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  
  pcVar1 = (char *)(param_1 + 0x6506);
  if (*pcVar1 == '\x01') {
    lVar2 = *(long *)(param_1 + 0x64c0);
    if (((*(long *)(lVar2 + 0x50) != 0) || (*(long *)(lVar2 + 0x90) != 0)) ||
       (*(long *)(lVar2 + 0xd0) != 0)) {
      return 0;
    }
    cVar3 = '\x02';
  }
  else {
    if (*pcVar1 != '\0') {
      return 1;
    }
    lVar2 = *(long *)(param_1 + 0x64c0);
    if (((*(long *)(lVar2 + 0x50) == 0) && (*(long *)(lVar2 + 0x90) == 0)) &&
       (*(long *)(lVar2 + 0xd0) == 0)) {
      cVar3 = '\x01';
    }
    else {
      FUN_02254f5c();
      cVar3 = *pcVar1 + '\x01';
    }
  }
  *pcVar1 = cVar3;
  return 0;
}


