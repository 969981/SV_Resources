/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b5fa70; name: FUN_01b5fa70
 */


bool FUN_01b5fa70(undefined4 param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = FUN_01727bf0();
  switch(param_1) {
  case 0:
    cVar2 = *(char *)(lVar1 + 0x38);
    break;
  case 1:
    cVar2 = *(char *)(lVar1 + 0x39);
    break;
  case 2:
    cVar2 = *(char *)(lVar1 + 0x3a);
    break;
  case 3:
    cVar2 = *(char *)(lVar1 + 0x3b);
    break;
  case 4:
    cVar2 = *(char *)(lVar1 + 0x3c);
    break;
  default:
    return false;
  }
  return cVar2 != '\0';
}


