/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a505d8; name: FUN_00a505d8
 */


undefined8 FUN_00a505d8(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_2 < 0x402) {
    lVar6 = 0;
    do {
      if (((uint)*(ushort *)((long)&DAT_03d2feca + lVar6) == (param_2 & 0xffff)) &&
         ((uint)*(ushort *)((long)&DAT_03d2fecc + lVar6) == (param_3 & 0xffff))) {
        puVar4 = (ushort *)(param_1 + (long)(int)param_2 * 0x18 + 0x2c);
        uVar2 = *puVar4;
        uVar7 = 0;
        if ((uVar2 & 0xfffe) != 0x298 && uVar2 != 0x2e8) {
          uVar7 = param_3;
        }
        uVar5 = FUN_00a65d24(puVar4,param_4,uVar7);
        return uVar5;
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xb0);
    uVar7 = (uint)*(byte *)(param_1 + (long)(int)param_2 * 0x18 + 0x2e);
    if (uVar7 != 0) {
      uVar8 = 0;
      puVar4 = (ushort *)(param_1 + (long)(int)param_2 * 0x18 + 0x2c);
      do {
        lVar6 = 0;
        do {
          if ((((uint)*(ushort *)((long)&DAT_03d2feca + lVar6) == (param_2 & 0xffff)) &&
              ((uint)*(ushort *)((long)&DAT_03d2fecc + lVar6) == (uVar8 & 0xffff))) ||
             (((uint)*(ushort *)((long)&DAT_03d2fece + lVar6) == (param_2 & 0xffff) &&
              ((uint)*(ushort *)((long)&DAT_03d2fed0 + lVar6) == (uVar8 & 0xffff)))))
          goto LAB_00a506c8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0xb0);
        uVar2 = *puVar4;
        uVar1 = 0;
        if ((uVar2 & 0xfffe) != 0x298 && uVar2 != 0x2e8) {
          uVar1 = uVar8;
        }
        uVar3 = FUN_00a65d24(puVar4,param_4,uVar1);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
LAB_00a506c8:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
  }
  return 0;
}


