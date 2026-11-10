/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00303ad0; name: FUN_00303ad0
 */


undefined8
FUN_00303ad0(long *param_1,long param_2,ulong param_3,undefined1 *param_4,long param_5,long param_6,
            long param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char local_44 [4];
  
  if (param_1 == (long *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar8 = (char *)FUN_0038c780(0x28);
    *param_8 = pcVar8;
    uVar3 = s_Input_iovec_record_protocol_is_n_03be0342._24_8_;
    uVar2 = s_Input_iovec_record_protocol_is_n_03be0342._16_8_;
    uVar7 = s_Input_iovec_record_protocol_is_n_03be0342._8_8_;
    uVar6 = s_Input_iovec_record_protocol_is_n_03be0342._0_8_;
    *(undefined8 *)(pcVar8 + 0x20) = s_Input_iovec_record_protocol_is_n_03be0342._32_8_;
    *(undefined8 *)(pcVar8 + 8) = uVar7;
    *(undefined8 *)pcVar8 = uVar6;
    *(undefined8 *)(pcVar8 + 0x18) = uVar3;
    *(undefined8 *)(pcVar8 + 0x10) = uVar2;
    return 3;
  }
  if ((char)param_1[3] == '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar8 = (char *)FUN_0038c780(0x3b);
    uVar3 = s_Integrity_only_operations_are_no_03c546af._51_8_;
    uVar6 = CONCAT35(s_Integrity_only_operations_are_no_03c546af._48_3_,
                     s_Integrity_only_operations_are_no_03c546af._43_5_);
    *param_8 = pcVar8;
    uVar2 = s_Integrity_only_operations_are_no_03c546af._8_8_;
    uVar7 = s_Integrity_only_operations_are_no_03c546af._0_8_;
    *(undefined8 *)(pcVar8 + 0x33) = uVar3;
    *(undefined8 *)(pcVar8 + 0x2b) = uVar6;
    uVar4 = s_Integrity_only_operations_are_no_03c546af._32_8_;
    uVar3 = s_Integrity_only_operations_are_no_03c546af._16_8_;
    uVar6 = CONCAT53(s_Integrity_only_operations_are_no_03c546af._43_5_,
                     s_Integrity_only_operations_are_no_03c546af._40_3_);
    *(undefined8 *)(pcVar8 + 0x18) = s_Integrity_only_operations_are_no_03c546af._24_8_;
    *(undefined8 *)(pcVar8 + 0x10) = uVar3;
    *(undefined8 *)(pcVar8 + 0x28) = uVar6;
    *(undefined8 *)(pcVar8 + 0x20) = uVar4;
    *(undefined8 *)(pcVar8 + 8) = uVar2;
    *(undefined8 *)pcVar8 = uVar7;
    return 9;
  }
  if (*(char *)((long)param_1 + 0x19) == '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar8 = (char *)FUN_0038c780(0x34);
    uVar5 = s_Protect_operations_are_not_allow_03bf3d6c._40_8_;
    uVar4 = s_Protect_operations_are_not_allow_03bf3d6c._32_8_;
    uVar3 = s_Protect_operations_are_not_allow_03bf3d6c._24_8_;
    uVar2 = s_Protect_operations_are_not_allow_03bf3d6c._16_8_;
    uVar7 = s_Protect_operations_are_not_allow_03bf3d6c._8_8_;
    uVar6 = s_Protect_operations_are_not_allow_03bf3d6c._0_8_;
    *param_8 = pcVar8;
    *(undefined8 *)(pcVar8 + 0x28) = uVar5;
    *(undefined8 *)(pcVar8 + 0x20) = uVar4;
    *(undefined8 *)(pcVar8 + 8) = uVar7;
    *(undefined8 *)pcVar8 = uVar6;
    *(undefined8 *)(pcVar8 + 0x18) = uVar3;
    *(undefined8 *)(pcVar8 + 0x10) = uVar2;
    pcVar8[0x30] = 'c';
    pcVar8[0x31] = 't';
    pcVar8[0x32] = '.';
    pcVar8[0x33] = '\0';
    return 9;
  }
  if (param_4 == (undefined1 *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar8 = (char *)FUN_0038c780(0x13);
    uVar7 = s_Header_is_nullptr__03c4dc59._8_8_;
    uVar6 = s_Header_is_nullptr__03c4dc59._0_8_;
    *param_8 = pcVar8;
    builtin_strncpy(pcVar8 + 0xf,"tr.",4);
  }
  else {
    if (param_5 != 8) {
      if (param_8 == (undefined8 *)0x0) {
        return 3;
      }
      pcVar8 = (char *)FUN_0038c780(0x1c);
      uVar7 = s_Header_length_is_incorrect__03c6e8b0._0_8_;
      uVar6 = CONCAT44(s_Header_length_is_incorrect__03c6e8b0._12_4_,
                       s_Header_length_is_incorrect__03c6e8b0._8_4_);
      *param_8 = pcVar8;
      *(undefined8 *)(pcVar8 + 8) = uVar6;
      *(undefined8 *)pcVar8 = uVar7;
      uVar6 = CONCAT44(s_Header_length_is_incorrect__03c6e8b0._16_4_,
                       s_Header_length_is_incorrect__03c6e8b0._12_4_);
      *(undefined8 *)(pcVar8 + 0x14) = s_Header_length_is_incorrect__03c6e8b0._20_8_;
      *(undefined8 *)(pcVar8 + 0xc) = uVar6;
      return 3;
    }
    if (param_6 != 0) {
      if (param_7 != param_1[2]) {
        if (param_8 == (undefined8 *)0x0) {
          return 3;
        }
        pcVar8 = (char *)FUN_0038c780(0x19);
        uVar7 = s_Tag_length_is_incorrect__03c54706._0_8_;
        uVar6 = CONCAT71(s_Tag_length_is_incorrect__03c54706._9_7_,
                         s_Tag_length_is_incorrect__03c54706[8]);
        *param_8 = pcVar8;
        *(undefined8 *)(pcVar8 + 8) = uVar6;
        *(undefined8 *)pcVar8 = uVar7;
        uVar6 = CONCAT17(s_Tag_length_is_incorrect__03c54706[0x10],
                         s_Tag_length_is_incorrect__03c54706._9_7_);
        *(undefined8 *)(pcVar8 + 0x11) = s_Tag_length_is_incorrect__03c54706._17_8_;
        *(undefined8 *)(pcVar8 + 9) = uVar6;
        return 3;
      }
      if (param_3 == 0) {
        iVar11 = 0;
      }
      else {
        if (param_3 < 4) {
          uVar9 = 0;
          lVar12 = 0;
        }
        else {
          uVar9 = param_3 & 0xfffffffffffffffc;
          lVar15 = 0;
          lVar16 = 0;
          lVar13 = 0;
          lVar12 = 0;
          plVar10 = (long *)(param_2 + 0x28);
          uVar14 = uVar9;
          do {
            lVar15 = plVar10[-4] + lVar15;
            plVar1 = plVar10 + 2;
            lVar16 = plVar10[-2] + lVar16;
            lVar13 = *plVar10 + lVar13;
            plVar10 = plVar10 + 8;
            lVar12 = *plVar1 + lVar12;
            uVar14 = uVar14 - 4;
          } while (uVar14 != 0);
          lVar12 = lVar12 + lVar13 + lVar16 + lVar15;
          iVar11 = (int)lVar12;
          if (uVar9 == param_3) goto LAB_00303d4c;
        }
        uVar14 = ~uVar9;
        if ((param_3 & 1) != 0) {
          lVar15 = uVar9 * 0x10;
          uVar9 = uVar9 | 1;
          lVar12 = *(long *)(param_2 + lVar15 + 8) + lVar12;
        }
        iVar11 = (int)lVar12;
        if (uVar14 + param_3 != 0) {
          lVar15 = param_3 - uVar9;
          plVar10 = (long *)(param_2 + uVar9 * 0x10 + 0x18);
          do {
            lVar15 = lVar15 + -2;
            lVar12 = *plVar10 + plVar10[-2] + lVar12;
            iVar11 = (int)lVar12;
            plVar10 = plVar10 + 4;
          } while (lVar15 != 0);
        }
      }
LAB_00303d4c:
      iVar11 = (int)param_7 + iVar11 + 4;
      param_4[3] = (char)((uint)iVar11 >> 0x18);
      param_4[2] = (char)((uint)iVar11 >> 0x10);
      *param_4 = (char)iVar11;
      param_4[1] = (char)((uint)iVar11 >> 8);
      *(undefined4 *)(param_4 + 4) = 6;
      lVar15 = param_1[1];
      uVar6 = FUN_003027e0(*param_1);
      uVar7 = FUN_003027d0(*param_1);
      uVar6 = FUN_003028d0(lVar15,uVar6,uVar7,param_2,param_3,0,0);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (param_1[2] == 0) {
        if (*param_1 == 0) {
          return 9;
        }
        local_44[0] = '\0';
        uVar6 = FUN_003026e0(*param_1,local_44,param_8);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (local_44[0] == '\0') {
          return 0;
        }
        if (param_8 != (undefined8 *)0x0) {
          pcVar8 = (char *)FUN_0038c780(0x1f);
          uVar7 = s_Crypter_counter_is_overflowed__03c2bc4b._0_8_;
          uVar6 = CONCAT17(s_Crypter_counter_is_overflowed__03c2bc4b[0xf],
                           s_Crypter_counter_is_overflowed__03c2bc4b._8_7_);
          *param_8 = pcVar8;
          *(undefined8 *)(pcVar8 + 8) = uVar6;
          *(undefined8 *)pcVar8 = uVar7;
          uVar6 = CONCAT71(s_Crypter_counter_is_overflowed__03c2bc4b._16_7_,
                           s_Crypter_counter_is_overflowed__03c2bc4b[0xf]);
          *(undefined8 *)(pcVar8 + 0x17) = s_Crypter_counter_is_overflowed__03c2bc4b._23_8_;
          *(undefined8 *)(pcVar8 + 0xf) = uVar6;
        }
      }
      else if (param_8 != (undefined8 *)0x0) {
        pcVar8 = (char *)FUN_0038c780(0x34);
        uVar5 = s_Bytes_written_expects_to_be_the_s_03c753d9._40_8_;
        uVar4 = s_Bytes_written_expects_to_be_the_s_03c753d9._32_8_;
        uVar3 = s_Bytes_written_expects_to_be_the_s_03c753d9._24_8_;
        uVar2 = s_Bytes_written_expects_to_be_the_s_03c753d9._16_8_;
        uVar7 = s_Bytes_written_expects_to_be_the_s_03c753d9._8_8_;
        uVar6 = s_Bytes_written_expects_to_be_the_s_03c753d9._0_8_;
        *param_8 = pcVar8;
        *(undefined8 *)(pcVar8 + 0x28) = uVar5;
        *(undefined8 *)(pcVar8 + 0x20) = uVar4;
        *(undefined8 *)(pcVar8 + 8) = uVar7;
        *(undefined8 *)pcVar8 = uVar6;
        *(undefined8 *)(pcVar8 + 0x18) = uVar3;
        *(undefined8 *)(pcVar8 + 0x10) = uVar2;
        pcVar8[0x30] = 't';
        pcVar8[0x31] = 'h';
        pcVar8[0x32] = '.';
        pcVar8[0x33] = '\0';
      }
      return 0xd;
    }
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar8 = (char *)FUN_0038c780(0x10);
    uVar7 = s_Tag_is_nullptr__03c9d20b._8_8_;
    uVar6 = s_Tag_is_nullptr__03c9d20b._0_8_;
    *param_8 = pcVar8;
  }
  *(undefined8 *)(pcVar8 + 8) = uVar7;
  *(undefined8 *)pcVar8 = uVar6;
  return 3;
}


