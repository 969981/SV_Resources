/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00861e18; name: FUN_00861e18
 */


void FUN_00861e18(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    return;
  }
  if ((int)param_1[1] == 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *param_1 = 0;
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0x18))(param_2,(long)(int)param_1[1] << 6);
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    lVar5 = *param_1;
    lVar7 = lVar4;
    if (uVar6 != 1) {
      iVar9 = (uVar6 & 1) - uVar6;
      do {
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
        iVar9 = iVar9 + 2;
        uVar2 = *(undefined8 *)(lVar5 + 0x20);
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        uVar3 = *(undefined8 *)(lVar5 + 0x30);
        *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
        *(undefined8 *)(lVar7 + 0x20) = uVar2;
        *(undefined8 *)(lVar7 + 0x28) = uVar8;
        *(undefined8 *)(lVar7 + 0x30) = uVar3;
        *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar5 + 0x50);
        uVar8 = *(undefined8 *)(lVar5 + 0x58);
        uVar2 = *(undefined8 *)(lVar5 + 0x60);
        puVar1 = (undefined8 *)(lVar5 + 0x68);
        uVar3 = *(undefined8 *)(lVar5 + 0x70);
        lVar5 = lVar5 + 0x80;
        *(undefined8 *)(lVar7 + 0x68) = *puVar1;
        *(undefined8 *)(lVar7 + 0x70) = uVar3;
        *(undefined8 *)(lVar7 + 0x58) = uVar8;
        *(undefined8 *)(lVar7 + 0x60) = uVar2;
        lVar7 = lVar7 + 0x80;
      } while (iVar9 != 0);
    }
    if ((uVar6 & 1) != 0) {
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
      *(undefined8 *)(lVar7 + 0x28) = uVar8;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar7 + 0x20) = uVar8;
    }
    uVar6 = *(uint *)(param_1 + 1);
  }
  *param_1 = lVar4;
  *(uint *)((long)param_1 + 0xc) = uVar6;
  return;
}


