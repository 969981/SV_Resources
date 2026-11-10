/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dc18c; name: FUN_034dc18c
 */


undefined8 FUN_034dc18c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    puVar5 = (undefined8 *)*param_1;
    if ((param_2 & 1) == 0) {
      do {
        lVar4 = puVar5[1];
        if (*(long *)(lVar4 + 0x10) != 0) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
          (**(code **)(puVar2 + 0x30))(0);
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
        }
        *(undefined8 *)(lVar4 + 8) = 0;
        (**(code **)(puVar2 + 0x30))(2,lVar4);
        uVar3 = *(uint *)(param_1 + 1);
        if (1 < uVar3) {
          lVar4 = *param_1 + (ulong)uVar3 * 0x10;
          uVar1 = *(undefined8 *)(lVar4 + -8);
          *puVar5 = *(undefined8 *)(lVar4 + -0x10);
          puVar5[1] = uVar1;
          uVar3 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar3 - 1;
      } while ((undefined8 *)(*param_1 + (ulong)(uVar3 - 1) * 0x10) != puVar5);
    }
    else {
      puVar6 = puVar5;
      do {
        lVar4 = puVar6[1];
        if (*(long *)(lVar4 + 8) == 0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            *(undefined4 *)(lVar4 + 0x18) = 0;
            (**(code **)(puVar2 + 0x30))(0);
            *(undefined8 *)(lVar4 + 0x10) = 0;
            *(undefined4 *)(lVar4 + 0x1c) = 0;
          }
          *(undefined8 *)(lVar4 + 8) = 0;
          (**(code **)(puVar2 + 0x30))(2,lVar4);
          uVar3 = *(uint *)(param_1 + 1);
          if (1 < uVar3) {
            lVar4 = *param_1 + (ulong)uVar3 * 0x10;
            uVar1 = *(undefined8 *)(lVar4 + -8);
            *puVar6 = *(undefined8 *)(lVar4 + -0x10);
            puVar6[1] = uVar1;
            uVar3 = *(uint *)(param_1 + 1);
          }
          puVar5 = (undefined8 *)*param_1;
          uVar3 = uVar3 - 1;
          *(uint *)(param_1 + 1) = uVar3;
        }
        else {
          puVar6 = puVar6 + 2;
        }
      } while (puVar5 + (ulong)uVar3 * 2 != puVar6);
    }
  }
  return 1;
}


