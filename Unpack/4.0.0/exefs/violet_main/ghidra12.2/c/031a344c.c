/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a344c; name: FUN_031a344c
 */


void FUN_031a344c(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(uint *)(param_2 + 0x100);
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      pbVar6 = param_2 + 8;
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar8[-1] = *(undefined8 *)(pbVar6 + -8);
        uVar5 = uVar5 + 2;
        *puVar8 = *(undefined8 *)pbVar6;
        pbVar6 = pbVar6 + 0x10;
        puVar8 = puVar8 + 2;
      } while (((ulong)uVar3 & 0xfffffffe) != uVar5);
    }
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(param_1 + uVar5 * 8 + 0x18) = *(undefined8 *)(param_2 + uVar5 * 8);
    }
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  uVar5 = (ulong)*(uint *)(param_2 + 0x100);
  if ((int)*(uint *)(param_2 + 0x100) < 1) {
    uVar3 = 0;
    iVar4 = 4;
  }
  else {
    uVar3 = 0;
    pbVar6 = param_2 + 1;
    puVar7 = (uint *)(param_1 + 0x11c);
    iVar4 = 4;
    uVar9 = uVar5;
    do {
      if (pbVar6[-1] == 0xb) {
        *puVar7 = uVar3;
        uVar3 = uVar3 + (uint)*pbVar6 * 0x10;
        iVar4 = 0x10;
      }
      puVar1 = PTR_DAT_047e58a0;
      uVar9 = uVar9 - 1;
      pbVar6 = pbVar6 + 8;
      puVar7 = puVar7 + 1;
    } while (uVar9 != 0);
    puVar7 = (uint *)(param_1 + 0x11c);
    pbVar6 = param_2;
    do {
      if (*pbVar6 != 0xb) {
        *puVar7 = uVar3;
        if ((ulong)*pbVar6 == 8) {
          iVar10 = 4;
        }
        else {
          iVar10 = (uint)pbVar6[1] * (uint)(byte)puVar1[*pbVar6];
        }
        uVar3 = uVar3 + iVar10 + 3 & 0xfffffffc;
      }
      uVar5 = uVar5 - 1;
      pbVar6 = pbVar6 + 8;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  *(uint *)(param_1 + 0x1b0) = (iVar4 + uVar3) - 1 & -iVar4;
  uVar3 = *(uint *)(param_2 + 0x100);
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      uVar5 = 0;
      iVar4 = 0;
    }
    else {
      uVar5 = 0;
      iVar4 = 0;
      pbVar6 = param_2 + 0xc;
      do {
        uVar5 = uVar5 + 2;
        iVar4 = iVar4 + (pbVar6[-8] >> 3 & 1) + (*pbVar6 >> 3 & 1);
        pbVar6 = pbVar6 + 0x10;
      } while (((ulong)uVar3 & 0xfffffffe) != uVar5);
    }
    if ((uVar3 & 1) != 0) {
      iVar4 = iVar4 + (param_2[uVar5 * 8 + 4] >> 3 & 1);
    }
    if (iVar4 != 0) {
      uVar2 = 0;
      goto LAB_031a35f0;
    }
  }
  uVar2 = 1;
LAB_031a35f0:
  *(undefined1 *)(param_1 + 0x1e5) = uVar2;
  return;
}


