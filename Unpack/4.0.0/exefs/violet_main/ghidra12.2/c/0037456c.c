/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037456c; name: FUN_0037456c
 */


void FUN_0037456c(undefined8 *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_LAB_047cba48;
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == puVar4) {
    puVar5 = puVar4;
  }
  else {
    do {
      puVar5 = puVar5 + -1;
      pbVar2 = (byte *)*puVar5;
      *puVar5 = 0;
      if (pbVar2 != (byte *)0x0) {
        puVar3 = *(undefined8 **)(pbVar2 + 0x38);
        pbVar2[0x38] = 0;
        pbVar2[0x39] = 0;
        pbVar2[0x3a] = 0;
        pbVar2[0x3b] = 0;
        pbVar2[0x3c] = 0;
        pbVar2[0x3d] = 0;
        pbVar2[0x3e] = 0;
        pbVar2[0x3f] = 0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          FUN_0049e790(puVar1,puVar3);
        }
        if ((pbVar2[0x18] & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(pbVar2 + 0x10));
        }
        FUN_0049e790(puVar1,pbVar2);
      }
    } while (puVar4 != puVar5);
    puVar5 = (undefined8 *)*param_1;
  }
  puVar1 = PTR_LAB_047cba48;
  param_1[1] = puVar4;
  FUN_0049e790(puVar1,puVar5);
  return;
}


