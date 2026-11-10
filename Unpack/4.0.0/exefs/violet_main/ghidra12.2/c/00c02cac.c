/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c02cac; name: FUN_00c02cac
 */


byte * FUN_00c02cac(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = 0;
  do {
    plVar4 = (long *)*param_1;
    if (plVar4 == (long *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)((ulong)(plVar4[1] - *plVar4) >> 4);
    }
    if (iVar7 <= lVar14) {
      return param_2;
    }
    piVar1 = (int *)(*plVar4 + lVar14 * 0x10);
    switch(piVar1[1]) {
    case 0:
      uVar9 = *piVar1 << 3;
      uVar5 = *(ulong *)(piVar1 + 2);
      if (0x7f < uVar9) {
        pbVar3 = param_2;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          param_2 = pbVar3 + 1;
          *pbVar3 = (byte)uVar8 | 0x80;
          pbVar3 = param_2;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar3 = param_2 + 1;
      *param_2 = (byte)uVar9;
      bVar2 = (byte)(uVar5 >> 0x38);
      uVar8 = (uint)uVar5;
      uVar11 = (uint)(uVar5 >> 0x1c);
      uVar9 = (uint)(uVar5 >> 0x20);
      if (bVar2 == 0) {
        if (uVar11 != 0) {
          if (uVar11 >> 0xe != 0) {
            if (0x1fffff < uVar11) {
              lVar10 = 8;
              goto LAB_00c02d98;
            }
            lVar10 = 7;
            goto LAB_00c02da4;
          }
          lVar10 = 5;
          if (0x7f < uVar11) {
            lVar10 = 6;
            goto LAB_00c02db0;
          }
          goto LAB_00c02dbc;
        }
        if ((uVar5 >> 0xe & 0x3ffff) != 0) {
          if (0x1fffff < uVar8) {
            lVar10 = 4;
            goto LAB_00c02dc4;
          }
          lVar10 = 3;
          goto LAB_00c02dd0;
        }
        if (0x7f < uVar8) {
          lVar10 = 2;
          goto LAB_00c02dd8;
        }
        lVar10 = 1;
      }
      else {
        lVar10 = 9;
        if (0x7f < bVar2) {
          lVar10 = 10;
          param_2[10] = 0x81;
        }
        param_2[9] = bVar2 | 0x80;
LAB_00c02d98:
        param_2[8] = (byte)(uVar9 >> 0x11) | 0x80;
LAB_00c02da4:
        param_2[7] = (byte)(uVar9 >> 10) | 0x80;
LAB_00c02db0:
        param_2[6] = (byte)(uVar9 >> 3) | 0x80;
LAB_00c02dbc:
        param_2[5] = (byte)(uVar5 >> 0x1c) | 0x80;
LAB_00c02dc4:
        param_2[4] = (byte)(uVar8 >> 0x15) | 0x80;
LAB_00c02dd0:
        param_2[3] = (byte)(uVar5 >> 0xe) | 0x80;
LAB_00c02dd8:
        param_2[2] = (byte)(uVar8 >> 7) | 0x80;
      }
      *pbVar3 = (byte)uVar5 | 0x80;
      uVar9 = (int)lVar10 - 1;
      pbVar3[uVar9] = pbVar3[uVar9] & 0x7f;
      param_2 = pbVar3 + lVar10;
      break;
    case 1:
      uVar9 = *piVar1 << 3 | 5;
      iVar7 = piVar1[2];
      if (0x7f < uVar9) {
        pbVar3 = param_2;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          param_2 = pbVar3 + 1;
          *pbVar3 = (byte)uVar8 | 0x80;
          pbVar3 = param_2;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      *param_2 = (byte)uVar9;
      *(int *)(param_2 + 1) = iVar7;
      param_2 = param_2 + 5;
      break;
    case 2:
      uVar9 = *piVar1 << 3 | 1;
      uVar6 = *(undefined8 *)(piVar1 + 2);
      if (0x7f < uVar9) {
        pbVar3 = param_2;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          param_2 = pbVar3 + 1;
          *pbVar3 = (byte)uVar8 | 0x80;
          pbVar3 = param_2;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      *param_2 = (byte)uVar9;
      *(undefined8 *)(param_2 + 1) = uVar6;
      param_2 = param_2 + 9;
      break;
    case 3:
      uVar9 = *piVar1 << 3 | 2;
      pbVar3 = *(byte **)(piVar1 + 2);
      if (0x7f < uVar9) {
        pbVar12 = param_2;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          param_2 = pbVar12 + 1;
          *pbVar12 = (byte)uVar8 | 0x80;
          pbVar12 = param_2;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar12 = param_2 + 1;
      *param_2 = (byte)uVar9;
      uVar9 = (uint)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) != 0) {
        uVar9 = *(uint *)(pbVar3 + 8);
      }
      if (0x7f < uVar9) {
        pbVar13 = pbVar12;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar8 | 0x80;
          pbVar13 = pbVar12;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      *pbVar12 = (byte)uVar9;
      pbVar13 = *(byte **)(pbVar3 + 0x10);
      uVar9 = (uint)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) == 0) {
        pbVar13 = pbVar3 + 1;
      }
      else {
        uVar9 = (uint)*(undefined8 *)(pbVar3 + 8);
      }
      memcpy(pbVar12 + 1,pbVar13,(long)(int)uVar9);
      param_2 = pbVar12 + 1 + (int)uVar9;
      break;
    case 4:
      uVar9 = *piVar1 << 3 | 3;
      if (0x7f < uVar9) {
        pbVar3 = param_2;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          param_2 = pbVar3 + 1;
          *pbVar3 = (byte)uVar8 | 0x80;
          pbVar3 = param_2;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      *param_2 = (byte)uVar9;
      pbVar3 = (byte *)FUN_00c02cac(*(undefined8 *)(piVar1 + 2),param_2 + 1);
      uVar9 = *piVar1 << 3 | 4;
      if (0x7f < uVar9) {
        pbVar12 = pbVar3;
        uVar8 = uVar9;
        do {
          uVar9 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          pbVar3 = pbVar12 + 1;
          *pbVar12 = (byte)uVar8 | 0x80;
          pbVar12 = pbVar3;
          uVar8 = uVar9;
        } while (uVar11 != 0);
      }
      param_2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar9;
    }
    lVar14 = lVar14 + 1;
  } while( true );
}


