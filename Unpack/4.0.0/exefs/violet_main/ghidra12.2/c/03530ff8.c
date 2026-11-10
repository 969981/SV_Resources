/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03530ff8; name: FUN_03530ff8
 */


undefined8 FUN_03530ff8(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  void *__s;
  long lVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  uint uVar18;
  size_t __n;
  undefined *puVar19;
  ushort local_74 [2];
  ushort local_70 [2];
  byte local_6c [4];
  int local_68;
  undefined1 auStack_64 [4];
  
  uVar17 = 2;
  uVar7 = (**(code **)*param_2)(param_2,local_74,2,auStack_64);
  uVar5 = local_74[0];
  puVar19 = PTR_DAT_047e2fd0;
  if ((uVar7 & 1) != 0) {
    uVar18 = (uint)local_74[0];
    if (uVar18 == 0) {
LAB_035313e8:
      uVar17 = 1;
    }
    else {
      lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar18 * 0x18);
      param_1[2] = lVar8;
      if (lVar8 == 0) {
LAB_035313fc:
        uVar17 = 2;
      }
      else {
        *(uint *)((long)param_1 + 0x1c) = (uint)uVar5;
        uVar17 = 1;
        if (local_74[0] != 0) {
          uVar7 = 0;
          lVar8 = *param_1 + 0x140;
          puVar2 = PTR_DAT_047e72a8 + 0x10;
          puVar3 = PTR_DAT_047e72b0 + 0x10;
          do {
            uVar4 = *(uint *)(param_1 + 3);
            if (uVar18 <= uVar4) {
              iVar6 = uVar18 + (uVar18 >> 1);
              if (uVar18 == 0) {
                iVar6 = 1;
              }
              uVar18 = iVar6 + uVar18;
              lVar9 = (**(code **)(puVar19 + 0x20))(0,param_1[2],(ulong)uVar18 * 0x18);
              if (lVar9 == 0) goto LAB_035313fc;
              param_1[2] = lVar9;
              *(uint *)((long)param_1 + 0x1c) = uVar18;
            }
            if (uVar18 <= uVar4) goto LAB_035313fc;
            uVar18 = *(uint *)(param_1 + 3);
            *(uint *)(param_1 + 3) = uVar18 + 1;
            if (param_1[2] == 0) goto LAB_035313fc;
            lVar9 = param_1[2] + (ulong)uVar18 * 0x18;
            *(undefined2 *)(lVar9 + 8) = 0;
            *(byte *)(lVar9 + 10) = *(byte *)(lVar9 + 10) & 0xfc;
            *(undefined8 *)(lVar9 + 0x10) = 0;
            lVar9 = param_1[2];
            uVar10 = (**(code **)*param_2)(param_2,&local_68,4,auStack_64);
            if (((uVar10 & 1) == 0) ||
               (uVar10 = (**(code **)*param_2)(param_2,local_6c,1,auStack_64), (uVar10 & 1) == 0))
            goto LAB_035313fc;
            if (*(int *)(lVar8 + 0x10) != local_68) {
              plVar13 = *(long **)(lVar8 + 0x20);
              uVar18 = *(uint *)(lVar8 + 0x28);
              plVar11 = plVar13;
              if (uVar18 != 0) {
                lVar8 = (ulong)uVar18 << 3;
                while (*(int *)(*plVar11 + 0x10) != local_68) {
                  plVar11 = plVar11 + 1;
                  lVar8 = lVar8 + -8;
                  if (lVar8 == 0) goto LAB_035313fc;
                }
              }
              if (plVar11 == plVar13 + uVar18) goto LAB_035313fc;
              lVar8 = *plVar11;
            }
            *(long *)(lVar9 + uVar7 * 0x18) = lVar8;
            if ((local_6c[0] & 0xfd) == 1) {
              piVar14 = (int *)param_1[6];
              uVar18 = *(uint *)(param_1 + 7);
              if ((uVar18 == 0) || (*piVar14 == local_68)) {
                piVar15 = piVar14;
              }
              else {
                lVar12 = (ulong)uVar18 * 0x18;
                piVar16 = piVar14;
                do {
                  lVar12 = lVar12 + -0x18;
                  if (lVar12 == 0) goto LAB_035313f0;
                  piVar15 = piVar16 + 6;
                  piVar1 = piVar16 + 6;
                  piVar16 = piVar15;
                } while (*piVar1 != local_68);
              }
              if (piVar15 == piVar14 + (ulong)uVar18 * 6) {
LAB_035313f0:
                *(undefined8 *)(lVar9 + uVar7 * 0x18 + 0x10) = 0;
                goto LAB_035313fc;
              }
              lVar12 = *(long *)(piVar15 + 2);
              *(long *)(lVar9 + uVar7 * 0x18 + 0x10) = lVar12;
              if (lVar12 == 0) goto LAB_035313fc;
            }
            else {
              uVar10 = (**(code **)*param_2)(param_2,local_70,2,auStack_64);
              uVar5 = local_70[0];
              if ((uVar10 & 1) == 0) goto LAB_035313fc;
              uVar10 = (ulong)local_70[0];
              if (local_6c[0] < 2) {
                if (local_70[0] == 0) goto LAB_035312f8;
                plVar11 = (long *)(**(code **)(puVar19 + 0x10))(0,0x10);
                if (plVar11 != (long *)0x0) {
                  *plVar11 = (long)puVar2;
                  *(undefined1 *)(plVar11 + 1) = 1;
                  *(undefined2 *)((long)plVar11 + 10) = 0xffff;
                }
              }
              else {
                if (1 < local_6c[0] - 2) goto LAB_035313fc;
                if (local_70[0] == 0) {
LAB_035312f8:
                  plVar11 = (long *)0x0;
                }
                else {
                  plVar11 = (long *)(**(code **)(puVar19 + 0x10))(0,0x38);
                  if (plVar11 != (long *)0x0) {
                    plVar11[3] = 0;
                    plVar11[4] = 0;
                    *(ushort *)(plVar11 + 2) = uVar5;
                    *(ushort *)((long)plVar11 + 0x12) = uVar5;
                    *plVar11 = (long)puVar3;
                    *(uint *)(plVar11 + 1) = (uint)uVar5 * 50000;
                    *(uint *)((long)plVar11 + 0xc) = (uint)uVar5 * 50000;
                    plVar11[5] = 0;
                    plVar11[6] = 0;
                    uVar10 = uVar10 + 7 >> 3;
                    __n = uVar10 << 1;
                    __s = (void *)(**(code **)(puVar19 + 0x10))(0,__n);
                    plVar11[5] = (long)__s;
                    if (__s == (void *)0x0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      plVar11 = (long *)0x0;
                    }
                    else {
                      plVar11[6] = (long)__s + uVar10;
                      memset(__s,0,__n);
                    }
                    puVar19 = PTR_DAT_047e2fd0;
                  }
                }
              }
              if ((plVar11 == (long *)0x0) ||
                 (iVar6 = (**(code **)(*plVar11 + 0x30))(plVar11,param_2,local_70[0]), iVar6 != 1))
              goto LAB_035313fc;
              *(long **)(lVar9 + uVar7 * 0x18 + 0x10) = plVar11;
            }
            local_70[0] = local_70[0] & 0xff00;
            uVar10 = (**(code **)*param_2)(param_2,lVar9 + uVar7 * 0x18 + 8,2,auStack_64);
            if (((uVar10 & 1) == 0) ||
               (uVar10 = (**(code **)*param_2)(param_2,local_70,1,auStack_64), (uVar10 & 1) == 0))
            goto LAB_035313fc;
            lVar9 = lVar9 + uVar7 * 0x18;
            *(byte *)(lVar9 + 10) = *(byte *)(lVar9 + 10) & 0xfc | (byte)local_70[0] & 3;
            uVar7 = uVar7 + 1;
            if (local_74[0] <= uVar7) goto LAB_035313e8;
            uVar18 = *(uint *)((long)param_1 + 0x1c);
          } while( true );
        }
      }
    }
  }
  return uVar17;
}


