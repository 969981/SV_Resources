/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03499160; name: FUN_03499160
 */


undefined8 * FUN_03499160(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  long lVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  if (uVar2 == 0) {
    if (lVar9 == 0) {
      iVar3 = *(int *)((long)param_1 + 0xc);
      if (iVar3 == 0) {
        iVar3 = 1;
        lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,8);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
        *param_1 = lVar9;
        *(undefined4 *)((long)param_1 + 0xc) = 1;
      }
      else {
        lVar9 = 0;
      }
      if (iVar3 == 0) {
        return (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)(lVar9 + (ulong)*(uint *)(param_1 + 1) * 8);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (lVar9 == 0) {
        return puVar7;
      }
      *puVar7 = 0;
      return puVar7;
    }
    uVar10 = 0;
  }
  else {
    iVar3 = 0;
    uVar4 = uVar2;
    do {
      iVar1 = iVar3 + (uVar4 >> 1);
      uVar10 = (ulong)iVar1;
      uVar6 = *(ulong *)(lVar9 + (long)iVar1 * 8);
      if (uVar6 == param_2) goto LAB_034991e0;
      if ((*(int *)(uVar6 + 0x48) < *(int *)(param_2 + 0x48)) ||
         ((uVar6 < param_2 && (*(int *)(uVar6 + 0x48) == *(int *)(param_2 + 0x48))))) {
        iVar3 = iVar1 + 1;
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
    uVar10 = (ulong)iVar3;
  }
LAB_034991e0:
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar2) {
    iVar3 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar3 = 1;
    }
    uVar4 = iVar3 + uVar4;
    lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar9,(ulong)uVar4 << 3);
    if (lVar9 == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = lVar9;
    *(uint *)((long)param_1 + 0xc) = uVar4;
  }
  if (uVar4 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar7 = (undefined8 *)(lVar9 + (ulong)uVar2 * 8);
  *puVar7 = 0;
  uVar6 = uVar10 & 0xffffffff;
  lVar9 = *param_1;
  if ((undefined8 *)(lVar9 + (uVar10 & 0xffffffff) * 8) < puVar7) {
    do {
      puVar8 = puVar7 + -1;
      *puVar7 = *puVar8;
      lVar9 = *param_1;
      puVar7 = puVar8;
    } while ((undefined8 *)(lVar9 + uVar6 * 8) < puVar8);
  }
  lVar5 = 0;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + uVar6 * 8) = 0;
    lVar5 = *param_1;
  }
  return (undefined8 *)(lVar5 + uVar6 * 8);
}


