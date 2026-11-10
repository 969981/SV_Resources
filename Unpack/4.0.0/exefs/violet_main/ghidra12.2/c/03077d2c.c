/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03077d2c; name: FUN_03077d2c
 */


void FUN_03077d2c(float param_1,float param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  byte local_130 [255];
  undefined1 local_31;
  
  fVar11 = *(float *)(param_3 + 0x1c);
  if (fVar11 + 0.001 <= param_2) {
    fVar10 = (param_1 - fVar11) / (param_2 - fVar11);
    if (fVar10 <= 8.45466e+06) {
      lVar6 = 1;
      local_31 = 0xff;
      local_130[0] = 0;
      do {
        iVar8 = (int)(float)(int)(fVar10 * (float)(int)lVar6);
        if (0xfd < iVar8) {
          iVar8 = 0xfe;
        }
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        local_130[lVar6] = (byte)iVar8;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0xff);
      uVar2 = *(uint *)(param_3 + 0x40);
      if (0 < (int)uVar2) {
        lVar6 = *(long *)(param_3 + 0x38);
        if (uVar2 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            pbVar9 = (byte *)(lVar6 + uVar7);
            uVar7 = uVar7 + 2;
            *pbVar9 = local_130[*pbVar9];
            pbVar9[1] = local_130[pbVar9[1]];
          } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
        }
        if ((uVar2 & 1) != 0) {
          *(byte *)(lVar6 + uVar7) = local_130[*(byte *)(lVar6 + uVar7)];
        }
      }
      uVar2 = *(uint *)(param_3 + 0x68);
      if (0 < (int)uVar2) {
        lVar6 = *(long *)(param_3 + 0x60);
        if (uVar2 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            pbVar9 = (byte *)(lVar6 + uVar7);
            uVar7 = uVar7 + 2;
            *pbVar9 = local_130[*pbVar9];
            pbVar9[1] = local_130[pbVar9[1]];
          } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
        }
        if ((uVar2 & 1) != 0) {
          *(byte *)(lVar6 + uVar7) = local_130[*(byte *)(lVar6 + uVar7)];
        }
      }
      uVar2 = *(uint *)(param_3 + 0x58);
      if (0 < (int)uVar2) {
        lVar6 = *(long *)(param_3 + 0x50);
        if (uVar2 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          pbVar9 = (byte *)(lVar6 + 3);
          do {
            uVar7 = uVar7 + 2;
            pbVar9[-2] = local_130[pbVar9[-2]];
            *pbVar9 = local_130[*pbVar9];
            pbVar9 = pbVar9 + 4;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
        }
        if ((uVar2 & 1) != 0) {
          lVar6 = lVar6 + uVar7 * 2;
          *(byte *)(lVar6 + 1) = local_130[*(byte *)(lVar6 + 1)];
        }
      }
    }
    else if (fVar11 + 0.001 < *(float *)(param_3 + 0x18)) {
      *(undefined4 *)(param_3 + 0x40) = 0;
      *(undefined4 *)(param_3 + 0x48) = 0;
      uVar2 = *(uint *)(param_3 + 0x30);
      uVar7 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        uVar4 = uVar7 & 3;
        if (uVar7 - 1 < 3) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          do {
            *(undefined4 *)(*(long *)(param_3 + 0x28) + uVar5 * 4) = 0xffffffff;
            *(undefined4 *)(*(long *)(param_3 + 0x28) + uVar5 * 4 + 4) = 0xffffffff;
            *(undefined4 *)(*(long *)(param_3 + 0x28) + uVar5 * 4 + 8) = 0xffffffff;
            lVar6 = uVar5 * 4;
            uVar5 = uVar5 + 4;
            *(undefined4 *)(*(long *)(param_3 + 0x28) + lVar6 + 0xc) = 0xffffffff;
          } while ((uVar7 & 0xfffffffc) != uVar5);
        }
        if ((uVar2 & 3) != 0) {
          lVar6 = uVar5 << 2;
          do {
            *(undefined4 *)(*(long *)(param_3 + 0x28) + lVar6) = 0xffffffff;
            uVar4 = uVar4 - 1;
            lVar6 = lVar6 + 4;
          } while (uVar4 != 0);
        }
      }
      uVar2 = *(uint *)(param_3 + 0x58);
      if (0 < (int)uVar2) {
        if (uVar2 == 1) {
          uVar7 = 0;
        }
        else {
          lVar6 = 0;
          uVar7 = 0;
          do {
            *(undefined2 *)(*(long *)(param_3 + 0x50) + lVar6) = 0xff00;
            uVar7 = uVar7 + 2;
            lVar1 = *(long *)(param_3 + 0x50) + lVar6;
            lVar6 = lVar6 + 4;
            *(undefined2 *)(lVar1 + 2) = 0xff00;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
        }
        if ((uVar2 & 1) != 0) {
          *(undefined2 *)(*(long *)(param_3 + 0x50) + uVar7 * 2) = 0xff00;
        }
      }
      uVar2 = *(uint *)(param_3 + 0x68);
      uVar7 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        uVar4 = uVar7 & 3;
        if (uVar7 - 1 < 3) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          do {
            *(undefined1 *)(*(long *)(param_3 + 0x60) + uVar5) = 0xff;
            *(undefined1 *)(*(long *)(param_3 + 0x60) + uVar5 + 1) = 0xff;
            *(undefined1 *)(*(long *)(param_3 + 0x60) + uVar5 + 2) = 0xff;
            lVar6 = *(long *)(param_3 + 0x60) + uVar5;
            uVar5 = uVar5 + 4;
            *(undefined1 *)(lVar6 + 3) = 0xff;
          } while ((uVar7 & 0xfffffffc) != uVar5);
        }
        if ((uVar2 & 3) != 0) {
          do {
            *(undefined1 *)(*(long *)(param_3 + 0x60) + uVar5) = 0xff;
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      *(undefined4 *)(param_3 + 0x70) = 0;
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x58) = 0;
    puVar3 = PTR_PTR_047d1a50;
    if ((-1 < (int)*(uint *)(param_3 + 0x5c)) && (*(long *)(param_3 + 0x50) != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*(long *)(param_3 + 0x50),(ulong)*(uint *)(param_3 + 0x5c) << 1);
    }
    *(undefined8 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x5c) = 0x80000000;
    *(undefined4 *)(param_3 + 0x40) = 0;
    if ((-1 < *(int *)(param_3 + 0x44)) && (*(long *)(param_3 + 0x38) != 0)) {
      (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
    }
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined4 *)(param_3 + 0x44) = 0x80000000;
    *(undefined4 *)(param_3 + 0x68) = 0;
    if ((-1 < *(int *)(param_3 + 0x6c)) && (*(long *)(param_3 + 0x60) != 0)) {
      (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
    }
    *(undefined8 *)(param_3 + 0x60) = 0;
    *(undefined4 *)(param_3 + 0x6c) = 0x80000000;
  }
  return;
}


