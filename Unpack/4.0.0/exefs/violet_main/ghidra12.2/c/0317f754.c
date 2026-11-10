/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317f754; name: FUN_0317f754
 */


void FUN_0317f754(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)(int)param_1[1] << 3);
      uVar4 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar4) {
        puVar3 = (undefined8 *)*param_1;
        uVar1 = uVar4 & 3;
        puVar5 = puVar2;
        if (2 < uVar4 - 1) {
          iVar6 = -(uVar4 & 0xfffffffc);
          do {
            *puVar5 = *puVar3;
            puVar5[1] = puVar3[1];
            puVar5[2] = puVar3[2];
            puVar5[3] = puVar3[3];
            puVar5 = puVar5 + 4;
            puVar3 = puVar3 + 4;
            iVar6 = iVar6 + 4;
          } while (iVar6 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar4 = *(uint *)(param_1 + 1);
      }
      *param_1 = (long)puVar2;
      *(uint *)((long)param_1 + 0xc) = uVar4;
    }
  }
  return;
}


