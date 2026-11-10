/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e3d70; name: FUN_034e3d70
 */


undefined8 FUN_034e3d70(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_047e2fd0;
  if ((int)param_1[1] != 0) {
    lVar17 = *(long *)*param_1;
    if (lVar17 == 0) {
      uVar5 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar5) goto LAB_034e3f68;
        uVar5 = uVar5 + 1;
        lVar17 = ((long *)*param_1)[uVar5 & 0xffffffff];
      } while (lVar17 == 0);
    }
    else {
      uVar5 = 0;
    }
    uVar19 = uVar5 & 0xffffffff;
    puVar1 = PTR_DAT_047e7308 + 0x10;
    do {
      lVar9 = *(long *)(lVar17 + 8);
      lVar20 = lVar9;
      if (lVar9 == 0) {
        uVar16 = *(uint *)(param_1 + 1);
        uVar14 = uVar5 & 0xffffffff;
        uVar8 = uVar16;
        if (uVar16 <= (int)uVar5 + 1U) {
          uVar8 = (int)uVar5 + 1;
        }
        uVar19 = (ulong)uVar8;
        do {
          uVar8 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar8;
          if (uVar16 <= uVar8) {
            lVar20 = 0;
            goto LAB_034e3e2c;
          }
          lVar20 = *(long *)(*param_1 + (ulong)uVar8 * 8);
        } while (lVar20 == 0);
        uVar19 = uVar14;
      }
LAB_034e3e2c:
      *(long *)(*param_1 + (uVar5 & 0xffffffff) * 8) = lVar9;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      local_90 = 0;
      FUN_034b4d58(lVar17 + 0x38,&local_90);
      if (*(int *)(lVar17 + 0x20) != 0) {
        FUN_034b6c14(*(undefined8 *)PTR_DAT_047e6fd8,lVar17,0x3c);
        *(undefined4 *)(lVar17 + 0x20) = 0;
        if (*(long *)(lVar17 + 0x10) != 0) {
          *(undefined4 *)(lVar17 + 0x18) = 0;
          (**(code **)(puVar4 + 0x30))(2);
          *(undefined8 *)(lVar17 + 0x10) = 0;
          *(undefined4 *)(lVar17 + 0x1c) = 0;
        }
      }
      puVar18 = *(undefined8 **)(lVar17 + 0x48);
      if (*(uint *)(lVar17 + 0x50) != 0) {
        lVar9 = (ulong)*(uint *)(lVar17 + 0x50) * 0x28;
        do {
          FUN_034b9cd0(puVar18);
          puVar18 = puVar18 + 5;
          lVar9 = lVar9 + -0x28;
        } while (lVar9 != 0);
        puVar18 = *(undefined8 **)(lVar17 + 0x48);
      }
      if (puVar18 != (undefined8 *)0x0) {
        if (*(uint *)(lVar17 + 0x50) != 0) {
          lVar9 = (ulong)*(uint *)(lVar17 + 0x50) * 0x28;
          do {
            (**(code **)*puVar18)(puVar18);
            lVar9 = lVar9 + -0x28;
            puVar18 = puVar18 + 5;
          } while (lVar9 != 0);
          puVar18 = *(undefined8 **)(lVar17 + 0x48);
        }
        *(undefined4 *)(lVar17 + 0x50) = 0;
        (**(code **)(puVar4 + 0x30))(0,puVar18);
        *(undefined8 *)(lVar17 + 0x48) = 0;
        *(undefined4 *)(lVar17 + 0x54) = 0;
      }
      if (*(long *)(lVar17 + 0x28) != 0) {
        *(undefined4 *)(lVar17 + 0x30) = 0;
        (**(code **)(puVar4 + 0x30))(0);
        *(undefined8 *)(lVar17 + 0x28) = 0;
        *(undefined4 *)(lVar17 + 0x34) = 0;
      }
      *(undefined **)(lVar17 + 0x38) = puVar1;
      (**(code **)(puVar4 + 0x30))(2,lVar17);
      uVar5 = uVar19;
      lVar17 = lVar20;
    } while (lVar20 != 0);
  }
