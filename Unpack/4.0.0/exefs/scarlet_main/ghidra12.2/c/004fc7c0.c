/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fc7c0; name: FUN_004fc7c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc7c0(long param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  char cVar16;
  long lVar17;
  long *plVar18;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  
  puVar15 = PTR_LAB_047cba48;
  puVar14 = PTR_FUN_047cba38;
  uVar7 = _UNK_03caab98;
  uVar13 = _DAT_03caab90;
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_1 + 0x90);
  if (param_2 != (byte *)0x0) {
    *(byte **)(param_1 + 0x98) = param_2;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
    puVar15 = PTR_LAB_047cba48;
    puVar14 = PTR_FUN_047cba38;
    uVar7 = _UNK_03caab98;
    uVar13 = _DAT_03caab90;
LAB_004fc84c:
    do {
      bVar3 = *(byte *)(param_1 + 0x70);
      if (bVar3 < 0x2a) {
        cVar16 = '\0';
        if (bVar3 != 0) {
          if (bVar3 == 10) {
            FUN_004fbbcc(param_1);
            iVar4 = *(int *)(param_1 + 0xa0);
            if (*(int *)(param_1 + 0x84) != iVar4) {
              FUN_0021d540(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar4,
                           (long)(*(int *)(param_1 + 0x84) - iVar4));
            }
            *(undefined8 *)(param_1 + 0x98) = 0;
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            bVar3 = *(byte *)(param_1 + 0x70);
            while (bVar3 < 0x2b) {
              if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) == 0) {
                if (((ulong)bVar3 == 0x2a) &&
                   (FUN_004fbbcc(param_1), *(char *)(param_1 + 0x70) == '/')) goto LAB_004fcc50;
                break;
              }
              FUN_004fbbcc(param_1);
              bVar3 = *(byte *)(param_1 + 0x70);
            }
            *(byte **)(param_1 + 0x98) = param_2;
            *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x84);
          }
          else {
LAB_004fc954:
            FUN_004fbbcc(param_1);
          }
          goto LAB_004fc84c;
        }
      }
      else if (bVar3 == 0x2a) {
        FUN_004fbbcc(param_1);
        cVar16 = *(char *)(param_1 + 0x70);
        if (cVar16 == '/') goto LAB_004fcbe4;
      }
      else {
        if (bVar3 != 0x2f) goto LAB_004fc954;
        FUN_004fbbcc(param_1);
        cVar16 = *(char *)(param_1 + 0x70);
        if (cVar16 == '*') {
          local_70 = (char *)FUN_0049e770(puVar14,0x40);
          uVar12 = s______inside_block_comment__Block_03be16cc._32_8_;
          uVar11 = s______inside_block_comment__Block_03be16cc._24_8_;
          uVar10 = s______inside_block_comment__Block_03be16cc._16_8_;
          uVar9 = s______inside_block_comment__Block_03be16cc._8_8_;
          uVar8 = s______inside_block_comment__Block_03be16cc._0_8_;
          uVar5 = CONCAT44(s______inside_block_comment__Block_03be16cc._44_4_,
                           s______inside_block_comment__Block_03be16cc._40_4_);
          uStack_78 = uVar7;
          local_80 = uVar13;
          uVar6 = CONCAT44(s______inside_block_comment__Block_03be16cc._48_4_,
                           s______inside_block_comment__Block_03be16cc._44_4_);
          *(undefined8 *)(local_70 + 0x34) = s______inside_block_comment__Block_03be16cc._52_8_;
          *(undefined8 *)(local_70 + 0x2c) = uVar6;
          *(undefined8 *)(local_70 + 0x18) = uVar11;
          *(undefined8 *)(local_70 + 0x10) = uVar10;
          *(undefined8 *)(local_70 + 0x28) = uVar5;
          *(undefined8 *)(local_70 + 0x20) = uVar12;
          local_70[0x3c] = '\0';
          *(undefined8 *)(local_70 + 8) = uVar9;
          *(undefined8 *)local_70 = uVar8;
                    /* try { // try from 004fc934 to 004fc93b has its CatchHandler @ 004fccac */
          (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                    (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                     *(undefined4 *)(param_1 + 0x90),&local_80);
          if ((local_80 & 1) != 0) {
            FUN_0049e790(puVar15,local_70);
          }
          goto LAB_004fc84c;
        }
      }
    } while (cVar16 != '\0');
