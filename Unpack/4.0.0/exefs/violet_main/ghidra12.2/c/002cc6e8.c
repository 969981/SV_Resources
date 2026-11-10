/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cc6e8; name: FUN_002cc6e8
 */


uint FUN_002cc6e8(int *param_1)

{
  uint uVar1;
  ostream *this;
  uint uVar2;
  undefined1 auStack_130 [8];
  ostream aoStack_128 [264];
  
  if (*param_1 != 1) {
    if (*param_1 == 2) {
      uVar2 = 0x24;
      goto LAB_002cc75c;
    }
    if (*(char *)((long)param_1 + 6) != '\0') {
      FUN_002cc810(auStack_130,"external/com_github_google_re2/re2/re2.cc",0x84);
                    /* try { // try from 002cc738 to 002cc74f has its CatchHandler @ 002cc7fc */
      this = std::__put_character_sequence<char,std::char_traits<char>>
                       (aoStack_128,"Unknown encoding ",0x11);
      std::ostream::operator<<(this,*param_1);
      FUN_002cc97c(auStack_130);
    }
  }
  uVar2 = 4;
LAB_002cc75c:
  uVar1 = uVar2 | 0x794;
  if ((char)param_1[1] != '\0') {
    uVar1 = uVar2;
  }
  if ((char)param_1[4] != '\0') {
    uVar1 = uVar1 | 2;
  }
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    uVar1 = uVar1 | 0x800;
  }
  if (*(char *)((long)param_1 + 0x12) != '\0') {
    uVar1 = uVar1 | 8;
  }
  if (*(char *)((long)param_1 + 0x13) != '\0') {
    uVar1 = uVar1 | 0x1000;
  }
  uVar1 = uVar1 | *(byte *)(param_1 + 5) ^ 1;
  if (*(char *)((long)param_1 + 0x15) != '\0') {
    uVar1 = uVar1 | 0x80;
  }
  if (*(char *)((long)param_1 + 0x16) != '\0') {
    uVar1 = uVar1 | 0x100;
  }
  if (*(char *)((long)param_1 + 0x17) != '\0') {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}


