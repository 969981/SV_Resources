/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00129df0; name: FUN_00129df0
 */


void FUN_00129df0(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  while (*(char *)(param_2 + 8) == '\t') {
    bVar1 = *(byte *)(param_2 + 9) & 199;
    plVar3 = *(long **)(param_2 + 0x10);
    bVar2 = bVar1 | 0x20;
    if (plVar3 != (long *)(param_2 + 0x18)) {
      bVar2 = bVar1;
    }
    *(byte *)(param_2 + 9) = bVar2;
    if ((*(byte *)(plVar3 + 1) >> 6 & 1) == 0) {
      return;
    }
    param_2 = *plVar3;
    if ((*(byte *)(param_2 + 9) & 0x18) == 0) {
      return;
    }
  }
  switch(*(char *)(param_2 + 8)) {
  case '\x05':
    puVar4 = (undefined8 *)(param_2 + 0x30);
    break;
  case '\x06':
  case '&':
    puVar4 = (undefined8 *)(param_2 + 0x10);
    break;
  case '\a':
    if (*(short *)(param_2 + 10) != 0) {
      puVar4 = (undefined8 *)(param_2 + 0x20);
      break;
    }
    if ((*(long *)(param_2 + 0x18) != 0) && ((*(byte *)(*(long *)(param_2 + 0x18) + 9) & 0x18) != 0)
       ) {
      FUN_00129df0();
    }
  case '\x04':
  case '\x14':
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 199 | 0x20;
    return;
  case '\b':
    puVar4 = (undefined8 *)(param_2 + 0x48);
    break;
  default:
    return;
  case '\n':
    puVar4 = (undefined8 *)(param_2 + 0x78);
  }
  *puVar4 = *(undefined8 *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = param_2;
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 199;
  return;
}


