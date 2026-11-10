/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125ec04; name: FUN_0125ec04
 */


void FUN_0125ec04(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *__src;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_a8 [64];
  undefined1 *local_68;
  
  sVar2 = strlen(param_1);
  if (sVar2 != 0) {
    lVar6 = 0;
    pcVar1 = param_1 + sVar2;
    do {
      __src = param_1 + lVar6;
      sVar4 = (long)pcVar1 - (long)__src;
      if ((long)sVar4 < 1) goto LAB_0125ecec;
      pcVar3 = __src;
      while( true ) {
        pcVar3 = memchr(pcVar3,0x2c,sVar4);
        if (pcVar3 == (char *)0x0) goto LAB_0125ecec;
        if (*pcVar3 == ',') break;
        pcVar3 = pcVar3 + 1;
        sVar4 = (long)pcVar1 - (long)pcVar3;
        if ((long)sVar4 < 1) goto LAB_0125ecec;
      }
      if ((pcVar3 == pcVar1) || (uVar7 = (long)pcVar3 - (long)param_1, uVar7 == 0xffffffffffffffff))
      goto LAB_0125ecec;
      uVar5 = uVar7 - lVar6;
      sVar4 = sVar2 - lVar6;
      if (uVar5 <= sVar2 - lVar6) {
        sVar4 = uVar5;
      }
      if (sVar4 != 0) {
        memcpy(auStack_a8,__src,sVar4);
      }
      auStack_a8[uVar5] = 0;
      local_68 = auStack_a8;
      (*(code *)*param_2)(param_2 + 4,&local_68);
      lVar6 = uVar7 + 1;
    } while (uVar7 < sVar2);
    FUN_02a2ca10();
LAB_0125ecec:
    sVar2 = sVar2 - lVar6;
    if (sVar2 != 0) {
      memcpy(auStack_a8,__src,sVar2);
    }
    auStack_a8[sVar2] = 0;
    local_68 = auStack_a8;
    (*(code *)*param_2)(param_2 + 4,&local_68);
  }
  return;
}


