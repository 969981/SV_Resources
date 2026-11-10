/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174fcac; name: FUN_0174fcac
 */


uint FUN_0174fcac(long *param_1,char param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((char)param_1[0x12] != '\0') {
    if (param_2 == '\0') {
      uVar5 = 0;
      do {
        lVar2 = (**(code **)(*param_1 + 0x68))(param_1,uVar5);
        if (lVar2 != 0) {
          lVar3 = *(long *)(lVar2 + 0x70);
          if ((*(byte *)(*(long *)(lVar3 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar1 = FUN_00cf44f4();
            if (sVar1 == 0) goto LAB_0174fda8;
            lVar3 = *(long *)(lVar2 + 0x70);
          }
          uVar4 = FUN_00cf4cfc(lVar3);
          if ((((uVar4 & 1) == 0) &&
              ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) &&
             (uVar4 = FUN_0174fe20(lVar2), (uVar4 & 1) == 0)) {
            return uVar5;
          }
        }
LAB_0174fda8:
        uVar5 = uVar5 + 1;
        if (*(byte *)(param_1 + 0x12) <= uVar5) {
          return 6;
        }
      } while( true );
    }
    if (param_2 == '\x01') {
      uVar5 = 0;
      do {
        lVar2 = (**(code **)(*param_1 + 0x68))(param_1,uVar5);
        if (lVar2 != 0) {
          lVar3 = *(long *)(lVar2 + 0x70);
          if ((*(byte *)(*(long *)(lVar3 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar1 = FUN_00cf44f4();
            if (sVar1 == 0) goto LAB_0174fd30;
            lVar3 = *(long *)(lVar2 + 0x70);
          }
          uVar4 = FUN_00cf4cfc(lVar3);
          if (((uVar4 & 1) == 0) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
            return uVar5;
          }
        }
LAB_0174fd30:
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)(param_1 + 0x12));
    }
    else {
      uVar5 = 0;
      do {
        lVar2 = (**(code **)(*param_1 + 0x68))(param_1,uVar5);
        if ((lVar2 != 0) &&
           ((*(byte *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
          FUN_00cf44f4();
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)(param_1 + 0x12));
    }
  }
  return 6;
}


