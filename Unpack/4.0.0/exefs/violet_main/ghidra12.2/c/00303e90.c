/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00303e90; name: FUN_00303e90
 */


undefined8
FUN_00303e90(long *param_1,long param_2,ulong param_3,uint *param_4,long param_5,long param_6,
            long param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long local_50;
  long local_48;
  char local_34 [4];
  
  local_50 = param_6;
  local_48 = param_7;
  if (param_1 == (long *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_0038c780(0x28);
    *param_8 = pcVar6;
    uVar3 = s_Input_iovec_record_protocol_is_n_03be0342._24_8_;
    uVar2 = s_Input_iovec_record_protocol_is_n_03be0342._16_8_;
    uVar8 = s_Input_iovec_record_protocol_is_n_03be0342._8_8_;
    uVar7 = s_Input_iovec_record_protocol_is_n_03be0342._0_8_;
    *(undefined8 *)(pcVar6 + 0x20) = s_Input_iovec_record_protocol_is_n_03be0342._32_8_;
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)pcVar6 = uVar7;
    *(undefined8 *)(pcVar6 + 0x18) = uVar3;
    *(undefined8 *)(pcVar6 + 0x10) = uVar2;
    return 3;
  }
  if ((char)param_1[3] == '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar6 = (char *)FUN_0038c780(0x3b);
    uVar3 = s_Integrity_only_operations_are_no_03c546af._51_8_;
    uVar7 = CONCAT35(s_Integrity_only_operations_are_no_03c546af._48_3_,
                     s_Integrity_only_operations_are_no_03c546af._43_5_);
    *param_8 = pcVar6;
    uVar2 = s_Integrity_only_operations_are_no_03c546af._8_8_;
    uVar8 = s_Integrity_only_operations_are_no_03c546af._0_8_;
    *(undefined8 *)(pcVar6 + 0x33) = uVar3;
    *(undefined8 *)(pcVar6 + 0x2b) = uVar7;
    uVar4 = s_Integrity_only_operations_are_no_03c546af._32_8_;
    uVar3 = s_Integrity_only_operations_are_no_03c546af._16_8_;
    uVar7 = CONCAT53(s_Integrity_only_operations_are_no_03c546af._43_5_,
                     s_Integrity_only_operations_are_no_03c546af._40_3_);
    *(undefined8 *)(pcVar6 + 0x18) = s_Integrity_only_operations_are_no_03c546af._24_8_;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *(undefined8 *)(pcVar6 + 0x28) = uVar7;
    *(undefined8 *)(pcVar6 + 0x20) = uVar4;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar8;
    return 9;
  }
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar6 = (char *)FUN_0038c780(0x36);
    uVar2 = s_Unprotect_operations_are_not_all_03c2bc15._32_8_;
    uVar7 = CONCAT26(s_Unprotect_operations_are_not_all_03c2bc15._46_2_,
                     s_Unprotect_operations_are_not_all_03c2bc15._40_6_);
    uVar8 = CONCAT62(s_Unprotect_operations_are_not_all_03c2bc15._48_6_,
                     s_Unprotect_operations_are_not_all_03c2bc15._46_2_);
    *param_8 = pcVar6;
    *(undefined8 *)(pcVar6 + 0x2e) = uVar8;
    *(undefined8 *)(pcVar6 + 0x28) = uVar7;
    *(undefined8 *)(pcVar6 + 0x20) = uVar2;
    uVar2 = s_Unprotect_operations_are_not_all_03c2bc15._24_8_;
    uVar8 = s_Unprotect_operations_are_not_all_03c2bc15._16_8_;
    uVar7 = s_Unprotect_operations_are_not_all_03c2bc15._0_8_;
    *(undefined8 *)(pcVar6 + 8) = s_Unprotect_operations_are_not_all_03c2bc15._8_8_;
    *(undefined8 *)pcVar6 = uVar7;
    *(undefined8 *)(pcVar6 + 0x18) = uVar2;
    *(undefined8 *)(pcVar6 + 0x10) = uVar8;
    return 9;
  }
  if (param_4 == (uint *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_0038c780(0x13);
    uVar8 = s_Header_is_nullptr__03c4dc59._8_8_;
    uVar7 = s_Header_is_nullptr__03c4dc59._0_8_;
    *param_8 = pcVar6;
    builtin_strncpy(pcVar6 + 0xf,"tr.",4);
LAB_0030401c:
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)pcVar6 = uVar7;
    return 3;
  }
  if (param_5 != 8) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_0038c780(0x1c);
    uVar8 = s_Header_length_is_incorrect__03c6e8b0._0_8_;
    uVar7 = CONCAT44(s_Header_length_is_incorrect__03c6e8b0._12_4_,
                     s_Header_length_is_incorrect__03c6e8b0._8_4_);
    *param_8 = pcVar6;
    *(undefined8 *)(pcVar6 + 8) = uVar7;
    *(undefined8 *)pcVar6 = uVar8;
    uVar7 = CONCAT44(s_Header_length_is_incorrect__03c6e8b0._16_4_,
                     s_Header_length_is_incorrect__03c6e8b0._12_4_);
    *(undefined8 *)(pcVar6 + 0x14) = s_Header_length_is_incorrect__03c6e8b0._20_8_;
    *(undefined8 *)(pcVar6 + 0xc) = uVar7;
    return 3;
  }
  if (param_6 == 0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_0038c780(0x10);
    uVar8 = s_Tag_is_nullptr__03c9d20b._8_8_;
    uVar7 = s_Tag_is_nullptr__03c9d20b._0_8_;
    *param_8 = pcVar6;
    goto LAB_0030401c;
  }
  if (param_7 != param_1[2]) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_0038c780(0x19);
    uVar8 = s_Tag_length_is_incorrect__03c54706._0_8_;
    uVar7 = CONCAT71(s_Tag_length_is_incorrect__03c54706._9_7_,
                     s_Tag_length_is_incorrect__03c54706[8]);
    *param_8 = pcVar6;
    *(undefined8 *)(pcVar6 + 8) = uVar7;
    *(undefined8 *)pcVar6 = uVar8;
    uVar7 = CONCAT17(s_Tag_length_is_incorrect__03c54706[0x10],
                     s_Tag_length_is_incorrect__03c54706._9_7_);
    *(undefined8 *)(pcVar6 + 0x11) = s_Tag_length_is_incorrect__03c54706._17_8_;
    *(undefined8 *)(pcVar6 + 9) = uVar7;
    return 3;
  }
  if (param_3 == 0) {
    lVar13 = 4;
    goto LAB_00304104;
  }
  if (param_3 < 4) {
    uVar11 = 0;
    lVar13 = 0;
LAB_003040bc:
    uVar15 = ~uVar11;
    if ((param_3 & 1) != 0) {
      lVar16 = uVar11 * 0x10;
      uVar11 = uVar11 | 1;
      lVar13 = *(long *)(param_2 + lVar16 + 8) + lVar13;
    }
    if (uVar15 + param_3 != 0) {
      lVar16 = param_3 - uVar11;
      plVar12 = (long *)(param_2 + uVar11 * 0x10 + 0x18);
      do {
        lVar16 = lVar16 + -2;
        lVar13 = *plVar12 + plVar12[-2] + lVar13;
        plVar12 = plVar12 + 4;
      } while (lVar16 != 0);
    }
  }
  else {
    uVar11 = param_3 & 0xfffffffffffffffc;
    lVar16 = 0;
    lVar17 = 0;
    lVar14 = 0;
    lVar13 = 0;
    plVar12 = (long *)(param_2 + 0x28);
    uVar15 = uVar11;
    do {
      lVar16 = plVar12[-4] + lVar16;
      plVar1 = plVar12 + 2;
      lVar17 = plVar12[-2] + lVar17;
      lVar14 = *plVar12 + lVar14;
      plVar12 = plVar12 + 8;
      lVar13 = *plVar1 + lVar13;
      uVar15 = uVar15 - 4;
    } while (uVar15 != 0);
    lVar13 = lVar13 + lVar14 + lVar17 + lVar16;
    if (uVar11 != param_3) goto LAB_003040bc;
  }
  lVar13 = lVar13 + 4;
