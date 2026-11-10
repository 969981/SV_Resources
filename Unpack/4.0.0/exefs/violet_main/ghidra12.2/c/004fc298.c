/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fc298; name: FUN_004fc298
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fc298(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong local_40;
  undefined8 uStack_38;
  char *local_30;
  
  bVar9 = *(byte *)(param_1 + 0x70);
  uVar10 = (uint)bVar9;
  if ((param_2 & 1) == 0) {
    while (uVar10 - 0x30 < 10) {
      FUN_004fbbcc(param_1);
      bVar9 = *(byte *)(param_1 + 0x70);
      uVar10 = (uint)bVar9;
    }
    if ((param_3 & 1) == 0) {
LAB_004fc36c:
      if (bVar9 == 0x2e) {
        FUN_004fbbcc(param_1);
        bVar9 = *(byte *)(param_1 + 0x70);
        while (bVar9 - 0x30 < 10) {
          FUN_004fbbcc(param_1);
          bVar9 = *(byte *)(param_1 + 0x70);
        }
        goto LAB_004fc4a8;
      }
      bVar3 = false;
    }
    else {
LAB_004fc4a8:
      bVar3 = true;
    }
    if ((bVar9 | 0x20) == 0x65) {
      FUN_004fbbcc(param_1);
      bVar9 = *(byte *)(param_1 + 0x70);
      if ((bVar9 == 0x2d) || (bVar9 == 0x2b)) {
        FUN_004fbbcc(param_1);
      }
      if (*(byte *)(param_1 + 0x70) - 0x30 < 10) {
        do {
          FUN_004fbbcc(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      else {
        local_30 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
        uVar5 = s__e__must_be_followed_by_exponent_03c483c9._24_8_;
        uVar4 = s__e__must_be_followed_by_exponent_03c483c9._16_8_;
        uVar2 = s__e__must_be_followed_by_exponent_03c483c9._8_8_;
        uVar1 = s__e__must_be_followed_by_exponent_03c483c9._0_8_;
        uStack_38 = _UNK_03cab708;
        local_40 = _DAT_03cab700;
        local_30[0x20] = '.';
        local_30[0x21] = '\0';
        *(undefined8 *)(local_30 + 8) = uVar2;
        *(undefined8 *)local_30 = uVar1;
        *(undefined8 *)(local_30 + 0x18) = uVar5;
        *(undefined8 *)(local_30 + 0x10) = uVar4;
                    /* try { // try from 004fc554 to 004fc55b has its CatchHandler @ 004fc798 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_40);
        if ((local_40 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_30);
        }
      }
      bVar3 = true;
    }
    if ((*(char *)(param_1 + 0xa4) != '\0') &&
       ((*(char *)(param_1 + 0x70) == 'F' || (*(char *)(param_1 + 0x70) == 'f')))) {
      FUN_004fbbcc(param_1);
      bVar3 = true;
    }
LAB_004fc5a0:
    bVar9 = *(byte *)(param_1 + 0x70);
    if (bVar9 - 0x61 < 0x1a) goto LAB_004fc5b0;
LAB_004fc610:
    if ((bVar9 == 0x5f) || ((byte)(bVar9 + 0xbf) < 0x1a)) goto LAB_004fc5b0;
LAB_004fc628:
    if (bVar9 != 0x2e) goto LAB_004fc6f8;
    if (bVar3) {
      local_30 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x40);
      uVar8 = s_Already_saw_decimal_point_or_exp_03c69209._32_8_;
      uVar7 = s_Already_saw_decimal_point_or_exp_03c69209._24_8_;
      uVar6 = s_Already_saw_decimal_point_or_exp_03c69209._16_8_;
      uVar5 = s_Already_saw_decimal_point_or_exp_03c69209._8_8_;
      uVar4 = s_Already_saw_decimal_point_or_exp_03c69209._0_8_;
      uVar1 = CONCAT26(s_Already_saw_decimal_point_or_exp_03c69209._46_2_,
                       s_Already_saw_decimal_point_or_exp_03c69209._40_6_);
      uVar2 = CONCAT62(s_Already_saw_decimal_point_or_exp_03c69209._48_6_,
                       s_Already_saw_decimal_point_or_exp_03c69209._46_2_);
      uStack_38 = _UNK_03cab478;
      local_40 = _DAT_03cab470;
      *(undefined8 *)(local_30 + 0x36) = s_Already_saw_decimal_point_or_exp_03c69209._54_8_;
      *(undefined8 *)(local_30 + 0x2e) = uVar2;
      *(undefined8 *)(local_30 + 0x18) = uVar7;
      *(undefined8 *)(local_30 + 0x10) = uVar6;
      *(undefined8 *)(local_30 + 0x28) = uVar1;
      *(undefined8 *)(local_30 + 0x20) = uVar8;
      local_30[0x3e] = '\0';
      *(undefined8 *)(local_30 + 8) = uVar5;
      *(undefined8 *)local_30 = uVar4;
                    /* try { // try from 004fc688 to 004fc68f has its CatchHandler @ 004fc794 */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
    }
    else {
      local_30 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      uVar6 = s_Hex_and_octal_numbers_must_be_in_03c9e39d._16_8_;
      uVar5 = s_Hex_and_octal_numbers_must_be_in_03c9e39d._8_8_;
      uVar4 = s_Hex_and_octal_numbers_must_be_in_03c9e39d._0_8_;
      uStack_38 = _UNK_03cab758;
      local_40 = _DAT_03cab750;
      uVar1 = CONCAT17(s_Hex_and_octal_numbers_must_be_in_03c9e39d[0x1f],
                       s_Hex_and_octal_numbers_must_be_in_03c9e39d._24_7_);
      uVar2 = CONCAT71(s_Hex_and_octal_numbers_must_be_in_03c9e39d._32_7_,
                       s_Hex_and_octal_numbers_must_be_in_03c9e39d[0x1f]);
      local_30[0x27] = '\0';
      *(undefined8 *)(local_30 + 8) = uVar5;
      *(undefined8 *)local_30 = uVar4;
      *(undefined8 *)(local_30 + 0x18) = uVar1;
      *(undefined8 *)(local_30 + 0x10) = uVar6;
      *(undefined8 *)(local_30 + 0x1f) = uVar2;
                    /* try { // try from 004fc6d8 to 004fc6df has its CatchHandler @ 004fc790 */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
    }
  }
  else {
    if ((uVar10 | 0x20) != 0x78) {
      if (9 < uVar10 - 0x30) {
        if ((param_3 & 1) == 0) goto LAB_004fc36c;
        goto LAB_004fc4a8;
      }
      if ((uVar10 & 0xf8) == 0x30) {
        do {
          FUN_004fbbcc(param_1);
        } while ((*(byte *)(param_1 + 0x70) & 0xf8) == 0x30);
        if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_004fc328;
      }
      local_30 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x40);
      uStack_38 = _UNK_03caa968;
      local_40 = _DAT_03caa960;
      local_30[0x30] = 't';
      uVar7 = s_Numbers_starting_with_leading_ze_03c691d4._40_8_;
      uVar6 = s_Numbers_starting_with_leading_ze_03c691d4._32_8_;
      uVar5 = s_Numbers_starting_with_leading_ze_03c691d4._24_8_;
      uVar4 = s_Numbers_starting_with_leading_ze_03c691d4._16_8_;
      uVar2 = s_Numbers_starting_with_leading_ze_03c691d4._8_8_;
      uVar1 = s_Numbers_starting_with_leading_ze_03c691d4._0_8_;
      local_30[0x31] = 'a';
      local_30[0x32] = 'l';
      local_30[0x33] = '.';
      local_30[0x34] = '\0';
      *(undefined8 *)(local_30 + 0x18) = uVar5;
      *(undefined8 *)(local_30 + 0x10) = uVar4;
      *(undefined8 *)(local_30 + 0x28) = uVar7;
      *(undefined8 *)(local_30 + 0x20) = uVar6;
      *(undefined8 *)(local_30 + 8) = uVar2;
      *(undefined8 *)local_30 = uVar1;
                    /* try { // try from 004fc43c to 004fc443 has its CatchHandler @ 004fc78c */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
      if ((local_40 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_30);
      }
      if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_004fc328;
      do {
        FUN_004fbbcc(param_1);
        bVar3 = false;
      } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      goto LAB_004fc5a0;
    }
    FUN_004fbbcc(param_1);
    if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
       ((uVar10 = *(byte *)(param_1 + 0x70) - 0x41, uVar10 < 0x26 &&
        ((1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0)))) {
      do {
        do {
          FUN_004fbbcc(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
        uVar10 = *(byte *)(param_1 + 0x70) - 0x41;
      } while (uVar10 < 0x26 && (1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0);
    }
    else {
      local_30 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      uVar5 = s__0x__must_be_followed_by_hex_dig_03c2cfe3._24_8_;
      uVar4 = s__0x__must_be_followed_by_hex_dig_03c2cfe3._16_8_;
      uVar2 = s__0x__must_be_followed_by_hex_dig_03c2cfe3._8_8_;
      uVar1 = s__0x__must_be_followed_by_hex_dig_03c2cfe3._0_8_;
      uStack_38 = _UNK_03cab078;
      local_40 = _DAT_03cab070;
      local_30[0x20] = 'i';
      local_30[0x21] = 't';
      local_30[0x22] = 's';
      local_30[0x23] = '.';
      local_30[0x24] = '\0';
      *(undefined8 *)(local_30 + 8) = uVar2;
      *(undefined8 *)local_30 = uVar1;
      *(undefined8 *)(local_30 + 0x18) = uVar5;
      *(undefined8 *)(local_30 + 0x10) = uVar4;
                    /* try { // try from 004fc764 to 004fc76b has its CatchHandler @ 004fc788 */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
      if ((local_40 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_30);
      }
    }
LAB_004fc328:
    bVar3 = false;
    bVar9 = *(byte *)(param_1 + 0x70);
    if (0x19 < bVar9 - 0x61) goto LAB_004fc610;
LAB_004fc5b0:
    if (*(char *)(param_1 + 0xac) == '\0') goto LAB_004fc628;
    local_30 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    uVar4 = s_Need_space_between_number_and_id_03c0260e._16_8_;
    uVar2 = s_Need_space_between_number_and_id_03c0260e._0_8_;
    uStack_38 = _UNK_03cabae8;
    local_40 = _DAT_03cabae0;
    uVar1 = CONCAT71(s_Need_space_between_number_and_id_03c0260e._25_7_,
                     s_Need_space_between_number_and_id_03c0260e[0x18]);
    *(undefined8 *)(local_30 + 8) = s_Need_space_between_number_and_id_03c0260e._8_8_;
    *(undefined8 *)local_30 = uVar2;
    *(undefined8 *)(local_30 + 0x18) = uVar1;
    *(undefined8 *)(local_30 + 0x10) = uVar4;
    uVar1 = CONCAT17(s_Need_space_between_number_and_id_03c0260e[0x20],
                     s_Need_space_between_number_and_id_03c0260e._25_7_);
    *(undefined8 *)(local_30 + 0x21) = s_Need_space_between_number_and_id_03c0260e._33_8_;
    *(undefined8 *)(local_30 + 0x19) = uVar1;
    local_30[0x29] = '\0';
                    /* try { // try from 004fc604 to 004fc60b has its CatchHandler @ 004fc79c */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),&local_40);
  }
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_30);
  }
LAB_004fc6f8:
  uVar11 = 3;
  if (bVar3) {
    uVar11 = 4;
  }
  return uVar11;
}


