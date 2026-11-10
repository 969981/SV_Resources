/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f1b0c; name: FUN_034f1b0c
 */


byte FUN_034f1b0c(long param_1,undefined4 *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_14;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  if ((*(long *)(param_1 + 0x40) == 0) || ((*(byte *)(*(long *)(param_1 + 0x40) + 4) >> 3 & 1) == 0)
     ) {
    local_14 = *(undefined4 *)(PTR_DAT_047e70a8 + 0x74);
    pbVar8 = *(byte **)(param_1 + 0xb0);
    if (pbVar8 != (byte *)0x0) {
      bVar3 = *pbVar8;
      uVar2 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar2 = 1;
      }
      uVar10 = (ulong)uVar2;
      pbVar5 = pbVar8 + ((ulong)(bVar3 + 4) & 0x1fc);
      pbVar9 = pbVar8;
      do {
        pbVar8 = pbVar5;
        pbVar9 = pbVar9 + 1;
        if (*pbVar9 == 0x1d) goto LAB_034f1bac;
        uVar10 = uVar10 - 1;
        pbVar5 = pbVar8 + 4;
      } while (uVar10 != 0);
      pbVar8 = (byte *)0x0;
    }
LAB_034f1bac:
    pbVar9 = (byte *)&local_14;
    if (pbVar8 != (byte *)0x0) {
      pbVar9 = pbVar8;
    }
    *param_2 = *(undefined4 *)pbVar9;
  }
  else {
    lVar6 = *(long *)PTR_DAT_047e6fd8;
    uVar2 = *(uint *)(lVar6 + 0x20);
    uVar11 = 0;
    if (uVar2 != 0) {
      uVar1 = (int)(param_1 + 0x38) + 0x23;
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
          plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
        if ((*plVar7 == param_1 + 0x38) && ((int)plVar7[1] == 0x23)) {
          if (*(int *)((long)plVar7 + 0x4c) == 3) {
            uVar11 = FUN_0348209c();
          }
          else {
            uVar11 = FUN_03482338(lVar6,plVar7,&local_60);
          }
          break;
        }
      }
    }
    *param_2 = uVar11;
  }
  *param_3 = *(byte *)(param_1 + 0x1bc) >> 3 & 1;
  bVar3 = *(byte *)(param_1 + 0x1bc);
  *(byte *)(param_1 + 0x1bc) = bVar3 & 0xef;
  return bVar3 >> 4 & 1;
}


