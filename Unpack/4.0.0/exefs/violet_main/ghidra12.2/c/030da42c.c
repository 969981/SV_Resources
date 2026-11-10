/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030da42c; name: FUN_030da42c
 */


void FUN_030da42c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*param_2 + 0x18))(param_2,(long)*(int *)(param_1 + 1) << 5);
      uVar5 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar5) {
        puVar7 = (undefined8 *)*param_1;
        puVar8 = puVar4;
        if (uVar5 != 1) {
          iVar9 = -(uVar5 & 0xfffffffe);
          do {
            uVar6 = puVar7[3];
            iVar9 = iVar9 + 2;
            puVar8[1] = puVar7[1];
            puVar8[3] = uVar6;
            uVar6 = *puVar7;
            puVar8[2] = puVar7[2];
            *puVar8 = uVar6;
            uVar6 = puVar7[4];
            uVar2 = puVar7[5];
            puVar1 = puVar7 + 6;
            uVar3 = puVar7[7];
            puVar7 = puVar7 + 8;
            puVar8[6] = *puVar1;
            puVar8[7] = uVar3;
            puVar8[4] = uVar6;
            puVar8[5] = uVar2;
            puVar8 = puVar8 + 8;
          } while (iVar9 != 0);
        }
        if ((uVar5 & 1) != 0) {
          uVar6 = puVar7[3];
          puVar8[1] = puVar7[1];
          puVar8[3] = uVar6;
          uVar6 = *puVar7;
          puVar8[2] = puVar7[2];
          *puVar8 = uVar6;
        }
        uVar5 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar4;
      *(uint *)((long)param_1 + 0xc) = uVar5;
    }
  }
  return;
}


