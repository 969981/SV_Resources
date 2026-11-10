/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03480910; name: FUN_03480910
 */


void FUN_03480910(float param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float local_74;
  
  local_74 = param_1;
  plVar6 = (long *)(**(code **)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) + 0x38))();
  if ((plVar6 != (long *)0x0) && (*(uint *)(plVar6 + 1) != 0)) {
    pcVar8 = (char *)(*plVar6 + 2);
    lVar9 = (ulong)*(uint *)(plVar6 + 1) << 2;
    do {
      if ((uint)*(ushort *)(pcVar8 + -2) == (param_3 & 0xffff)) {
        cVar10 = *pcVar8;
        if (cVar10 == '\x03') {
          uVar7 = FUN_03480bf4();
        }
        else {
          uVar7 = FUN_03480d58(*(long *)(param_2 + 0x10) + 0x18,param_2,param_3,&local_74);
        }
        if ((uVar7 & 1) != 0) goto LAB_034809b8;
        break;
      }
      pcVar8 = pcVar8 + 4;
      lVar9 = lVar9 + -4;
    } while (lVar9 != 0);
  }
  cVar10 = '\0';
LAB_034809b8:
  lVar9 = *(long *)(param_2 + 0x10);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x58) != 0)) {
    puVar12 = *(undefined4 **)(lVar9 + 0x50);
    uVar11 = (int)param_2 + (param_3 & 0xffff);
    do {
      if ((uint)*(ushort *)((long)puVar12 + 6) == (param_3 & 0xffff)) {
        cVar10 = *(char *)((long)puVar12 + 5);
        fVar14 = 0.0;
        lVar9 = *(long *)PTR_DAT_047e6fd8;
        uVar13 = *(uint *)(lVar9 + 0x20);
        if (uVar13 != 0) {
          uVar5 = 0;
          if (uVar13 != 0) {
            uVar5 = uVar11 / uVar13;
          }
          fVar14 = 0.0;
          plVar6 = *(long **)(*(long *)(lVar9 + 0x18) + (ulong)(uVar11 - uVar5 * uVar13) * 8);
          if (plVar6 != (long *)0x0) {
            do {
              if ((*plVar6 == param_2) && (*(uint *)(plVar6 + 1) == (param_3 & 0xffff))) {
                if (*(int *)((long)plVar6 + 0x4c) == 3) {
                  fVar14 = (float)FUN_0348209c(lVar9,plVar6,param_2 + 0x18);
                }
                else {
                  fVar14 = (float)FUN_03482338(lVar9,plVar6,param_2 + 0x18);
                }
                goto LAB_03480a70;
              }
              plVar6 = (long *)plVar6[2];
            } while (plVar6 != (long *)0x0);
            fVar14 = 0.0;
          }
        }
LAB_03480a70:
        uVar5 = *(uint *)(param_2 + 0x50);
        uVar13 = *(uint *)(param_2 + 0x54);
        uVar4 = *puVar12;
        if (uVar13 <= uVar5) {
          iVar1 = uVar13 + (uVar13 >> 1);
          if (uVar13 == 0) {
            iVar1 = 1;
          }
          uVar13 = iVar1 + uVar13;
          lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                            (0,*(undefined8 *)(param_2 + 0x48),(ulong)uVar13 << 4);
          if (lVar9 == 0) goto LAB_03480b00;
          *(long *)(param_2 + 0x48) = lVar9;
          *(uint *)(param_2 + 0x54) = uVar13;
        }
        if (uVar5 < uVar13) {
          uVar13 = *(uint *)(param_2 + 0x50);
          *(uint *)(param_2 + 0x50) = uVar13 + 1;
          if (*(long *)(param_2 + 0x48) != 0) {
            puVar2 = (undefined4 *)(*(long *)(param_2 + 0x48) + (ulong)uVar13 * 0x10);
            *puVar2 = 1;
            puVar2[1] = uVar4;
            *(short *)(puVar2 + 2) = (short)param_3;
            puVar2[3] = fVar14;
            fVar15 = local_74 + fVar14;
            local_74 = local_74 * fVar14;
            if (cVar10 != '\x03') {
              local_74 = fVar15;
            }
          }
        }
      }
LAB_03480b00:
      puVar12 = puVar12 + 10;
    } while (puVar12 !=
             (undefined4 *)
             (*(long *)(*(long *)(param_2 + 0x10) + 0x50) +
             (ulong)*(uint *)(*(long *)(param_2 + 0x10) + 0x58) * 0x28));
  }
  if (cVar10 == '\x04') {
    local_74 = local_74 - param_1;
  }
  else {
    uVar13 = *(uint *)(param_2 + 0x50);
    uVar11 = *(uint *)(param_2 + 0x54);
    if (uVar11 <= uVar13) {
      iVar1 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar1 = 1;
      }
      uVar11 = iVar1 + uVar11;
      lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (0,*(undefined8 *)(param_2 + 0x48),(ulong)uVar11 << 4);
      if (lVar9 == 0) goto LAB_03480ba4;
      *(long *)(param_2 + 0x48) = lVar9;
      *(uint *)(param_2 + 0x54) = uVar11;
    }
    if (uVar13 < uVar11) {
      uVar11 = *(uint *)(param_2 + 0x50);
      *(uint *)(param_2 + 0x50) = uVar11 + 1;
      if (*(long *)(param_2 + 0x48) != 0) {
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x48) + (ulong)uVar11 * 0x10);
        *puVar3 = 0;
        *(short *)(puVar3 + 1) = (short)param_3;
        *(float *)((long)puVar3 + 0xc) = param_1;
      }
    }
  }
LAB_03480ba4:
  (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),param_3,&local_74,4);
  return;
}


