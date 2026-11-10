/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0019e060; name: FUN_0019e060
 */


void FUN_0019e060(long param_1,long param_2,long param_3,ulong param_4,long *param_5,
                 undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  *(long *)(param_1 + 0x28) = (8L << (param_4 & 0x3f)) + 0x20000;
  if (param_3 == 0) {
    return;
  }
  puVar4 = (undefined8 *)param_5[1];
  if (0x57 < (param_5[3] - (long)puVar4) + *param_5 + -0x10) {
    puVar1 = puVar4 + 0xc;
    if ((undefined8 *)(*param_5 + param_5[3]) < puVar1) {
      if ((int)param_5[4] == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x60,0x10);
        if (puVar4 == (undefined8 *)0x0) {
          FUN_0015ed40(0x60);
        }
      }
    }
    else {
      param_5[1] = (long)puVar1;
      puVar2 = (undefined8 *)param_5[2];
      if ((undefined8 *)param_5[2] <= puVar1) {
        puVar2 = puVar1;
      }
      param_5[2] = (long)puVar2;
    }
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = &LAB_001a3620;
      goto LAB_0019e180;
    }
  }
  puVar4 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x58,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_0015ed40(0x58);
  }
  puVar5 = &LAB_001a36b0;
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
LAB_0019e180:
  *(undefined1 **)(param_1 + 0x30) = puVar5;
  FUN_001a3730(puVar4,param_4 & 0xffffffff,param_4 & 0xffffffff,0x10,param_5,param_6);
  lVar6 = param_3 - param_2;
  if (lVar6 == 0) {
    puVar4[6] = param_3;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    if ((4 < *(int *)(param_1 + 4)) && (*(int *)(lVar7 + 0x28) != 0)) {
      if (*(int *)(lVar7 + 0x24) <= lVar6) {
        lVar6 = (long)*(int *)(lVar7 + 0x24);
      }
    }
    iVar3 = *(int *)(lVar7 + 0x14);
    lVar7 = lVar6;
    if (iVar3 <= lVar6) {
      lVar7 = (long)iVar3;
    }
    if (iVar3 < 1) {
      lVar7 = lVar6;
    }
    if (0x3ffffff < lVar7) {
      lVar7 = 0x4000000;
    }
    FUN_001a3a88(puVar4,param_2,param_3,lVar7);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar4;
  return;
}


