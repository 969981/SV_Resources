/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00304280; name: FUN_00304280
 */


undefined8
FUN_00304280(long *param_1,long param_2,ulong param_3,undefined1 *param_4,long param_5,long *param_6
            ,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long local_60;
  char local_54 [4];
  
  if (param_1 == (long *)0x0) {
    if (param_6 == (long *)0x0) {
      return 3;
    }
    pcVar11 = (char *)FUN_0038c780(0x28);
    *param_6 = (long)pcVar11;
    uVar17 = s_Input_iovec_record_protocol_is_n_03be0342._24_8_;
    uVar6 = s_Input_iovec_record_protocol_is_n_03be0342._16_8_;
    uVar8 = s_Input_iovec_record_protocol_is_n_03be0342._8_8_;
    uVar7 = s_Input_iovec_record_protocol_is_n_03be0342._0_8_;
    *(undefined8 *)(pcVar11 + 0x20) = s_Input_iovec_record_protocol_is_n_03be0342._32_8_;
    *(undefined8 *)(pcVar11 + 8) = uVar8;
    *(undefined8 *)pcVar11 = uVar7;
    *(undefined8 *)(pcVar11 + 0x18) = uVar17;
    *(undefined8 *)(pcVar11 + 0x10) = uVar6;
    return 3;
  }
  if ((char)param_1[3] != '\0') {
    if (param_6 == (long *)0x0) {
      return 9;
    }
    puVar5 = (undefined8 *)FUN_0038c780(0x3e);
    uVar8 = s_Privacy_integrity_operations_are_03c329a4._54_8_;
    uVar7 = s_Privacy_integrity_operations_are_03c329a4._46_8_;
    pcVar11 = "Privacy-integrity operations are not allowed for this object.";
    *param_6 = (long)puVar5;
    uVar6 = 9;
    *(undefined8 *)((long)puVar5 + 0x36) = uVar8;
    *(undefined8 *)((long)puVar5 + 0x2e) = uVar7;
    goto LAB_003042d4;
  }
  if (*(char *)((long)param_1 + 0x19) == '\0') {
    if (param_6 == (long *)0x0) {
      return 9;
    }
    pcVar11 = (char *)FUN_0038c780(0x34);
    uVar4 = s_Protect_operations_are_not_allow_03bf3d6c._40_8_;
    uVar3 = s_Protect_operations_are_not_allow_03bf3d6c._32_8_;
    uVar17 = s_Protect_operations_are_not_allow_03bf3d6c._24_8_;
    uVar6 = s_Protect_operations_are_not_allow_03bf3d6c._16_8_;
    uVar8 = s_Protect_operations_are_not_allow_03bf3d6c._8_8_;
    uVar7 = s_Protect_operations_are_not_allow_03bf3d6c._0_8_;
    *param_6 = (long)pcVar11;
    *(undefined8 *)(pcVar11 + 0x28) = uVar4;
    *(undefined8 *)(pcVar11 + 0x20) = uVar3;
    *(undefined8 *)(pcVar11 + 8) = uVar8;
    *(undefined8 *)pcVar11 = uVar7;
    *(undefined8 *)(pcVar11 + 0x18) = uVar17;
    *(undefined8 *)(pcVar11 + 0x10) = uVar6;
    pcVar11[0x30] = 'c';
    pcVar11[0x31] = 't';
    pcVar11[0x32] = '.';
    pcVar11[0x33] = '\0';
    return 9;
  }
  if (param_3 == 0) {
    lVar16 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar9 = 0;
      lVar16 = 0;
    }
    else {
      uVar9 = param_3 & 0xfffffffffffffffc;
      lVar13 = 0;
      lVar15 = 0;
      lVar14 = 0;
      lVar16 = 0;
      plVar10 = (long *)(param_2 + 0x28);
      uVar12 = uVar9;
      do {
        lVar13 = plVar10[-4] + lVar13;
        plVar1 = plVar10 + 2;
        lVar15 = plVar10[-2] + lVar15;
        lVar14 = *plVar10 + lVar14;
        plVar10 = plVar10 + 8;
        lVar16 = *plVar1 + lVar16;
        uVar12 = uVar12 - 4;
      } while (uVar12 != 0);
      lVar16 = lVar16 + lVar14 + lVar15 + lVar13;
      if (uVar9 == param_3) goto LAB_00304424;
    }
    uVar12 = ~uVar9;
    if ((param_3 & 1) != 0) {
      lVar13 = uVar9 * 0x10;
      uVar9 = uVar9 | 1;
      lVar16 = *(long *)(param_2 + lVar13 + 8) + lVar16;
    }
    if (uVar12 + param_3 != 0) {
      lVar13 = param_3 - uVar9;
      plVar10 = (long *)(param_2 + uVar9 * 0x10 + 0x18);
      do {
        lVar13 = lVar13 + -2;
        lVar16 = *plVar10 + plVar10[-2] + lVar16;
        plVar10 = plVar10 + 4;
      } while (lVar13 != 0);
    }
  }
