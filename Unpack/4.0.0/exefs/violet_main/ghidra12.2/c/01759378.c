/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01759378; name: FUN_01759378
 */


void FUN_01759378(void *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  
  cVar3 = DAT_0485ec20;
  memcpy(&DAT_0485ec28,param_1,0x2c);
  if (cVar3 == '\0') {
    DAT_0485ec54 = 0;
    bVar2 = *(char *)((long)param_1 + 0x2c) != '\0';
    if (bVar2) {
      memcpy(&DAT_0485ec58,(void *)((long)param_1 + 0x30),0xa8);
    }
    DAT_0485ed00 = 0;
    bVar1 = *(char *)((long)param_1 + 0xd8) != '\0';
    DAT_0485ec54 = bVar2;
    if (bVar1) {
      memcpy(&DAT_0485ed08,(void *)((long)param_1 + 0xe0),0x60);
    }
    DAT_0485ed68 = *(char *)((long)param_1 + 0x140) != '\0';
    if ((bool)DAT_0485ed68) {
      DAT_0485ed7c = *(undefined4 *)((long)param_1 + 0x154);
      DAT_0485ed6c = *(undefined8 *)((long)param_1 + 0x144);
      DAT_0485ed74 = *(undefined8 *)((long)param_1 + 0x14c);
    }
    DAT_0485ed80 = *(char *)((long)param_1 + 0x158);
    DAT_0485ec20 = '\x01';
    DAT_0485ed00 = bVar1;
  }
  else {
    if (DAT_0485ec54 == '\0') {
      if (*(char *)((long)param_1 + 0x2c) != '\0') {
        memcpy(&DAT_0485ec58,(void *)((long)param_1 + 0x30),0xa8);
        DAT_0485ec54 = '\x01';
      }
    }
    else if (*(char *)((long)param_1 + 0x2c) == '\0') {
      DAT_0485ec54 = '\0';
    }
    else {
      memcpy(&DAT_0485ec58,(void *)((long)param_1 + 0x30),0xa8);
    }
    if (DAT_0485ed00 == '\0') {
      if (*(char *)((long)param_1 + 0xd8) != '\0') {
        memcpy(&DAT_0485ed08,(void *)((long)param_1 + 0xe0),0x60);
        DAT_0485ed00 = '\x01';
      }
    }
    else if (*(char *)((long)param_1 + 0xd8) == '\0') {
      DAT_0485ed00 = '\0';
    }
    else {
      memcpy(&DAT_0485ed08,(void *)((long)param_1 + 0xe0),0x60);
    }
    if (DAT_0485ed68 == '\0') {
      if (*(char *)((long)param_1 + 0x140) != '\0') {
        DAT_0485ed7c = *(undefined4 *)((long)param_1 + 0x154);
        DAT_0485ed6c = *(undefined8 *)((long)param_1 + 0x144);
        DAT_0485ed74 = *(undefined8 *)((long)param_1 + 0x14c);
        DAT_0485ed68 = '\x01';
      }
    }
    else if (*(char *)((long)param_1 + 0x140) == '\0') {
      DAT_0485ed68 = '\0';
    }
    else {
      DAT_0485ed74 = *(undefined8 *)((long)param_1 + 0x14c);
      DAT_0485ed6c = *(undefined8 *)((long)param_1 + 0x144);
      DAT_0485ed7c = *(undefined4 *)((long)param_1 + 0x154);
    }
    if (DAT_0485ed80 == '\0') {
      if (*(char *)((long)param_1 + 0x158) != '\0') {
        DAT_0485ed80 = '\x01';
      }
    }
    else if (*(char *)((long)param_1 + 0x158) == '\0') {
      DAT_0485ed80 = '\0';
    }
  }
  return;
}


