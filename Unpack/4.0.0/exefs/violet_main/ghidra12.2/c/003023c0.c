/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003023c0; name: FUN_003023c0
 */


undefined8 FUN_003023c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char local_14 [4];
  
  local_14[0] = '\0';
  uVar6 = FUN_003026e0(*(undefined8 *)(param_1 + 0x10),local_14,param_2);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if (local_14[0] == '\0') {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0xd;
  }
  pcVar7 = (char *)FUN_0038c780(0x5a);
  *param_2 = pcVar7;
  uVar2 = s_crypter_counter_is_wrapped__The_c_03c085b2._24_8_;
  uVar1 = s_crypter_counter_is_wrapped__The_c_03c085b2._16_8_;
  uVar6 = s_crypter_counter_is_wrapped__The_c_03c085b2._0_8_;
  *(undefined8 *)(pcVar7 + 8) = s_crypter_counter_is_wrapped__The_c_03c085b2._8_8_;
  *(undefined8 *)pcVar7 = uVar6;
  *(undefined8 *)(pcVar7 + 0x18) = uVar2;
  *(undefined8 *)(pcVar7 + 0x10) = uVar1;
  uVar5 = s_crypter_counter_is_wrapped__The_c_03c085b2._64_8_;
  uVar1 = CONCAT26(s_crypter_counter_is_wrapped__The_c_03c085b2._80_2_,
                   s_crypter_counter_is_wrapped__The_c_03c085b2._74_6_);
  uVar6 = CONCAT62(s_crypter_counter_is_wrapped__The_c_03c085b2._74_6_,
                   s_crypter_counter_is_wrapped__The_c_03c085b2._72_2_);
  *(undefined8 *)(pcVar7 + 0x52) = s_crypter_counter_is_wrapped__The_c_03c085b2._82_8_;
  *(undefined8 *)(pcVar7 + 0x4a) = uVar1;
  uVar4 = s_crypter_counter_is_wrapped__The_c_03c085b2._56_8_;
  uVar3 = s_crypter_counter_is_wrapped__The_c_03c085b2._48_8_;
  uVar2 = s_crypter_counter_is_wrapped__The_c_03c085b2._40_8_;
  uVar1 = s_crypter_counter_is_wrapped__The_c_03c085b2._32_8_;
  *(undefined8 *)(pcVar7 + 0x48) = uVar6;
  *(undefined8 *)(pcVar7 + 0x40) = uVar5;
  *(undefined8 *)(pcVar7 + 0x28) = uVar2;
  *(undefined8 *)(pcVar7 + 0x20) = uVar1;
  *(undefined8 *)(pcVar7 + 0x38) = uVar4;
  *(undefined8 *)(pcVar7 + 0x30) = uVar3;
  return 0xd;
}


