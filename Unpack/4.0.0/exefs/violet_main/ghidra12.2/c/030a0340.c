/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a0340; name: FUN_030a0340
 */


void FUN_030a0340(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  int *piVar16;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  uint local_70;
  uint local_68 [2];
  
  plVar13 = (long *)param_1[2];
  iVar5 = (int)plVar13[1];
  if (iVar5 <= (int)plVar13[2] * 2) {
    FUN_0309cedc(plVar13,iVar5 << 1);
    iVar5 = (int)plVar13[1];
  }
  uVar12 = (uint)param_2;
  uVar7 = (uVar12 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar12 * -0x61c8864f & 0xff00ff) << 8;
  uVar7 = iVar5 - 1U & (uVar7 >> 0x10 | uVar7 << 0x10);
  lVar6 = *plVar13;
  puVar14 = (uint *)(lVar6 + (long)(int)uVar7 * 4);
  if (*puVar14 == 0xffffffff) {
    iVar5 = 1;
  }
  else if (*puVar14 == uVar12) {
    iVar5 = 0;
  }
  else {
    do {
      uVar7 = uVar7 + 1 & iVar5 - 1U;
      uVar10 = *(uint *)(lVar6 + (long)(int)uVar7 * 4);
      if (uVar10 == 0xffffffff) {
        iVar5 = 1;
        goto LAB_030a03f8;
      }
    } while (uVar10 != uVar12);
    iVar5 = 0;
LAB_030a03f8:
    puVar14 = (uint *)(lVar6 + (long)(int)uVar7 * 4);
  }
  *(int *)(plVar13 + 2) = (int)plVar13[2] + iVar5;
  *puVar14 = uVar12;
  lVar15 = *(long *)(*(long *)(*param_1 + 0x38) + (param_2 >> 0x16 & 0x3ff) * 0x100);
  uVar7 = uVar12 & 0x3fffff;
  lVar6 = *(long *)(lVar15 + 0x20);
  uVar10 = uVar7 - *(int *)(lVar6 + 0x20);
  if ((int)uVar7 < *(int *)(lVar6 + 0x20)) {
    if (*(int *)(lVar6 + 0x98) == 0) {
      uVar10 = uVar7;
    }
    else {
      uVar10 = *(uint *)(*(long *)(lVar6 + 0x90) + (ulong)uVar7 * 4);
      if (uVar10 == 0xffffffff) {
        piVar16 = (int *)(*(long *)(lVar6 + 0x18) + (ulong)uVar7 * 0x10);
        goto LAB_030a0470;
      }
    }
    lVar8 = *(long *)(lVar6 + 0xb0);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0xd0);
  }
  piVar16 = (int *)(lVar8 + (long)(int)uVar10 * 0x10);
