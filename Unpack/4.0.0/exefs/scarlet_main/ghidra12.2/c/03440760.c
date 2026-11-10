/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03440760; name: FUN_03440760
 */


void FUN_03440760(long param_1,int param_2,uint param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  long *plVar17;
  
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = (param_2 - 1U) / param_3;
  }
  param_3 = (uVar4 + 1) * param_3;
  do {
    if (((param_3 != 0) && (param_3 <= *(uint *)(param_1 + 0x344))) &&
       (0 < (int)*(uint *)(param_1 + 0x350))) {
      uVar6 = 0;
      plVar8 = (long *)(param_1 + 0x48);
LAB_034407e0:
      if (((uint)(1 << (ulong)(*(int *)(param_1 + 0x34c) + (int)uVar6 & 0x1f)) < param_3) ||
         (plVar17 = (long *)*plVar8, plVar17 == (long *)0x0)) break;
      if (*plVar17 == 0) {
        plVar8[-1] = 0;
        *plVar8 = 0;
      }
      else {
        *plVar8 = *plVar17;
      }
      *(int *)(plVar8 + -2) = (int)plVar8[-2] + -1;
      if ((int)uVar6 != 0) {
        iVar12 = *(int *)(param_1 + 0x338);
        do {
          uVar9 = uVar6 - 1;
          uVar2 = *(int *)(param_1 + 0x344) - param_3;
          uVar4 = *(int *)(param_1 + 0x34c) + (int)uVar9;
          if ((uVar2 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
            if (*(long *)(param_1 + 0x338) == 0) {
              puVar14 = (undefined8 *)(param_1 + uVar9 * 0x18 + 0x48);
              puVar10 = (undefined8 *)*puVar14;
              puVar11 = (undefined8 *)0x0;
            }
            else {
              puVar11 = (undefined8 *)
                        (*(long *)(param_1 + 0x338) +
                        (ulong)((*(int *)(param_1 + 0x344) + ((int)plVar17 - iVar12)) -
                               (-1 << (ulong)(uVar4 & 0x1f) & uVar2)));
              *puVar11 = 0;
              puVar14 = (undefined8 *)(param_1 + uVar9 * 0x18 + 0x48);
              puVar10 = (undefined8 *)*puVar14;
              if ((puVar10 != (undefined8 *)0x0) && (puVar10 < puVar11)) {
                do {
                  puVar14 = puVar10;
                  puVar10 = (undefined8 *)*puVar14;
                } while ((puVar10 != (undefined8 *)0x0 && puVar10 <= puVar11) &&
                         (puVar10 == (undefined8 *)0x0 || puVar11 != puVar10));
              }
            }
            *puVar11 = puVar10;
            *puVar14 = puVar11;
            if (puVar10 == (undefined8 *)0x0) {
              *(undefined8 **)(param_1 + uVar9 * 0x18 + 0x40) = puVar11;
            }
            lVar7 = param_1 + uVar9 * 0x18;
            *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
          }
          bVar1 = 1 < (long)uVar6;
          uVar6 = uVar9;
        } while (bVar1);
      }
      puVar16 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,0x28);
      if (puVar16 != (ulong *)0x0) {
        *puVar16 = 0;
        puVar16[1] = (ulong)plVar17;
        *(uint *)((long)puVar16 + 0x1c) = param_3;
        *(undefined4 *)(puVar16 + 4) = 0xffffffff;
        puVar16[2] = 0;
        *(undefined2 *)((long)puVar16 + 0x24) = 0;
        *(int *)(puVar16 + 3) = param_2;
        *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
        *param_4 = (long)puVar16;
        goto LAB_03440ae0;
      }
      FUN_03440fe0(param_1 + 0x38,(int)plVar17 - *(int *)(param_1 + 0x338),param_3);
    }
LAB_0344090c:
    *param_4 = 0;
    lVar7 = *(long *)(param_1 + 0x18);
    *param_4 = lVar7;
    if (lVar7 == 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x360) + 0x218) = 1;
      return;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar7 + 0x18);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
      if (lVar7 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *(long *)(param_1 + 0x18) = lVar7;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
    *(undefined8 *)(*param_4 + 0x10) = 0;
    puVar16 = (ulong *)*param_4;
    uVar4 = *(uint *)((long)puVar16 + 0x1c);
    if (uVar4 != param_3) {
      uVar2 = (uint)puVar16[4];
      if (uVar2 != 0xffffffff) {
        iVar5 = *(uint *)(param_1 + 0x30) - 1;
        lVar7 = *(long *)(param_1 + 0x28);
        iVar12 = 0;
        iVar13 = iVar5;
        while( true ) {
          iVar3 = iVar13 - iVar12;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          uVar4 = iVar12 + (iVar3 >> 1);
          puVar15 = *(ulong **)(lVar7 + (ulong)uVar4 * 8);
          if ((uint)puVar15[4] <= uVar2) break;
LAB_034409d4:
          iVar13 = uVar4 - 1;
LAB_034409e4:
          if (iVar13 < iVar12) goto LAB_034409ec;
        }
        if ((uint)puVar15[4] < uVar2) {
LAB_034409e0:
          iVar12 = uVar4 + 1;
          goto LAB_034409e4;
        }
        if (*puVar15 < *puVar16) goto LAB_034409d4;
        if (*puVar16 < *puVar15) goto LAB_034409e0;
        if (puVar16[1] < puVar15[1]) goto LAB_034409d4;
        if (puVar16[1] != puVar15[1]) goto LAB_034409e0;
        puVar10 = (undefined8 *)((lVar7 + (ulong)*(uint *)(param_1 + 0x30) * 8) - 8);
        puVar11 = (undefined8 *)(lVar7 + (ulong)uVar4 * 8);
        if (puVar11 < puVar10) {
          do {
            puVar14 = puVar11 + 1;
            *puVar11 = *puVar14;
            puVar11 = puVar14;
          } while (puVar14 < puVar10);
          iVar5 = *(int *)(param_1 + 0x30) + -1;
        }
        *(int *)(param_1 + 0x30) = iVar5;
LAB_034409ec:
        *(undefined4 *)(puVar16 + 4) = 0xffffffff;
        puVar16 = (ulong *)*param_4;
        uVar4 = *(uint *)((long)puVar16 + 0x1c);
      }
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - uVar4;
      FUN_03440fe0(param_1 + 0x38,(int)puVar16[1] - *(int *)(param_1 + 0x338),
                   *(undefined4 *)((long)puVar16 + 0x1c));
      if (puVar16 != (ulong *)0x0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7,puVar16);
      }
      lVar7 = *(long *)(param_1 + 0x360);
      if ((*(char *)(lVar7 + 0x218) != '\0') &&
         (*(undefined1 *)(lVar7 + 0x218) = 0, *(int *)(lVar7 + 0x214) != 0)) {
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x208));
      }
      puVar16 = (ulong *)0x0;
      *param_4 = 0;
    }
    if (puVar16 != (ulong *)0x0) {
LAB_03440ae0:
      *(short *)((long)puVar16 + 0x24) = *(short *)((long)puVar16 + 0x24) + 1;
      return;
    }
  } while( true );
  uVar6 = uVar6 + 1;
  plVar8 = plVar8 + 3;
  if (*(uint *)(param_1 + 0x350) == uVar6) goto LAB_0344090c;
  goto LAB_034407e0;
}


