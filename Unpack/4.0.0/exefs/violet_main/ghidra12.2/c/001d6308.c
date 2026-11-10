/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6308; name: FUN_001d6308
 */


char * FUN_001d6308(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *__dest;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar5 = 0;
  ppuVar7 = &PTR_s_identity_044847c8;
  ppuVar6 = &PTR_PTR_04484750;
  do {
    iVar1 = FUN_001e0990(*ppuVar7,"identity");
    if (iVar1 == 0) {
      sVar2 = strlen(*ppuVar7);
      lVar5 = lVar5 + sVar2 + 2;
    }
    ppuVar7 = (undefined **)*ppuVar6;
    ppuVar6 = ppuVar6 + 1;
  } while (ppuVar7 != (undefined **)0x0);
  if (lVar5 == 0) {
    pcVar3 = (char *)FUN_001ec328("identity");
    return pcVar3;
  }
  pcVar3 = (char *)FUN_001ec2f8(lVar5);
  if (pcVar3 != (char *)0x0) {
    ppuVar7 = &PTR_s_identity_044847c8;
    __dest = pcVar3;
    ppuVar6 = &PTR_PTR_04484750;
    do {
      iVar1 = FUN_001e0990(*ppuVar7,"identity");
      if (iVar1 == 0) {
        pcVar4 = strcpy(__dest,*ppuVar7);
        sVar2 = strlen(pcVar4);
        pcVar4 = __dest + sVar2;
        __dest = pcVar4 + 2;
        pcVar4[0] = ',';
        pcVar4[1] = ' ';
      }
      ppuVar7 = (undefined **)*ppuVar6;
      ppuVar6 = ppuVar6 + 1;
    } while (ppuVar7 != (undefined **)0x0);
    __dest[-2] = '\0';
  }
  return pcVar3;
}


