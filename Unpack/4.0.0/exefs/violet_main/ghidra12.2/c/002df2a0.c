/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002df2a0; name: FUN_002df2a0
 */


undefined8 FUN_002df2a0(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  FUN_002de674(param_1,0xffffffff,0);
  if ((*(byte **)(param_1 + 8) == (byte *)0x0) || (0x15 < **(byte **)(param_1 + 8))) {
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar3 != 0) {
      FUN_002e4418(lVar3,2,*param_1);
    }
    FUN_002de558(param_1,lVar3);
  }
  FUN_002e0a38(param_1,5);
  pcVar4 = *(char **)(param_1 + 8);
  if (((pcVar4 == (char *)0x0) || (pcVar6 = *(char **)(pcVar4 + 0x10), pcVar6 == (char *)0x0)) ||
     (*pcVar6 != '\x17')) {
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar3 != 0) {
      FUN_002e4418(lVar3,0x17,*param_1);
    }
    FUN_002de558(param_1,lVar3);
    return 1;
  }
  pcVar5 = *(char **)(pcVar6 + 0x10);
  if (pcVar5 == (char *)0x0) {
LAB_002df3e0:
    *(char **)(pcVar4 + 0x10) = pcVar5;
    *(char **)(pcVar6 + 0x10) = pcVar4;
    *(char **)(param_1 + 8) = pcVar6;
    return 1;
  }
  cVar1 = *pcVar4;
  cVar2 = *pcVar5;
  if (cVar1 == '\f') {
    if (cVar2 != '\f') {
      if ((cVar2 != '\x14') && (cVar2 != '\x03')) goto LAB_002df3e0;
      *(undefined8 *)(pcVar4 + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
      *(char **)(pcVar6 + 0x10) = pcVar4;
      pcVar4 = pcVar5;
    }
  }
  else if ((cVar2 != '\f') || ((cVar1 != '\x14' && (cVar1 != '\x03')))) goto LAB_002df3e0;
  *(char **)(param_1 + 8) = pcVar6;
  FUN_002e4804(pcVar4);
  return 1;
}