LAB_00304424:
  if (param_4 == (undefined1 *)0x0) {
    if (param_6 != (long *)0x0) {
      pcVar11 = (char *)FUN_0038c780(0x1c);
      uVar8 = s_Protected_frame_is_nullptr__03c546ea._0_8_;
      uVar7 = CONCAT44(s_Protected_frame_is_nullptr__03c546ea._12_4_,
                       s_Protected_frame_is_nullptr__03c546ea._8_4_);
      *param_6 = (long)pcVar11;
      *(undefined8 *)(pcVar11 + 8) = uVar7;
      *(undefined8 *)pcVar11 = uVar8;
      uVar7 = CONCAT44(s_Protected_frame_is_nullptr__03c546ea._16_4_,
                       s_Protected_frame_is_nullptr__03c546ea._12_4_);
      *(undefined8 *)(pcVar11 + 0x14) = s_Protected_frame_is_nullptr__03c546ea._20_8_;
      *(undefined8 *)(pcVar11 + 0xc) = uVar7;
      return 3;
    }
  }
  else {
    if (param_5 == param_1[2] + lVar16 + 8) {
      iVar2 = (int)(param_1[2] + lVar16) + 4;
      *(undefined4 *)(param_4 + 4) = 6;
      param_4[3] = (char)((uint)iVar2 >> 0x18);
      *param_4 = (char)iVar2;
      param_4[2] = (char)((uint)iVar2 >> 0x10);
      param_4[1] = (char)((uint)iVar2 >> 8);
      lVar13 = param_1[1];
      lVar15 = param_1[2];
      local_60 = 0;
      uVar7 = FUN_003027e0(*param_1);
      uVar8 = FUN_003027d0(*param_1);
      uVar7 = FUN_003028d0(lVar13,uVar7,uVar8,0,0,param_2,param_3,param_8,param_4 + 8,
                           lVar15 + lVar16,&local_60,param_6);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (local_60 == param_1[2] + lVar16) {
        if (*param_1 == 0) {
          return 9;
        }
        local_54[0] = '\0';
        uVar7 = FUN_003026e0(*param_1,local_54,param_6);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if (local_54[0] == '\0') {
          return 0;
        }
        if (param_6 == (long *)0x0) {
          return 0xd;
        }
        pcVar11 = (char *)FUN_0038c780(0x1f);
        uVar8 = s_Crypter_counter_is_overflowed__03c2bc4b._0_8_;
        uVar7 = CONCAT17(s_Crypter_counter_is_overflowed__03c2bc4b[0xf],
                         s_Crypter_counter_is_overflowed__03c2bc4b._8_7_);
        *param_6 = (long)pcVar11;
        *(undefined8 *)(pcVar11 + 8) = uVar7;
        *(undefined8 *)pcVar11 = uVar8;
        uVar7 = CONCAT71(s_Crypter_counter_is_overflowed__03c2bc4b._16_7_,
                         s_Crypter_counter_is_overflowed__03c2bc4b[0xf]);
        *(undefined8 *)(pcVar11 + 0x17) = s_Crypter_counter_is_overflowed__03c2bc4b._23_8_;
        *(undefined8 *)(pcVar11 + 0xf) = uVar7;
        return 0xd;
      }
      if (param_6 == (long *)0x0) {
        return 0xd;
      }
      puVar5 = (undefined8 *)FUN_0038c780(0x39);
      uVar8 = s_Bytes_written_expects_to_be_data_03be036a._49_8_;
      uVar7 = s_Bytes_written_expects_to_be_data_03be036a._41_8_;
      pcVar11 = "Bytes written expects to be data length plus tag length.";
      *param_6 = (long)puVar5;
      uVar6 = 0xd;
      *(undefined8 *)((long)puVar5 + 0x31) = uVar8;
      *(undefined8 *)((long)puVar5 + 0x29) = uVar7;
LAB_003042d4:
      uVar17 = *(undefined8 *)(pcVar11 + 0x10);
      uVar8 = *(undefined8 *)(pcVar11 + 0x28);
      uVar7 = *(undefined8 *)(pcVar11 + 0x20);
      puVar5[3] = *(undefined8 *)(pcVar11 + 0x18);
      puVar5[2] = uVar17;
      puVar5[5] = uVar8;
      puVar5[4] = uVar7;
      uVar7 = *(undefined8 *)pcVar11;
      puVar5[1] = *(undefined8 *)(pcVar11 + 8);
      *puVar5 = uVar7;
      return uVar6;
    }
    if (param_6 != (long *)0x0) {
      pcVar11 = (char *)FUN_0038c780(0x23);
      *param_6 = (long)pcVar11;
      uVar17 = s_Protected_frame_size_is_incorrec_03c9d1e8._24_8_;
      uVar6 = s_Protected_frame_size_is_incorrec_03c9d1e8._16_8_;
      uVar8 = s_Protected_frame_size_is_incorrec_03c9d1e8._8_8_;
      uVar7 = s_Protected_frame_size_is_incorrec_03c9d1e8._0_8_;
      pcVar11[0x1f] = 'c';
      pcVar11[0x20] = 't';
      pcVar11[0x21] = '.';
      pcVar11[0x22] = '\0';
      *(undefined8 *)(pcVar11 + 8) = uVar8;
      *(undefined8 *)pcVar11 = uVar7;
      *(undefined8 *)(pcVar11 + 0x18) = uVar17;
      *(undefined8 *)(pcVar11 + 0x10) = uVar6;
    }
  }
  return 3;
}


