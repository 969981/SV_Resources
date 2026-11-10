/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003026e0; name: FUN_003026e0
 */


undefined4 FUN_003026e0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x1c);
      uVar2 = s_crypter_counter_is_nullptr__03bf3d50._0_8_;
      uVar1 = CONCAT44(s_crypter_counter_is_nullptr__03bf3d50._12_4_,
                       s_crypter_counter_is_nullptr__03bf3d50._8_4_);
      *param_3 = pcVar4;
      *(undefined8 *)(pcVar4 + 8) = uVar1;
      *(undefined8 *)pcVar4 = uVar2;
      uVar1 = CONCAT44(s_crypter_counter_is_nullptr__03bf3d50._16_4_,
                       s_crypter_counter_is_nullptr__03bf3d50._12_4_);
      *(undefined8 *)(pcVar4 + 0x14) = s_crypter_counter_is_nullptr__03bf3d50._20_8_;
      *(undefined8 *)(pcVar4 + 0xc) = uVar1;
      return 3;
    }
  }
  else {
    if (param_2 != 0) {
      if (*(long *)(param_1 + 8) == 0) {
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x10);
        uVar5 = 0;
        do {
          *(char *)(lVar7 + uVar5) = *(char *)(lVar7 + uVar5) + '\x01';
          lVar7 = *(long *)(param_1 + 0x10);
          if (*(char *)(lVar7 + uVar5) != '\0') {
            uVar8 = *(ulong *)(param_1 + 8);
            break;
          }
          uVar8 = *(ulong *)(param_1 + 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar8);
      }
      uVar6 = 9;
      if (uVar5 != uVar8) {
        uVar6 = 0;
      }
      *(bool *)param_2 = uVar5 == uVar8;
      return uVar6;
    }
    if (param_3 != (undefined8 *)0x0) {
      pcVar4 = (char *)FUN_0038c780(0x18);
      uVar3 = s_is_overflow_is_nullptr__03c395e4._16_8_;
      uVar2 = s_is_overflow_is_nullptr__03c395e4._8_8_;
      uVar1 = s_is_overflow_is_nullptr__03c395e4._0_8_;
      *param_3 = pcVar4;
      *(undefined8 *)(pcVar4 + 0x10) = uVar3;
      *(undefined8 *)(pcVar4 + 8) = uVar2;
      *(undefined8 *)pcVar4 = uVar1;
      return 3;
    }
  }
  return 3;
}


