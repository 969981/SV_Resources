/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e05e0; name: FUN_002e05e0
 */


void FUN_002e05e0(long param_1,uint param_2,undefined4 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ostream *poVar4;
  undefined8 uVar5;
  void *__src;
  size_t __n;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  byte local_1b0 [8];
  ulong local_1a8;
  char *local_1a0;
  undefined1 auStack_198 [8];
  ostream aoStack_190 [264];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  
  if (-1 < (int)param_2) {
    uVar16 = 0;
    pcVar6 = (char *)0x0;
    uVar13 = 0;
    do {
      while (uVar16 < param_2) {
        pcVar17 = *(char **)(param_1 + uVar16 * 8);
        if (((pcVar6 == (char *)0x0) || ((*pcVar6 != '\x14' && (*pcVar6 != '\x03')))) ||
           ((*pcVar17 != '\x03' && (*pcVar17 != '\x14')))) goto LAB_002e06d8;
        uVar16 = uVar16 + 1;
        if (uVar16 == param_2 + 1) {
          return;
        }
      }
      pcVar17 = pcVar6;
LAB_002e06d8:
      pcVar6 = pcVar17;
      if ((uVar16 != uVar13) && (uVar16 != uVar13 + 1)) {
        FUN_002e6250(auStack_88);
        uVar15 = (ulong)(int)uVar13;
        uVar18 = uVar15;
        if ((long)uVar15 < (long)uVar16) {
          do {
            pbVar11 = *(byte **)(param_1 + uVar18 * 8);
            if (*pbVar11 == 3) {
                    /* try { // try from 002e075c to 002e0767 has its CatchHandler @ 002e0974 */
              FUN_002e0990(auStack_88,*(undefined4 *)(pbVar11 + 0x18),
                           *(undefined4 *)(pbVar11 + 0x18),*(undefined2 *)(pbVar11 + 2));
            }
            else if (*pbVar11 == 0x14) {
              lVar12 = *(long *)(pbVar11 + 0x18);
              if (*(int *)(lVar12 + 0x10) != 0) {
                puVar14 = *(undefined4 **)(lVar12 + 8);
                do {
                    /* try { // try from 002e0730 to 002e0737 has its CatchHandler @ 002e0978 */
                  FUN_002e626c(auStack_88,*puVar14,puVar14[1]);
                  puVar14 = puVar14 + 2;
                } while (puVar14 !=
                         (undefined4 *)(*(long *)(lVar12 + 8) + (long)*(int *)(lVar12 + 0x10) * 8));
              }
            }
            else {
                    /* try { // try from 002e076c to 002e077f has its CatchHandler @ 002e0960 */
              FUN_002cc810(auStack_198,"external/com_github_google_re2/re2/parse.cc",0x49f);
                    /* try { // try from 002e0780 to 002e07ab has its CatchHandler @ 002e0964 */
              poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                                 (aoStack_190,"RE2: unexpected op: ",0x14);
              poVar4 = (ostream *)std::ostream::operator<<(poVar4,(uint)*pbVar11);
              poVar4 = std::__put_character_sequence<char,std::char_traits<char>>(poVar4," ",1);
                    /* try { // try from 002e07b0 to 002e07bb has its CatchHandler @ 002e093c */
              FUN_002e9e60(local_1b0,pbVar11);
              uVar2 = (ulong)(local_1b0[0] >> 1);
              pcVar17 = (char *)((ulong)local_1b0 | 1);
              if ((local_1b0[0] & 1) != 0) {
                uVar2 = local_1a8;
                pcVar17 = local_1a0;
              }
                    /* try { // try from 002e07d8 to 002e07df has its CatchHandler @ 002e0940 */
              std::__put_character_sequence<char,std::char_traits<char>>(poVar4,pcVar17,uVar2);
              if ((local_1b0[0] & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_1a0);
              }
              FUN_002cc97c(auStack_198);
            }
                    /* try { // try from 002e0800 to 002e0807 has its CatchHandler @ 002e0974 */
            FUN_002e4804(pbVar11);
            uVar18 = uVar18 + 1;
          } while (uVar16 != (uVar18 & 0xffffffff));
        }
                    /* try { // try from 002e0814 to 002e0823 has its CatchHandler @ 002e0938 */
        uVar5 = FUN_002e7144(auStack_88);
        uVar5 = FUN_002e552c(uVar5,param_3);
        puVar7 = (undefined8 *)param_4[1];
        lVar12 = param_1 + uVar15 * 8;
        iVar3 = (uint)uVar16 - uVar13;
        if (puVar7 < (undefined8 *)param_4[2]) {
          *puVar7 = uVar5;
          puVar7[1] = lVar12;
          *(int *)(puVar7 + 2) = iVar3;
          *(undefined4 *)((long)puVar7 + 0x14) = 0xffffffff;
          param_4[1] = (long)(puVar7 + 3);
        }
        else {
          __src = (void *)*param_4;
          lVar10 = (long)puVar7 - (long)__src >> 3;
          uVar18 = lVar10 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar18) {
                    /* try { // try from 002e092c to 002e0933 has its CatchHandler @ 002e0934 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar8 = param_4[2] - (long)__src >> 3;
          uVar15 = lVar8 * 0x5555555555555556;
          if (uVar18 <= uVar15) {
            uVar18 = uVar15;
          }
          if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar18 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar18 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar18 * 0x18);
            __src = (void *)*param_4;
            puVar7 = (undefined8 *)param_4[1];
          }
          puVar9 = (undefined8 *)(lVar8 + lVar10 * 8);
          __n = (long)puVar7 - (long)__src;
          *puVar9 = uVar5;
          puVar9[1] = lVar12;
          *(int *)(puVar9 + 2) = iVar3;
          *(undefined4 *)((long)puVar9 + 0x14) = 0xffffffff;
          if (0 < (long)__n) {
            memcpy((void *)((long)puVar9 - __n),__src,__n);
          }
          lVar12 = *param_4;
          *param_4 = (long)((long)puVar9 - __n);
          param_4[1] = (long)(puVar9 + 3);
          param_4[2] = lVar8 + uVar18 * 0x18;
          if (lVar12 != 0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        FUN_002e3684(auStack_78,local_70);
      }
      uVar1 = (uint)uVar16;
      if (param_2 <= uVar16) {
        uVar1 = uVar13;
      }
      uVar16 = uVar16 + 1;
      uVar13 = uVar1;
    } while (uVar16 != param_2 + 1);
  }
  return;
}


