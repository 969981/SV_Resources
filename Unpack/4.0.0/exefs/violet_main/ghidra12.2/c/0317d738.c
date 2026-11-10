/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317d738; name: FUN_0317d738
 */


void FUN_0317d738(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) << 4);
      uVar4 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar4) {
        puVar5 = (undefined8 *)*param_1;
        puVar6 = puVar3;
        if (uVar4 != 1) {
          iVar7 = -(uVar4 & 0xfffffffe);
          do {
            uVar2 = puVar5[1];
            iVar7 = iVar7 + 2;
            *puVar6 = *puVar5;
            puVar6[1] = uVar2;
            puVar1 = puVar5 + 2;
            uVar2 = puVar5[3];
            puVar5 = puVar5 + 4;
            puVar6[2] = *puVar1;
            puVar6[3] = uVar2;
            puVar6 = puVar6 + 4;
          } while (iVar7 != 0);
        }
        if ((uVar4 & 1) != 0) {
          uVar2 = puVar5[1];
          *puVar6 = *puVar5;
          puVar6[1] = uVar2;
        }
        uVar4 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar3;
      *(uint *)((long)param_1 + 0xc) = uVar4;
    }
  }
  return;
}


