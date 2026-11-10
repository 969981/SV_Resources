/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dc618; name: FUN_008dc618
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_008dc618(long param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10,void *param_11)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  
  *(int *)(param_1 + 0x10) = param_5;
  *(uint *)(param_1 + 0x14) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  bVar3 = param_6 != (undefined4 *)0x0;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  uVar5 = (ulong)bVar3;
  if (param_7 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    uVar5 = (ulong)(bVar3 + 1);
    *(uint *)(param_1 + 0xc) = bVar3 + 1;
    *(ulong *)(param_1 + 0x78) = (ulong)bVar3 << 4;
  }
  if (param_8 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    lVar7 = uVar5 << 4;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    *(long *)(param_1 + 0x80) = lVar7;
  }
  if (param_9 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    lVar7 = uVar5 << 4;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    *(long *)(param_1 + 0x88) = lVar7;
  }
  if (param_10 == (undefined4 *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = uVar5 << 4;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  *(long *)(param_1 + 0x90) = lVar7;
  lVar7 = (long)param_5 * uVar5 * 0x10;
  *(ulong *)(param_1 + 0x20) = uVar5 << 4;
  *(long *)(param_1 + 0x28) = lVar7;
  uVar5 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2;
  *(ulong *)(param_1 + 0x30) = uVar5;
  lVar12 = *(long *)(param_2 + 0x1a0);
  uVar5 = ((uVar5 + lVar7 + *(long *)(param_2 + 0x188)) - 1 & -*(long *)(param_2 + 0x188)) + lVar12;
  if (uVar5 <= *(ulong *)(param_2 + 0x48)) {
    *(ulong *)(param_2 + 0x1a0) = uVar5;
    if (*(long *)(param_2 + 0x1a8) != 0) {
      puVar2 = (undefined4 *)(*(long *)(param_2 + 0x1a8) + lVar12);
      *(undefined4 **)(param_1 + 0x58) = param_6;
      *(undefined4 **)(param_1 + 0x60) = param_7;
      puVar11 = puVar2;
      if (0 < param_5) {
        puVar6 = param_8;
        puVar8 = param_7;
        puVar9 = param_10;
        puVar10 = param_9;
        if (param_6 == (undefined4 *)0x0) {
          do {
            if (param_7 != (undefined4 *)0x0) {
              *puVar11 = *puVar8;
              puVar11[1] = puVar8[1];
              puVar11[2] = puVar8[2];
              puVar11[3] = puVar8[3];
              puVar8 = puVar8 + 4;
              puVar11 = puVar11 + 4;
            }
            if (param_8 != (undefined4 *)0x0) {
              *puVar11 = *puVar6;
              puVar11[1] = puVar6[1];
              puVar11[2] = puVar6[2];
              puVar11[3] = puVar6[3];
              puVar6 = puVar6 + 4;
              puVar11 = puVar11 + 4;
            }
            if (param_9 != (undefined4 *)0x0) {
              *puVar11 = *puVar10;
              puVar11[1] = puVar10[1];
              puVar11[2] = puVar10[2];
              puVar11[3] = puVar10[3];
              puVar10 = puVar10 + 4;
              puVar11 = puVar11 + 4;
            }
            if (param_10 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
              puVar11[1] = puVar9[1];
              puVar11[2] = puVar9[2];
              puVar11[3] = puVar9[3];
              puVar9 = puVar9 + 4;
              puVar11 = puVar11 + 4;
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        else {
          do {
            *puVar11 = *param_6;
            puVar11[1] = param_6[1];
            puVar11[2] = param_6[2];
            puVar11[3] = param_6[3];
            if (param_7 == (undefined4 *)0x0) {
              puVar11 = puVar11 + 4;
            }
            else {
              puVar11[4] = *puVar8;
              puVar11[5] = puVar8[1];
              puVar11[6] = puVar8[2];
              puVar11[7] = puVar8[3];
              puVar8 = puVar8 + 4;
              puVar11 = puVar11 + 8;
            }
            if (param_8 != (undefined4 *)0x0) {
              *puVar11 = *puVar6;
              puVar11[1] = puVar6[1];
              puVar11[2] = puVar6[2];
              puVar11[3] = puVar6[3];
              puVar6 = puVar6 + 4;
              puVar11 = puVar11 + 4;
            }
            if (param_9 != (undefined4 *)0x0) {
              *puVar11 = *puVar10;
              puVar11[1] = puVar10[1];
              puVar11[2] = puVar10[2];
              puVar11[3] = puVar10[3];
              puVar10 = puVar10 + 4;
              puVar11 = puVar11 + 4;
            }
            if (param_10 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
              puVar11[1] = puVar9[1];
              puVar11[2] = puVar9[2];
              puVar11[3] = puVar9[3];
              puVar9 = puVar9 + 4;
              puVar11 = puVar11 + 4;
            }
            param_5 = param_5 + -1;
            param_6 = param_6 + 4;
          } while (param_5 != 0);
        }
      }
      memcpy(puVar11,param_11,*(size_t *)(param_1 + 0x30));
      *(void **)(param_1 + 0x68) = param_11;
      uVar4 = *(undefined8 *)(param_2 + 0x198);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 400);
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      lVar7 = *(long *)(param_2 + 400);
      uVar4 = *(undefined8 *)(param_2 + 0x198);
      *(undefined1 *)(param_1 + 8) = 1;
      *(long *)(param_1 + 0x48) = lVar7;
      *(undefined8 *)(param_1 + 0x50) = uVar4;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar12;
      *(long *)(param_1 + 0x48) = (long)puVar11 + lVar7 + (lVar12 - (long)puVar2);
      return 1;
    }
  }
  return 0;
}


