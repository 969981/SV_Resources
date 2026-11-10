/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cb2ac; name: FUN_008cb2ac
 */


undefined8 FUN_008cb2ac(long param_1,short *param_2,long param_3,undefined4 *param_4,uint param_5)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  
  if (((int)param_5 < 3) && (lVar8 = *(long *)(param_1 + (ulong)param_5 * 8 + 0x340), lVar8 != 0)) {
    uVar13 = *(undefined8 *)(lVar8 + 8);
    if (*(long *)(param_1 + 0x78) == 0) {
      uVar17 = 0;
      uVar6 = 0;
    }
    else {
      iVar3 = FUN_008f1cbc(uVar13,0,0,"sysPosAttr");
      bVar1 = iVar3 != -1;
      if (bVar1) {
        FUN_008f04cc(param_3);
        *(char **)(param_3 + 0x10) = "sysPosAttr";
        uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),0);
        *(undefined2 *)(param_3 + 4) = uVar2;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),0);
        *(undefined4 *)(param_3 + 0xc) = uVar4;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),0);
        *(undefined4 *)(param_3 + 8) = uVar4;
      }
      uVar17 = (ulong)bVar1;
      iVar3 = FUN_008f1cbc(uVar13,0,0,"sysNormalAttr");
      if (iVar3 != -1) {
        lVar8 = param_3 + uVar17 * 0x28;
        FUN_008f04cc(lVar8);
        *(char **)(lVar8 + 0x10) = "sysNormalAttr";
        uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),1);
        *(undefined2 *)(lVar8 + 4) = uVar2;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),1);
        *(undefined4 *)(lVar8 + 0xc) = uVar4;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),1);
        uVar17 = (ulong)(bVar1 + 1);
        *(undefined4 *)(lVar8 + 8) = uVar4;
      }
      iVar3 = FUN_008f1cbc(uVar13,0,0,"sysTangentAttr");
      if (iVar3 != -1) {
        lVar8 = param_3 + uVar17 * 0x28;
        FUN_008f04cc(lVar8);
        *(char **)(lVar8 + 0x10) = "sysTangentAttr";
        uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),2);
        *(undefined2 *)(lVar8 + 4) = uVar2;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),2);
        *(undefined4 *)(lVar8 + 0xc) = uVar4;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),2);
        uVar17 = (ulong)((int)uVar17 + 1);
        *(undefined4 *)(lVar8 + 8) = uVar4;
      }
      iVar3 = FUN_008f1cbc(uVar13,0,0,"sysVertexColor0Attr");
      if (iVar3 != -1) {
        lVar8 = param_3 + uVar17 * 0x28;
        FUN_008f04cc(lVar8);
        *(char **)(lVar8 + 0x10) = "sysVertexColor0Attr";
        uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),3);
        *(undefined2 *)(lVar8 + 4) = uVar2;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),3);
        *(undefined4 *)(lVar8 + 0xc) = uVar4;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),3);
        uVar17 = (ulong)((int)uVar17 + 1);
        *(undefined4 *)(lVar8 + 8) = uVar4;
      }
      iVar3 = FUN_008f1cbc(uVar13,0,0,"sysTexCoordAttr");
      if (iVar3 != -1) {
        lVar8 = param_3 + uVar17 * 0x28;
        FUN_008f04cc(lVar8);
        *(char **)(lVar8 + 0x10) = "sysTexCoordAttr";
        uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),4);
        *(undefined2 *)(lVar8 + 4) = uVar2;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),4);
        *(undefined4 *)(lVar8 + 0xc) = uVar4;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),4);
        uVar17 = (ulong)((int)uVar17 + 1);
        *(undefined4 *)(lVar8 + 8) = uVar4;
      }
      uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
      uVar6 = uVar6 & 0xffffffff;
    }
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysLocalPosAttr");
    iVar11 = (int)uVar6;
    if (iVar3 == -1) {
      iVar16 = -1;
      iVar5 = iVar11;
    }
    else {
      lVar8 = param_3 + uVar17 * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)uVar6;
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysLocalPosAttr";
      iVar16 = iVar11;
      iVar5 = iVar11 + 1;
    }
    bVar1 = iVar3 != -1;
    uVar19 = (ulong)bVar1;
    *(int *)(param_1 + 0x3a4) = iVar16;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysLocalVecAttr");
    iVar16 = (int)uVar17;
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      uVar18 = (uint)bVar1;
      lVar8 = param_3 + (ulong)(uVar18 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)(uVar18 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysLocalVecAttr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3a8) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysLocalDiffAttr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysLocalDiffAttr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3ac) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysScaleAttr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysScaleAttr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3b0) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysRandomAttr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysRandomAttr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3b4) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysInitRotateAttr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysInitRotateAttr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3b8) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysColor0Attr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysColor0Attr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3bc) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysColor1Attr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysColor1Attr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3c0) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysEmtMat0Attr");
    if (iVar3 == -1) {
      iVar3 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysEmtMat0Attr";
      iVar3 = iVar5;
      iVar5 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x3c4) = iVar3;
    iVar3 = FUN_008f1cbc(uVar13,0,0,"sysEmtMat1Attr");
    if (iVar3 == -1) {
      iVar7 = -1;
      iVar3 = iVar5;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar5;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysEmtMat1Attr";
      iVar3 = iVar5 + 1;
      iVar7 = iVar5;
    }
    *(int *)(param_1 + 0x3c8) = iVar7;
    iVar5 = FUN_008f1cbc(uVar13,0,0,"sysEmtMat2Attr");
    if (iVar5 == -1) {
      iVar5 = -1;
    }
    else {
      lVar8 = param_3 + (ulong)(uint)((int)uVar19 + iVar16) * 0x28;
      FUN_008f04cc(lVar8);
      *(short *)(lVar8 + 4) = (short)iVar3;
      uVar19 = (ulong)((int)uVar19 + 1);
      *(undefined8 *)(lVar8 + 8) = 0x190500000000;
      *(char **)(lVar8 + 0x10) = "sysEmtMat2Attr";
      iVar5 = iVar3;
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x3cc) = iVar5;
    if ((int)uVar19 == 0 && iVar16 == 0) {
      iVar5 = FUN_008f1cbc(uVar13,0,0,"sysEmitterPluginAttr0");
      lVar8 = (long)iVar3;
      FUN_008f04cc(param_3 + (long)iVar3 * 0x28);
      if (iVar5 != -1) {
        lVar9 = param_3 + lVar8 * 0x28;
        iVar3 = iVar3 + 1;
        lVar8 = (long)iVar3;
        *(undefined2 *)(lVar9 + 4) = 0;
        *(undefined8 *)(lVar9 + 8) = 0x190500000000;
        *(char **)(lVar9 + 0x10) = "sysEmitterPluginAttr0";
      }
      uVar10 = (ushort)(iVar5 != -1);
      iVar5 = FUN_008f1cbc(uVar13,0,0,"sysEmitterPluginAttr1");
      FUN_008f04cc(param_3 + lVar8 * 0x28);
      if (iVar5 != -1) {
        lVar9 = param_3 + lVar8 * 0x28;
        iVar3 = iVar3 + 1;
        *(undefined2 *)(lVar9 + 4) = 0;
        uVar10 = uVar10 + 1;
        lVar8 = (long)iVar3;
        *(undefined8 *)(lVar9 + 8) = 0x190500000010;
        *(char **)(lVar9 + 0x10) = "sysEmitterPluginAttr1";
      }
      iVar5 = FUN_008f1cbc(uVar13,0,0,"sysEmitterPluginAttr2");
      FUN_008f04cc(param_3 + lVar8 * 0x28);
      if (iVar5 != -1) {
        lVar9 = param_3 + lVar8 * 0x28;
        iVar3 = iVar3 + 1;
        *(undefined2 *)(lVar9 + 4) = 0;
        uVar10 = uVar10 + 1;
        lVar8 = (long)iVar3;
        *(undefined8 *)(lVar9 + 8) = 0x190500000020;
        *(char **)(lVar9 + 0x10) = "sysEmitterPluginAttr2";
      }
      iVar5 = FUN_008f1cbc(uVar13,0,0,"sysEmitterPluginAttr3");
      FUN_008f04cc(param_3 + lVar8 * 0x28);
      if (iVar5 != -1) {
        lVar9 = param_3 + lVar8 * 0x28;
        *(undefined2 *)(lVar9 + 4) = 0;
        uVar10 = uVar10 + 1;
        lVar8 = (long)(iVar3 + 1);
        *(undefined8 *)(lVar9 + 8) = 0x190500000030;
        *(char **)(lVar9 + 0x10) = "sysEmitterPluginAttr3";
      }
      iVar3 = FUN_008f1cbc(uVar13,0,0,"sysEmitterPluginAttr4");
      FUN_008f04cc(param_3 + lVar8 * 0x28);
      if (iVar3 != -1) {
        lVar8 = param_3 + lVar8 * 0x28;
        uVar10 = uVar10 + 1;
        *(undefined2 *)(lVar8 + 4) = 0;
        *(undefined8 *)(lVar8 + 8) = 0x190500000040;
        *(char **)(lVar8 + 0x10) = "sysEmitterPluginAttr4";
      }
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      FUN_008f04e0(param_4);
    }
    else {
      uVar10 = 0;
      FUN_008f04e0(param_4);
    }
    if ((iVar16 != 0) && (0 < iVar11)) {
      uVar14 = 0;
      puVar15 = param_4;
      do {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                          (*(long **)(param_1 + 0x78),uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        *puVar15 = uVar4;
        puVar15 = puVar15 + 4;
      } while (uVar6 != uVar14);
    }
    if ((int)uVar19 != 0) {
      puVar12 = (undefined8 *)(param_4 + (long)iVar11 * 4);
      uVar14 = uVar19;
      do {
        FUN_008f04e0(puVar12);
        uVar14 = uVar14 - 1;
        *puVar12 = 0x100000010;
        puVar12 = puVar12 + 2;
      } while (uVar14 != 0);
    }
    if (uVar10 != 0) {
      *param_4 = 0x50;
    }
    FUN_008f04e8(param_2);
    *param_2 = (short)uVar19 + (short)uVar17 + uVar10;
    uVar13 = 1;
    *(long *)(param_2 + 4) = param_3;
    *(undefined4 **)(param_2 + 8) = param_4;
    param_2[1] = (short)uVar19 + (short)uVar6 + (ushort)(uVar10 != 0);
  }
  else {
    uVar13 = 0;
  }
  return uVar13;
}


