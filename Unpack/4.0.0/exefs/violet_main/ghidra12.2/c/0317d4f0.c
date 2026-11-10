/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317d4f0; name: FUN_0317d4f0
 */


void FUN_0317d4f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar1 = PTR_PTR_047d1a50;
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x30);
      iVar3 = *(int *)(param_1 + 1);
      if (0 < iVar3) {
        puVar4 = (undefined4 *)*param_1;
        puVar7 = puVar2;
        puVar8 = puVar4;
        iVar6 = iVar3;
        do {
          *puVar7 = *puVar8;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
          FUN_0317d668(puVar8 + 4);
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
          puVar7[6] = puVar8[6];
          puVar7[7] = puVar8[7];
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          FUN_0317d738(puVar8 + 8);
          *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar8 + 8);
          puVar7[10] = puVar8[10];
          puVar7[0xb] = puVar8[0xb];
          iVar6 = iVar6 + -1;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 10) = 0;
          puVar8 = puVar8 + 0xc;
          puVar7 = puVar7 + 0xc;
        } while (iVar6 != 0);
        puVar5 = puVar4 + 0xb;
        do {
          puVar5[-1] = 0;
          if ((-1 < (int)*puVar5) && (*(long *)(puVar5 + -3) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar5 + -3),(ulong)*puVar5 << 4)
            ;
          }
          puVar5[-3] = 0;
          puVar5[-2] = 0;
          *puVar5 = 0x80000000;
          puVar5[-5] = 0;
          if ((-1 < (int)puVar5[-4]) && (*(long *)(puVar5 + -7) != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*(long *)(puVar5 + -7),(ulong)puVar5[-4] << 3);
          }
          puVar5[-7] = 0;
          puVar5[-6] = 0;
          iVar3 = iVar3 + -1;
          puVar5[-4] = 0x80000000;
          puVar5 = puVar5 + 0xc;
        } while (iVar3 != 0);
        iVar3 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar3;
    }
  }
  return;
}


