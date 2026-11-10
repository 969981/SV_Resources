/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00302300; name: FUN_00302300
 */


undefined8 FUN_00302300(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_0038c780(0x22);
      *param_4 = pcVar5;
      uVar4 = s_alts_crypter_instance_is_nullptr_03c168d0._24_8_;
      uVar3 = s_alts_crypter_instance_is_nullptr_03c168d0._16_8_;
      uVar2 = s_alts_crypter_instance_is_nullptr_03c168d0._8_8_;
      uVar1 = s_alts_crypter_instance_is_nullptr_03c168d0._0_8_;
      pcVar5[0x20] = '.';
      pcVar5[0x21] = '\0';
      *(undefined8 *)(pcVar5 + 8) = uVar2;
      *(undefined8 *)pcVar5 = uVar1;
      *(undefined8 *)(pcVar5 + 0x18) = uVar4;
      *(undefined8 *)(pcVar5 + 0x10) = uVar3;
    }
  }
  else if (param_2 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_0038c780(0x11);
      uVar2 = s_data_is_nullptr__03ca3d1f._8_8_;
      uVar1 = s_data_is_nullptr__03ca3d1f._0_8_;
      *param_4 = pcVar5;
      pcVar5[0x10] = '\0';
      *(undefined8 *)(pcVar5 + 8) = uVar2;
      *(undefined8 *)pcVar5 = uVar1;
      return 3;
    }
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_0038c780(0x18);
      uVar3 = s_output_size_is_nullptr__03c8fd16._16_8_;
      uVar2 = s_output_size_is_nullptr__03c8fd16._8_8_;
      uVar1 = s_output_size_is_nullptr__03c8fd16._0_8_;
      *param_4 = pcVar5;
      *(undefined8 *)(pcVar5 + 0x10) = uVar3;
      *(undefined8 *)(pcVar5 + 8) = uVar2;
      *(undefined8 *)pcVar5 = uVar1;
      return 3;
    }
  }
  return 3;
}


