/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003025c0; name: FUN_003025c0
 */


undefined8 FUN_003025c0(ulong param_1,ulong param_2,ulong param_3,long *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x19);
      uVar1 = s_counter_size_is_invalid__03c8fd2e._0_8_;
      uVar3 = CONCAT71(s_counter_size_is_invalid__03c8fd2e._9_7_,
                       s_counter_size_is_invalid__03c8fd2e[8]);
      *param_5 = pcVar4;
      *(undefined8 *)(pcVar4 + 8) = uVar3;
      *(undefined8 *)pcVar4 = uVar1;
      uVar3 = CONCAT17(s_counter_size_is_invalid__03c8fd2e[0x10],
                       s_counter_size_is_invalid__03c8fd2e._9_7_);
      *(undefined8 *)(pcVar4 + 0x11) = s_counter_size_is_invalid__03c8fd2e._17_8_;
      *(undefined8 *)(pcVar4 + 9) = uVar3;
    }
  }
  else if ((param_3 == 0) || (param_2 <= param_3)) {
    if (param_5 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x1a);
      uVar1 = s_overflow_size_is_invalid__03bfacc8._0_8_;
      uVar3 = CONCAT62(s_overflow_size_is_invalid__03bfacc8._10_6_,
                       s_overflow_size_is_invalid__03bfacc8._8_2_);
      *param_5 = pcVar4;
      *(undefined8 *)(pcVar4 + 8) = uVar3;
      *(undefined8 *)pcVar4 = uVar1;
      uVar3 = CONCAT26(s_overflow_size_is_invalid__03bfacc8._16_2_,
                       s_overflow_size_is_invalid__03bfacc8._10_6_);
      *(undefined8 *)(pcVar4 + 0x12) = s_overflow_size_is_invalid__03bfacc8._18_8_;
      *(undefined8 *)(pcVar4 + 10) = uVar3;
    }
  }
  else {
    if (param_4 != (long *)0x0) {
      puVar2 = (ulong *)FUN_0038c780(0x18);
      *param_4 = (long)puVar2;
      *puVar2 = param_2;
      puVar2[1] = param_3;
      uVar3 = FUN_0038c7b0(param_2);
      *(undefined8 *)(*param_4 + 0x10) = uVar3;
      if ((param_1 & 1) != 0) {
        *(undefined1 *)(param_2 + *(long *)(*param_4 + 0x10) + -1) = 0x80;
      }
      return 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x1c);
      uVar1 = s_crypter_counter_is_nullptr__03bf3d50._0_8_;
      uVar3 = CONCAT44(s_crypter_counter_is_nullptr__03bf3d50._12_4_,
                       s_crypter_counter_is_nullptr__03bf3d50._8_4_);
      *param_5 = pcVar4;
      *(undefined8 *)(pcVar4 + 8) = uVar3;
      *(undefined8 *)pcVar4 = uVar1;
      uVar3 = CONCAT44(s_crypter_counter_is_nullptr__03bf3d50._16_4_,
                       s_crypter_counter_is_nullptr__03bf3d50._12_4_);
      *(undefined8 *)(pcVar4 + 0x14) = s_crypter_counter_is_nullptr__03bf3d50._20_8_;
      *(undefined8 *)(pcVar4 + 0xc) = uVar3;
    }
  }
  return 3;
}


