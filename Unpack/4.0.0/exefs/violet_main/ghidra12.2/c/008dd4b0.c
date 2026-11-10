/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dd4b0; name: FUN_008dd4b0
 */


void FUN_008dd4b0(undefined1 *param_1,undefined8 param_2,long *param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  
  *(long *)(param_1 + 8) = param_4;
  iVar4 = *(int *)(param_4 + 0x1c);
  *(int *)(param_1 + 0x30) = iVar4;
  lVar5 = (**(code **)(*param_3 + 0x10))(param_3,(long)iVar4 * 0x180 | 0x20,0x80);
  *(long *)(param_1 + 0x28) = lVar5;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar6 = (long)*(int *)(param_1 + 0x30) * 0x180;
    uVar7 = lVar6 - 0x180;
    uVar1 = ((uint)(uVar7 / 0x180) & 0xffffff) + 1;
    lVar9 = lVar5;
    if ((uVar1 & 3) != 0) {
      lVar8 = -((ulong)uVar1 & 3);
      lVar10 = lVar5;
      do {
        lVar9 = lVar10 + 0x180;
        *(undefined8 *)(lVar10 + 0x124) = 0xffffffffffffffff;
        bVar3 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        *(undefined8 *)(lVar10 + 0x16c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x174) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x15c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x164) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x14c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x154) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x13c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x144) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 300) = 0xffffffffffffffff;
        *(undefined8 *)(lVar10 + 0x134) = 0xffffffffffffffff;
        lVar10 = lVar9;
      } while (bVar3);
    }
    if (0x47f < uVar7) {
      do {
        *(undefined8 *)(lVar9 + 0x16c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x174) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x124) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x15c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x164) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x14c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x154) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x13c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x144) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 300) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x134) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2f4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2a4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2ac) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2b4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 700) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2c4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2cc) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2d4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2dc) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2e4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x2ec) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x424) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x46c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x474) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x45c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x464) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x44c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x454) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x43c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x444) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x42c) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x434) = 0xffffffffffffffff;
        lVar8 = lVar9 + 0x600;
        *(undefined8 *)(lVar9 + 0x5a4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5ec) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5f4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5dc) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5e4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5cc) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5d4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5bc) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5c4) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5ac) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 0x5b4) = 0xffffffffffffffff;
        lVar9 = lVar8;
      } while (lVar5 + lVar6 != lVar8);
    }
  }
  *(long *)(param_1 + 0x20) = lVar5;
  if ((param_5 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar2 = PTR_DAT_047d1f00;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar6 = 0;
      lVar9 = 0;
      lVar5 = 0;
      do {
        lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x20);
        lVar8 = *(long *)(lVar11 + *(long *)puVar2 + lVar6);
        lVar13 = *(long *)(lVar11 + *(long *)(puVar2 + 8) + lVar6);
        lVar10 = *(long *)(lVar11 + *(long *)(puVar2 + 0x10) + lVar6);
        if (lVar8 == 0) {
          iVar4 = 3;
          if (lVar13 != 0) goto LAB_008dd748;
LAB_008dd720:
          uVar12 = 0;
          if (lVar10 != 0 && iVar4 != 0) {
LAB_008dd768:
            FUN_00ea1db8(*(undefined8 *)(lVar10 + 0x68),param_2,lVar10);
            uVar12 = 2;
          }
        }
        else {
          iVar4 = FUN_00ea1db8(*(undefined8 *)(lVar8 + 0x68),param_2);
          if (lVar13 == 0 || iVar4 == 0) goto LAB_008dd720;
LAB_008dd748:
          iVar4 = FUN_00ea1db8(*(undefined8 *)(lVar13 + 0x68),param_2,lVar13);
          uVar12 = 1;
          if (lVar10 != 0 && iVar4 != 0) goto LAB_008dd768;
        }
        FUN_008dcea8(*(long *)(param_1 + 0x20) + lVar9);
        FUN_008dceb0(*(long *)(param_1 + 0x20) + lVar9,lVar11 + lVar6,uVar12);
        FUN_008dced8(*(long *)(param_1 + 0x20) + lVar9);
        FUN_008dd198(*(long *)(param_1 + 0x20) + lVar9);
        lVar5 = lVar5 + 1;
        lVar9 = lVar9 + 0x180;
        lVar6 = lVar6 + 0x40;
        *(undefined4 *)(param_1 + 0x10) = uVar12;
      } while (lVar5 < *(int *)(param_1 + 0x30));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = param_2;
    if ((0 < *(int *)(param_1 + 0x30)) && (FUN_008dcea8(), 1 < *(int *)(param_1 + 0x30))) {
      lVar5 = 1;
      lVar9 = 0x180;
      do {
        FUN_008dcea8(*(long *)(param_1 + 0x20) + lVar9);
        lVar5 = lVar5 + 1;
        lVar9 = lVar9 + 0x180;
      } while (lVar5 < *(int *)(param_1 + 0x30));
    }
  }
  *param_1 = 1;
  return;
}