LAB_030a0470:
  if ((short)piVar16[2] < 1) {
    return;
  }
  iVar5 = 0;
  uVar7 = uVar12 & 0xffc00000;
  plVar13 = param_1 + 3;
  do {
    uVar10 = *piVar16 + iVar5;
    uVar3 = uVar10 | uVar7;
    if ((int)uVar10 < *(int *)(lVar6 + 0x30)) {
      uVar11 = uVar10;
      if (*(int *)(lVar6 + 0x78) != 0) {
        uVar11 = *(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar10 * 4);
      }
      if (uVar11 == 0xffffffff) {
        lVar8 = *(long *)(lVar6 + 0x28);
        uVar11 = uVar10;
      }
      else {
        lVar8 = *(long *)(lVar6 + 0xc0);
      }
      puVar14 = (uint *)(lVar8 + (long)(int)uVar11 * 0x14);
      if (*(int *)(lVar6 + 0x78) == 0) {
        uVar11 = uVar10;
      }
      else {
        uVar11 = *(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar10 * 4);
      }
      if (uVar11 == 0xffffffff) {
        puVar9 = (uint *)(*(long *)(lVar6 + 0x28) + (long)(int)uVar10 * 0x14);
      }
      else {
        puVar9 = (uint *)(*(long *)(lVar6 + 0xc0) + (long)(int)uVar11 * 0x14);
      }
    }
    else {
      puVar9 = (uint *)(*(long *)(lVar6 + 0xe0) +
                       (long)(int)(uVar10 - *(int *)(lVar6 + 0x30)) * 0x14);
      puVar14 = puVar9;
    }
    uVar10 = puVar9[3];
    local_68[0] = uVar3;
    if (((byte)puVar9[4] >> 6 & 1) == 0) {
      if (uVar10 != 0xffffffff) {
        uVar10 = uVar10 & 0x3fffff | *(int *)(lVar6 + 0x17c) << 0x16;
        goto LAB_030a0540;
      }
LAB_030a05b8:
      uVar10 = *puVar14 | uVar7;
      uVar11 = puVar14[1] | uVar7;
      iVar4 = FUN_030a0768(plVar13,local_68);
      if ((int)param_1[4] == iVar4) {
        iVar1 = iVar4 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x24) & 0x7fffffff) <= iVar4) {
          FUN_030a0864(plVar13,(long)iVar1);
          iVar4 = (int)param_1[4];
        }
        puVar14 = (uint *)(param_1[3] + (long)iVar4 * 0x28);
        puVar14[2] = uVar10;
        puVar14[3] = uVar11;
        *puVar14 = uVar3;
        puVar14[4] = uVar12;
        puVar14[9] = local_70;
        *(ulong *)(puVar14 + 7) = CONCAT35(uStack_73,uStack_78);
        *(ulong *)(puVar14 + 5) = CONCAT35(uStack_7b,local_80);
        *(int *)(param_1 + 4) = iVar1;
      }
      else {
LAB_030a070c:
        lVar6 = *plVar13 + (long)iVar4 * 0x28;
        *(uint *)(lVar6 + 8) = uVar10;
        *(uint *)(lVar6 + 0xc) = uVar11;
        *(uint *)(lVar6 + 0x10) = uVar12;
        *(ulong *)(lVar6 + 0x19) = CONCAT53(uStack_78,uStack_7b);
        *(ulong *)(lVar6 + 0x14) = CONCAT35(uStack_7b,local_80);
      }
    }
    else {
LAB_030a0540:
      if ((uVar10 == 0xffffffff) ||
         (iVar4 = (**(code **)(*(long *)param_1[1] + 8))
                            ((long *)param_1[1],param_2 & 0xffffffff,uVar3), iVar4 == 0))
      goto LAB_030a05b8;
      iVar4 = (int)((long *)param_1[2])[1];
      if (1 < iVar4) {
        uVar11 = (uVar10 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar10 * -0x61c8864f & 0xff00ff) << 8;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
        while( true ) {
          uVar11 = iVar4 - 1U & uVar11;
          uVar2 = *(uint *)(*(long *)param_1[2] + (long)(int)uVar11 * 4);
          if (uVar2 == 0xffffffff) break;
          if (uVar2 == uVar10) {
            if ((int)uVar11 < iVar4) goto LAB_030a0730;
            break;
          }
          uVar11 = uVar11 + 1;
        }
      }
      iVar4 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],uVar10);
      if (iVar4 == 0) {
        uVar10 = *puVar14 | uVar7;
        uVar11 = puVar14[1] | uVar7;
        iVar4 = FUN_030a0768(plVar13,local_68);
        if ((int)param_1[4] == iVar4) {
          iVar1 = iVar4 + 1;
          if ((int)(*(uint *)((long)param_1 + 0x24) & 0x7fffffff) <= iVar4) {
            FUN_030a0864(plVar13,(long)iVar1);
            iVar4 = (int)param_1[4];
          }
          puVar14 = (uint *)(param_1[3] + (long)iVar4 * 0x28);
          puVar14[2] = uVar10;
          puVar14[3] = uVar11;
          *puVar14 = uVar3;
          puVar14[4] = uVar12;
          puVar14[9] = local_70;
          *(ulong *)(puVar14 + 7) = CONCAT35(uStack_73,uStack_78);
          *(ulong *)(puVar14 + 5) = CONCAT35(uStack_7b,local_80);
          *(int *)(param_1 + 4) = iVar1;
          goto LAB_030a0730;
        }
        goto LAB_030a070c;
      }
      FUN_030a0340(param_1,uVar10);
    }
LAB_030a0730:
    iVar5 = iVar5 + 1;
    if ((short)piVar16[2] <= iVar5) {
      return;
    }
    lVar6 = *(long *)(lVar15 + 0x20);
  } while( true );
}


