/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e5930; name: FUN_002e5930
 */


bool FUN_002e5930(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  void *__s1;
  ostream *this;
  void *__s2;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined1 auStack_130 [8];
  ostream aoStack_128 [264];
  
  if (*param_1 != *param_2) {
    return false;
  }
  switch(*param_1) {
  case 1:
  case 2:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    return true;
  case 3:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    bVar1 = ((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 1) == 0;
    break;
  case 4:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    if (((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 1) != 0) {
      return false;
    }
    __s1 = *(void **)(param_1 + 0x20);
    __n = (long)*(int *)(param_1 + 0x18) << 2;
    __s2 = *(void **)(param_2 + 0x20);
    goto LAB_002e5a64;
  case 5:
  case 6:
    bVar1 = *(short *)(param_1 + 6) == *(short *)(param_2 + 6);
    break;
  case 7:
  case 8:
  case 9:
    bVar1 = ((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 0x40) == 0;
    break;
  case 10:
    if (((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) >> 6 & 1) != 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
      return false;
    }
  case 0x15:
    bVar1 = *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18);
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20);
    break;
  case 0x13:
    bVar1 = ((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) & 0x2000) == 0;
    break;
  case 0x14:
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(param_2 + 0x18);
    if (*(int *)(lVar3 + 4) != *(int *)(lVar4 + 4)) {
      return false;
    }
    __n = (long)*(int *)(lVar3 + 0x10) * 8;
    if (__n != (long)*(int *)(lVar4 + 0x10) * 8) {
      return false;
    }
    __s2 = *(void **)(lVar4 + 8);
    __s1 = *(void **)(lVar3 + 8);
LAB_002e5a64:
    iVar2 = memcmp(__s1,__s2,__n);
    bVar1 = iVar2 == 0;
    break;
  default:
    FUN_002cc810(auStack_130,"external/com_github_google_re2/re2/regexp.cc",0x198);
                    /* try { // try from 002e5a8c to 002e5aa3 has its CatchHandler @ 002e5b08 */
    this = std::__put_character_sequence<char,std::char_traits<char>>
                     (aoStack_128,"Unexpected op in Regexp::Equal: ",0x20);
    std::ostream::operator<<(this,(uint)*param_1);
    FUN_002cc97c(auStack_130);
    return false;
  }
  return bVar1;
}


