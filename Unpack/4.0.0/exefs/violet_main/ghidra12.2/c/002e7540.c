/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e7540; name: FUN_002e7540
 */


uint FUN_002e7540(byte *param_1)

{
  char cVar1;
  uint uVar2;
  ostream *poVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 auStack_138 [8];
  ostream aoStack_130 [268];
  byte local_24 [4];
  
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    return 1;
  case 5:
  case 6:
    uVar5 = (ulong)*(ushort *)(param_1 + 6);
    pbVar6 = param_1 + 8;
    if (uVar5 < 2) {
      if (*(ushort *)(param_1 + 6) != 0) goto LAB_002e75ec;
      return 1;
    }
    pbVar6 = *(byte **)pbVar6;
    cVar1 = *(char *)(*(long *)pbVar6 + 1);
    while (cVar1 != '\0') {
      pbVar6 = pbVar6 + 8;
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        return 1;
      }
LAB_002e75ec:
      cVar1 = *(char *)(*(long *)pbVar6 + 1);
    }
    break;
  case 7:
  case 8:
  case 9:
    pbVar6 = param_1 + 8;
    if (1 < *(ushort *)(param_1 + 6)) {
      pbVar6 = *(byte **)pbVar6;
    }
    if ((*(byte **)pbVar6)[1] != 0) {
      uVar2 = **(byte **)pbVar6 - 1;
      if (uVar2 < 9) {
        return 0x3cU >> (ulong)(uVar2 & 0x1f) & 1;
      }
      return 1;
    }
    break;
  case 10:
    break;
  case 0xb:
    pbVar6 = param_1 + 8;
    if (1 < *(ushort *)(param_1 + 6)) {
      pbVar6 = *(byte **)pbVar6;
    }
    return (uint)(*(char *)(*(long *)pbVar6 + 1) != '\0');
  case 0x14:
    if (*(long *)(param_1 + 0x20) == 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x18) + 4);
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 8);
    }
    return (uint)(iVar4 != 0 && iVar4 != 0x110000);
  default:
    FUN_002cc810(auStack_138,"external/com_github_google_re2/re2/simplify.cc",99);
                    /* try { // try from 002e7658 to 002e767b has its CatchHandler @ 002e76f8 */
    poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_130,"Case not handled in ComputeSimple: ",0x23);
    local_24[0] = *param_1;
    std::__put_character_sequence<char,std::char_traits<char>>(poVar3,(char *)local_24,1);
    FUN_002cc97c(auStack_138);
  }
  return 0;
}


