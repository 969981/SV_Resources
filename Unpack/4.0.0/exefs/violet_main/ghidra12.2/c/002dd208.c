/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dd208; name: FUN_002dd208
 */


void FUN_002dd208(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_150 [8];
  ostream aoStack_148 [264];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_002cc810(auStack_150,"external/com_github_google_re2\\re2/walker-inl.h",0x95);
                    /* try { // try from 002dd244 to 002dd253 has its CatchHandler @ 002dd330 */
    std::__put_character_sequence<char,std::char_traits<char>>(aoStack_148,"Stack not empty.",0x10);
    FUN_002cc97c(auStack_150);
    puVar1 = PTR_LAB_047cba48;
    lVar2 = *(long *)(param_1 + 0x30);
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      uVar3 = lVar2 + *(long *)(param_1 + 0x28);
      lVar4 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(*(long *)(lVar4 + (uVar3 / 0x55) * 8) + (uVar3 % 0x55) * 0x30 + 0x28);
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
        lVar5 = (lVar4 >> 3) * 0x55 + -1;
      }
      *(long *)(param_1 + 0x30) = lVar2;
      if (0xa9 < lVar5 - uVar3) {
        operator_delete(*(void **)(*(long *)(param_1 + 0x18) + -8));
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -8;
        lVar2 = *(long *)(param_1 + 0x30);
      }
    }
  }
  return;
}


