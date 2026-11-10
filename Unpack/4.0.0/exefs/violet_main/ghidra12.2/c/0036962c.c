/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036962c; name: FUN_0036962c
 */


void FUN_0036962c(undefined8 *param_1,void *param_2,size_t param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  void *__ptr;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar6 = FUN_0038cbd0(param_2,param_3,*(undefined4 *)PTR_DAT_047cc650);
  uVar8 = DAT_047f07e4;
  if (param_2 == (void *)0x0) {
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
    } while (uVar8 <= DAT_047f07e4);
  }
  else {
    lVar22 = *(long *)PTR_DAT_047cc628;
    uVar19 = 0;
    uVar25 = uVar6;
    do {
      lVar9 = (ulong)(uVar25 % 0x1b0) * 8;
      if ((((*(uint *)(&DAT_047efa5c + lVar9) == uVar6) && (*(uint *)(&DAT_047efa60 + lVar9) < 0x6c)
           ) && (puVar20 = (undefined8 *)(lVar22 + (ulong)*(uint *)(&DAT_047efa60 + lVar9) * 0x20),
                puVar20[1] == param_3)) &&
         (iVar7 = memcmp(param_2,(void *)puVar20[2],param_3), iVar7 == 0)) {
        uVar14 = *puVar20;
        uVar27 = puVar20[3];
        uVar26 = puVar20[2];
        param_1[1] = puVar20[1];
        *param_1 = uVar14;
        param_1[3] = uVar27;
        param_1[2] = uVar26;
        return;
      }
      uVar19 = uVar19 + 1;
      uVar25 = uVar25 + 1;
    } while (uVar19 <= uVar8);
  }
  uVar24 = (ulong)(uVar6 & 0x1f);
  FUN_0038db40(&DAT_047f07e8 + uVar24 * 0x38);
  puVar21 = &DAT_047f0818 + uVar24 * 7;
  uVar10 = *puVar21;
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar18 = (uVar6 >> 5) / uVar10;
  }
  lVar22 = (ulong)(uVar6 >> 5) - uVar18 * uVar10;
  plVar23 = &DAT_047f0808 + uVar24 * 7;
  puVar20 = *(undefined8 **)(*plVar23 + lVar22 * 8);
  if (puVar20 != (undefined8 *)0x0) {
    if (param_2 == (void *)0x0) {
      do {
        puVar20 = (undefined8 *)puVar20[0xd];
      } while (puVar20 != (undefined8 *)0x0);
    }
    else {
      do {
        if (((*(uint *)(puVar20 + 0xc) == uVar6) && (puVar20[10] == param_3)) &&
           (iVar7 = memcmp(param_2,puVar20 + 0xe,param_3), iVar7 == 0)) {
          plVar1 = puVar20 + 0xb;
          lVar9 = *plVar1;
          while (lVar9 != 0) {
            lVar16 = *plVar1;
            if (lVar16 == lVar9) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              lVar9 = lVar16;
              if (cVar2 == '\0') {
                if (puVar20 == (undefined8 *)0x0) goto LAB_00369800;
                goto LAB_0036990c;
              }
            }
            else {
              ClearExclusiveLocal();
              lVar9 = lVar16;
            }
          }
        }
        puVar20 = (undefined8 *)puVar20[0xd];
      } while (puVar20 != (undefined8 *)0x0);
    }
  }
LAB_00369800:
  puVar20 = (undefined8 *)FUN_0038c780(param_3 + 0x70);
  lVar9 = *plVar23;
  uVar14 = *(undefined8 *)(lVar9 + lVar22 * 8);
  puVar13 = puVar20 + 0xb;
  *puVar13 = 1;
  *(undefined4 *)(puVar20 + 1) = 1;
  *puVar20 = puVar13;
  puVar11 = puVar20 + 5;
  *puVar11 = puVar13;
  puVar5 = PTR_FUN_047ccef8;
  puVar20[2] = puVar11;
  puVar20[3] = puVar5;
  puVar20[4] = puVar20;
  *(undefined4 *)(puVar20 + 6) = 3;
  puVar20[7] = puVar11;
  puVar20[8] = puVar5;
  puVar20[9] = puVar20;
  puVar20[10] = param_3;
  *(uint *)(puVar20 + 0xc) = uVar6;
  puVar20[0xd] = uVar14;
  if (param_3 != 0) {
    memcpy(puVar20 + 0xe,param_2,param_3);
    lVar9 = *plVar23;
  }
  *(undefined8 **)(lVar9 + lVar22 * 8) = puVar20;
  lVar22 = (&DAT_047f0810)[uVar24 * 7];
  (&DAT_047f0810)[uVar24 * 7] = lVar22 + 1U;
  uVar18 = *puVar21 * 2;
  if (uVar18 < lVar22 + 1U) {
    lVar22 = FUN_0038c7b0(*puVar21 << 4);
    uVar10 = *puVar21;
    __ptr = (void *)*plVar23;
    if (uVar10 != 0) {
      uVar12 = 0;
      do {
        lVar9 = *(long *)((long)__ptr + uVar12 * 8);
        if (lVar9 != 0) {
          do {
            uVar15 = (ulong)(*(uint *)(lVar9 + 0x60) >> 5);
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar15 / uVar18;
            }
            lVar17 = *(long *)(lVar9 + 0x68);
            lVar16 = (uVar15 - uVar4 * uVar18) * 8;
            *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar22 + lVar16);
            *(long *)(lVar22 + lVar16) = lVar9;
            lVar9 = lVar17;
          } while (lVar17 != 0);
          __ptr = (void *)*plVar23;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar10);
    }
    free(__ptr);
    *plVar23 = lVar22;
    *puVar21 = uVar18;
  }
LAB_0036990c:
  FUN_0038db60(&DAT_047f07e8 + uVar24 * 0x38);
  uVar14 = puVar20[10];
  param_1[2] = puVar20 + 0xe;
  *param_1 = puVar20;
  param_1[1] = uVar14;
  return;
}