LAB_004fcac4:
    local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    uVar8 = s_End_of_file_inside_block_comment_03c7cb2e._24_8_;
    uVar6 = s_End_of_file_inside_block_comment_03c7cb2e._16_8_;
    uVar5 = s_End_of_file_inside_block_comment_03c7cb2e._8_8_;
    uVar7 = s_End_of_file_inside_block_comment_03c7cb2e._0_8_;
    uStack_78 = _UNK_03cab708;
    local_80 = _DAT_03cab700;
    local_70[0x20] = '.';
    local_70[0x21] = '\0';
    *(undefined8 *)(local_70 + 8) = uVar5;
    *(undefined8 *)local_70 = uVar7;
    *(undefined8 *)(local_70 + 0x18) = uVar8;
    *(undefined8 *)(local_70 + 0x10) = uVar6;
                    /* try { // try from 004fcb10 to 004fcb17 has its CatchHandler @ 004fcca4 */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),&local_80);
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    plVar18 = *(long **)(param_1 + 0x68);
    local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar5 = s_Comment_started_here__03c839e5._0_8_;
    uStack_78 = _UNK_03cab718;
    local_80 = _DAT_03cab710;
    uVar7 = CONCAT17(s_Comment_started_here__03c839e5[0xf],s_Comment_started_here__03c839e5._8_7_);
    *(ulong *)(local_70 + 0xf) =
         CONCAT71(s_Comment_started_here__03c839e5._16_7_,s_Comment_started_here__03c839e5[0xf]);
    *(undefined8 *)(local_70 + 8) = uVar7;
    *(undefined8 *)local_70 = uVar5;
    local_70[0x17] = '\0';
                    /* try { // try from 004fcb7c to 004fcb8f has its CatchHandler @ 004fcca0 */
    (**(code **)(*plVar18 + 0x10))(plVar18,uVar1,iVar2 + -2,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    if (param_2 != (byte *)0x0) {
      iVar2 = *(int *)(param_1 + 0xa0);
      if (*(int *)(param_1 + 0x84) != iVar2) {
        FUN_0021d540(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar2,
                     (long)(*(int *)(param_1 + 0x84) - iVar2));
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    }
    return;
  }
LAB_004fc9d8:
  do {
    bVar3 = *(byte *)(param_1 + 0x70);
    if (0x29 < bVar3) {
      if (bVar3 == 0x2a) {
        FUN_004fbbcc(param_1);
        cVar16 = *(char *)(param_1 + 0x70);
        if (cVar16 == '/') {
LAB_004fcbe4:
          FUN_004fbbcc(param_1);
          if (param_2 == (byte *)0x0) {
            return;
          }
          iVar2 = *(int *)(param_1 + 0xa0);
          if (*(int *)(param_1 + 0x84) != iVar2) {
            FUN_0021d540(*(undefined8 *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar2,
                         (long)(*(int *)(param_1 + 0x84) - iVar2));
          }
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
          bVar3 = *param_2;
          if ((bVar3 & 1) == 0) {
            if (3 < bVar3) {
              param_2[(ulong)(bVar3 >> 1) - 1] = 0;
              *param_2 = ((bVar3 >> 1) - 2) * '\x02';
              return;
            }
          }
          else if (1 < *(ulong *)(param_2 + 8)) {
            lVar17 = *(ulong *)(param_2 + 8) - 2;
            *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar17) = 0;
            *(long *)(param_2 + 8) = lVar17;
            return;
          }
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
      }
      else {
        if (bVar3 != 0x2f) goto LAB_004fcab8;
        FUN_004fbbcc(param_1);
        cVar16 = *(char *)(param_1 + 0x70);
        if (cVar16 == '*') {
          local_70 = (char *)FUN_0049e770(puVar14,0x40);
          uVar12 = s______inside_block_comment__Block_03be16cc._32_8_;
          uVar11 = s______inside_block_comment__Block_03be16cc._24_8_;
          uVar10 = s______inside_block_comment__Block_03be16cc._16_8_;
          uVar9 = s______inside_block_comment__Block_03be16cc._8_8_;
          uVar8 = s______inside_block_comment__Block_03be16cc._0_8_;
          uVar5 = CONCAT44(s______inside_block_comment__Block_03be16cc._44_4_,
                           s______inside_block_comment__Block_03be16cc._40_4_);
          uStack_78 = uVar7;
          local_80 = uVar13;
          uVar6 = CONCAT44(s______inside_block_comment__Block_03be16cc._48_4_,
                           s______inside_block_comment__Block_03be16cc._44_4_);
          *(undefined8 *)(local_70 + 0x34) = s______inside_block_comment__Block_03be16cc._52_8_;
          *(undefined8 *)(local_70 + 0x2c) = uVar6;
          *(undefined8 *)(local_70 + 0x18) = uVar11;
          *(undefined8 *)(local_70 + 0x10) = uVar10;
          *(undefined8 *)(local_70 + 0x28) = uVar5;
          *(undefined8 *)(local_70 + 0x20) = uVar12;
          local_70[0x3c] = '\0';
          *(undefined8 *)(local_70 + 8) = uVar9;
          *(undefined8 *)local_70 = uVar8;
                    /* try { // try from 004fca98 to 004fca9f has its CatchHandler @ 004fcca8 */
          (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                    (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                     *(undefined4 *)(param_1 + 0x90),&local_80);
          if ((local_80 & 1) != 0) {
            FUN_0049e790(puVar15,local_70);
          }
          goto LAB_004fc9d8;
        }
      }
LAB_004fc9d4:
      if (cVar16 == '\0') goto LAB_004fcac4;
      goto LAB_004fc9d8;
    }
    cVar16 = '\0';
    if (bVar3 == 0) goto LAB_004fc9d4;
    if (bVar3 == 10) {
      do {
        FUN_004fbbcc(param_1);
        bVar3 = *(byte *)(param_1 + 0x70);
        if (0x2a < bVar3) goto LAB_004fc9d8;
      } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100003a00U) != 0);
      if (((ulong)bVar3 == 0x2a) && (FUN_004fbbcc(param_1), *(char *)(param_1 + 0x70) == '/')) {
LAB_004fcc50:
        FUN_004fbbcc(param_1);
        return;
      }
    }
    else {
LAB_004fcab8:
      FUN_004fbbcc(param_1);
    }
  } while( true );
}


