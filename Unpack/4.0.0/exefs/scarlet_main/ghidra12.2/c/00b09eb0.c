/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b09eb0; name: FUN_00b09eb0
 */


undefined8 FUN_00b09eb0(long param_1,long *param_2,byte param_3)

{
  ushort *puVar1;
  uint uVar2;
  GattCharacteristic *pGVar3;
  long *plVar4;
  ulong uVar5;
  long local_4fc;
  long local_4f4;
  long local_4e4;
  long local_4dc;
  undefined2 local_4d0 [284];
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 local_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  long local_280;
  long local_278;
  undefined1 auStack_270 [528];
  
  if (*(char *)(param_1 + 0xae01) == '\0') {
    puVar1 = (ushort *)(param_1 + 0x4d38);
    memset((void *)(param_1 + 0xae04),0,0x202);
    if (*puVar1 != 0) {
      uVar5 = 0;
      pGVar3 = (GattCharacteristic *)(param_1 + 0x638);
      do {
        (**(code **)(*(long *)pGVar3 + 0x18))(&uStack_298,pGVar3);
        if (CONCAT44(uStack_290,uStack_298._4_4_) == *param_2 &&
            CONCAT44(uStack_288,local_28c) == param_2[1]) goto LAB_00b09f70;
        uVar5 = uVar5 + 1;
        pGVar3 = pGVar3 + 0x238;
      } while (uVar5 < *puVar1);
    }
    pGVar3 = (GattCharacteristic *)(param_1 + 0x638);
    *(undefined1 *)(param_1 + 0xae01) = 1;
LAB_00b09f70:
    uVar2 = nn::bluetooth::EnableGattCharacteristicNotification(pGVar3,(bool)(param_3 & 1));
    if (uVar2 == 0) {
      if (*puVar1 != 0) {
        uVar5 = 0;
        plVar4 = (long *)(param_1 + 0x638);
        do {
          (**(code **)(*plVar4 + 0x18))(&uStack_298,plVar4);
          if (CONCAT44(uStack_290,uStack_298._4_4_) == *param_2 &&
              CONCAT44(uStack_288,local_28c) == param_2[1]) goto LAB_00b09fec;
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 0x47;
        } while (uVar5 < *puVar1);
      }
      plVar4 = (long *)(param_1 + 0x638);
      *(undefined1 *)(param_1 + 0xae01) = 1;
LAB_00b09fec:
      local_280 = plVar4[3];
      local_278 = plVar4[4];
      uStack_288 = (undefined4)plVar4[2];
      uStack_284 = (undefined4)((ulong)plVar4[2] >> 0x20);
      uStack_298 = PTR_vtable_047da990 + 0x10;
      uStack_290 = (undefined4)plVar4[1];
      local_28c = (undefined4)((ulong)plVar4[1] >> 0x20);
      memcpy(auStack_270,plVar4 + 5,0x210);
      if (*(ushort *)(param_1 + 0x9340) != 0) {
        uVar5 = 0;
        pGVar3 = (GattCharacteristic *)(param_1 + 0x4d40);
        do {
          nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)local_4d0);
          nn::bluetooth::GattDescriptor::GetCharacteristic(pGVar3);
          nn::bluetooth::GattAttribute::GetUuid();
          nn::bluetooth::GattAttribute::GetUuid();
          nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)local_4d0);
          if (local_4e4 == local_4fc && local_4dc == local_4f4) goto LAB_00b0a0b4;
          uVar5 = uVar5 + 1;
          pGVar3 = pGVar3 + 0x230;
        } while (uVar5 < *(ushort *)(param_1 + 0x9340));
      }
      *(undefined1 *)(param_1 + 0xae01) = 1;
      pGVar3 = (GattCharacteristic *)(param_1 + 0x4d40);
LAB_00b0a0b4:
      nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)&uStack_298);
      local_280 = *(long *)(pGVar3 + 0x18);
      local_278 = *(long *)(pGVar3 + 0x20);
      uStack_288 = (undefined4)*(undefined8 *)(pGVar3 + 0x10);
      uStack_284 = (undefined4)((ulong)*(undefined8 *)(pGVar3 + 0x10) >> 0x20);
      uStack_298 = PTR_vtable_047da998 + 0x10;
      uStack_290 = (undefined4)*(undefined8 *)(pGVar3 + 8);
      local_28c = (undefined4)((ulong)*(undefined8 *)(pGVar3 + 8) >> 0x20);
      memcpy(auStack_270,pGVar3 + 0x28,0x208);
      local_4d0[0] = 2;
      nn::bluetooth::GattDescriptor::SetValue(&uStack_298,(ulong)local_4d0);
      uVar2 = nn::bluetooth::WriteGattDescriptor((GattDescriptor *)&uStack_298);
      nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)&uStack_298);
      if (uVar2 == 0) {
        *(undefined1 *)(param_1 + 0xae00) = 1;
        return 1;
      }
    }
    if ((((uVar2 & 0x3ffe00) != 0x400) || ((uVar2 & 0x3ffa00) == 0x41200)) ||
       ((uVar2 & 0x1ff) != 0x71)) {
      *(undefined1 *)(param_1 + 0xae01) = 1;
      return 0;
    }
  }
  return 0;
}


