/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030de590; name: FUN_030de590
 */


void FUN_030de590(undefined4 *param_1,long param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int local_a8 [2];
  int local_a0;
  int local_9c;
  short local_98;
  undefined2 local_96;
  byte local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  int local_68 [2];
  
  lVar6 = *(long *)(param_2 + 0x20);
  local_68[0] = *param_3;
  iVar13 = local_68[0] - *(int *)(lVar6 + 0x20);
  if (local_68[0] < *(int *)(lVar6 + 0x20)) {
    lVar20 = *(long *)(lVar6 + 0x18);
    iVar13 = local_68[0];
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar13 = *(int *)(*(long *)(lVar6 + 0x90) + (long)local_68[0] * 4);
    }
    if (iVar13 == -1) {
      iVar13 = local_68[0];
      goto LAB_030de604;
    }
    plVar8 = (long *)(lVar6 + 0xb0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0xd0);
  }
  lVar20 = *plVar8;
LAB_030de604:
  lVar22 = lVar20 + (long)iVar13 * 0x10;
  sVar3 = *(short *)(lVar22 + 10);
  sVar4 = *(short *)(lVar22 + 8);
  *param_1 = *(undefined4 *)(lVar6 + 0xd8);
  local_88 = auStack_78;
  local_80 = -0x7ffffffc00000000;
  FUN_03092dcc(lVar6,local_68,&local_a0);
  local_90 = local_90 ^ 2;
  uVar2 = *(uint *)(*(long *)(param_2 + 0x20) + 0xe8);
  param_4 = sVar3 + param_4;
  lVar6 = FUN_0308fb68(param_2,param_4 + sVar4);
  local_a0 = *(int *)(*(long *)(param_2 + 0x20) + 0x30) + uVar2;
  local_98 = sVar4;
  if (0 < sVar4) {
    lVar21 = (long)(int)uVar2;
    lVar18 = 0;
    lVar22 = 0;
    do {
      iVar16 = *(int *)(lVar20 + (long)iVar13 * 0x10);
      iVar5 = (int)lVar22;
      iVar17 = iVar5 + iVar16;
      if (*(char *)(param_2 + 0x30) == '\x01') {
        lVar7 = *(long *)(param_2 + 0x20);
      }
      else {
        lVar7 = FUN_0307d71c((long *)(param_2 + 0x20));
      }
      if (iVar17 < *(int *)(lVar7 + 0x30)) {
        lVar14 = *(long *)(lVar7 + 0x28);
        if (*(int *)(lVar7 + 0x78) == 0) {
          iVar10 = iVar17;
        }
        else {
          iVar10 = *(int *)(*(long *)(lVar7 + 0x70) + (long)iVar17 * 4);
        }
        iVar11 = iVar17;
        if (iVar10 != -1) {
          plVar8 = (long *)(lVar7 + 0xc0);
          goto LAB_030de728;
        }
      }
      else {
        iVar10 = iVar5 + (iVar16 - *(int *)(lVar7 + 0x30));
        plVar8 = (long *)(lVar7 + 0xe0);
LAB_030de728:
        lVar14 = *plVar8;
        iVar11 = iVar10;
      }
      puVar12 = (undefined4 *)(lVar14 + (long)iVar11 * 0x14);
      puVar1 = (undefined4 *)(*(long *)(lVar7 + 0xe0) + lVar21 * 0x14 + lVar18);
      *puVar1 = *puVar12;
      puVar1[1] = puVar12[1];
      uVar15 = *(undefined8 *)(puVar12 + 2);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar12 + 4);
      *(undefined8 *)(puVar1 + 2) = uVar15;
      *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
      *(short *)(*(long *)(lVar7 + 0x110) + lVar21 * 2 + lVar22 * 2) = (short)lVar22;
      iVar10 = *(int *)(lVar7 + 0x60);
      if (iVar17 < *(int *)(lVar7 + 0x30)) {
        if (*(int *)(lVar7 + 0x78) == 0) {
          iVar16 = iVar17;
        }
        else {
          iVar16 = *(int *)(*(long *)(lVar7 + 0x70) + (long)iVar17 * 4);
        }
        if (iVar16 == -1) {
          iVar16 = iVar10 * iVar17;
          lVar14 = *(long *)(lVar7 + 0x58);
        }
        else {
          iVar16 = iVar16 * iVar10;
          lVar14 = *(long *)(lVar7 + 0x130);
        }
      }
      else {
        iVar16 = (iVar5 + (iVar16 - *(int *)(lVar7 + 0x30))) * iVar10;
        lVar14 = *(long *)(lVar7 + 0x150);
      }
      memcpy((void *)(*(long *)(lVar7 + 0x150) + (lVar21 + lVar22) * (long)iVar10 * 4),
             (void *)(lVar14 + (long)iVar16 * 4),(long)iVar10 << 2);
      lVar7 = lVar6 + lVar18;
      *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
      *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) & 0xbf | 4;
      lVar22 = lVar22 + 1;
      lVar18 = lVar18 + 0x14;
    } while ((int)sVar4 != (int)lVar22);
    uVar2 = uVar2 + (int)lVar22;
    lVar6 = lVar6 + lVar18;
  }
  if (param_4 == 0) {
    local_9c = -1;
    local_96 = 0;
  }
  else {
    local_96 = (undefined2)param_4;
    local_9c = local_a0 + sVar4;
    if (0 < sVar3) {
      lVar18 = ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) +
               (long)(int)uVar2) * 4;
      lVar22 = 0;
      pbVar19 = (byte *)(lVar6 + 0x10);
      do {
        iVar16 = *(int *)(lVar20 + (long)iVar13 * 0x10 + 4);
        iVar5 = (int)lVar22;
        iVar17 = iVar5 + iVar16;
        if (*(char *)(param_2 + 0x30) == '\x01') {
          lVar6 = *(long *)(param_2 + 0x20);
        }
        else {
          lVar6 = FUN_0307d71c((long *)(param_2 + 0x20));
        }
        if (iVar17 < *(int *)(lVar6 + 0x30)) {
          lVar21 = *(long *)(lVar6 + 0x28);
          if (*(int *)(lVar6 + 0x78) == 0) {
            iVar10 = iVar17;
          }
          else {
            iVar10 = *(int *)(*(long *)(lVar6 + 0x70) + (long)iVar17 * 4);
          }
          iVar11 = iVar17;
          if (iVar10 != -1) {
            plVar8 = (long *)(lVar6 + 0xc0);
            goto LAB_030de900;
          }
        }
        else {
          iVar10 = iVar5 + (iVar16 - *(int *)(lVar6 + 0x30));
          plVar8 = (long *)(lVar6 + 0xe0);
LAB_030de900:
          lVar21 = *plVar8;
          iVar11 = iVar10;
        }
        puVar12 = (undefined4 *)(lVar21 + (long)iVar11 * 0x14);
        puVar1 = (undefined4 *)(*(long *)(lVar6 + 0xe0) + lVar18);
        *puVar1 = *puVar12;
        puVar1[1] = puVar12[1];
        uVar15 = *(undefined8 *)(puVar12 + 2);
        *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar12 + 4);
        *(undefined8 *)(puVar1 + 2) = uVar15;
        *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
        *(short *)(*(long *)(lVar6 + 0x110) +
                   (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + lVar22 * 2)
             = sVar4 + (short)lVar22;
        iVar10 = *(int *)(lVar6 + 0x60);
        if (iVar17 < *(int *)(lVar6 + 0x30)) {
          if (*(int *)(lVar6 + 0x78) == 0) {
            iVar16 = iVar17;
          }
          else {
            iVar16 = *(int *)(*(long *)(lVar6 + 0x70) + (long)iVar17 * 4);
          }
          if (iVar16 == -1) {
            iVar16 = iVar10 * iVar17;
            lVar21 = *(long *)(lVar6 + 0x58);
          }
          else {
            iVar16 = iVar16 * iVar10;
            lVar21 = *(long *)(lVar6 + 0x130);
          }
        }
        else {
          iVar16 = (iVar5 + (iVar16 - *(int *)(lVar6 + 0x30))) * iVar10;
          lVar21 = *(long *)(lVar6 + 0x150);
        }
        memcpy((void *)(*(long *)(lVar6 + 0x150) + ((int)uVar2 + lVar22) * (long)iVar10 * 4),
               (void *)(lVar21 + (long)iVar16 * 4),(long)iVar10 << 2);
        pbVar19[-8] = 0xff;
        pbVar19[-7] = 0xff;
        pbVar19[-6] = 0xff;
        pbVar19[-5] = 0xff;
        pbVar19[-4] = 0xff;
        pbVar19[-3] = 0xff;
        pbVar19[-2] = 0xff;
        pbVar19[-1] = 0xff;
        lVar22 = lVar22 + 1;
        lVar18 = lVar18 + 0x14;
        *pbVar19 = *pbVar19 & 0xbf | 4;
        pbVar19 = pbVar19 + 0x14;
      } while ((int)sVar3 != (int)lVar22);
    }
  }
  local_a8[0] = *param_3;
  FUN_0308f710(param_2,local_a8,&local_a0,1);
  lVar6 = local_80;
  uVar9 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar9 << 2);
  }
  return;
}


