/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317e05c; name: FUN_0317e05c
 */


void FUN_0317e05c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) << 5);
      puVar1 = PTR_PTR_047d1a50;
      iVar5 = *(int *)(param_1 + 1);
      if (0 < iVar5) {
        puVar6 = (undefined8 *)*param_1;
        puVar3 = puVar6;
        puVar8 = puVar2;
        iVar7 = iVar5;
        do {
          FUN_01339774(puVar3,puVar1);
          *puVar8 = *puVar3;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
          *puVar3 = 0;
          puVar3[1] = 0;
          FUN_01339774(puVar3 + 2,puVar1);
          puVar8[2] = puVar3[2];
          *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar3 + 3);
          *(undefined4 *)((long)puVar8 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x1c);
          iVar7 = iVar7 + -1;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3 = puVar3 + 4;
          puVar8 = puVar8 + 4;
        } while (iVar7 != 0);
        plVar4 = puVar6 + 2;
        do {
          *(undefined4 *)(plVar4 + 1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar4 + 0xc)) && (*plVar4 != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,*plVar4,(ulong)*(uint *)((long)plVar4 + 0xc) << 2);
          }
          *plVar4 = 0;
          *(undefined4 *)((long)plVar4 + 0xc) = 0x80000000;
          *(undefined4 *)(plVar4 + -1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar4 + -4)) && (plVar4[-2] != 0)) {
            (**(code **)(*(long *)puVar1 + 0x20))
                      (puVar1,plVar4[-2],(ulong)*(uint *)((long)plVar4 + -4) << 2);
          }
          plVar4[-2] = 0;
          iVar5 = iVar5 + -1;
          *(undefined4 *)((long)plVar4 + -4) = 0x80000000;
          plVar4 = plVar4 + 4;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar5;
    }
  }
  return;
}


