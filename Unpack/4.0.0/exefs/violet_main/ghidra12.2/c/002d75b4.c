/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d75b4; name: FUN_002d75b4
 */


void FUN_002d75b4(long param_1,int param_2,long param_3)

{
  int iVar1;
  void *__dest;
  ostream *poVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_150 [8];
  ostream aoStack_148 [264];
  
  iVar4 = *(int *)(param_1 + 0x70);
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 <= iVar4) {
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(long)iVar1 << 5);
    memmove(__dest,*(void **)(param_1 + 0x60),(long)*(int *)(param_1 + 0x70) << 4);
    lVar3 = *(long *)(param_1 + 0x60);
    *(void **)(param_1 + 0x60) = __dest;
    if (lVar3 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    iVar4 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x68) = iVar1 * 2;
    if (iVar1 * 2 <= iVar4) {
      FUN_002cc810(auStack_150,"external/com_github_google_re2/re2/bitstate.cc",0x6f);
                    /* try { // try from 002d76c8 to 002d7717 has its CatchHandler @ 002d7738 */
      poVar2 = std::__put_character_sequence<char,std::char_traits<char>>
                         (aoStack_148,"GrowStack() failed: ",0x14);
      poVar2 = std::__put_character_sequence<char,std::char_traits<char>>(poVar2,"njob_ = ",8);
      poVar2 = (ostream *)std::ostream::operator<<(poVar2,*(int *)(param_1 + 0x70));
      poVar2 = std::__put_character_sequence<char,std::char_traits<char>>(poVar2,", ",2);
      poVar2 = std::__put_character_sequence<char,std::char_traits<char>>
                         (poVar2,"job_.size() = ",0xe);
      std::ostream::operator<<(poVar2,*(int *)(param_1 + 0x68));
      FUN_002cc97c(auStack_150);
      return;
    }
  }
  if ((-1 < param_2) && (0 < iVar4)) {
    if (*(int *)(*(long *)(param_1 + 0x60) + ((long)iVar4 + -1) * 0x10) == param_2) {
      lVar3 = *(long *)(param_1 + 0x60) + ((long)iVar4 + -1) * 0x10;
      piVar5 = (int *)(lVar3 + 4);
      iVar1 = *piVar5;
      if ((iVar1 != 0x7fffffff) && (*(long *)(lVar3 + 8) + (long)iVar1 + 1 == param_3)) {
        *piVar5 = iVar1 + 1;
        return;
      }
    }
  }
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  piVar5 = (int *)(*(long *)(param_1 + 0x60) + (long)iVar4 * 0x10);
  *piVar5 = param_2;
  piVar5[1] = 0;
  *(long *)(piVar5 + 2) = param_3;
  return;
}


