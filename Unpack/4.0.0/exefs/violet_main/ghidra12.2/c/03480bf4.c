/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03480bf4; name: FUN_03480bf4
 */


undefined8 FUN_03480bf4(long *param_1,long param_2,ushort param_3,float *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ushort *puVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  
  plVar7 = (long *)(**(code **)(*param_1 + 0x80))();
  puVar6 = PTR_DAT_047e2fd0;
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    lVar14 = *plVar7;
    if (lVar14 == 0) {
      uVar9 = 0;
    }
    else {
      do {
        puVar10 = *(ushort **)(lVar14 + 0x20);
        fVar15 = 1.0;
        if (puVar10 != (ushort *)0x0) {
          uVar5 = *puVar10;
          uVar13 = (uint)uVar5;
          if (uVar5 < 2) {
            uVar13 = 1;
          }
          uVar12 = (ulong)uVar13;
          pfVar11 = (float *)((long)puVar10 + ((ulong)((uint)uVar5 * 2 + 5) & 0x3fffc));
          do {
            puVar10 = puVar10 + 1;
            if (*puVar10 == param_3) {
              fVar15 = 1.0;
              if ((char)param_1[1] != '\0') {
                fVar15 = *pfVar11;
              }
              goto LAB_03480cac;
            }
            pfVar11 = pfVar11 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          fVar15 = 1.0;
        }
LAB_03480cac:
        uVar3 = *(uint *)(param_2 + 0x50);
        uVar13 = *(uint *)(param_2 + 0x54);
        uVar4 = *(undefined4 *)(lVar14 + 0x38);
        if (uVar3 < uVar13) {
LAB_03480cec:
          if (uVar3 < uVar13) {
            uVar13 = *(uint *)(param_2 + 0x50);
            *(uint *)(param_2 + 0x50) = uVar13 + 1;
            if (*(long *)(param_2 + 0x48) != 0) {
              puVar2 = (undefined4 *)(*(long *)(param_2 + 0x48) + (ulong)uVar13 * 0x10);
              *puVar2 = 2;
              puVar2[1] = uVar4;
              *(ushort *)(puVar2 + 2) = param_3;
              puVar2[3] = fVar15;
            }
          }
        }
        else {
          iVar1 = uVar13 + (uVar13 >> 1);
          if (uVar13 == 0) {
            iVar1 = 1;
          }
          uVar13 = iVar1 + uVar13;
          lVar8 = (**(code **)(puVar6 + 0x20))(0,*(undefined8 *)(param_2 + 0x48),(ulong)uVar13 << 4)
          ;
          if (lVar8 != 0) {
            *(long *)(param_2 + 0x48) = lVar8;
            *(uint *)(param_2 + 0x54) = uVar13;
            goto LAB_03480cec;
          }
        }
        *param_4 = *param_4 * fVar15;
        lVar14 = *(long *)(lVar14 + 0x10);
      } while (lVar14 != 0);
      uVar9 = 1;
    }
  }
  return uVar9;
}


