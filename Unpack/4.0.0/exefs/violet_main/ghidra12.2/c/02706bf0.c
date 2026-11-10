/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02706bf0; name: FUN_02706bf0
 */


void FUN_02706bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)param_1[2];
  puVar1 = param_1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  else if (puVar4 == (undefined8 *)0x0) {
    puVar2 = puVar5;
  }
  else {
    puVar2 = puVar4;
    do {
      puVar1 = puVar2;
      puVar2 = (undefined8 *)puVar1[1];
    } while ((undefined8 *)puVar1[1] != (undefined8 *)0x0);
    puVar2 = (undefined8 *)puVar1[2];
  }
  puVar3 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)puVar3[1];
  if (puVar1 == param_1) {
    if (puVar2 == (undefined8 *)0x0) {
      if ((undefined8 **)puVar3 == &DAT_04859d88) {
        DAT_04859d88 = (undefined8 *)0x0;
      }
      else if (puVar6 == param_1) {
        puVar3[1] = 0;
      }
      else {
        puVar3[2] = 0;
      }
    }
    else {
      *puVar2 = puVar3;
      if ((undefined8 **)puVar3 == &DAT_04859d88) {
        DAT_04859d88 = puVar2;
      }
      else if (puVar6 == param_1) {
        puVar3[1] = puVar2;
      }
      else {
        puVar3[2] = puVar2;
      }
    }
    puVar6 = puVar3;
    if (DAT_04859d90 == param_1) {
      while( true ) {
        DAT_04859d90 = puVar6;
        puVar6 = puVar4;
        if (puVar6 == (undefined8 *)0x0) break;
        puVar4 = (undefined8 *)puVar6[1];
      }
    }
    puVar4 = puVar3;
    if (DAT_04859d98 == param_1) {
      while( true ) {
        DAT_04859d98 = puVar4;
        puVar4 = puVar5;
        if (puVar4 == (undefined8 *)0x0) break;
        puVar5 = (undefined8 *)puVar4[2];
      }
    }
  }
  else {
    *puVar5 = puVar1;
    puVar1[1] = puVar5;
    if (puVar4 != puVar1) {
      puVar1[2] = puVar4;
      *puVar4 = puVar1;
      puVar4 = (undefined8 *)*puVar1;
      if (puVar2 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = puVar4;
        puVar5 = puVar2;
      }
      puVar4[1] = puVar5;
    }
    *puVar1 = puVar3;
    if ((undefined8 **)puVar3 == &DAT_04859d88) {
      DAT_04859d88 = puVar1;
    }
    else if (puVar6 == param_1) {
      puVar3[1] = puVar1;
    }
    else {
      puVar3[2] = puVar1;
    }
    puVar3 = puVar4;
  }
  param_2[1] = puVar3;
  param_2[2] = puVar1;
  *param_2 = puVar2;
  return;
}


