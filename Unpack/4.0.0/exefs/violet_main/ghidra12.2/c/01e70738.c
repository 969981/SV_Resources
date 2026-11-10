/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70738; name: FUN_01e70738
 */


ulong FUN_01e70738(long *param_1,long *param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  byte local_38 [8];
  
  local_38[4] = 0xff;
  local_38[5] = 0xff;
  local_38[0] = 0xff;
  local_38[1] = 0xff;
  local_38[2] = 0xff;
  local_38[3] = 0xff;
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar9 = 0;
    do {
      sVar2 = FUN_01e70644(lVar6,uVar9);
      uVar3 = FUN_01e70670(*param_1,uVar9);
      plVar7 = (long *)*param_2;
      if ((char)plVar7[0x12] != '\0') {
        uVar10 = 0;
        do {
          lVar6 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar10);
          if ((lVar6 != 0) &&
             (uVar8 = FUN_00cf4cfc(*(undefined8 *)(lVar6 + 0x70)), (uVar8 & 1) == 0)) {
            if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
              sVar4 = FUN_00cf44f4();
              if ((sVar2 == sVar4) &&
                 (uVar5 = FUN_00cf41a8(*(undefined8 *)(lVar6 + 0x70)), (uVar3 & 0xff) == uVar5)) {
                FUN_01e70958(local_38,uVar10);
              }
            }
          }
          plVar7 = (long *)*param_2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(byte *)(plVar7 + 0x12));
      }
      lVar6 = *param_1;
      uVar10 = uVar9 & 0xffff;
      uVar9 = uVar9 + 1;
    } while (uVar10 < 8);
    FUN_01e70628();
    bVar1 = FUN_01e70610(*param_1);
    plVar7 = (long *)*param_2;
    if ((char)plVar7[0x12] != '\0') {
      uVar9 = 0;
      do {
        lVar6 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar9);
        if (((lVar6 != 0) && (uVar8 = FUN_00cf4cfc(*(undefined8 *)(lVar6 + 0x70)), (uVar8 & 1) == 0)
            ) && ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
          FUN_01e70958(local_38,uVar9);
        }
        plVar7 = (long *)*param_2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(byte *)(plVar7 + 0x12));
    }
    if (bVar1 < 6) {
      memset(local_38 + bVar1,0xff,(ulong)(byte)(5 - bVar1) + 1);
    }
  }
  return (ulong)local_38[0] << 8 | (ulong)local_38[1] << 0x10 | (ulong)local_38[2] << 0x18 |
         (ulong)local_38[3] << 0x20 | (ulong)local_38[4] << 0x28 | (ulong)local_38[5] << 0x30 |
         ((ulong)(local_38[1] >> 7) ^ 1) + ((ulong)(local_38[0] >> 7) ^ 1) +
         ((ulong)(local_38[2] >> 7) ^ 1) + ((ulong)(local_38[3] >> 7) ^ 1) +
         ((ulong)(local_38[4] >> 7) ^ 1) + ((ulong)(local_38[5] >> 7) ^ 1);
}


