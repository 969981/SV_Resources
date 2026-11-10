/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03530cb4; name: FUN_03530cb4
 */


undefined8 FUN_03530cb4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  void *__s;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  size_t __n;
  ushort uVar17;
  uint uVar18;
  ushort local_74 [2];
  byte local_70 [4];
  int local_6c;
  ushort local_68 [2];
  undefined1 auStack_64 [4];
  
  uVar16 = 2;
  uVar10 = (**(code **)*param_2)(param_2,local_68,2,auStack_64);
  puVar7 = PTR_DAT_047e2fd0;
  if (((uVar10 & 1) != 0) && (uVar16 = 1, local_68[0] != 0)) {
    uVar17 = 0;
    puVar2 = PTR_DAT_047e72a8 + 0x10;
    puVar3 = PTR_DAT_047e72b0 + 0x10;
    do {
      uVar10 = (**(code **)*param_2)(param_2,&local_6c,4,auStack_64);
      if (((uVar10 & 1) == 0) ||
         (uVar10 = (**(code **)*param_2)(param_2,local_70,1,auStack_64), (uVar10 & 1) == 0)) {
LAB_03530fc8:
        return 2;
      }
      uVar10 = (**(code **)*param_2)(param_2,local_74,2,auStack_64);
      uVar8 = local_74[0];
      if ((uVar10 & 1) == 0) goto LAB_03530fc8;
      uVar10 = (ulong)local_74[0];
      if (local_70[0] < 2) {
        if (local_74[0] == 0) {
          return 2;
        }
        plVar11 = (long *)(**(code **)(puVar7 + 0x10))(0,0x10);
        uVar6 = local_74[0];
        iVar9 = local_6c;
        if (plVar11 != (long *)0x0) {
          *plVar11 = (long)puVar2;
          *(undefined1 *)(plVar11 + 1) = 1;
          *(undefined2 *)((long)plVar11 + 10) = 0xffff;
        }
      }
      else {
        if (1 < local_70[0] - 2) {
          return 2;
        }
        if (local_74[0] == 0) {
          return 2;
        }
        plVar11 = (long *)(**(code **)(puVar7 + 0x10))(0,0x38);
        uVar6 = local_74[0];
        iVar9 = local_6c;
        if (plVar11 != (long *)0x0) {
          plVar11[3] = 0;
          plVar11[4] = 0;
          *plVar11 = (long)puVar3;
          plVar11[5] = 0;
          plVar11[6] = 0;
          *(uint *)(plVar11 + 1) = (uint)uVar8 * 50000;
          *(uint *)((long)plVar11 + 0xc) = (uint)uVar8 * 50000;
          *(ushort *)(plVar11 + 2) = uVar8;
          *(ushort *)((long)plVar11 + 0x12) = uVar8;
          uVar10 = uVar10 + 7 >> 3;
          __n = uVar10 << 1;
          __s = (void *)(**(code **)(puVar7 + 0x10))(0,__n);
          plVar11[5] = (long)__s;
          if (__s == (void *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            return 2;
          }
          plVar11[6] = (long)__s + uVar10;
          memset(__s,0,__n);
          uVar6 = local_74[0];
          iVar9 = local_6c;
        }
      }
      if (plVar11 == (long *)0x0) {
        return 2;
      }
      piVar12 = *(int **)(param_1 + 0x30);
      uVar5 = *(uint *)(param_1 + 0x38);
      piVar14 = piVar12;
      local_74[0] = uVar6;
      local_6c = iVar9;
      if ((uVar5 != 0) && (*piVar12 != iVar9)) {
        lVar13 = (ulong)uVar5 * 0x18;
        piVar15 = piVar12;
        do {
          lVar13 = lVar13 + -0x18;
          if (lVar13 == 0) goto LAB_03530efc;
          piVar14 = piVar15 + 6;
          piVar1 = piVar15 + 6;
          piVar15 = piVar14;
        } while (*piVar1 != iVar9);
      }
      if (piVar14 == piVar12 + (ulong)uVar5 * 6) {
LAB_03530efc:
        uVar18 = *(uint *)(param_1 + 0x3c);
        if (uVar18 <= uVar5) {
          iVar4 = uVar18 + (uVar18 >> 1);
          if (uVar18 == 0) {
            iVar4 = 1;
          }
          uVar18 = iVar4 + uVar18;
          piVar12 = (int *)(**(code **)(puVar7 + 0x20))(0,piVar12,(ulong)uVar18 * 0x18);
          if (piVar12 == (int *)0x0) {
            return 2;
          }
          *(int **)(param_1 + 0x30) = piVar12;
          *(uint *)(param_1 + 0x3c) = uVar18;
        }
        if (uVar18 <= uVar5) {
          return 2;
        }
        uVar5 = *(uint *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = uVar5 + 1;
        if (piVar12 == (int *)0x0) {
          return 2;
        }
        piVar12 = piVar12 + (ulong)uVar5 * 6;
        *piVar12 = iVar9;
        *(long **)(piVar12 + 2) = plVar11;
        *(ushort *)(piVar12 + 4) = uVar6;
      }
      else {
        *(long **)(piVar14 + 2) = plVar11;
        *(ushort *)(piVar14 + 4) = uVar6;
      }
      iVar9 = (**(code **)(*plVar11 + 0x30))(plVar11,param_2,local_74[0]);
      if (iVar9 != 1) {
        return 2;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < local_68[0]);
    uVar16 = 1;
  }
  return uVar16;
}


