/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131bdb0; name: FUN_0131bdb0
 */


void FUN_0131bdb0(long param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  *param_2 = 0;
  uVar8 = FUN_0124a808();
  uVar7 = *param_3;
  if ((uVar8 & 1) == 0) {
    if (uVar7 == 0) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
      if (*(long *)(lVar11 + 0xa8) != 0) {
        FUN_0182384c(*(undefined8 *)(param_1 + 0x20),3,0);
        lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
      }
      if (*(long *)(lVar11 + 0xb0) != 0) {
        FUN_0182384c(*(undefined8 *)(param_1 + 0x20),3,1);
        lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
      }
      if (*(long *)(lVar11 + 0xb8) != 0) {
        FUN_0182384c(*(undefined8 *)(param_1 + 0x20),3,2);
        lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
      }
      if (*(long *)(lVar11 + 0xc0) != 0) {
        FUN_0182384c(*(undefined8 *)(param_1 + 0x20),3,3);
        lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
      }
      if (*(long *)(lVar11 + 200) != 0) {
        FUN_0182384c(*(undefined8 *)(param_1 + 0x20),3,4);
      }
      uVar7 = *param_3;
    }
  }
  else if ((uVar7 != 6) && (uVar7 != 8)) {
    return;
  }
  uVar5 = param_3[2];
  bVar2 = *(byte *)((long)param_3 + 10);
  uVar3 = param_3[3];
  if (uVar7 == 0x1a) {
    plVar9 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),0,0);
    uVar4 = (**(code **)(*plVar9 + 0x98))();
  }
  else {
    uVar4 = param_3[1];
  }
  if (uVar4 == 0) {
    uVar8 = (ulong)(ushort)uVar3 | 0x500000000;
  }
  else {
    puVar10 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) +
                                    0x50),(ulong)uVar4);
    if (puVar10 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar1 = *puVar10;
      if (4 < (int)uVar1) {
        uVar1 = 0;
      }
      uVar8 = (ulong)uVar1 << 0x20;
    }
    uVar8 = uVar8 | (ushort)uVar3;
  }
  uVar5 = FUN_018f457c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1d0),uVar7,
                       (ulong)(ushort)uVar5 << 0x20 | (ulong)bVar2 << 0x30 | (ulong)uVar4,uVar8);
  if (-1 < (int)uVar5) {
    FUN_01445bc4(*(undefined8 *)(param_1 + 0x20),uVar5,uVar7);
    FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xb6,uVar5 & 0xff,uVar7 & 0xff);
    if (((param_3[1] != 0) && (uVar7 = *param_3, 0xe < uVar7)) &&
       ((uVar7 < 0x14 || (uVar7 == 0x18)))) {
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1d0);
      iVar6 = FUN_02e3afbc(uVar12,uVar5);
      if (iVar6 != 0) {
        uVar7 = FUN_02e3b030(uVar12,uVar5);
        if ((uVar7 == 0) || (uVar7 != param_3[1])) {
          FUN_018d5c04(param_1,iVar6);
        }
        else {
          uVar12 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar7);
          FUN_019672a0(param_1,iVar6,uVar7,uVar12);
        }
        if (*param_3 == 2) {
          FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x2d,2);
        }
      }
      *param_2 = 1;
    }
  }
  return;
}