LAB_034e3f68:
  if ((int)param_1[4] != 0) {
    uVar5 = *(ulong *)param_1[3];
    if (uVar5 == 0) {
      uVar19 = 0;
      do {
        if ((int)param_1[4] - 1 == uVar19) goto LAB_034e40c0;
        uVar19 = uVar19 + 1;
        uVar5 = ((ulong *)param_1[3])[uVar19 & 0xffffffff];
      } while (uVar5 == 0);
    }
    else {
      uVar19 = 0;
    }
    do {
      uVar10 = *(ulong *)(uVar5 + 8);
      uVar6 = uVar19 & 0xffffffff;
      uVar14 = uVar10;
      if (uVar10 == 0) {
        uVar16 = *(uint *)(param_1 + 4);
        uVar15 = uVar19 & 0xffffffff;
        uVar8 = uVar16;
        if (uVar16 <= (int)uVar19 + 1U) {
          uVar8 = (int)uVar19 + 1;
        }
        uVar19 = (ulong)uVar8;
        do {
          uVar8 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar8;
          if (uVar16 <= uVar8) {
            uVar14 = 0;
            goto LAB_034e3fec;
          }
          uVar14 = *(ulong *)(param_1[3] + (ulong)uVar8 * 8);
        } while (uVar14 == 0);
        uVar19 = uVar15;
      }
LAB_034e3fec:
      *(ulong *)(param_1[3] + uVar6 * 8) = uVar10;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      uVar8 = *(uint *)(param_1 + 1);
      if (uVar8 != 0) {
        uVar16 = *(uint *)(uVar5 + 0x10);
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar16 / uVar8;
        }
        for (puVar7 = *(uint **)(*param_1 + (ulong)(uVar16 - uVar3 * uVar8) * 8);
            puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 2)) {
          if (*puVar7 == uVar16) {
            uVar8 = puVar7[0xc];
            if (uVar8 != 0) {
              lVar17 = *(long *)(puVar7 + 10);
              iVar13 = 0;
              uVar16 = uVar8;
              goto LAB_034e404c;
            }
            break;
          }
        }
      }
LAB_034e40b0:
      (**(code **)(puVar4 + 0x30))(2);
      uVar5 = uVar14;
    } while (uVar14 != 0);
  }
LAB_034e40c0:
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar4 + 0x30))(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(puVar4 + 0x30))(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x37) = 0;
    if (param_1 + 6 != (long *)param_1[0x36]) {
      (**(code **)(puVar4 + 0x30))(0);
    }
    param_1[0x36] = 0;
    *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  }
  return 1;
LAB_034e404c:
  iVar2 = iVar13 + (uVar16 >> 1);
  uVar6 = *(ulong *)(lVar17 + (long)iVar2 * 8);
  if (uVar6 != uVar5) goto code_r0x034e4060;
  puVar18 = (undefined8 *)(lVar17 + (long)iVar2 * 8);
  puVar12 = (undefined8 *)((lVar17 + (ulong)uVar8 * 8) - 8);
  if (puVar18 < puVar12) {
    do {
      puVar11 = puVar18 + 1;
      *puVar18 = *puVar11;
      puVar18 = puVar11;
    } while (puVar11 < puVar12);
    uVar8 = puVar7[0xc];
  }
  puVar7[0xc] = uVar8 - 1;
  goto LAB_034e40b0;
code_r0x034e4060:
  if (uVar6 < uVar5) {
    iVar13 = iVar2 + 1;
  }
  uVar16 = uVar16 - (uVar6 < uVar5) >> 1;
  if (uVar16 == 0) goto LAB_034e40b0;
  goto LAB_034e404c;
}


