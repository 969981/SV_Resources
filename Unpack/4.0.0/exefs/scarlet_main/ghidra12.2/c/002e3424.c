/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e3424; name: FUN_002e3424
 */


void FUN_002e3424(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_140 [8];
  ostream aoStack_138 [264];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_002cc810(auStack_140,"external/com_github_google_re2\\re2/walker-inl.h",0x95);
                    /* try { // try from 002e345c to 002e346b has its CatchHandler @ 002e3530 */
    std::__put_character_sequence<char,std::char_traits<char>>(aoStack_138,"Stack not empty.",0x10);
    FUN_002cc97c(auStack_140);
    puVar1 = PTR_LAB_047cba48;
    lVar2 = *(long *)(param_1 + 0x30);
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      uVar3 = lVar2 + *(long *)(param_1 + 0x28);
      lVar4 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(*(long *)(lVar4 + (uVar3 >> 4 & 0xffffffffffffff8)) + (uVar3 & 0x7f) * 0x20
                       + 0x18);
      if (lVar5 != 0) {
        FUN_0049e800(lVar5);
        FUN_0049e7e0(puVar1,lVar5);
        lVar2 = *(long *)(param_1 + 0x30) + -1;
        lVar4 = *(long *)(param_1 + 0x10);
        uVar3 = *(long *)(param_1 + 0x28) + lVar2;
      }
      lVar4 = *(long *)(param_1 + 0x18) - lVar4;
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar4 * 0x10 + -1;
      }
      *(long *)(param_1 + 0x30) = lVar2;
      if (0xff < lVar5 - uVar3) {
        operator_delete(*(void **)(*(long *)(param_1 + 0x18) + -8));
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -8;
        lVar2 = *(long *)(param_1 + 0x30);
      }
    }
  }
  return;
}


