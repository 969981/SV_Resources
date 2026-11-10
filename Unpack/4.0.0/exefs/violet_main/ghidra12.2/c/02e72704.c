/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e72704; name: FUN_02e72704
 */


void FUN_02e72704(long param_1,uint *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long local_a0;
  long local_70;
  ulong local_68;
  
  FUN_02e72238(*(undefined8 *)(param_1 + 8));
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  lVar12 = tpidr_el0;
  lVar8 = *(long *)(lVar12 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar8;
  }
  lVar12 = *(long *)(*(long *)(lVar8 + 0x3d0) + 0x10);
  if ((*(long *)(lVar12 + 8) == 0) && (local_70 = (long)(int)param_3, lVar12 != 0)) {
    local_68 = local_70 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(lVar12 + 0x28)) {
      pbVar4 = *(byte **)(lVar12 + 0x38);
      if (pbVar4 + local_68 <= *(byte **)(lVar12 + 0x40)) {
        *(byte **)(lVar12 + 0x38) = pbVar4 + local_68;
        goto LAB_02e72828;
      }
    }
    pbVar4 = (byte *)FUN_031cf3b4(lVar12,&local_68);
  }
  else {
    local_a0 = (long)(int)param_3;
    local_70 = local_a0;
    pbVar4 = (byte *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40,lVar5);
    lVar12 = 0;
  }
LAB_02e72828:
  local_a0 = (long)(int)param_3;
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x30))
            ((long *)**(undefined8 **)(param_1 + 8),param_2,param_3,lVar5);
  uVar16 = *(uint *)(param_1 + 0x150);
  uVar17 = *(uint *)(param_1 + 0x154);
  if (0 < (int)param_3) {
    uVar15 = (ulong)param_3;
    pbVar13 = pbVar4;
    do {
      uVar9 = (ulong)*param_2 & 0xffffff;
      *(undefined1 *)(*(long *)(param_1 + 0x140) + uVar9) = 1;
      uVar6 = (uint)uVar9;
      if (uVar6 <= uVar16) {
        uVar16 = uVar6;
      }
      if (uVar17 <= uVar6) {
        uVar17 = uVar6;
      }
      if ((*(byte *)(lVar5 + uVar9 * 0xc0 + 0x88) & 1) != 0) {
        uVar6 = *(uint *)(*(long *)(param_1 + 0x130) + uVar9 * 4);
        bVar3 = *pbVar13;
        lVar8 = *(long *)(*(long *)(param_1 + 0x10) + ((ulong)uVar6 & 0x1f) * 8);
        if ((uint)((ulong)uVar6 & 0x1f) == (uint)bVar3) {
          lVar14 = lVar8;
        }
        else {
          lVar14 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)(uint)bVar3 * 8);
          *(uint *)(*(long *)(param_1 + 0x130) +
                   (long)*(int *)(*(long *)(lVar8 + 0x50) + (long)*(int *)(lVar8 + 0x58) * 0x10 + -4
                                 ) * 4) = uVar6;
          puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x50) + (ulong)(uVar6 >> 5) * 0x10);
          lVar11 = (long)*(int *)(lVar8 + 0x58) + -1;
          uVar10 = (uint)lVar11;
          uVar19 = puVar1[1];
          uVar18 = *puVar1;
          *(uint *)(lVar8 + 0x58) = uVar10;
          if (uVar10 != uVar6 >> 5) {
            puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x50) + lVar11 * 0x10);
            puVar1[1] = puVar2[1];
            *puVar1 = *puVar2;
          }
          *(uint *)(*(long *)(param_1 + 0x130) + uVar9 * 4) =
               (uint)bVar3 | *(int *)(lVar14 + 0x58) << 5;
          iVar7 = *(int *)(lVar14 + 0x58);
          lVar11 = (long)iVar7;
          if ((int)(*(uint *)(lVar14 + 0x5c) & 0x7fffffff) <= iVar7) {
            FUN_02e7ff18(lVar14 + 0x50,PTR_PTR_047d1a50,lVar11 + 1);
            iVar7 = *(int *)(lVar14 + 0x58);
          }
          puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x50) + (long)iVar7 * 0x10);
          puVar1[1] = uVar19;
          *puVar1 = uVar18;
          *(int *)(lVar14 + 0x58) = (int)(lVar11 + 1);
          *(undefined1 *)(lVar8 + 0x1afc) = 1;
        }
        *(undefined1 *)(lVar14 + 0x1afc) = 1;
      }
      param_2 = (uint *)((long)param_2 + (long)param_4);
      uVar15 = uVar15 - 1;
      pbVar13 = pbVar13 + 1;
    } while (uVar15 != 0);
  }
  *(uint *)(param_1 + 0x150) = uVar16;
  *(uint *)(param_1 + 0x154) = uVar17;
  if (lVar12 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pbVar4,local_a0);
    return;
  }
  uVar15 = local_a0 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar12 + 0x28) < uVar15) || (*(byte **)(lVar12 + 0x38) != pbVar4 + uVar15)) {
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    if (*(ulong *)(lVar12 + 0x28) < uVar15 + 0x40) {
      *(int *)(*(long *)(lVar12 + 0x30) + 0x20) = *(int *)(*(long *)(lVar12 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar12 + 0x10) + 0x18))
                (*(long **)(lVar12 + 0x10),(long)pbVar4 - (long)*(int *)(pbVar4 + -4),uVar15 + 0x44)
      ;
      return;
    }
    if (*(byte **)(lVar12 + 0x38) != pbVar4 + uVar15) {
      FUN_031cf778();
      return;
    }
    *(byte **)(lVar12 + 0x38) = pbVar4;
  }
  else {
    *(byte **)(lVar12 + 0x38) = pbVar4;
    if (*(byte **)(lVar12 + 0x48) != pbVar4) {
      return;
    }
  }
  FUN_031cf578();
  return;
}


