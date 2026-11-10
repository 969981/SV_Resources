/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c5470; name: FUN_008c5470
 */


void FUN_008c5470(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  if (*(int *)(param_2 + 0xc0) != 0) {
    fVar14 = *(float *)PTR_FloatPi_047d2460;
    uVar7 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0xa0);
      lVar2 = *(long *)(param_2 + 0xa8);
      puVar9 = (ushort *)(lVar10 + uVar7 * 0xa0);
      uVar4 = *puVar9;
      if (uVar4 != 0) {
        uVar11 = 0;
        do {
          plVar3 = *(long **)(*(long *)(lVar2 + uVar7 * 0x30 + 0x18) + uVar11 * 8);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x28))(param_1,plVar3,param_3);
            uVar4 = *puVar9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar4);
      }
      puVar9 = (ushort *)(lVar10 + uVar7 * 0xa0 + 0x10);
      uVar4 = *puVar9;
      uVar11 = (ulong)uVar4;
      if (uVar4 != 0) {
        lVar10 = 0;
        uVar12 = 0;
        do {
          lVar8 = *(long *)(lVar2 + uVar7 * 0x30 + 0x10);
          lVar1 = lVar8 + lVar10;
          lVar6 = *(long *)(lVar1 + 8);
          if (lVar6 != 0) {
            fVar13 = (float)FUN_008bea60(param_1,lVar6 + 0x10);
            *(float *)(lVar8 + lVar10) = fVar13 * 0.5;
            fVar13 = acosf(-2.0 / (fVar13 * 0.5) + 1.0);
            if (0.0 < fVar13) {
              iVar5 = (int)(fVar14 / fVar13) + 1;
            }
            else {
              iVar5 = 1;
            }
            *(int *)(lVar1 + 4) = iVar5;
            uVar11 = (ulong)*puVar9;
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 0x10;
        } while (uVar12 < uVar11);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0xc0));
  }
  return;
}


