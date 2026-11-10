/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cbdc0; name: FUN_034cbdc0
 */


void FUN_034cbdc0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_14 [4];
  
  bVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((bVar4 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x1c) != '\0') {
      iVar6 = *(int *)(param_1 + 0xa8) + -1;
      goto LAB_034cbe10;
    }
  }
  else if (*(char *)((long)param_2 + 0x1c) == '\0') {
    iVar6 = *(int *)(param_1 + 0xa8) + 1;
LAB_034cbe10:
    *(int *)(param_1 + 0xa8) = iVar6;
  }
  *(byte *)((long)param_2 + 0x1c) = bVar4 & 1;
  bVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((bVar4 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x1d) != '\0') {
      iVar6 = *(int *)(param_1 + 0xac) + -1;
      goto LAB_034cbe50;
    }
  }
  else if (*(char *)((long)param_2 + 0x1d) == '\0') {
    iVar6 = *(int *)(param_1 + 0xac) + 1;
LAB_034cbe50:
    *(int *)(param_1 + 0xac) = iVar6;
  }
  *(byte *)((long)param_2 + 0x1d) = bVar4 & 1;
  bVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  if ((bVar4 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x1e) == '\0') goto LAB_034cbe94;
    iVar6 = *(int *)(param_1 + 0xb0) + -1;
  }
  else {
    if (*(char *)((long)param_2 + 0x1e) != '\0') goto LAB_034cbe94;
    iVar6 = *(int *)(param_1 + 0xb0) + 1;
  }
  *(int *)(param_1 + 0xb0) = iVar6;
LAB_034cbe94:
  lVar7 = param_2[1];
  *(byte *)((long)param_2 + 0x1e) = bVar4 & 1;
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar7 + 0xdc);
  }
  uVar1 = *(uint *)(param_2 + 3);
  if (uVar9 != uVar1) {
    if (uVar1 != 0) {
      uVar9 = *(uint *)(param_1 + 0x28);
      if (uVar9 != 0) {
        iVar6 = 0;
        do {
          uVar11 = iVar6 + (uVar9 >> 1);
          uVar2 = *(uint *)(*(long *)(param_1 + 0x20) +
                           (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3));
          if (uVar2 == uVar1) {
            lVar7 = *(long *)(param_1 + 0x20) + (long)(int)uVar11 * 8;
            iVar6 = *(int *)(lVar7 + 4) + -1;
            *(int *)(lVar7 + 4) = iVar6;
            if (iVar6 == 0) {
              uVar9 = *(uint *)(param_1 + 0x28);
              if (uVar9 != 0) {
                lVar7 = *(long *)(param_1 + 0x20);
                iVar6 = 0;
                uVar11 = uVar9;
                goto LAB_034cbf78;
              }
            }
            break;
          }
          if (uVar2 < uVar1) {
            iVar6 = uVar11 + 1;
          }
          uVar9 = uVar9 - (uVar2 < uVar1) >> 1;
        } while (uVar9 != 0);
      }
LAB_034cbf10:
      lVar7 = param_2[1];
      *(undefined4 *)(param_2 + 3) = 0;
    }
    if ((lVar7 != 0) && (iVar6 = *(int *)(lVar7 + 0xdc), iVar6 != 0)) {
      lVar7 = FUN_034ccae0(param_1 + 0x20,iVar6,auStack_14);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      }
      *(int *)(param_2 + 3) = iVar6;
    }
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined1 *)(param_1 + 200) = 1;
  return;
LAB_034cbf78:
  uVar2 = iVar6 + (uVar11 >> 1);
  uVar3 = *(uint *)(lVar7 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3));
  if (uVar3 != uVar1) goto code_r0x034cbf90;
  puVar5 = (undefined8 *)((lVar7 + (ulong)uVar9 * 8) - 8);
  puVar10 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8);
  if (puVar10 < puVar5) {
    do {
      puVar8 = puVar10 + 1;
      *puVar10 = *puVar8;
      puVar10 = puVar8;
    } while (puVar8 < puVar5);
    uVar9 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x28) = uVar9 - 1;
  goto LAB_034cbf10;
code_r0x034cbf90:
  if (uVar3 < uVar1) {
    iVar6 = uVar2 + 1;
  }
  uVar11 = uVar11 - (uVar3 < uVar1) >> 1;
  if (uVar11 == 0) goto LAB_034cbf10;
  goto LAB_034cbf78;
}


