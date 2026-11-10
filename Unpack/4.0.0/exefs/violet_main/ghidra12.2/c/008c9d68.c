/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c9d68; name: FUN_008c9d68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008c9d68(undefined8 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_70;
  undefined8 *puStack_68;
  
  lVar10 = param_1[4];
  lVar13 = *(long *)(*(long *)(lVar10 + 0x98) + (long)param_4 * 8);
  if ((lVar13 == 0) || (*(char *)(lVar13 + 9) == '\0')) {
    FUN_008d43e0("The Resource is not found in VfxSystem. ResourceId : %d.\n",param_4);
    return 0;
  }
  *param_1 = *(undefined8 *)(lVar13 + 0x10);
  if (param_2 < *(int *)(lVar13 + 0x4c)) {
    lVar11 = *(long *)(*(long *)(lVar13 + 0x60) + (long)param_2 * 8);
    if (lVar11 == 0) {
      lVar12 = *(long *)(lVar13 + 0x58);
      lVar11 = lVar12 + (long)param_2 * 0x38;
      param_1[0x47] = lVar11;
      if (lVar12 == 0) goto LAB_008c9dfc;
    }
    else {
      param_1[0x47] = lVar11;
    }
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 != 0) {
      do {
        uVar8 = FUN_008cbccc(lVar11,lVar13);
        if ((uVar8 & 1) == 0) {
LAB_008c9e90:
          FUN_008d43e0("EmitterResource Setup Failed.\n");
          return 0;
        }
        if (0 < *(int *)(lVar11 + 0x88)) {
          lVar10 = 0;
          do {
            uVar8 = FUN_008cbccc(*(undefined8 *)(lVar11 + 0x90 + lVar10 * 8),lVar13);
            if ((uVar8 & 1) == 0) goto LAB_008c9e90;
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar11 + 0x88));
        }
        lVar11 = *(long *)(lVar11 + 0x110);
      } while (lVar11 != 0);
      lVar10 = param_1[4];
    }
    *(undefined4 *)(param_1 + 1) = 0x1010000;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    *(undefined2 *)((long)param_1 + 0x264) = 0x100;
    *(undefined2 *)((long)param_1 + 0xf) = 0x8000;
    uVar3 = _UNK_03caa988;
    uVar2 = _DAT_03caa980;
    *(int *)(param_1 + 5) = param_2;
    *(undefined4 *)((long)param_1 + 0x2c) = param_3;
    param_1[0x3c] = param_7;
    *(int *)(param_1 + 6) = param_4;
    *(undefined4 *)((long)param_1 + 0x14) = param_5;
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2d) = 0;
    *(undefined1 *)((long)param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    param_1[0x38] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x35) = 0;
    param_1[10] = 0x3f8000003f800000;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x3c) = 0;
    *(undefined1 *)((long)param_1 + 0xe) = 0;
    *(undefined4 *)((long)param_1 + 0x25c) = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x4c) = 0x3f800000;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x29] = uVar3;
    param_1[0x28] = uVar2;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x1d] = uVar3;
    param_1[0x1c] = uVar2;
    param_1[0x1f] = uVar3;
    param_1[0x1e] = uVar2;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x48] = *(undefined8 *)(lVar10 + 0x1178);
    param_1[0x49] = *(undefined8 *)(lVar10 + 0x1180);
    uVar7 = _UNK_03cabe68;
    uVar6 = _DAT_03cabe60;
    uVar5 = DAT_03cab628;
    uVar4 = DAT_03cab620;
    uVar1 = _UNK_03caa5b8;
    uVar9 = _DAT_03caa5b0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = param_6;
    param_1[0x4a] = 0;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    param_1[0xf] = uVar7;
    param_1[0xe] = uVar6;
    param_1[0x11] = uVar1;
    param_1[0x10] = uVar9;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar4;
    param_1[0x17] = uVar7;
    param_1[0x16] = uVar6;
    param_1[0x19] = uVar1;
    param_1[0x18] = uVar9;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    FUN_008ca00c(param_1);
    auVar14 = NEON_fmov(0x3f800000,4);
    uVar9 = 1;
    param_1[0x21] = auVar14._8_8_;
    param_1[0x20] = auVar14._0_8_;
    param_1[0x3d] = 0x3f8000003f800000;
    *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
    *(undefined4 *)(param_1 + 3) = 1;
    param_1[0x25] = uVar3;
    param_1[0x24] = uVar2;
    param_1[0x27] = uVar3;
    param_1[0x26] = uVar2;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    if ((code *)param_1[0x48] != (code *)0x0) {
      local_70 = param_1[4];
      puStack_68 = param_1;
      (*(code *)param_1[0x48])(&local_70);
      uVar9 = 1;
    }
  }
  else {
    param_1[0x47] = 0;
LAB_008c9dfc:
    FUN_008d43e0("The EmitterSet is not found in this resource. EmitterSet Id : %d. ResourceId : %d\n"
                 ,param_2,param_4);
    uVar9 = 0;
  }
  return uVar9;
}


