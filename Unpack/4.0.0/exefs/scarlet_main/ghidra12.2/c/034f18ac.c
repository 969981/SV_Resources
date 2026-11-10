/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f18ac; name: FUN_034f18ac
 */


byte FUN_034f18ac(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_24;
  
  puVar6 = PTR_DAT_047e70a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  lVar2 = param_1 + 0x38;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  if ((*(long *)(param_1 + 0x40) == 0) || ((*(byte *)(*(long *)(param_1 + 0x40) + 4) >> 2 & 1) == 0)
     ) {
    local_24 = *(undefined4 *)(PTR_DAT_047e70a8 + 0x6c);
    pbVar10 = *(byte **)(param_1 + 0xb0);
    if (pbVar10 != (byte *)0x0) {
      bVar4 = *pbVar10;
      uVar3 = (uint)bVar4;
      if (bVar4 < 2) {
        uVar3 = 1;
      }
      uVar12 = (ulong)uVar3;
      pbVar7 = pbVar10 + ((ulong)(bVar4 + 4) & 0x1fc);
      pbVar11 = pbVar10;
      do {
        pbVar10 = pbVar7;
        pbVar11 = pbVar11 + 1;
        if (*pbVar11 == 0x1b) goto LAB_034f1954;
        uVar12 = uVar12 - 1;
        pbVar7 = pbVar10 + 4;
      } while (uVar12 != 0);
      pbVar10 = (byte *)0x0;
    }
LAB_034f1954:
    pbVar11 = (byte *)&local_24;
    if (pbVar10 != (byte *)0x0) {
      pbVar11 = pbVar10;
    }
    *param_2 = *(undefined4 *)pbVar11;
  }
  else {
    lVar8 = *(long *)PTR_DAT_047e6fd8;
    uVar3 = *(uint *)(lVar8 + 0x20);
    uVar13 = 0;
    if (uVar3 != 0) {
      uVar1 = (int)lVar2 + 0x22;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar1 / uVar3;
      }
      for (plVar9 = *(long **)(*(long *)(lVar8 + 0x18) + (ulong)(uVar1 - uVar5 * uVar3) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
        if ((*plVar9 == lVar2) && ((int)plVar9[1] == 0x22)) {
          if (*(int *)((long)plVar9 + 0x4c) == 3) {
            uVar13 = FUN_0348209c();
          }
          else {
            uVar13 = FUN_03482338(lVar8,plVar9,&local_70);
          }
          break;
        }
      }
    }
    *param_2 = uVar13;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  if ((*(long *)(param_1 + 0x40) == 0) || ((*(byte *)(*(long *)(param_1 + 0x40) + 4) >> 4 & 1) == 0)
     ) {
    local_24 = *(undefined4 *)(puVar6 + 0x70);
    pbVar10 = *(byte **)(param_1 + 0xb0);
    if (pbVar10 != (byte *)0x0) {
      bVar4 = *pbVar10;
      uVar3 = (uint)bVar4;
      if (bVar4 < 2) {
        uVar3 = 1;
      }
      uVar12 = (ulong)uVar3;
      pbVar7 = pbVar10 + ((ulong)(bVar4 + 4) & 0x1fc);
      pbVar11 = pbVar10;
      do {
        pbVar10 = pbVar7;
        pbVar11 = pbVar11 + 1;
        if (*pbVar11 == 0x1c) goto LAB_034f1a38;
        uVar12 = uVar12 - 1;
        pbVar7 = pbVar10 + 4;
      } while (uVar12 != 0);
      pbVar10 = (byte *)0x0;
    }
LAB_034f1a38:
    pbVar11 = (byte *)&local_24;
    if (pbVar10 != (byte *)0x0) {
      pbVar11 = pbVar10;
    }
    *param_3 = *(undefined4 *)pbVar11;
  }
  else {
    lVar8 = *(long *)PTR_DAT_047e6fd8;
    uVar3 = *(uint *)(lVar8 + 0x20);
    uVar13 = 0;
    if (uVar3 != 0) {
      uVar1 = (int)lVar2 + 0x24;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar1 / uVar3;
      }
      for (plVar9 = *(long **)(*(long *)(lVar8 + 0x18) + (ulong)(uVar1 - uVar5 * uVar3) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
        if ((*plVar9 == lVar2) && ((int)plVar9[1] == 0x24)) {
          if (*(int *)((long)plVar9 + 0x4c) == 3) {
            uVar13 = FUN_0348209c();
          }
          else {
            uVar13 = FUN_03482338(lVar8,plVar9,&local_70);
          }
          break;
        }
      }
    }
    *param_3 = uVar13;
  }
  bVar4 = *(byte *)(param_1 + 0x1bc);
  *(byte *)(param_1 + 0x1bc) = bVar4 & 0xdf;
  return bVar4 >> 5 & 1;
}


