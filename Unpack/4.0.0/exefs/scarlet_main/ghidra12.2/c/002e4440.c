/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e4440; name: FUN_002e4440
 */


void FUN_002e4440(char *param_1)

{
  char cVar1;
  byte *pbVar2;
  long lVar3;
  undefined1 auStack_130 [8];
  ostream aoStack_128 [264];
  
  if (*(short *)(param_1 + 6) != 0) {
                    /* try { // try from 002e4458 to 002e446f has its CatchHandler @ 002e4564 */
    FUN_002cc810(auStack_130,"external/com_github_google_re2/re2/regexp.cc",0x30);
                    /* try { // try from 002e4474 to 002e4483 has its CatchHandler @ 002e4550 */
    std::__put_character_sequence<char,std::char_traits<char>>
              (aoStack_128,"Regexp not destroyed.",0x15);
    FUN_002cc97c(auStack_130);
  }
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      FUN_0049e800(lVar3);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar3);
    }
    return;
  }
  if (cVar1 == '\x14') {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      FUN_0049e800(lVar3);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar3);
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    FUN_002e3684(pbVar2 + 0x10,*(undefined8 *)(pbVar2 + 0x18));
  }
  else {
    if (cVar1 != '\v') {
      return;
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  return;
}


