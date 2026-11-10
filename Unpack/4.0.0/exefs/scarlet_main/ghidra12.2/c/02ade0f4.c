/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ade0f4; name: FUN_02ade0f4
 */


bool FUN_02ade0f4(long param_1,short param_2,int param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined1 local_110 [76];
  undefined1 local_c4;
  undefined1 local_c0 [76];
  undefined1 local_74;
  long *local_70;
  long *plStack_68;
  
  lVar8 = *(long *)(param_1 + 0x2d8);
  lVar9 = *(long *)(param_1 + 0x2e0);
  if ((lVar8 != lVar9) && (*(short *)(lVar8 + 2) != param_2 || *(int *)(lVar8 + 4) != param_3)) {
    do {
      lVar17 = lVar8;
      if (lVar9 + -0x1c == lVar17) goto LAB_02ade210;
      lVar8 = lVar17 + 0x1c;
    } while ((*(short *)(lVar17 + 0x1e) != param_2) || (*(int *)(lVar17 + 0x20) != param_3));
  }
  if ((lVar8 == lVar9) ||
     (((*(char *)(lVar8 + 0x15) != '\x01' || (*(long *)(param_1 + 0xb00) != 0)) ||
      (uVar7 = FUN_00b0d038(), (uVar7 & 1) == 0)))) {
LAB_02ade210:
    bVar10 = false;
  }
  else {
    uVar6 = FUN_00b0e9ac();
    bVar10 = false;
    if ((0xff < uVar6) && ((uVar6 & 0xff) != 0)) {
      *(undefined1 *)(param_1 + 0xb39) = 1;
      cVar1 = *(char *)(param_1 + 0x1c5) + '\x01';
      *(char *)(param_1 + 0x1c5) = cVar1;
      bVar10 = '\x02' < (char)(*(char *)(param_1 + 0x4d1) + cVar1 + *(char *)(param_1 + 0x6e1) +
                              *(char *)(param_1 + 0x8f1));
      if (bVar10) {
        local_c0[0] = 0;
        local_74 = 0;
        FUN_02adfcc8(param_1,local_c0);
        *(undefined1 *)(param_1 + 0x1c5) = 0;
        *(undefined1 *)(param_1 + 0x4d1) = 0;
        *(undefined1 *)(param_1 + 0x6e1) = 0;
        *(undefined1 *)(param_1 + 0x8f1) = 0;
      }
      if (*(char *)(param_1 + 0x1c4) < '\n') {
        if ((((param_4 & 1) == 0) &&
            (puVar12 = *(undefined8 **)(param_1 + 0x2b8), puVar12 != (undefined8 *)0x0)) &&
           ((*(char *)(puVar12 + 3) != '\0' ||
            ((((puVar12[2] != 0 && (puVar12[1] != 0)) &&
              (sVar5 = *(short *)(puVar12[2] + 8), sVar5 != 0)) &&
             ((float)(int)sVar5 <= *(float *)(puVar12[1] + 4))))))) {
          *(undefined2 *)(param_1 + 300) = 0;
          *(undefined8 *)(param_1 + 0x2b8) = 0;
          memset((void *)(param_1 + 0x130),0,0x48);
          FUN_00c4e600();
          FUN_00c4e600();
          lVar8 = FUN_00c4e600();
          iVar4 = *(int *)(lVar8 + 0x12c8);
          iVar2 = iVar4 + 1;
          *(int *)(lVar8 + 0x12c8) = iVar2;
          if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
            *(int *)(lVar8 + 0x12cc) = iVar2;
          }
          (**(code **)*puVar12)(puVar12);
          plVar15 = *(long **)(param_1 + 0x2c0);
          uVar13 = *(undefined8 *)(param_1 + 0x2c8);
          uVar11 = *(undefined8 *)(param_1 + 0x2d0);
          uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,puVar12,uVar13,uVar11);
          }
          else {
            FUN_00c48fe8(plVar15,puVar12,uVar13,uVar11);
          }
          lVar8 = FUN_00c4e600();
          iVar2 = *(int *)(lVar8 + 0x12c8) + -1;
          *(int *)(lVar8 + 0x12c8) = iVar2;
          if (iVar2 == 0) {
            plVar15 = (long *)FUN_00c4e600();
            if (plVar15[600] != 0) {
              local_70 = plVar15 + plVar15[600] * 3;
              plStack_68 = plVar15;
              FUN_00c4ea30(&plStack_68,&local_70);
              plVar14 = (long *)*plVar15;
              plVar3 = plVar15;
              if (plVar15[600] != 0) {
                plVar3 = plVar15 + plVar15[600] * 3;
              }
              if (plVar3 == plVar15) {
                lVar17 = 0;
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                lVar17 = 0;
                plVar16 = plVar15;
                do {
                  (**(code **)(*(long *)*plVar16 + 0xd0))();
                  if ((long *)*plVar16 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + lVar17 * 3,plVar16);
                    plVar14 = (long *)*plVar16;
                    lVar17 = lVar9;
                  }
                  plVar16 = plVar16 + 3;
                  lVar9 = lVar9 + 1;
                } while (plVar3 != plVar16);
              }
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + lVar17 * 3,plVar15 + lVar9 * 3);
              plVar15[600] = 0;
            }
            *(undefined4 *)(lVar8 + 0x12cc) = 0;
          }
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0x2b8);
        if ((lVar8 == 0) ||
           (((*(long *)(lVar8 + 0x10) != 0 && (*(long *)(lVar8 + 8) != 0)) &&
            ((sVar5 = *(short *)(*(long *)(lVar8 + 0x10) + 8), sVar5 != 0 &&
             ((float)(int)sVar5 <= *(float *)(*(long *)(lVar8 + 8) + 4))))))) {
          local_110[0] = 0;
          local_c4 = 0;
          FUN_02adf0b8(param_1,local_110);
          *(char *)(param_1 + 0x1c4) = *(char *)(param_1 + 0x1c4) + -10;
        }
      }
    }
  }
  return bVar10;
}


