/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03497ca8; name: FUN_03497ca8
 */


void FUN_03497ca8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 4);
  if (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0x0;
    do {
      if ((puVar4[2] == 0) || (*(int *)(puVar4 + 0xf) == 3)) {
        puVar6 = (undefined8 *)puVar4[1];
LAB_03497ce8:
        piVar1 = param_1 + 4;
        if (*(undefined8 **)(param_1 + 4) != puVar4) {
          piVar1 = (int *)(puVar5 + 1);
        }
        *(undefined8 **)piVar1 = puVar6;
        if (*(undefined8 **)(param_1 + 2) == puVar4) {
          *(undefined8 **)(param_1 + 2) = puVar5;
        }
        *param_1 = *param_1 + -1;
        puVar4[1] = puVar7;
        puVar7 = puVar4;
      }
      else {
        if (*(int *)((long)puVar4 + 0x7c) < 2) {
          puVar6 = (undefined8 *)puVar4[1];
          if (*(int *)((long)puVar4 + 0x84) == 0) goto LAB_03497ce8;
        }
        else {
          puVar6 = (undefined8 *)puVar4[1];
        }
        puVar5 = puVar4;
      }
      puVar4 = puVar6;
      puVar3 = PTR_DAT_047e2fd0;
    } while (puVar4 != (undefined8 *)0x0);
    while (puVar4 = puVar7, puVar4 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puVar4[1];
      FUN_034948c4(puVar4);
      iVar2 = *(int *)((long)puVar4 + 0x74) + -1;
      *(int *)((long)puVar4 + 0x74) = iVar2;
      if (iVar2 == 0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(puVar3 + 0x30))(0,puVar4);
      }
    }
  }
  return;
}


