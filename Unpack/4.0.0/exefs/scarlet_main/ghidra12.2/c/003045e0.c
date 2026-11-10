/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003045e0; name: FUN_003045e0
 */


undefined8
FUN_003045e0(long *param_1,uint *param_2,long param_3,long param_4,ulong param_5,undefined8 param_6,
            long param_7,long *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  size_t sVar11;
  void *pvVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  char local_54 [4];
  
  if (param_1 == (long *)0x0) {
    if (param_8 != (long *)0x0) {
      pcVar15 = (char *)FUN_0038c780(0x28);
      *param_8 = (long)pcVar15;
      uVar22 = s_Input_iovec_record_protocol_is_n_03be0342._24_8_;
      uVar8 = s_Input_iovec_record_protocol_is_n_03be0342._16_8_;
      uVar10 = s_Input_iovec_record_protocol_is_n_03be0342._8_8_;
      uVar9 = s_Input_iovec_record_protocol_is_n_03be0342._0_8_;
      *(undefined8 *)(pcVar15 + 0x20) = s_Input_iovec_record_protocol_is_n_03be0342._32_8_;
      *(undefined8 *)(pcVar15 + 8) = uVar10;
      *(undefined8 *)pcVar15 = uVar9;
      *(undefined8 *)(pcVar15 + 0x18) = uVar22;
      *(undefined8 *)(pcVar15 + 0x10) = uVar8;
      return 3;
    }
LAB_0030490c:
    uVar9 = 3;
  }
  else {
    if ((char)param_1[3] == '\0') {
      if (*(char *)((long)param_1 + 0x19) == '\0') {
        if (param_5 == 0) {
          uVar21 = 0;
        }
        else {
          if (param_5 < 4) {
            uVar13 = 0;
            uVar21 = 0;
          }
          else {
            uVar13 = param_5 & 0xfffffffffffffffc;
            lVar18 = 0;
            lVar20 = 0;
            lVar19 = 0;
            lVar16 = 0;
            plVar14 = (long *)(param_4 + 0x28);
            uVar21 = uVar13;
            do {
              lVar18 = plVar14[-4] + lVar18;
              plVar1 = plVar14 + 2;
              lVar20 = plVar14[-2] + lVar20;
              lVar19 = *plVar14 + lVar19;
              plVar14 = plVar14 + 8;
              lVar16 = *plVar1 + lVar16;
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            uVar21 = lVar16 + lVar19 + lVar20 + lVar18;
            if (uVar13 == param_5) goto LAB_00304788;
          }
          uVar17 = ~uVar13;
          if ((param_5 & 1) != 0) {
            lVar18 = uVar13 * 0x10;
            uVar13 = uVar13 | 1;
            uVar21 = *(long *)(param_4 + lVar18 + 8) + uVar21;
          }
          if (uVar17 + param_5 != 0) {
            lVar18 = param_5 - uVar13;
            plVar14 = (long *)(param_4 + uVar13 * 0x10 + 0x18);
            do {
              lVar18 = lVar18 + -2;
              uVar21 = *plVar14 + plVar14[-2] + uVar21;
              plVar14 = plVar14 + 4;
            } while (lVar18 != 0);
          }
        }
LAB_00304788:
        if (uVar21 < (ulong)param_1[2]) {
          if (param_8 != (long *)0x0) {
            puVar7 = (undefined8 *)FUN_0038c780(0x3a);
            uVar10 = s_Protected_data_length_should_be_m_03c4046c._50_8_;
            uVar9 = s_Protected_data_length_should_be_m_03c4046c._42_8_;
            pcVar15 = "Protected data length should be more than the tag length.";
            *param_8 = (long)puVar7;
            uVar8 = 3;
            *(undefined8 *)((long)puVar7 + 0x32) = uVar10;
            *(undefined8 *)((long)puVar7 + 0x2a) = uVar9;
LAB_00304634:
            uVar22 = *(undefined8 *)(pcVar15 + 0x10);
            uVar10 = *(undefined8 *)(pcVar15 + 0x28);
            uVar9 = *(undefined8 *)(pcVar15 + 0x20);
            puVar7[3] = *(undefined8 *)(pcVar15 + 0x18);
            puVar7[2] = uVar22;
            puVar7[5] = uVar10;
            puVar7[4] = uVar9;
            uVar9 = *(undefined8 *)pcVar15;
            puVar7[1] = *(undefined8 *)(pcVar15 + 8);
            *puVar7 = uVar9;
            return uVar8;
          }
        }
        else if (param_2 == (uint *)0x0) {
          if (param_8 != (long *)0x0) {
            pcVar15 = (char *)FUN_0038c780(0x13);
            uVar10 = s_Header_is_nullptr__03c4dc59._8_8_;
            uVar9 = s_Header_is_nullptr__03c4dc59._0_8_;
            *param_8 = (long)pcVar15;
            pcVar15[0xf] = 't';
            pcVar15[0x10] = 'r';
            pcVar15[0x11] = '.';
            pcVar15[0x12] = '\0';
            *(undefined8 *)(pcVar15 + 8) = uVar10;
            *(undefined8 *)pcVar15 = uVar9;
            return 3;
          }
        }
        else if (param_3 == 8) {
          if (param_7 == uVar21 - param_1[2]) {
            if (uVar21 + 4 != (ulong)*param_2) {
              if (param_8 != (long *)0x0) {
                pcVar15 = (char *)FUN_0038c780(0x12);
                uVar10 = s_Bad_frame_length__03c1de87._8_8_;
                uVar9 = s_Bad_frame_length__03c1de87._0_8_;
                *param_8 = (long)pcVar15;
                pcVar15[0x10] = '.';
                pcVar15[0x11] = '\0';
                *(undefined8 *)(pcVar15 + 8) = uVar10;
                *(undefined8 *)pcVar15 = uVar9;
              }
              return 0xd;
            }
            if (param_2[1] != 6) {
              if (param_8 == (long *)0x0) {
                return 0xd;
              }
              pcVar15 = (char *)FUN_0038c780(0x1a);
              uVar10 = s_Unsupported_message_type__03c890f7._0_8_;
              uVar9 = CONCAT62(s_Unsupported_message_type__03c890f7._10_6_,
                               s_Unsupported_message_type__03c890f7._8_2_);
              *param_8 = (long)pcVar15;
              *(undefined8 *)(pcVar15 + 8) = uVar9;
              *(undefined8 *)pcVar15 = uVar10;
              uVar9 = CONCAT26(s_Unsupported_message_type__03c890f7._16_2_,
                               s_Unsupported_message_type__03c890f7._10_6_);
              *(undefined8 *)(pcVar15 + 0x12) = s_Unsupported_message_type__03c890f7._18_8_;
              *(undefined8 *)(pcVar15 + 10) = uVar9;
              return 0xd;
            }
            lVar18 = param_1[1];
            uVar9 = FUN_003027e0(*param_1);
            uVar10 = FUN_003027d0(*param_1);
            iVar6 = FUN_003029f0(lVar18,uVar9,uVar10,0,0,param_4,param_5);
            if (iVar6 != 0) {
              if (param_8 == (long *)0x0) {
                return 0xd;
              }
              pcVar15 = (char *)*param_8;
              sVar11 = strlen(pcVar15);
              pvVar12 = realloc(pcVar15,(long)(int)sVar11 + 0x1a);
              uVar10 = s_Frame_decryption_failed__03be6708._0_8_;
              uVar9 = CONCAT62(s_Frame_decryption_failed__03be6708._10_6_,
                               s_Frame_decryption_failed__03be6708._8_2_);
              pcVar15 = (char *)((long)pvVar12 + (long)(int)sVar11);
              *param_8 = (long)pvVar12;
              *(undefined8 *)(pcVar15 + 8) = uVar9;
              *(undefined8 *)pcVar15 = uVar10;
              uVar9 = CONCAT26(s_Frame_decryption_failed__03be6708._16_2_,
                               s_Frame_decryption_failed__03be6708._10_6_);
              *(undefined8 *)(pcVar15 + 0x12) = s_Frame_decryption_failed__03be6708._18_8_;
              *(undefined8 *)(pcVar15 + 10) = uVar9;
              return 0xd;
            }
            if (uVar21 != param_1[2]) {
              if (param_8 == (long *)0x0) {
                return 0xd;
              }
              pcVar15 = (char *)FUN_0038c780(0x44);
              *param_8 = (long)pcVar15;
              uVar5 = s_Bytes_written_expects_to_be_prot_03c24db0._56_8_;
              uVar4 = s_Bytes_written_expects_to_be_prot_03c24db0._48_8_;
              uVar3 = s_Bytes_written_expects_to_be_prot_03c24db0._40_8_;
              uVar2 = s_Bytes_written_expects_to_be_prot_03c24db0._32_8_;
              uVar22 = s_Bytes_written_expects_to_be_prot_03c24db0._24_8_;
              uVar8 = s_Bytes_written_expects_to_be_prot_03c24db0._16_8_;
              uVar10 = s_Bytes_written_expects_to_be_prot_03c24db0._8_8_;
              uVar9 = s_Bytes_written_expects_to_be_prot_03c24db0._0_8_;
              pcVar15[0x40] = 't';
              pcVar15[0x41] = 'h';
              pcVar15[0x42] = '.';
              pcVar15[0x43] = '\0';
              *(undefined8 *)(pcVar15 + 0x28) = uVar3;
              *(undefined8 *)(pcVar15 + 0x20) = uVar2;
              *(undefined8 *)(pcVar15 + 0x38) = uVar5;
              *(undefined8 *)(pcVar15 + 0x30) = uVar4;
              *(undefined8 *)(pcVar15 + 8) = uVar10;
              *(undefined8 *)pcVar15 = uVar9;
              *(undefined8 *)(pcVar15 + 0x18) = uVar22;
              *(undefined8 *)(pcVar15 + 0x10) = uVar8;
              return 0xd;
            }
            if (*param_1 != 0) {
              local_54[0] = '\0';
              uVar9 = FUN_003026e0(*param_1,local_54,param_8);
              if ((int)uVar9 != 0) {
                return uVar9;
              }
              if (local_54[0] == '\0') {
                return 0;
              }
              if (param_8 == (long *)0x0) {
                return 0xd;
              }
              pcVar15 = (char *)FUN_0038c780(0x1f);
              uVar10 = s_Crypter_counter_is_overflowed__03c2bc4b._0_8_;
              uVar9 = CONCAT17(s_Crypter_counter_is_overflowed__03c2bc4b[0xf],
                               s_Crypter_counter_is_overflowed__03c2bc4b._8_7_);
              *param_8 = (long)pcVar15;
              *(undefined8 *)(pcVar15 + 8) = uVar9;
              *(undefined8 *)pcVar15 = uVar10;
              uVar9 = CONCAT71(s_Crypter_counter_is_overflowed__03c2bc4b._16_7_,
                               s_Crypter_counter_is_overflowed__03c2bc4b[0xf]);
              *(undefined8 *)(pcVar15 + 0x17) = s_Crypter_counter_is_overflowed__03c2bc4b._23_8_;
              *(undefined8 *)(pcVar15 + 0xf) = uVar9;
              return 0xd;
            }
            goto LAB_003046b0;
          }
          if (param_8 != (long *)0x0) {
            pcVar15 = (char *)FUN_0038c780(0x24);
            *param_8 = (long)pcVar15;
            uVar22 = s_Unprotected_data_size_is_incorre_03c6e8cc._24_8_;
            uVar8 = s_Unprotected_data_size_is_incorre_03c6e8cc._16_8_;
            uVar10 = s_Unprotected_data_size_is_incorre_03c6e8cc._8_8_;
            uVar9 = s_Unprotected_data_size_is_incorre_03c6e8cc._0_8_;
            pcVar15[0x20] = 'c';
            pcVar15[0x21] = 't';
            pcVar15[0x22] = '.';
            pcVar15[0x23] = '\0';
            *(undefined8 *)(pcVar15 + 8) = uVar10;
            *(undefined8 *)pcVar15 = uVar9;
            *(undefined8 *)(pcVar15 + 0x18) = uVar22;
            *(undefined8 *)(pcVar15 + 0x10) = uVar8;
          }
        }
        else if (param_8 != (long *)0x0) {
          pcVar15 = (char *)FUN_0038c780(0x1c);
          uVar10 = s_Header_length_is_incorrect__03c6e8b0._0_8_;
          uVar9 = CONCAT44(s_Header_length_is_incorrect__03c6e8b0._12_4_,
                           s_Header_length_is_incorrect__03c6e8b0._8_4_);
          *param_8 = (long)pcVar15;
          *(undefined8 *)(pcVar15 + 8) = uVar9;
          *(undefined8 *)pcVar15 = uVar10;
          uVar9 = CONCAT44(s_Header_length_is_incorrect__03c6e8b0._16_4_,
                           s_Header_length_is_incorrect__03c6e8b0._12_4_);
          *(undefined8 *)(pcVar15 + 0x14) = s_Header_length_is_incorrect__03c6e8b0._20_8_;
          *(undefined8 *)(pcVar15 + 0xc) = uVar9;
          return 3;
        }
        goto LAB_0030490c;
      }
      if (param_8 != (long *)0x0) {
        pcVar15 = (char *)FUN_0038c780(0x36);
        uVar8 = s_Unprotect_operations_are_not_all_03c2bc15._32_8_;
        uVar9 = CONCAT26(s_Unprotect_operations_are_not_all_03c2bc15._46_2_,
                         s_Unprotect_operations_are_not_all_03c2bc15._40_6_);
        uVar10 = CONCAT62(s_Unprotect_operations_are_not_all_03c2bc15._48_6_,
                          s_Unprotect_operations_are_not_all_03c2bc15._46_2_);
        *param_8 = (long)pcVar15;
        *(undefined8 *)(pcVar15 + 0x2e) = uVar10;
        *(undefined8 *)(pcVar15 + 0x28) = uVar9;
        *(undefined8 *)(pcVar15 + 0x20) = uVar8;
        uVar8 = s_Unprotect_operations_are_not_all_03c2bc15._24_8_;
        uVar10 = s_Unprotect_operations_are_not_all_03c2bc15._16_8_;
        uVar9 = s_Unprotect_operations_are_not_all_03c2bc15._0_8_;
        *(undefined8 *)(pcVar15 + 8) = s_Unprotect_operations_are_not_all_03c2bc15._8_8_;
        *(undefined8 *)pcVar15 = uVar9;
        *(undefined8 *)(pcVar15 + 0x18) = uVar8;
        *(undefined8 *)(pcVar15 + 0x10) = uVar10;
      }
    }
    else if (param_8 != (long *)0x0) {
      puVar7 = (undefined8 *)FUN_0038c780(0x3e);
      uVar10 = s_Privacy_integrity_operations_are_03c329a4._54_8_;
      uVar9 = s_Privacy_integrity_operations_are_03c329a4._46_8_;
      pcVar15 = "Privacy-integrity operations are not allowed for this object.";
      *param_8 = (long)puVar7;
      uVar8 = 9;
      *(undefined8 *)((long)puVar7 + 0x36) = uVar10;
      *(undefined8 *)((long)puVar7 + 0x2e) = uVar9;
      goto LAB_00304634;
    }
LAB_003046b0:
    uVar9 = 9;
  }
  return uVar9;
}


