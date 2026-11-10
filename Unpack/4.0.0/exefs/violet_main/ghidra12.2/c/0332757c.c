/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0332757c; name: FUN_0332757c
 */


void FUN_0332757c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x18);
      uVar3 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar3) {
        puVar4 = (undefined8 *)*param_1;
        puVar5 = puVar2;
        if (uVar3 != 1) {
          iVar6 = -(uVar3 & 0xfffffffe);
          do {
            uVar1 = puVar4[1];
            iVar6 = iVar6 + 2;
            *puVar5 = *puVar4;
            puVar5[1] = uVar1;
            *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
            uVar1 = puVar4[4];
            puVar5[3] = puVar4[3];
            puVar5[4] = uVar1;
            *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(puVar4 + 5);
            puVar5 = puVar5 + 6;
            puVar4 = puVar4 + 6;
          } while (iVar6 != 0);
        }
        if ((uVar3 & 1) != 0) {
          uVar1 = puVar4[1];
          *puVar5 = *puVar4;
          puVar5[1] = uVar1;
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
        }
        uVar3 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(uint *)((long)param_1 + 0xc) = uVar3;
    }
  }
  return;
}


