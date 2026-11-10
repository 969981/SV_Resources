/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00127330; name: FUN_00127330
 */


void FUN_00127330(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  
  sVar2 = *(short *)((long)param_2 + 0x3c);
  uVar15 = (uint)sVar2;
  if (-2 < sVar2 && *(int *)(param_1 + 0xc0) != 0) {
    if ((*(uint *)(param_1 + 0xc0) >> 1 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      if ((*(byte *)((long)param_2 + 0x3e) >> 1 & 1) == 0) {
        plVar16 = (long *)*param_2;
        if (*(char *)(*(long *)(*plVar16 + 0x18) + 0xb) == '\0') goto LAB_00127658;
        lVar6 = (long)(int)(*(int *)((long)param_2 + 0x2c) +
                            (uint)*(byte *)(*(long *)(*plVar16 + 0x18) + 10) + 1);
      }
      else {
        plVar16 = (long *)*param_2;
LAB_00127658:
        lVar6 = 0;
      }
      *param_2 = (long)(plVar16 + lVar6 * 2);
      FUN_00127080(param_1,1,0xffffffff,
                   ((int)uVar7 + param_3 * -0x10) - (int)(plVar16 + lVar6 * 2) >> 4 & 0xffff,param_3
                  );
      *param_2 = *param_2 + lVar6 * -0x10;
    }
    puVar3 = (undefined8 *)param_2[2];
    if ((*(byte *)((long)puVar3 + 0x3e) >> 1 & 1) == 0) {
      *(int *)(param_1 + 0xb4) =
           (int)((ulong)(puVar3[4] - *(long *)(*(long *)(*(long *)*puVar3 + 0x18) + 0x40)) >> 2) +
           -1;
    }
  }
  puVar3 = (undefined8 *)*param_2;
  if (sVar2 == -1) {
    uVar15 = param_3;
LAB_001274d8:
    uVar5 = uVar15;
    if ((int)param_3 <= (int)uVar15) {
      uVar5 = param_3;
    }
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      if (uVar5 == 1) {
        uVar12 = 0;
      }
      else {
        puVar8 = puVar3 + 2;
        puVar14 = (undefined8 *)(lVar6 + (1 - (long)(int)param_3) * 0x10);
        uVar12 = 0;
        do {
          puVar8[-2] = puVar14[-2];
          *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(puVar14 + -1);
          *puVar8 = *puVar14;
          puVar1 = puVar14 + 1;
          uVar12 = uVar12 + 2;
          puVar14 = puVar14 + 4;
          *(undefined1 *)(puVar8 + 1) = *(undefined1 *)puVar1;
          puVar8 = puVar8 + 4;
        } while (((ulong)uVar5 & 0xfffffffe) != uVar12);
      }
      if ((uVar5 & 1) != 0) {
        puVar8 = (undefined8 *)(lVar6 + (long)(int)param_3 * -0x10 + uVar12 * 0x10);
        puVar3[uVar12 * 2] = *puVar8;
        *(undefined1 *)(puVar3 + uVar12 * 2 + 1) = *(undefined1 *)(puVar8 + 1);
      }
    }
    if ((int)uVar5 < (int)uVar15) {
      uVar12 = (ulong)uVar5;
      uVar9 = ~uVar12;
      uVar13 = (ulong)(uVar15 - uVar5) & 3;
      if ((uVar15 - uVar5 & 3) != 0) {
        puVar8 = puVar3 + uVar12 * 2 + 1;
        do {
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 - 1;
          *(undefined1 *)puVar8 = 0;
          puVar8 = puVar8 + 2;
        } while (uVar13 != 0);
      }
      if (2 < uVar9 + uVar15) {
        lVar6 = uVar15 - uVar12;
        puVar8 = puVar3 + uVar12 * 2 + 5;
        do {
          *(undefined1 *)(puVar8 + -4) = 0;
          lVar6 = lVar6 + -4;
          *(undefined1 *)(puVar8 + -2) = 0;
          *(undefined1 *)puVar8 = 0;
          *(undefined1 *)(puVar8 + 2) = 0;
          puVar8 = puVar8 + 8;
        } while (lVar6 != 0);
      }
    }
    puVar3 = puVar3 + (long)(int)uVar15 * 2;
  }
  else {
    if (sVar2 != 1) {
      if (sVar2 == 0) {
        *(undefined8 **)(param_1 + 0x10) = puVar3;
        goto LAB_001275f0;
      }
      if (-2 < (int)uVar15) goto LAB_001274d8;
      lVar6 = *(long *)(param_1 + 0x30);
      *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) =
           *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) | 0x200;
      *(uint *)(*(long *)(param_1 + 0x20) + 0x38) = param_3;
      FUN_001299c0(param_1,puVar3,0xffffffff,1);
      *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) =
           *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) & 0xfdff;
      if (*(int *)(param_1 + 0xc0) != 0) {
        plVar16 = *(long **)(param_1 + 0x20);
        if ((*(uint *)(param_1 + 0xc0) >> 1 & 1) != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          if ((*(byte *)((long)plVar16 + 0x3e) >> 1 & 1) == 0) {
            plVar10 = (long *)*plVar16;
            if (*(char *)(*(long *)(*plVar10 + 0x18) + 0xb) == '\0') goto LAB_00127458;
            lVar11 = (long)(int)(*(int *)((long)plVar16 + 0x2c) +
                                 (uint)*(byte *)(*(long *)(*plVar10 + 0x18) + 10) + 1);
          }
          else {
            plVar10 = (long *)*plVar16;
LAB_00127458:
            lVar11 = 0;
          }
          *plVar16 = (long)(plVar10 + lVar11 * 2);
          FUN_00127080(param_1,1,0xffffffff,
                       ((int)uVar7 + param_3 * -0x10) - (int)(plVar10 + lVar11 * 2) >> 4 & 0xffff,
                       param_3);
          *plVar16 = *plVar16 + lVar11 * -0x10;
        }
        puVar8 = (undefined8 *)plVar16[2];
        if ((*(byte *)((long)puVar8 + 0x3e) >> 1 & 1) == 0) {
          *(int *)(param_1 + 0xb4) =
               (int)((ulong)(puVar8[4] - *(long *)(*(long *)(*(long *)*puVar8 + 0x18) + 0x40)) >> 2)
               + -1;
        }
      }
      puVar3 = (undefined8 *)((long)puVar3 + (*(long *)(param_1 + 0x30) - lVar6));
      uVar5 = param_3;
      if (-uVar15 - 3 != 0xffffffff) {
        uVar5 = -uVar15 - 3;
      }
      uVar15 = uVar5;
      goto LAB_001274d8;
    }
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * -0x10);
      *puVar3 = *puVar8;
      uVar4 = *(undefined1 *)(puVar8 + 1);
    }
    *(undefined1 *)(puVar3 + 1) = uVar4;
    puVar3 = puVar3 + 2;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3;
LAB_001275f0:
  *(long *)(param_1 + 0x20) = param_2[2];
  return;
}


