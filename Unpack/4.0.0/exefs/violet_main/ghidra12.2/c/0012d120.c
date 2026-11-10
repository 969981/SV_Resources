/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012d120; name: FUN_0012d120
 */


void FUN_0012d120(long *param_1)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  
  lVar1 = *param_1;
joined_r0x0012d124:
  do {
    if (lVar1 == 0) {
      return;
    }
    plVar2 = (long *)0x0;
    switch(*(char *)(lVar1 + 8)) {
    case '\x05':
      plVar2 = (long *)(lVar1 + 0x30);
      bVar3 = *(byte *)(lVar1 + 9);
      break;
    case '\x06':
    case '&':
      plVar2 = (long *)(lVar1 + 0x10);
      bVar3 = *(byte *)(lVar1 + 9);
      goto joined_r0x0012d1a0;
    case '\a':
      plVar2 = (long *)(lVar1 + 0x20);
      bVar3 = *(byte *)(lVar1 + 9);
joined_r0x0012d1a0:
      if ((bVar3 & 0x18) == 0) goto LAB_0012d1b8;
      goto LAB_0012d13c;
    case '\b':
      plVar2 = (long *)(lVar1 + 0x48);
    default:
      bVar3 = *(byte *)(lVar1 + 9);
      break;
    case '\n':
      plVar2 = (long *)(lVar1 + 0x78);
      bVar3 = *(byte *)(lVar1 + 9);
    }
    if ((bVar3 & 0x18) != 0) {
LAB_0012d13c:
      lVar1 = *plVar2;
      *param_1 = lVar1;
      goto joined_r0x0012d124;
    }
LAB_0012d1b8:
    if ((bVar3 & 7) == 5) {
      *(byte *)(lVar1 + 9) = (bVar3 | 0x20) ^ 3;
    }
    else if (*(char *)(lVar1 + 8) != '\b') {
      if ((bVar3 & 7) == 6) {
        bVar3 = bVar3 ^ 2;
        *(byte *)(lVar1 + 9) = bVar3;
      }
      *(byte *)(lVar1 + 9) = bVar3 | 0x20;
      goto LAB_0012d13c;
    }
    lVar1 = *plVar2;
    param_1 = plVar2;
  } while( true );
}


