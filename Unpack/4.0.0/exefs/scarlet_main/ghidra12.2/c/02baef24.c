/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02baef24; name: FUN_02baef24
 */


bool FUN_02baef24(long param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  switch(*(uint *)(param_1 + 0x30) ^ (int)*(uint *)(param_1 + 0x30) >> 0x1f) {
  case 0:
    bVar4 = *(char *)(param_1 + 0x38) == '\0';
    break;
  case 1:
    pcVar3 = *(char **)(param_1 + 0x38);
    do {
      if (pcVar3 == *(char **)(param_1 + 0x40)) {
        return false;
      }
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x18;
    } while (cVar1 != '\0');
    bVar4 = true;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_02baefa0();
  default:
    FUN_02baefb0();
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x2baef9c);
    (*pcVar2)();
  }
  return bVar4;
}


