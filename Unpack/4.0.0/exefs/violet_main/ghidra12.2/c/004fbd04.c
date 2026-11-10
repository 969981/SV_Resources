/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fbd04; name: FUN_004fbd04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fbd04(long param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  
  puVar20 = PTR_LAB_047cba48;
  puVar19 = PTR_FUN_047cba38;
  uVar14 = _UNK_03cab5a8;
  uVar18 = _DAT_03cab5a0;
  uVar13 = _UNK_03caae38;
  uVar17 = _DAT_03caae30;
  uVar7 = _UNK_03caa7c8;
  uVar16 = _DAT_03caa7c0;
  uVar6 = _UNK_03caa598;
  uVar15 = _DAT_03caa590;
LAB_004fbda8:
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == '\n') {
    if (*(char *)(param_1 + 0xad) == '\0') {
      local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      uVar13 = s_String_literals_cannot_cross_lin_03c76658._16_8_;
      uVar7 = s_String_literals_cannot_cross_lin_03c76658._0_8_;
      uStack_78 = _UNK_03cabcf8;
      local_80 = _DAT_03cabcf0;
      uVar6 = CONCAT35(s_String_literals_cannot_cross_lin_03c76658._29_3_,
                       s_String_literals_cannot_cross_lin_03c76658._24_5_);
      *(undefined8 *)(local_70 + 8) = s_String_literals_cannot_cross_lin_03c76658._8_8_;
      *(undefined8 *)local_70 = uVar7;
      *(undefined8 *)(local_70 + 0x18) = uVar6;
      *(undefined8 *)(local_70 + 0x10) = uVar13;
      uVar6 = CONCAT53(s_String_literals_cannot_cross_lin_03c76658._32_5_,
                       s_String_literals_cannot_cross_lin_03c76658._29_3_);
      *(undefined8 *)(local_70 + 0x25) = s_String_literals_cannot_cross_lin_03c76658._37_8_;
      *(undefined8 *)(local_70 + 0x1d) = uVar6;
      local_70[0x2d] = '\0';
                    /* try { // try from 004fc220 to 004fc227 has its CatchHandler @ 004fc270 */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_80);
LAB_004fc228:
      if ((local_80 & 1) == 0) {
        return;
      }
      FUN_0049e790(PTR_LAB_047cba48,local_70);
      return;
    }
  }
  else {
    if (cVar1 != '\\') {
      if (cVar1 == '\0') {
        local_70 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
        uVar14 = s_Unexpected_end_of_string__03ca5025._17_8_;
        uVar13 = s_Unexpected_end_of_string__03ca5025._0_8_;
        uVar7 = CONCAT17(s_Unexpected_end_of_string__03ca5025[0x10],
                         s_Unexpected_end_of_string__03ca5025._9_7_);
        uStack_78 = _UNK_03caa7a8;
        local_80 = _DAT_03caa7a0;
        uVar6 = CONCAT71(s_Unexpected_end_of_string__03ca5025._9_7_,
                         s_Unexpected_end_of_string__03ca5025[8]);
        local_70[0x19] = '\0';
        *(undefined8 *)(local_70 + 0x11) = uVar14;
        *(undefined8 *)(local_70 + 9) = uVar7;
        *(undefined8 *)(local_70 + 8) = uVar6;
        *(undefined8 *)local_70 = uVar13;
                    /* try { // try from 004fc1c8 to 004fc1cf has its CatchHandler @ 004fc274 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
        goto LAB_004fc228;
      }
      FUN_004fbbcc(param_1);
      if (cVar1 == param_2) {
        return;
      }
      goto LAB_004fbda8;
    }
    FUN_004fbbcc(param_1);
    bVar2 = *(byte *)(param_1 + 0x70);
    switch(bVar2) {
    case 0x5c:
      goto switchD_004fbdf8_caseD_5c;
    }
    if ((bVar2 & 0xf8) != 0x30) {
      if (bVar2 == 0x55) {
        FUN_004fbbcc(param_1);
        if (((*(char *)(param_1 + 0x70) == '0') &&
            (FUN_004fbbcc(param_1), *(char *)(param_1 + 0x70) == '0')) &&
           (FUN_004fbbcc(param_1), (*(byte *)(param_1 + 0x70) & 0xfe) == 0x30)) {
          FUN_004fbbcc(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
              ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_004fbbcc(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_004fbbcc(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                  ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                FUN_004fbbcc(param_1);
                if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                   ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                    ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                  FUN_004fbbcc(param_1);
                  if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                     ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                      ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0))))
                  goto switchD_004fbdf8_caseD_5c;
                }
              }
            }
          }
        }
        local_70 = (char *)FUN_0049e770(puVar19,0x40);
        uVar12 = s_Expected_eight_hex_digits_up_to_1_03c3a7cd._32_8_;
        uVar11 = s_Expected_eight_hex_digits_up_to_1_03c3a7cd._24_8_;
        uVar10 = s_Expected_eight_hex_digits_up_to_1_03c3a7cd._16_8_;
        uVar9 = s_Expected_eight_hex_digits_up_to_1_03c3a7cd._8_8_;
        uVar8 = s_Expected_eight_hex_digits_up_to_1_03c3a7cd._0_8_;
        uVar4 = CONCAT35(s_Expected_eight_hex_digits_up_to_1_03c3a7cd._45_3_,
                         s_Expected_eight_hex_digits_up_to_1_03c3a7cd._40_5_);
        uStack_78 = uVar6;
        local_80 = uVar15;
        uVar5 = CONCAT53(s_Expected_eight_hex_digits_up_to_1_03c3a7cd._48_5_,
                         s_Expected_eight_hex_digits_up_to_1_03c3a7cd._45_3_);
        *(undefined8 *)(local_70 + 0x35) = s_Expected_eight_hex_digits_up_to_1_03c3a7cd._53_8_;
        *(undefined8 *)(local_70 + 0x2d) = uVar5;
        *(undefined8 *)(local_70 + 0x18) = uVar11;
        *(undefined8 *)(local_70 + 0x10) = uVar10;
        *(undefined8 *)(local_70 + 0x28) = uVar4;
        *(undefined8 *)(local_70 + 0x20) = uVar12;
        local_70[0x3d] = '\0';
        *(undefined8 *)(local_70 + 8) = uVar9;
        *(undefined8 *)local_70 = uVar8;
                    /* try { // try from 004fc00c to 004fc013 has its CatchHandler @ 004fc268 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      else if (bVar2 == 0x75) {
        FUN_004fbbcc(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
            ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_004fbbcc(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
              ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_004fbbcc(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_004fbbcc(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                  ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0))))
              goto switchD_004fbdf8_caseD_5c;
            }
          }
        }
        local_70 = (char *)FUN_0049e770(puVar19,0x40);
        uVar10 = s_Expected_four_hex_digits_for__u_e_03c262ae._32_8_;
        uVar9 = s_Expected_four_hex_digits_for__u_e_03c262ae._24_8_;
        uVar8 = s_Expected_four_hex_digits_for__u_e_03c262ae._16_8_;
        uVar5 = s_Expected_four_hex_digits_for__u_e_03c262ae._8_8_;
        uVar4 = s_Expected_four_hex_digits_for__u_e_03c262ae._0_8_;
        uStack_78 = uVar13;
        local_80 = uVar17;
        *(undefined8 *)(local_70 + 0x28) = s_Expected_four_hex_digits_for__u_e_03c262ae._40_8_;
        *(undefined8 *)(local_70 + 0x20) = uVar10;
        *(undefined8 *)(local_70 + 8) = uVar5;
        *(undefined8 *)local_70 = uVar4;
        *(undefined8 *)(local_70 + 0x18) = uVar9;
        *(undefined8 *)(local_70 + 0x10) = uVar8;
        local_70[0x30] = '\0';
                    /* try { // try from 004fc114 to 004fc11b has its CatchHandler @ 004fc264 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      else if (bVar2 == 0x78) {
        FUN_004fbbcc(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
            ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) goto switchD_004fbdf8_caseD_5c;
        local_70 = (char *)FUN_0049e770(puVar19,0x30);
        uVar9 = s_Expected_hex_digits_for_escape_s_03c5597d._32_8_;
        uVar8 = s_Expected_hex_digits_for_escape_s_03c5597d._24_8_;
        uVar5 = s_Expected_hex_digits_for_escape_s_03c5597d._16_8_;
        uVar4 = s_Expected_hex_digits_for_escape_s_03c5597d._0_8_;
        uStack_78 = uVar7;
        local_80 = uVar16;
        *(undefined8 *)(local_70 + 8) = s_Expected_hex_digits_for_escape_s_03c5597d._8_8_;
        *(undefined8 *)local_70 = uVar4;
        *(undefined8 *)(local_70 + 0x18) = uVar8;
        *(undefined8 *)(local_70 + 0x10) = uVar5;
        *(undefined8 *)(local_70 + 0x20) = uVar9;
        local_70[0x28] = '\0';
                    /* try { // try from 004fbe8c to 004fbe93 has its CatchHandler @ 004fc260 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      else {
        local_70 = (char *)FUN_0049e770(puVar19,0x30);
        uVar8 = s_Invalid_escape_sequence_in_strin_03c5c1d1._16_8_;
        uVar5 = s_Invalid_escape_sequence_in_strin_03c5c1d1._0_8_;
        uStack_78 = uVar14;
        local_80 = uVar18;
        uVar4 = CONCAT62(s_Invalid_escape_sequence_in_strin_03c5c1d1._26_6_,
                         s_Invalid_escape_sequence_in_strin_03c5c1d1._24_2_);
        *(undefined8 *)(local_70 + 8) = s_Invalid_escape_sequence_in_strin_03c5c1d1._8_8_;
        *(undefined8 *)local_70 = uVar5;
        *(undefined8 *)(local_70 + 0x18) = uVar4;
        *(undefined8 *)(local_70 + 0x10) = uVar8;
        uVar4 = CONCAT26(s_Invalid_escape_sequence_in_strin_03c5c1d1._32_2_,
                         s_Invalid_escape_sequence_in_strin_03c5c1d1._26_6_);
        *(undefined8 *)(local_70 + 0x22) = s_Invalid_escape_sequence_in_strin_03c5c1d1._34_8_;
        *(undefined8 *)(local_70 + 0x1a) = uVar4;
        local_70[0x2a] = '\0';
                    /* try { // try from 004fc15c to 004fc163 has its CatchHandler @ 004fc26c */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      if ((local_80 & 1) != 0) {
        FUN_0049e790(puVar20,local_70);
      }
      goto LAB_004fbda8;
    }
  }
switchD_004fbdf8_caseD_5c:
  FUN_004fbbcc(param_1);
  goto LAB_004fbda8;
}


