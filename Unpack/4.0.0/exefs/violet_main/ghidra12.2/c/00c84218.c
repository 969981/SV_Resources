/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c84218; name: FUN_00c84218
 */


bool FUN_00c84218(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  bool bVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  
  puVar11 = (undefined8 *)param_3[10];
  puVar1 = (undefined8 *)param_3[0xb];
  uVar15 = param_1;
  if (puVar11 == puVar1) {
    bVar13 = false;
  }
  else {
    bVar13 = false;
    do {
      plVar7 = (long *)*param_3;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar9 = (long *)*plVar7;
        plVar2 = (long *)plVar7[1];
        if (plVar9 != plVar2) {
          if (*plVar9 != puVar11[0x26]) {
            do {
              plVar9 = plVar9 + 0x56;
              if (plVar2 == plVar9) {
                plVar9 = plVar2;
                goto LAB_00c842a0;
              }
            } while (*plVar9 != puVar11[0x26]);
          }
        }
LAB_00c842a0:
        plVar7 = (long *)0x0;
        if (plVar2 != plVar9) {
          plVar7 = plVar9;
        }
      }
      iVar4 = *(int *)(puVar11 + 0x2a);
      FUN_00c845c0(uVar15,param_2,puVar11,plVar7);
      if (*(int *)(puVar11 + 0x2a) == 2) {
        piVar8 = (int *)*puVar11;
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xb) ||
           (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar10 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)((long)piVar8 + uVar10);
        }
        fVar16 = *(float *)(param_3 + 0x18);
        fVar14 = (float)uVar6 + -1.0;
        if ((float)uVar15 <= (float)uVar6 + -1.0) {
          fVar14 = (float)uVar15;
        }
        uVar15 = (ulong)(uint)fVar14;
        bVar13 = true;
        if ((plVar7 != (long *)0x0) && (iVar4 == 0)) {
          if ((code *)plVar7[6] != (code *)0x0) {
            (*(code *)plVar7[6])(plVar7 + 10,puVar11,param_3 + 0x1a);
          }
          bVar13 = true;
        }
      }
      else {
        fVar16 = *(float *)(param_3 + 0x18);
        FUN_00c84468(uVar15,param_3,puVar11,iVar4,*(int *)(puVar11 + 0x2a),plVar7);
      }
      fVar14 = *(float *)(param_3 + 0x18);
      if (fVar16 == fVar14) {
        fVar14 = (float)uVar15;
      }
      uVar15 = (ulong)(uint)fVar14;
      puVar11 = puVar11 + 0x3a;
    } while (puVar11 != puVar1);
    if (!bVar13) {
      uVar15 = param_1 & 0xffffffff;
    }
  }
  lVar12 = param_3[3];
  lVar3 = param_3[4];
  do {
    if (lVar12 == lVar3) {
      *(float *)(param_3 + 0x18) = (float)uVar15;
      return bVar13;
    }
    uVar5 = *(undefined4 *)(lVar12 + 0x150);
    FUN_00c845c0(uVar15,param_2,lVar12,0);
    fVar14 = *(float *)(param_3 + 0x18);
    plVar7 = (long *)*param_3;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar9 = (long *)*plVar7;
      plVar2 = (long *)plVar7[1];
      if (plVar9 != plVar2) {
        if (*plVar9 != *(long *)(lVar12 + 0x130)) {
          do {
            plVar9 = plVar9 + 0x56;
            if (plVar2 == plVar9) {
              plVar9 = plVar2;
              goto LAB_00c84384;
            }
          } while (*plVar9 != *(long *)(lVar12 + 0x130));
        }
      }
LAB_00c84384:
      plVar7 = (long *)0x0;
      if (plVar2 != plVar9) {
        plVar7 = plVar9;
      }
    }
    FUN_00c84468(uVar15,param_3,lVar12,uVar5,*(undefined4 *)(lVar12 + 0x150),plVar7);
    fVar16 = *(float *)(param_3 + 0x18);
    if (fVar14 == *(float *)(param_3 + 0x18)) {
      fVar16 = (float)uVar15;
    }
    uVar15 = (ulong)(uint)fVar16;
    lVar12 = lVar12 + 0x1d0;
  } while( true );
}


