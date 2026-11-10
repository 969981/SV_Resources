/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03072d30; name: FUN_03072d30
 */


void FUN_03072d30(long *param_1,long param_2,uint *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 local_38 [2];
  
  *param_1 = 0;
  lVar14 = *(long *)PTR_DAT_047e4f50;
  iVar11 = *(int *)(lVar14 + 0x1c);
  *(bool *)(param_1 + 1) = 0 < iVar11;
  if (iVar11 < 1) {
    return;
  }
  lVar16 = tpidr_el0;
  lVar5 = *(long *)(lVar16 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar5;
  }
  plVar15 = *(long **)(lVar5 + 0x3e0);
  *param_1 = (long)plVar15;
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))(&DAT_03c7fb74,0,*(undefined8 *)(lVar16 + 0x28));
    }
    puVar9 = (undefined8 *)plVar15[2];
    uVar8 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar15[3]) && (plVar15[2] = uVar8, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = &DAT_03c7fb72;
      uVar4 = nn::os::GetSystemTick();
      puVar9[1] = uVar4;
    }
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar9 = (undefined8 *)plVar15[2];
      uVar8 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar15[3]) && (plVar15[2] = uVar8, puVar9 != (undefined8 *)0x0)) {
        *puVar9 = &DAT_03c4e575;
        puVar9[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
  }
  lVar16 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(*param_3 >> 0xe) & 0x3ff00));
  FUN_03056218(local_38,*(undefined4 *)(lVar14 + 0x20),
               *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x180),0);
  puVar3 = PTR_DAT_047e48d8;
  lVar14 = *param_1;
  if ((lVar14 != 0) && (puVar9 = *(undefined8 **)(lVar14 + 0x10), puVar9 != (undefined8 *)0x0)) {
    puVar12 = (undefined4 *)((long)puVar9 + 0x13U & 0xfffffffffffffffc);
    uVar8 = (long)puVar12 + 0xbU & 0xfffffffffffffff8;
    if (uVar8 <= *(ulong *)(lVar14 + 0x18)) {
      *(ulong *)(lVar14 + 0x10) = uVar8;
      *puVar9 = &DAT_03c1a9df;
      puVar9[1] = puVar3;
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = local_38[0];
      }
    }
  }
  puVar3 = PTR_DAT_047e4f58;
  uVar8 = (ulong)*param_3 & 0x3fffff;
  lVar14 = *(long *)(lVar16 + 0x20);
  iVar7 = (int)uVar8;
  iVar11 = iVar7 - *(int *)(lVar14 + 0x30);
  if (iVar7 < *(int *)(lVar14 + 0x30)) {
    iVar11 = iVar7;
    if ((*(int *)(lVar14 + 0x78) != 0) &&
       (iVar11 = *(int *)(*(long *)(lVar14 + 0x70) + uVar8 * 4), iVar11 == -1)) {
      piVar10 = (int *)(*(long *)(lVar14 + 0x28) + uVar8 * 0x14);
      goto LAB_03072f18;
    }
    lVar5 = *(long *)(lVar14 + 0xc0);
  }
  else {
    lVar5 = *(long *)(lVar14 + 0xe0);
  }
  piVar10 = (int *)(lVar5 + (long)iVar11 * 0x14);
LAB_03072f18:
  iVar11 = *piVar10;
  iVar7 = piVar10[1];
  iVar2 = *(int *)(lVar14 + 0x40);
  puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)iVar11 * 0x10);
  if (iVar2 <= iVar11) {
    puVar9 = (undefined8 *)(*(long *)(lVar14 + 0xf0) + (long)(iVar11 - iVar2) * 0x10);
  }
  lVar5 = *param_1;
  puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)iVar7 * 0x10);
  if (iVar2 <= iVar7) {
    puVar1 = (undefined8 *)(*(long *)(lVar14 + 0xf0) + (long)(iVar7 - iVar2) * 0x10);
  }
  if ((lVar5 != 0) && (puVar13 = *(undefined8 **)(lVar5 + 0x10), puVar13 != (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)((long)puVar13 + 0x13U & 0xfffffffffffffffc);
    uVar8 = (long)puVar6 + 0x13U & 0xfffffffffffffff8;
    if (uVar8 <= *(ulong *)(lVar5 + 0x18)) {
      uVar22 = *(undefined8 *)(lVar16 + 0x68);
      uVar21 = *(undefined8 *)(lVar16 + 0x60);
      uVar24 = *(undefined8 *)(lVar16 + 0x78);
      uVar23 = *(undefined8 *)(lVar16 + 0x70);
      uVar20 = puVar9[1];
      uVar4 = *puVar9;
      uVar26 = puVar1[1];
      uVar25 = *puVar1;
      uVar30 = *(undefined8 *)(lVar16 + 0x88);
      uVar29 = *(undefined8 *)(lVar16 + 0x80);
      uVar28 = *(undefined8 *)(lVar16 + 0x98);
      uVar27 = *(undefined8 *)(lVar16 + 0x90);
      *(ulong *)(lVar5 + 0x10) = uVar8;
      *puVar13 = &DAT_03c1a9df;
      puVar13[1] = puVar3;
      if (puVar6 != (undefined8 *)0x0) {
        fVar17 = (float)uVar4;
        fVar18 = (float)((ulong)uVar4 >> 0x20);
        fVar17 = fVar17 + ((float)uVar25 - fVar17) * 0.5;
        fVar18 = fVar18 + ((float)((ulong)uVar25 >> 0x20) - fVar18) * 0.5;
        fVar19 = (float)uVar20 + ((float)uVar26 - (float)uVar20) * 0.5;
        *puVar6 = CONCAT44((float)((ulong)uVar27 >> 0x20) +
                           (float)((ulong)uVar29 >> 0x20) * fVar19 +
                           (float)((ulong)uVar21 >> 0x20) * fVar17 +
                           (float)((ulong)uVar23 >> 0x20) * fVar18,
                           (float)uVar27 +
                           (float)uVar29 * fVar19 + (float)uVar21 * fVar17 + (float)uVar23 * fVar18)
        ;
        *(float *)(puVar6 + 1) =
             (float)uVar28 +
             (float)uVar30 * fVar19 + (float)uVar22 * fVar17 + (float)uVar24 * fVar18;
      }
    }
  }
  return;
}


