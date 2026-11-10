/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e62e8; name: FUN_030e62e8
 */


undefined8 FUN_030e62e8(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  
  uVar4 = FUN_030e9050();
  iVar6 = (int)uVar4;
  if ((int)param_1[1] == iVar6) {
    iVar2 = iVar6 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar6) {
      FUN_030e914c(param_1,(long)iVar2);
      iVar6 = (int)param_1[1];
    }
    puVar8 = (undefined4 *)(*param_1 + (long)iVar6 * 0x18);
    *puVar8 = *param_2;
    puVar10 = (undefined8 *)(puVar8 + 2);
    *puVar10 = 0;
    puVar9 = puVar8 + 4;
    puVar9[0] = 0;
    puVar9[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    if ((int)uVar3 < 1) {
      *puVar10 = 0;
      *puVar9 = 0;
      puVar8[5] = 0x80000000;
    }
    else {
      puVar7 = (undefined4 *)*param_3;
      puVar5 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 3);
      *puVar10 = puVar5;
      *puVar9 = uVar3;
      puVar8[5] = uVar3;
      if (uVar3 != 1) {
        iVar6 = -(uVar3 & 0xfffffffe);
        puVar8 = puVar5;
        do {
          *puVar8 = *puVar7;
          puVar8[1] = puVar7[1];
          puVar8[2] = puVar7[2];
          puVar1 = puVar7 + 3;
          puVar5 = puVar8 + 4;
          puVar7 = puVar7 + 4;
          iVar6 = iVar6 + 2;
          puVar8[3] = *puVar1;
          puVar8 = puVar5;
        } while (iVar6 != 0);
      }
      if ((uVar3 & 1) != 0) {
        *puVar5 = *puVar7;
        puVar5[1] = puVar7[1];
      }
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar4;
}


