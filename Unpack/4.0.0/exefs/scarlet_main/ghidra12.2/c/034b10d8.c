/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b10d8; name: FUN_034b10d8
 */


void FUN_034b10d8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  float fVar12;
  undefined4 uVar13;
  byte local_18 [24];
  
  do {
    lVar6 = param_1;
    param_1 = *(long *)(lVar6 + 0x98);
  } while (*(long *)(lVar6 + 0x98) != 0 && (*(ulong *)(lVar6 + 0xb8) & 0x20020000ffe) == 0);
  FUN_034b0b6c(lVar6,param_2);
  *(undefined2 *)(param_4 + 5) = *(undefined2 *)(lVar6 + 0xd8);
  if (((*(long *)(lVar6 + 0x40) != 0) && ((*(byte *)(*(long *)(lVar6 + 0x40) + 5) >> 6 & 1) != 0))
     || (uVar7 = (**(code **)(*(long *)(lVar6 + 0x20) + 0x20))((long *)(lVar6 + 0x20),0x2e),
        (uVar7 & 1) != 0)) {
    fVar12 = (float)FUN_034a9a38(lVar6,0x2e,param_2);
    *(ushort *)(param_4 + 5) = *(ushort *)(param_4 + 5) & 0xffbf | (ushort)(0.0 < fVar12) << 6;
  }
  local_18[4] = 0;
  local_18[5] = 0;
  local_18[6] = 0;
  local_18[7] = 0;
  pbVar10 = *(byte **)(lVar6 + 0xb0);
  if (pbVar10 != (byte *)0x0) {
    bVar3 = *pbVar10;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar7 = (ulong)uVar2;
    pbVar5 = pbVar10 + ((ulong)(bVar3 + 4) & 0x1fc);
    pbVar11 = pbVar10;
    do {
      pbVar10 = pbVar5;
      pbVar11 = pbVar11 + 1;
      if (*pbVar11 == 0x46) goto LAB_034b11c4;
      uVar7 = uVar7 - 1;
      pbVar5 = pbVar10 + 4;
    } while (uVar7 != 0);
    pbVar10 = (byte *)0x0;
  }
LAB_034b11c4:
  pbVar11 = local_18 + 4;
  if (pbVar10 != (byte *)0x0) {
    pbVar11 = pbVar10;
  }
  param_4[1] = *(undefined4 *)pbVar11;
  if ((*(long *)(lVar6 + 0x40) == 0) || (-1 < *(char *)(*(long *)(lVar6 + 0x40) + 2))) {
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 200;
    local_18[3] = 0x42;
    pbVar10 = *(byte **)(lVar6 + 0xb0);
    if (pbVar10 != (byte *)0x0) {
      bVar3 = *pbVar10;
      uVar2 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar2 = 1;
      }
      uVar7 = (ulong)uVar2;
      pbVar5 = pbVar10 + ((ulong)(bVar3 + 4) & 0x1fc);
      pbVar11 = pbVar10;
      do {
        pbVar10 = pbVar5;
        pbVar11 = pbVar11 + 1;
        if (*pbVar11 == 0x47) goto LAB_034b1234;
        uVar7 = uVar7 - 1;
        pbVar5 = pbVar10 + 4;
      } while (uVar7 != 0);
      pbVar10 = (byte *)0x0;
    }
LAB_034b1234:
    pbVar11 = local_18;
    if (pbVar10 != (byte *)0x0) {
      pbVar11 = pbVar10;
    }
    *param_4 = *(undefined4 *)pbVar11;
  }
  else {
    lVar8 = *(long *)PTR_DAT_047e6fd8;
    uVar2 = *(uint *)(lVar8 + 0x20);
    uVar13 = 0;
    if (uVar2 != 0) {
      uVar1 = (int)(lVar6 + 0x38) + 0x17;
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (plVar9 = *(long **)(*(long *)(lVar8 + 0x18) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
        if ((*plVar9 == lVar6 + 0x38) && ((int)plVar9[1] == 0x17)) {
          if (*(int *)((long)plVar9 + 0x4c) == 3) {
            uVar13 = FUN_0348209c();
          }
          else {
            uVar13 = FUN_03482338(lVar8,plVar9,param_2);
          }
          break;
        }
      }
    }
    *param_4 = uVar13;
  }
  return;
}


