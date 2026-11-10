/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5d770; name: FUN_01e5d770
 */


void FUN_01e5d770(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  
  FUN_01e5d520(param_1,param_1 + 8,param_1 + 0x10);
  if (param_1 + 0x18 != param_2) {
    lVar19 = 0;
    plVar18 = param_1 + 0x18;
    plVar16 = param_1 + 0x10;
    do {
      plVar10 = plVar18;
      if (*(float *)(plVar16 + 7) < *(float *)(plVar10 + 7)) {
        lVar11 = plVar10[3];
        lVar13 = plVar10[6];
        lVar1 = plVar10[4];
        lVar4 = plVar10[5];
        lVar12 = *plVar10;
        fVar7 = *(float *)(plVar10 + 7);
        lVar2 = plVar10[1];
        lVar5 = plVar10[2];
        *plVar10 = 0;
        plVar10[1] = 0;
        plVar10[2] = 0;
        lVar14 = lVar19;
        do {
          lVar17 = lVar14;
          lVar14 = *(long *)((long)param_1 + lVar17 + 0xc0);
          if (lVar14 != 0) {
            plVar18 = *(long **)((long)param_1 + lVar17 + 0xd8);
            *(long *)((long)param_1 + lVar17 + 200) = lVar14;
            lVar15 = *(long *)((long)param_1 + lVar17 + 0xd0) - lVar14;
            uVar8 = (**(code **)(*plVar18 + 0xf8))(plVar18);
            if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,lVar15,1);
            }
            else {
              FUN_00c48fe8(plVar18,lVar14,lVar15,1);
            }
            *(undefined8 *)((long)param_1 + lVar17 + 200) = 0;
            *(undefined8 *)((long)param_1 + lVar17 + 0xd0) = 0;
            *(undefined8 *)((long)param_1 + lVar17 + 0xc0) = 0;
          }
          *(undefined8 *)((long)param_1 + lVar17 + 0xe0) =
               *(undefined8 *)((long)param_1 + lVar17 + 0xa0);
          *(undefined8 *)((long)param_1 + lVar17 + 0xe8) =
               *(undefined8 *)((long)param_1 + lVar17 + 0xa8);
          *(undefined8 *)((long)param_1 + lVar17 + 0xf0) =
               *(undefined8 *)((long)param_1 + lVar17 + 0xb0);
          uVar3 = *(undefined8 *)((long)param_1 + lVar17 + 0x80);
          uVar6 = *(undefined8 *)((long)param_1 + lVar17 + 0x88);
          *(undefined8 *)((long)param_1 + lVar17 + 0x80) = 0;
          *(undefined8 *)((long)param_1 + lVar17 + 0x88) = 0;
          *(undefined8 *)((long)param_1 + lVar17 + 0xc0) = uVar3;
          *(undefined8 *)((long)param_1 + lVar17 + 200) = uVar6;
          uVar3 = *(undefined8 *)((long)param_1 + lVar17 + 0x90);
          *(undefined8 *)((long)param_1 + lVar17 + 0x90) = 0;
          *(undefined8 *)((long)param_1 + lVar17 + 0xd0) = uVar3;
          *(undefined8 *)((long)param_1 + lVar17 + 0xd8) =
               *(undefined8 *)((long)param_1 + lVar17 + 0x98);
          *(undefined4 *)((long)param_1 + lVar17 + 0xf8) =
               *(undefined4 *)((long)param_1 + lVar17 + 0xb8);
          if (lVar17 == -0x80) {
            plVar18 = param_1;
            goto LAB_01e5d8b4;
          }
          lVar14 = lVar17 + -0x40;
        } while (*(float *)((long)param_1 + lVar17 + 0x78) < fVar7);
        plVar18 = (long *)((long)param_1 + lVar17 + 0x80);
LAB_01e5d8b4:
        lVar14 = *plVar18;
        if (lVar14 != 0) {
          *(long *)((long)param_1 + lVar17 + 0x88) = lVar14;
          plVar16 = (long *)plVar18[3];
          lVar15 = *(long *)((long)param_1 + lVar17 + 0x90) - lVar14;
          uVar8 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar15,1);
          }
          else {
            FUN_00c48fe8(plVar16,lVar14,lVar15,1);
          }
          plVar18[1] = 0;
          plVar18[2] = 0;
          *plVar18 = 0;
        }
        *plVar18 = lVar12;
        plVar18[5] = lVar4;
        plVar18[6] = lVar13;
        plVar18[3] = lVar11;
        plVar18[4] = lVar1;
        *(long *)((long)param_1 + lVar17 + 0x88) = lVar2;
        *(long *)((long)param_1 + lVar17 + 0x90) = lVar5;
        *(float *)((long)param_1 + lVar17 + 0xb8) = fVar7;
      }
      lVar19 = lVar19 + 0x40;
      plVar18 = plVar10 + 8;
      plVar16 = plVar10;
    } while (plVar10 + 8 != param_2);
  }
  return;
}


