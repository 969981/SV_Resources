/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5d9c0; name: FUN_01e5d9c0
 */


bool FUN_01e5d9c0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  
  switch((long)param_2 - (long)param_1 >> 6) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_1 + 7) < *(float *)(param_2 + -1)) {
      FUN_01e5d3f0(param_1,param_2 + -8);
    }
    break;
  case 3:
    FUN_01e5d520(param_1,param_1 + 8,param_2 + -8);
    break;
  case 4:
    FUN_01e5d5e0(param_1,param_1 + 8,param_1 + 0x10,param_2 + -8);
    break;
  case 5:
    FUN_01e5d690(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
    break;
  default:
    FUN_01e5d520(param_1,param_1 + 8,param_1 + 0x10);
    if (param_1 + 0x18 != param_2) {
      lVar20 = 0;
      iVar19 = 0;
      plVar18 = param_1 + 0x18;
      plVar16 = param_1 + 0x10;
      do {
        plVar8 = plVar18;
        if (*(float *)(plVar16 + 7) < *(float *)(plVar8 + 7)) {
          lVar9 = plVar8[3];
          lVar12 = plVar8[6];
          lVar1 = plVar8[4];
          lVar3 = plVar8[5];
          lVar10 = *plVar8;
          lVar13 = plVar8[1];
          lVar11 = plVar8[2];
          *plVar8 = 0;
          plVar8[1] = 0;
          plVar8[2] = 0;
          fVar5 = *(float *)(plVar8 + 7);
          lVar14 = lVar20;
          do {
            lVar17 = lVar14;
            lVar14 = *(long *)((long)param_1 + lVar17 + 0xc0);
            if (lVar14 != 0) {
              plVar18 = *(long **)((long)param_1 + lVar17 + 0xd8);
              *(long *)((long)param_1 + lVar17 + 200) = lVar14;
              lVar15 = *(long *)((long)param_1 + lVar17 + 0xd0) - lVar14;
              uVar6 = (**(code **)(*plVar18 + 0xf8))(plVar18);
              if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
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
            uVar2 = *(undefined8 *)((long)param_1 + lVar17 + 0x80);
            uVar4 = *(undefined8 *)((long)param_1 + lVar17 + 0x88);
            *(undefined8 *)((long)param_1 + lVar17 + 0x80) = 0;
            *(undefined8 *)((long)param_1 + lVar17 + 0x88) = 0;
            *(undefined8 *)((long)param_1 + lVar17 + 0xc0) = uVar2;
            *(undefined8 *)((long)param_1 + lVar17 + 200) = uVar4;
            uVar2 = *(undefined8 *)((long)param_1 + lVar17 + 0x90);
            *(undefined8 *)((long)param_1 + lVar17 + 0x90) = 0;
            *(undefined8 *)((long)param_1 + lVar17 + 0xd0) = uVar2;
            *(undefined8 *)((long)param_1 + lVar17 + 0xd8) =
                 *(undefined8 *)((long)param_1 + lVar17 + 0x98);
            *(undefined4 *)((long)param_1 + lVar17 + 0xf8) =
                 *(undefined4 *)((long)param_1 + lVar17 + 0xb8);
            if (lVar17 == -0x80) {
              plVar18 = param_1;
              goto LAB_01e5db5c;
            }
            lVar14 = lVar17 + -0x40;
          } while (*(float *)((long)param_1 + lVar17 + 0x78) < fVar5);
          plVar18 = (long *)((long)param_1 + lVar17 + 0x80);
LAB_01e5db5c:
          lVar14 = *plVar18;
          if (lVar14 != 0) {
            *(long *)((long)param_1 + lVar17 + 0x88) = lVar14;
            plVar16 = (long *)plVar18[3];
            lVar15 = *(long *)((long)param_1 + lVar17 + 0x90) - lVar14;
            uVar6 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar15,1);
            }
            else {
              FUN_00c48fe8(plVar16,lVar14,lVar15,1);
            }
            plVar18[1] = 0;
            plVar18[2] = 0;
            *plVar18 = 0;
          }
          iVar19 = iVar19 + 1;
          plVar18[5] = lVar3;
          plVar18[6] = lVar12;
          plVar18[3] = lVar9;
          plVar18[4] = lVar1;
          *plVar18 = lVar10;
          *(long *)((long)param_1 + lVar17 + 0x88) = lVar13;
          *(long *)((long)param_1 + lVar17 + 0x90) = lVar11;
          *(float *)((long)param_1 + lVar17 + 0xb8) = fVar5;
          if (iVar19 == 8) {
            return plVar8 + 8 == param_2;
          }
        }
        lVar20 = lVar20 + 0x40;
        plVar18 = plVar8 + 8;
        plVar16 = plVar8;
      } while (plVar8 + 8 != param_2);
    }
  }
  return true;
}


