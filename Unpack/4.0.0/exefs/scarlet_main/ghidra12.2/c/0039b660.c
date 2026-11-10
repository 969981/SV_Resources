/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039b660; name: FUN_0039b660
 */


void FUN_0039b660(long param_1,byte *param_2,int *param_3,int param_4,byte param_5,byte *param_6)

{
  char *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  size_t sVar5;
  ostream *poVar6;
  long lVar7;
  
  if ((*param_3 == param_4) && (*(byte *)(param_3 + 10) == (param_5 & 1))) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      lVar7 = param_1 + 0x41;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x50);
    }
    pcVar1 = (char *)(lVar7 + (ulong)*(byte *)((long)param_3 + 0x29));
    sVar5 = strlen(pcVar1);
    if ((*param_6 & 1) == 0) {
      if (sVar5 != *param_6 >> 1) goto LAB_0039b71c;
      if (sVar5 == 0xffffffffffffffff) goto LAB_0039b838;
      param_6 = param_6 + 1;
    }
    else {
      if (sVar5 != *(size_t *)(param_6 + 8)) goto LAB_0039b71c;
      if (sVar5 == 0xffffffffffffffff) {
LAB_0039b838:
                    /* try { // try from 0039b838 to 0039b83f has its CatchHandler @ 0039b840 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      param_6 = *(byte **)(param_6 + 0x10);
    }
    if ((sVar5 == 0) || (iVar4 = memcmp(param_6,pcVar1,sVar5), iVar4 == 0)) {
      return;
    }
  }
LAB_0039b71c:
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar2 = (ulong)(*param_2 >> 1);
  }
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>
                     ((ostream *)PTR_clog_047cd060,(char *)pbVar3,uVar2);
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6,": Transition",0xc);
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6," offset=",8);
  poVar6 = (ostream *)std::ostream::operator<<(poVar6,*param_3);
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6,"/",1);
  pcVar1 = "STD";
  if ((char)param_3[10] != '\0') {
    pcVar1 = "DST";
  }
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6,pcVar1,3);
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6,"/abbr=",6);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar7 = param_1 + 0x41;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x50);
  }
  pcVar1 = (char *)(lVar7 + (ulong)*(byte *)((long)param_3 + 0x29));
  sVar5 = strlen(pcVar1);
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6,pcVar1,sVar5);
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>
                     (poVar6," does not match POSIX spec \'",0x1c);
  uVar2 = (ulong)(*(byte *)(param_1 + 0x70) >> 1);
  pcVar1 = (char *)(param_1 + 0x71);
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x78);
    pcVar1 = *(char **)(param_1 + 0x80);
  }
  poVar6 = std::__put_character_sequence<char,std::char_traits<char>>(poVar6,pcVar1,uVar2);
  std::__put_character_sequence<char,std::char_traits<char>>(poVar6,"\'\n",2);
  return;
}


