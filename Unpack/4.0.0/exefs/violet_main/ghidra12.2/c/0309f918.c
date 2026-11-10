/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309f918; name: FUN_0309f918
 */


void FUN_0309f918(long *param_1,long param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  long *local_70;
  undefined8 local_68;
  
  local_90 = 0;
  local_78 = 0;
  local_88 = -0x8000000000000000;
  local_80 = &DAT_03d7702c;
  local_a8 = param_2;
  puStack_a0 = param_4;
  local_98 = param_5;
  local_70 = param_1;
  (**(code **)*param_4)(param_4,param_3);
  FUN_030a0340(&local_a8,param_3);
  iVar20 = (int)local_88 + -1;
  iVar18 = (int)local_88;
  if (0 < (int)local_88) {
    do {
      puVar3 = local_80;
      lVar17 = local_90;
      lVar19 = (long)iVar20 * 4 + (long)iVar20;
      lVar21 = local_90 + lVar19 * 8;
      *(undefined1 *)(lVar21 + 0x20) = 0;
      uVar11 = *(uint *)(local_90 + lVar19 * 8);
      uVar7 = *(uint *)(lVar21 + 0x10);
      lVar19 = *(long *)(local_a8 + 0x38);
LAB_0309f9d0:
      uVar2 = uVar7 & 0x3fffff;
      lVar21 = *(long *)(*(long *)(lVar19 + (ulong)(uVar7 >> 0x16) * 0x100) + 0x20);
      uVar15 = uVar2 - *(int *)(lVar21 + 0x20);
      if ((int)uVar2 < *(int *)(lVar21 + 0x20)) {
        if (*(int *)(lVar21 + 0x98) == 0) {
          uVar15 = uVar2;
LAB_0309fa20:
          lVar5 = *(long *)(lVar21 + 0xb0);
          goto LAB_0309fa24;
        }
        uVar15 = *(uint *)(*(long *)(lVar21 + 0x90) + (ulong)uVar2 * 4);
        if (uVar15 != 0xffffffff) goto LAB_0309fa20;
        puVar14 = (uint *)(*(long *)(lVar21 + 0x18) + (ulong)uVar2 * 0x10);
      }
      else {
        lVar5 = *(long *)(lVar21 + 0xd0);
LAB_0309fa24:
        puVar14 = (uint *)(lVar5 + (long)(int)uVar15 * 0x10);
      }
      uVar2 = *puVar14;
      if ((uVar11 & 0x3fffff) + 1 != uVar2 + (int)(short)puVar14[2]) {
        uVar2 = (uVar11 & 0x3fffff) + 1;
      }
      lVar5 = FUN_030a0990(&local_90,uVar2 | uVar7 & 0xffc00000);
      if (lVar5 == 0) {
        uVar7 = 0;
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(uint *)(lVar5 + 4);
        uVar7 = ((int)lVar5 - (int)puVar3) * 0x20000000;
      }
      if ((int)(uVar11 | uVar7) < 0) {
        iVar16 = *(int *)(lVar21 + 0x30);
        uVar2 = uVar2 & 0x3fffff;
        uVar12 = (ulong)uVar2;
        uVar11 = uVar2 - iVar16;
        if ((int)uVar2 < iVar16) {
          uVar11 = uVar2;
          if ((*(int *)(lVar21 + 0x78) == 0) ||
             (uVar11 = *(uint *)(*(long *)(lVar21 + 0x70) + uVar12 * 4), uVar11 != 0xffffffff)) {
            lVar5 = *(long *)(lVar21 + 0xc0);
            goto LAB_0309fab4;
          }
          lVar5 = *(long *)(lVar21 + 0x28) + uVar12 * 0x14;
        }
        else {
          lVar5 = *(long *)(lVar21 + 0xe0);
LAB_0309fab4:
          lVar5 = lVar5 + (long)(int)uVar11 * 0x14;
        }
        uVar7 = *(uint *)(lVar5 + 0xc);
        uVar11 = 0xffffffff;
        if (uVar7 != 0xffffffff) {
          uVar11 = uVar7 & 0x3fffff | *(int *)(lVar21 + 0x17c) << 0x16;
        }
        if ((*(byte *)(lVar5 + 0x10) & 0x40) == 0) {
          uVar7 = uVar11;
        }
        uVar11 = uVar2 - iVar16;
        if ((int)uVar2 < iVar16) {
          if (*(int *)(lVar21 + 0x78) == 0) {
            uVar11 = uVar2;
LAB_0309fb10:
            lVar21 = *(long *)(lVar21 + 0xc0);
            goto LAB_0309fb14;
          }
          uVar11 = *(uint *)(*(long *)(lVar21 + 0x70) + uVar12 * 4);
          if (uVar11 != 0xffffffff) goto LAB_0309fb10;
          lVar21 = *(long *)(lVar21 + 0x28) + uVar12 * 0x14;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0xe0);
LAB_0309fb14:
          lVar21 = lVar21 + (long)(int)uVar11 * 0x14;
        }
        uVar2 = *(uint *)(lVar21 + 8);
        uVar11 = uVar2 & 0x3fffff;
        if (uVar2 == 0xffffffff) {
          uVar11 = 0xffffffff;
        }
        if ((*(byte *)(lVar21 + 0x10) & 0x40) != 0) {
          uVar11 = uVar2;
        }
        goto LAB_0309f9d0;
      }
      lVar19 = lVar17 + (long)(int)(uVar11 | uVar7) * 0x28;
      lVar17 = lVar17 + (long)iVar20 * 0x28;
      *(long *)(lVar17 + 0x18) = lVar19 + 8;
      iVar20 = iVar20 + -1;
      if (*(int *)(lVar17 + 0xc) != *(int *)(lVar19 + 8)) {
        iVar18 = iVar18 + 1;
      }
    } while (-1 < iVar20);
  }
  plVar4 = local_70;
  if ((int)(*(uint *)((long)local_70 + 0x1c) & 0x7fffffff) < iVar18) {
    FUN_030a0a00(local_70 + 2,(long)iVar18);
  }
  if ((int)plVar4[3] != iVar18) {
    *(int *)(plVar4 + 3) = iVar18;
  }
  puVar3 = PTR_DAT_047d1a08;
  iVar20 = (int)local_88 + -1;
  if (0 < (int)local_88) {
    iVar18 = 0;
    do {
      lVar19 = local_90 + (long)iVar20 * 0x28;
      if (*(char *)(lVar19 + 0x20) == '\0') {
        piVar1 = (int *)(lVar19 + 8);
        local_68 = 0x10;
        piVar6 = (int *)(**(code **)puVar3)(0,&local_68,0);
        pcVar9 = *(code **)(puVar3 + 0x10);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(piVar6,"Segment");
        }
        plVar4 = local_70;
        piVar6[0] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        lVar19 = local_70[2] + (long)iVar18 * 4;
        iVar16 = 0;
        *(long *)(piVar6 + 2) = lVar19;
        piVar10 = piVar1;
        while( true ) {
          *(int *)(lVar19 + (long)iVar16 * 4) = piVar10[1];
          piVar13 = *(int **)(piVar10 + 4);
          if (*piVar13 == piVar10[1]) {
            iVar16 = (int)((long)iVar16 + 1);
          }
          else {
            *(int *)(*(long *)(piVar6 + 2) + ((long)iVar16 + 1) * 4) = *piVar13;
            piVar13 = *(int **)(piVar10 + 4);
            iVar16 = iVar16 + 2;
          }
          *(undefined1 *)(piVar10 + 6) = 1;
          if (piVar13 == piVar1) break;
          lVar19 = *(long *)(piVar6 + 2);
          piVar10 = piVar13;
        }
        iVar8 = (int)local_70[1];
        lVar19 = (long)iVar8;
        if ((int)(*(uint *)((long)local_70 + 0xc) & 0x7fffffff) <= iVar8) {
          FUN_030a0b14(local_70,lVar19 + 1);
          iVar8 = (int)plVar4[1];
        }
        iVar18 = iVar16 + iVar18;
        *(int **)(*plVar4 + (long)iVar8 * 8) = piVar6;
        *(int *)(plVar4 + 1) = (int)(lVar19 + 1);
        *piVar6 = iVar16;
      }
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
  }
  if ((local_80 != (undefined *)0x0) && (*(int *)(local_80 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_80,0);
    local_80 = &DAT_03d7702c;
    local_78 = 0;
  }
  lVar19 = local_88;
  uVar12 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar19) && (local_90 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar12 * 0x28);
  }
  return;
}


