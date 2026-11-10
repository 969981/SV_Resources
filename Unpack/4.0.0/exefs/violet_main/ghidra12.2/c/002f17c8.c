/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f17c8; name: FUN_002f17c8
 */


int * FUN_002f17c8(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *param_2 = 0;
  puVar2 = PTR_LAB_047cba48;
  iVar1 = *param_1;
  if (iVar1 - 3U < 2) {
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 6));
    }
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined2 *)(param_2 + 2) = 0;
  }
  else if (iVar1 == 5) {
    FUN_0028f35c(param_1 + 8,param_2 + 8);
  }
  else if (iVar1 == 6) {
    plVar3 = (long *)(param_1 + 0xe);
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == lVar4) {
        lVar5 = lVar4;
      }
      else {
        do {
          lVar6 = lVar5 + -0x50;
          FUN_002f2580(lVar5 + -0x18);
          FUN_0025cef0(lVar5 + -0x30,*(undefined8 *)(lVar5 + -0x28));
          if ((*(byte *)(lVar5 + -0x48) & 1) != 0) {
            FUN_0049e790(puVar2,*(undefined8 *)(lVar5 + -0x38));
          }
          lVar5 = lVar6;
        } while (lVar4 != lVar6);
        lVar5 = *plVar3;
      }
      *(long *)(param_1 + 0x10) = lVar4;
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
      *plVar3 = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    uVar7 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar7;
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
  }
  return param_1;
}


