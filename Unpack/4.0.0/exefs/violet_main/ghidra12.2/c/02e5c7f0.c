/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e5c7f0; name: FUN_02e5c7f0
 */


void FUN_02e5c7f0(undefined8 param_1,undefined1 (*param_2) [16],int *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  ushort uVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 5) {
    uVar4 = 0;
LAB_02e5c9e0:
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[2] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[2]);
    }
    if ((*puVar5 < 7) || ((ulong)puVar5[3] == 0)) goto LAB_02e5c9e0;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[3]);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar9 = (**(code **)(PTR_PTR_047e3250 + uVar4 * 8))(param_1,lVar6,0);
  *param_2 = auVar9;
  puVar2 = PTR_PTR_047e3258;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 9) {
    uVar4 = 0;
LAB_02e5c9ec:
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[4] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[4]);
    }
    if ((*puVar5 < 0xb) || ((ulong)puVar5[5] == 0)) goto LAB_02e5c9ec;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[5]);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar9 = (**(code **)(PTR_PTR_047e3258 + uVar4 * 8))(param_1,lVar6,0);
  param_2[1] = auVar9;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0xd) {
    uVar4 = 0;
LAB_02e5c9f8:
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[6] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[6]);
    }
    if ((*puVar5 < 0xf) || ((ulong)puVar5[7] == 0)) goto LAB_02e5c9f8;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[7]);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  auVar9 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar6,0);
  param_2[2] = auVar9;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  lVar6 = -(long)*param_3;
  uVar3 = *puVar5;
  if (uVar3 < 0x15) {
LAB_02e5c980:
    if (0x10 < uVar3) goto LAB_02e5c988;
    uVar4 = 0;
  }
  else {
    if (((ulong)puVar5[10] != 0) &&
       (uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[10]), uVar4 != 0)) {
      if ((uVar3 < 0x17) || ((ulong)puVar5[0xb] == 0)) {
        lVar6 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_3 + (ulong)puVar5[0xb]);
        lVar6 = (long)puVar1 + (ulong)*puVar1;
      }
      uVar8 = (**(code **)(PTR_PTR_047e3248 + uVar4 * 8))(param_1,lVar6,0);
      *(undefined4 *)param_2[3] = uVar8;
      lVar6 = -(long)*param_3;
      uVar3 = *(ushort *)((long)param_3 - (long)*param_3);
      goto LAB_02e5c980;
    }
LAB_02e5c988:
    uVar7 = (ulong)*(ushort *)((long)param_3 + lVar6 + 0x10);
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + uVar7);
    }
    if ((0x12 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)param_3 + lVar6 + 0x12), uVar7 != 0)) {
      puVar1 = (uint *)((long)param_3 + uVar7);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_02e5c9b4;
    }
  }
  lVar6 = 0;
LAB_02e5c9b4:
  auVar9 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar6,0);
  param_2[4] = auVar9;
  return;
}


