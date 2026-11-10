/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03469004; name: FUN_03469004
 */


undefined8 * FUN_03469004(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  if (uVar2 == 0) {
    if (lVar5 == 0) {
      if (*(int *)((long)param_1 + 0xc) == 0) {
        lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,0x20);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        *param_1 = lVar5;
        *(undefined4 *)((long)param_1 + 0xc) = 1;
      }
      else {
        lVar5 = 0;
      }
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      return (undefined8 *)(lVar5 + (ulong)uVar2 * 0x20);
    }
    uVar11 = 0;
  }
  else {
    uVar7 = 0;
    uVar9 = uVar2;
    do {
      iVar1 = uVar7 + (uVar9 >> 1);
      uVar11 = (ulong)iVar1;
      uVar3 = *(uint *)(lVar5 + uVar11 * 0x20 + 4);
      uVar6 = (uint)((ulong)param_2 >> 0x20);
      if (uVar3 == uVar6) goto LAB_03469070;
      if (uVar3 < uVar6) {
        uVar7 = iVar1 + 1;
      }
      uVar9 = uVar9 - (uVar3 < uVar6) >> 1;
    } while (uVar9 != 0);
    uVar11 = (ulong)uVar7;
  }
LAB_03469070:
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (uVar7 <= uVar2) {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar5,(ulong)uVar7 << 5);
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar7;
  }
  if (uVar2 < uVar7) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if ((uint)uVar11 < uVar2) {
      puVar10 = (undefined8 *)(lVar5 + (ulong)uVar2 * 0x20);
      do {
        puVar8 = puVar10 + -4;
        *puVar10 = *puVar8;
        puVar10[1] = puVar10[-3];
        puVar10[2] = puVar10[-2];
        puVar10[3] = puVar10[-1];
        puVar4 = (undefined8 *)(*param_1 + (uVar11 & 0xffffffff) * 0x20);
        puVar10 = puVar8;
      } while (puVar4 < puVar8);
    }
    else {
      puVar4 = (undefined8 *)(lVar5 + (uVar11 & 0xffffffff) * 0x20);
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}


