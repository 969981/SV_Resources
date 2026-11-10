/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03494c5c; name: FUN_03494c5c
 */


undefined8 FUN_03494c5c(long *param_1,long *param_2,long *param_3,long *param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_1[9] != param_3[3]) || ((int)param_1[0xb] != *(int *)((long)param_3 + 0x24))) {
    FUN_034948c4(param_1);
  }
  if (((param_1[2] == 0) && ((**(code **)(*param_2 + 0x10))(param_2), (int)param_2[6] != 0)) &&
     (iVar1 = *(int *)((long)param_2 + 0x34), *(int *)((long)param_2 + 0x34) = iVar1 + 1, iVar1 == 0
     )) {
    FUN_034b86cc(*(undefined8 *)PTR_DAT_047e6fd8,param_2);
  }
  param_1[2] = (long)param_2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(int *)(param_1 + 0xd) = (int)param_3[5];
  param_1[8] = 0;
  *(int *)((long)param_1 + 0x54) = (int)param_3[4];
  bVar2 = *(byte *)((long)param_3 + 9);
  if (*(byte *)(param_3 + 1) - 0x80 < 0x21) {
    uVar7 = 0xff;
    if ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0) {
      uVar7 = (ushort)*(byte *)((long)param_3 + 0xc);
    }
  }
  else {
    uVar7 = 0xff;
  }
  *(int *)((long)param_1 + 0x7c) = param_5;
  *(ushort *)(param_1 + 10) = uVar7 | (ushort)bVar2 << 8;
  *(undefined1 *)(param_1 + 10) = 0xff;
  if (param_5 == 3) goto LAB_03494f3c;
  lVar4 = *param_3;
  param_1[8] = lVar4;
  if (param_5 == 1) {
LAB_03494df8:
    uVar7 = 0xff;
    if ((*(byte *)(param_3 + 1) - 0x80 < 0x21) &&
       ((1L << ((ulong)(*(byte *)(param_3 + 1) - 0x80) & 0x3f) & 0x100010001U) != 0)) {
      uVar7 = (ushort)*(byte *)((long)param_3 + 0xc);
    }
    *(ushort *)(param_1 + 10) = uVar7 | (ushort)*(byte *)((long)param_3 + 9) << 8;
    if ((param_1[9] == 0) && (piVar5 = (int *)param_3[3], piVar5 != (int *)0x0)) {
      param_1[9] = (long)piVar5;
      *piVar5 = *piVar5 + 1;
    }
    if (param_4 != (long *)0x0) {
      puVar3 = (undefined8 *)param_1[6];
      uVar9 = *(uint *)(param_1 + 7);
      if (uVar9 != 0) {
        lVar4 = (ulong)uVar9 << 3;
        puVar6 = puVar3;
        do {
          if ((long *)*puVar6 == param_4) goto LAB_03494ef0;
          lVar4 = lVar4 + -8;
          puVar6 = puVar6 + 1;
        } while (lVar4 != 0);
      }
      uVar10 = *(uint *)((long)param_1 + 0x3c);
      if (uVar10 <= uVar9) {
        iVar1 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar1 = 1;
        }
        uVar10 = iVar1 + uVar10;
        puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar3,(ulong)uVar10 << 3);
        if (puVar3 == (undefined8 *)0x0) goto LAB_03494ef0;
        param_1[6] = (long)puVar3;
        *(uint *)((long)param_1 + 0x3c) = uVar10;
      }
      if (uVar9 < uVar10) {
        uVar9 = *(uint *)(param_1 + 7);
        *(uint *)(param_1 + 7) = uVar9 + 1;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[uVar9] = param_4;
          (**(code **)(*param_4 + 0x28))(param_4);
        }
      }
    }
LAB_03494ef0:
    iVar1 = *(int *)((long)param_3 + 0x24);
    *(int *)(param_1 + 0xb) = iVar1;
    if ((((*(char *)((long)param_1 + 0x51) == -1) && (iVar1 == 0)) && ((char)param_1[10] == -1)) &&
       (param_1[3] == 0)) {
      *(undefined4 *)((long)param_1 + 0x7c) = 2;
      lVar8 = param_3[6];
      if (lVar8 != 0) goto LAB_03494d48;
    }
LAB_03494f04:
    lVar4 = param_1[8];
  }
  else {
    if (param_5 != 2) {
      param_1[3] = param_3[6];
      goto LAB_03494df8;
    }
    lVar8 = param_3[6];
    if (lVar8 != 0) {
LAB_03494d48:
      uVar10 = *(uint *)(param_1 + 5);
      uVar9 = *(uint *)((long)param_1 + 0x2c);
      if (uVar9 <= uVar10) {
        iVar1 = uVar9 + (uVar9 >> 1);
        if (uVar9 == 0) {
          iVar1 = 1;
        }
        uVar9 = iVar1 + uVar9;
        lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,param_1[4],(ulong)uVar9 << 3);
        if (lVar4 == 0) goto LAB_03494f04;
        param_1[4] = lVar4;
        *(uint *)((long)param_1 + 0x2c) = uVar9;
      }
      if (uVar10 < uVar9) {
        uVar9 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar9 + 1;
        if (param_1[4] != 0) {
          *(long *)(param_1[4] + (ulong)uVar9 * 8) = lVar8;
        }
      }
      goto LAB_03494f04;
    }
  }
  if ((lVar4 == 0) && (*(undefined4 *)((long)param_1 + 0x7c) = 3, param_1[4] != 0)) {
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
LAB_03494f3c:
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1[2] + 0x30))((long *)param_1[2],lVar4,param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(lVar4 + 8);
  (**(code **)(*param_1 + 0x30))(param_1);
  return 1;
}


