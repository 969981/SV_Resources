/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fd9e0; name: FUN_034fd9e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034fd9e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_047c6078;
  puVar2 = PTR_DAT_047e7450;
  puVar1 = PTR_DAT_047e2fd0;
  puVar6 = (undefined8 *)param_1[5];
  while (puVar6 != (undefined8 *)0x0) {
    if (param_1[1] != 0) {
      *(undefined4 *)(param_1[1] + 0x114) = 0x42ca0000;
    }
    if ((*(byte *)(param_1 + 10) >> 2 & 1) != 0) {
      *puVar2 = 1;
    }
    lVar3 = puVar6[0x33];
    puVar5 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)(lVar3 + 0x20);
    do {
      puVar4 = puVar5;
      puVar5 = (undefined8 *)*puVar7;
      puVar7 = puVar5 + 3;
    } while (puVar5 != (undefined8 *)0x0 && puVar6 != puVar5);
    if (puVar5 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(lVar3 + 0x20);
      if (*(undefined8 **)(lVar3 + 0x20) != puVar5) {
        puVar7 = puVar4 + 3;
      }
      *puVar7 = puVar5[3];
      if (*(undefined8 **)(lVar3 + 0x18) == puVar5) {
        *(undefined8 **)(lVar3 + 0x18) = puVar4;
      }
    }
    puVar7 = (undefined8 *)puVar6[4];
    if ((undefined8 *)param_1[5] == puVar6) {
      param_1[5] = puVar7;
    }
    else {
      _DAT_00000020 = puVar7;
    }
    (**(code **)*puVar6)(puVar6);
    (**(code **)(puVar1 + 0x30))(5,puVar6);
    puVar6 = puVar7;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  puVar6 = (undefined8 *)param_1[5];
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = PTR_DAT_047e2fd0;
  while (puVar6 != (undefined8 *)0x0) {
    if (puVar6[4] == 0) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = puVar6[4];
    }
    (**(code **)*puVar6)(puVar6);
    (**(code **)(puVar1 + 0x30))(5,puVar6);
    puVar6 = (undefined8 *)param_1[5];
  }
  param_1[5] = 0;
  return;
}


