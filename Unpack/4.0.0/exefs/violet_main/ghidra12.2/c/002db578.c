/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002db578; name: FUN_002db578
 */


ulong FUN_002db578(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_130 [8];
  ostream aoStack_128 [264];
  
  lVar5 = *(long *)(param_1 + 0x58);
  uVar7 = *(uint *)(lVar5 + (-(param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                            (param_2 & 0xffffffff) << 3));
  if ((uVar7 & 7) == 2) {
    lVar1 = lVar5 + (long)(int)param_2 * 8;
    lVar5 = lVar5 + (long)param_3 * 8;
    if (((*(char *)(lVar1 + 4) == *(char *)(lVar5 + 4)) &&
        (*(char *)(lVar1 + 5) == *(char *)(lVar5 + 5))) &&
       (((*(ushort *)(lVar5 + 6) ^ *(ushort *)(lVar1 + 6)) & 1) == 0)) {
      uVar6 = 0;
      goto LAB_002db624;
    }
  }
  else {
    if ((uVar7 & 7) == 0) {
      lVar1 = lVar5 + (long)param_3 * 8;
      do {
        uVar4 = (uint)param_2;
        lVar2 = lVar5 + (long)*(int *)(lVar5 + (long)(int)uVar4 * 8 + 4) * 8;
        if (((*(char *)(lVar2 + 4) == *(char *)(lVar1 + 4)) &&
            (*(char *)(lVar2 + 5) == *(char *)(lVar1 + 5))) &&
           (((*(ushort *)(lVar1 + 6) ^ *(ushort *)(lVar2 + 6)) & 1) == 0)) {
          uVar6 = (ulong)(uVar4 << 1 | 1);
          goto LAB_002db624;
        }
        if (*(char *)(param_1 + 0x50) == '\0') goto LAB_002db61c;
        param_2 = (ulong)(uVar7 >> 4);
        if ((*(byte *)(lVar5 + param_2 * 8) & 7) != 0) {
          lVar5 = lVar5 + param_2 * 8;
          if ((*(char *)(lVar5 + 4) != *(char *)(lVar1 + 4)) ||
             (*(char *)(lVar5 + 5) != *(char *)(lVar1 + 5))) goto LAB_002db61c;
          uVar7 = uVar4 << 1;
          bVar3 = ((*(ushort *)(lVar1 + 6) ^ *(ushort *)(lVar5 + 6)) & 1) != 0;
          if (bVar3) {
            uVar7 = 0;
          }
          uVar6 = (ulong)uVar7;
          if (bVar3) {
            uVar4 = 0;
          }
          param_2 = (ulong)uVar4;
          goto LAB_002db624;
        }
        uVar7 = *(uint *)(lVar5 + param_2 * 8);
      } while ((uVar7 & 7) == 0);
    }
    FUN_002cc810(auStack_130,"external/com_github_google_re2/re2/compile.cc",0x275);
                    /* try { // try from 002db604 to 002db613 has its CatchHandler @ 002db6f8 */
    std::__put_character_sequence<char,std::char_traits<char>>
              (aoStack_128,"should never happen",0x13);
    FUN_002cc97c(auStack_130);
  }
LAB_002db61c:
  uVar6 = 0;
  param_2 = 0;
LAB_002db624:
  return param_2 & 0xffffffff | uVar6 << 0x20;
}


