/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dd914; name: FUN_031dd914
 */


undefined8 FUN_031dd914(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  
  uVar4 = FUN_031ddc40();
  iVar6 = (int)uVar4;
  if ((int)param_1[1] == iVar6) {
    iVar1 = iVar6 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar6) {
      FUN_031ddd5c(param_1,(long)iVar1);
      iVar6 = (int)param_1[1];
    }
    puVar8 = (undefined8 *)(*param_1 + (long)iVar6 * 0x18);
    *puVar8 = *param_2;
    puVar7 = puVar8 + 1;
    *puVar7 = 0;
    puVar9 = (uint *)(puVar8 + 2);
    puVar9[0] = 0;
    puVar9[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    if ((int)uVar3 < 1) {
      *puVar7 = 0;
      *puVar9 = 0;
      *(uint *)((long)puVar8 + 0x14) = 0x80000000;
    }
    else {
      param_3 = (undefined8 *)*param_3;
      puVar5 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 4);
      *puVar7 = puVar5;
      *puVar9 = uVar3;
      *(uint *)((long)puVar8 + 0x14) = uVar3;
      if (uVar3 != 1) {
        iVar6 = -(uVar3 & 0xfffffffe);
        puVar8 = puVar5;
        puVar7 = param_3;
        do {
          uVar2 = puVar7[1];
          puVar5 = puVar8 + 4;
          *puVar8 = *puVar7;
          puVar8[1] = uVar2;
          param_3 = puVar7 + 4;
          uVar2 = puVar7[3];
          iVar6 = iVar6 + 2;
          puVar8[2] = puVar7[2];
          puVar8[3] = uVar2;
          puVar8 = puVar5;
          puVar7 = param_3;
        } while (iVar6 != 0);
      }
      if ((uVar3 & 1) != 0) {
        uVar2 = param_3[1];
        *puVar5 = *param_3;
        puVar5[1] = uVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar4;
}