LAB_00304104:
  if (lVar13 + param_7 == (ulong)*param_4) {
    if (param_4[1] == 6) {
      lVar13 = param_1[1];
      uVar7 = FUN_003027e0(*param_1);
      uVar8 = FUN_003027d0(*param_1);
      iVar5 = FUN_003029f0(lVar13,uVar7,uVar8,param_2,param_3,&local_50,1);
      if (iVar5 == 0) {
        if (*param_1 == 0) {
          return 9;
        }
        local_34[0] = '\0';
        uVar7 = FUN_003026e0(*param_1,local_34,param_8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if (local_34[0] == '\0') {
          return 0;
        }
        if (param_8 != (undefined8 *)0x0) {
          pcVar6 = (char *)FUN_0038c780(0x1f);
          uVar8 = s_Crypter_counter_is_overflowed__03c2bc4b._0_8_;
          uVar7 = CONCAT17(s_Crypter_counter_is_overflowed__03c2bc4b[0xf],
                           s_Crypter_counter_is_overflowed__03c2bc4b._8_7_);
          *param_8 = pcVar6;
          *(undefined8 *)(pcVar6 + 8) = uVar7;
          *(undefined8 *)pcVar6 = uVar8;
          uVar7 = CONCAT71(s_Crypter_counter_is_overflowed__03c2bc4b._16_7_,
                           s_Crypter_counter_is_overflowed__03c2bc4b[0xf]);
          *(undefined8 *)(pcVar6 + 0x17) = s_Crypter_counter_is_overflowed__03c2bc4b._23_8_;
          *(undefined8 *)(pcVar6 + 0xf) = uVar7;
        }
      }
      else if (param_8 != (undefined8 *)0x0) {
        pcVar6 = (char *)*param_8;
        sVar9 = strlen(pcVar6);
        pvVar10 = realloc(pcVar6,(long)(int)sVar9 + 0x20);
        *param_8 = pvVar10;
        uVar2 = s_Frame_tag_verification_failed__03c9d1c8._24_8_;
        uVar8 = s_Frame_tag_verification_failed__03c9d1c8._16_8_;
        uVar7 = s_Frame_tag_verification_failed__03c9d1c8._0_8_;
        pcVar6 = (char *)((long)pvVar10 + (long)(int)sVar9);
        *(undefined8 *)(pcVar6 + 8) = s_Frame_tag_verification_failed__03c9d1c8._8_8_;
        *(undefined8 *)pcVar6 = uVar7;
        *(undefined8 *)(pcVar6 + 0x18) = uVar2;
        *(undefined8 *)(pcVar6 + 0x10) = uVar8;
      }
    }
    else if (param_8 != (undefined8 *)0x0) {
      pcVar6 = (char *)FUN_0038c780(0x1a);
      uVar8 = s_Unsupported_message_type__03c890f7._0_8_;
      uVar7 = CONCAT62(s_Unsupported_message_type__03c890f7._10_6_,
                       s_Unsupported_message_type__03c890f7._8_2_);
      *param_8 = pcVar6;
      *(undefined8 *)(pcVar6 + 8) = uVar7;
      *(undefined8 *)pcVar6 = uVar8;
      uVar7 = CONCAT26(s_Unsupported_message_type__03c890f7._16_2_,
                       s_Unsupported_message_type__03c890f7._10_6_);
      *(undefined8 *)(pcVar6 + 0x12) = s_Unsupported_message_type__03c890f7._18_8_;
      *(undefined8 *)(pcVar6 + 10) = uVar7;
    }
  }
  else if (param_8 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_0038c780(0x12);
    uVar8 = s_Bad_frame_length__03c1de87._8_8_;
    uVar7 = s_Bad_frame_length__03c1de87._0_8_;
    *param_8 = pcVar6;
    pcVar6[0x10] = '.';
    pcVar6[0x11] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)pcVar6 = uVar7;
  }
  return 0xd;
}


