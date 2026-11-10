/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d6698; name: FUN_002d6698
 */


undefined8 FUN_002d6698(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [8];
  ostream aoStack_138 [264];
  
  uVar4 = *param_2;
  uVar5 = param_2[2];
  if (uVar4 < uVar5) {
LAB_002d66d4:
    FUN_002cc810(auStack_140,"external/com_github_google_re2/re2/dfa.cc",0x667);
                    /* try { // try from 002d66f0 to 002d66ff has its CatchHandler @ 002d6888 */
    std::__put_character_sequence<char,std::char_traits<char>>
              (aoStack_138,"context does not contain text",0x1d);
    FUN_002cc97c(auStack_140);
    param_2[5] = 1;
    return 1;
  }
  pbVar2 = (byte *)(uVar4 + param_2[1]);
  if ((byte *)(uVar5 + param_2[3]) < pbVar2) goto LAB_002d66d4;
  if (*(char *)((long)param_2 + 0x23) == '\0') {
    if (pbVar2 == (byte *)(uVar5 + param_2[3])) goto LAB_002d6784;
    bVar3 = *pbVar2;
  }
  else {
    if (uVar4 == uVar5) {
LAB_002d6784:
      uVar4 = 0;
      uVar6 = 5;
      goto LAB_002d678c;
    }
    bVar3 = *(byte *)(uVar4 - 1);
  }
  if (bVar3 == 10) {
    uVar6 = 1;
    uVar4 = 2;
  }
  else if ((((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a) || (bVar3 == 0x5f)) ||
          ((byte)(bVar3 - 0x30) < 10)) {
    uVar6 = 0x200;
    uVar4 = 4;
  }
  else {
    uVar6 = 0;
    uVar4 = 6;
  }
LAB_002d678c:
  puVar1 = (ulong *)(param_1 + (uVar4 | (byte)param_2[4]) + 0x19);
  uVar4 = FUN_002d689c(param_1,param_2,puVar1,uVar6);
  if ((uVar4 & 1) == 0) {
    FUN_002d5b60(param_1,param_2[6]);
    uVar4 = FUN_002d689c(param_1,param_2,puVar1,uVar6);
    if ((uVar4 & 1) == 0) {
      FUN_002cc810(auStack_140,"external/com_github_google_re2/re2/dfa.cc",0x696);
                    /* try { // try from 002d6838 to 002d6847 has its CatchHandler @ 002d6884 */
      std::__put_character_sequence<char,std::char_traits<char>>
                (aoStack_138,"Failed to analyze start state.",0x1e);
      FUN_002cc97c(auStack_140);
      *(undefined1 *)(param_2 + 7) = 1;
      return 0;
    }
  }
  uVar4 = *puVar1;
  param_2[5] = uVar4;
  if (*(long *)(*param_1 + 0x18) == 0) {
    return 1;
  }
  if (uVar4 < 3) {
    return 1;
  }
  if ((char)param_2[4] != '\0') {
    return 1;
  }
  if (*(short *)(uVar4 + 0xe) == 0) {
    *(undefined1 *)((long)param_2 + 0x21) = 1;
    return 1;
  }
  return 1;
}


