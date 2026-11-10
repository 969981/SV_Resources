/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b09cc4; name: FUN_00b09cc4
 */


undefined8 FUN_00b09cc4(long param_1,long *param_2,ulong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long local_298;
  long lStack_290;
  undefined1 auStack_288 [528];
  undefined1 auStack_78 [4];
  long local_74;
  long local_6c;
  
  if (*(char *)(param_1 + 0xae01) == '\0') {
    puVar1 = (ushort *)(param_1 + 0x4d38);
    if (*puVar1 != 0) {
      uVar6 = 0;
      plVar5 = (long *)(param_1 + 0x638);
      do {
        (**(code **)(*plVar5 + 0x18))(&uStack_2b0,plVar5);
        if (CONCAT44(uStack_2a8,uStack_2b0._4_4_) == *param_2 &&
            CONCAT44(uStack_2a0,local_2a4) == param_2[1]) {
          nn::bluetooth::GattCharacteristic::SetValue(plVar5,param_3);
          uVar2 = *puVar1;
          break;
        }
        uVar2 = *puVar1;
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 0x47;
      } while (uVar6 < uVar2);
      if (uVar2 != 0) {
        uVar6 = 0;
        plVar5 = (long *)(param_1 + 0x638);
        do {
          (**(code **)(*plVar5 + 0x18))(auStack_78,plVar5);
          if (local_74 == *param_2 && local_6c == param_2[1]) goto LAB_00b09de8;
          uVar6 = uVar6 + 1;
          plVar5 = plVar5 + 0x47;
        } while (uVar6 < *puVar1);
      }
    }
    plVar5 = (long *)(param_1 + 0x638);
    *(undefined1 *)(param_1 + 0xae01) = 1;
LAB_00b09de8:
    local_298 = plVar5[3];
    lStack_290 = plVar5[4];
    uStack_2a0 = (undefined4)plVar5[2];
    uStack_29c = (undefined4)((ulong)plVar5[2] >> 0x20);
    uStack_2b0 = PTR_vtable_047da990 + 0x10;
    uStack_2a8 = (undefined4)plVar5[1];
    local_2a4 = (undefined4)((ulong)plVar5[1] >> 0x20);
    memcpy(auStack_288,plVar5 + 5,0x210);
    uVar3 = nn::bluetooth::WriteGattCharacteristic((GattCharacteristic *)&uStack_2b0);
    if (uVar3 == 0) {
      uVar4 = 1;
      *(undefined1 *)(param_1 + 0xae00) = 1;
    }
    else if ((((uVar3 & 0x3ffe00) == 0x400) && ((uVar3 & 0x3ffa00) != 0x41200)) &&
            ((uVar3 & 0x1ff) == 0x71)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0xae01) = 1;
    }
    nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)&uStack_2b0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


