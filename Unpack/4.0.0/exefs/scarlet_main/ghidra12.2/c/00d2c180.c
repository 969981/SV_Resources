/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2c180; name: FUN_00d2c180
 */


int FUN_00d2c180(undefined8 param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ushort *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
  if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
    iVar4 = 0;
  }
  else {
    puVar11 = (uint *)((long)param_2 + (ulong)puVar8[5]);
    piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
      lVar9 = 0;
    }
    else {
      puVar11 = (uint *)((long)piVar1 + uVar6);
      lVar9 = (long)puVar11 + (ulong)*puVar11;
    }
    iVar4 = FUN_00d2c2d0(param_1,lVar9);
  }
  puVar11 = (uint *)((long)((long)param_2 + (ulong)puVar8[7]) +
                    (ulong)*(uint *)((long)param_2 + (ulong)puVar8[7]));
  puVar10 = puVar11 + 1;
  uVar7 = *puVar11;
  if (uVar7 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = FUN_00d2c180(param_1,(long)puVar10 + (ulong)*puVar10);
    uVar3 = uVar2;
    if (uVar7 != 1) {
      uVar3 = FUN_00d2c180(param_1,(long)(puVar11 + 2) + (ulong)puVar11[2]);
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      if (puVar11 + 3 != puVar10 + uVar7) {
        lVar9 = (ulong)uVar7 * 4 + -8;
        puVar11 = puVar11 + 3;
        uVar7 = uVar3;
        do {
          uVar3 = FUN_00d2c180(param_1,(long)puVar11 + (ulong)*puVar11);
          if (uVar3 <= uVar7) {
            uVar3 = uVar7;
          }
          lVar9 = lVar9 + -4;
          puVar11 = puVar11 + 1;
          uVar7 = uVar3;
        } while (lVar9 != 0);
      }
    }
    iVar5 = uVar3 << 1;
  }
  return iVar5 + iVar4;
}


