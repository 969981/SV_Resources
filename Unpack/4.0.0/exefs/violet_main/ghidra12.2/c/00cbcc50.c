/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbcc50; name: FUN_00cbcc50
 */


void FUN_00cbcc50(undefined8 param_1,undefined1 (*param_2) [16],byte *param_3,int *param_4,
                 char *param_5)

{
  uint *puVar1;
  ushort uVar2;
  char *pcVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_5 == (char *)0x0) {
    *param_3 = 0;
  }
  pcVar3 = (char *)0x0;
  if (param_5 != (char *)0x0) {
    pcVar3 = param_5;
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    puVar5 = (ushort *)((long)param_4 - (long)*param_4);
    if (6 < *puVar5) {
      uVar4 = 0;
      if ((ulong)puVar5[3] != 0) {
        uVar4 = (ulong)*(byte *)((long)param_4 + (ulong)puVar5[3]);
      }
      if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
        puVar1 = (uint *)((long)param_4 + (ulong)puVar5[4]);
        if ((int)uVar4 != 1) {
          pcVar3 = (char *)0x0;
        }
        auVar8 = (**(code **)(PTR_PTR_047e3258 + uVar4 * 8))
                           (param_1,(long)puVar1 + (ulong)*puVar1,pcVar3);
        *param_2 = auVar8;
        *param_3 = *param_3 | 1;
      }
    }
  }
  pcVar3 = (char *)0x0;
  if ((param_5 == (char *)0x0) || (pcVar3 = param_5 + 8, param_5[8] == '\0')) {
    puVar5 = (ushort *)((long)param_4 - (long)*param_4);
    if (0xe < *puVar5) {
      uVar4 = 0;
      if ((ulong)puVar5[7] != 0) {
        uVar4 = (ulong)*(byte *)((long)param_4 + (ulong)puVar5[7]);
      }
      if ((0x10 < *puVar5) && ((ulong)puVar5[8] != 0)) {
        puVar1 = (uint *)((long)param_4 + (ulong)puVar5[8]);
        if ((int)uVar4 != 1) {
          pcVar3 = (char *)0x0;
        }
        auVar8 = (**(code **)(PTR_PTR_047e3258 + uVar4 * 8))
                           (param_1,(long)puVar1 + (ulong)*puVar1,pcVar3);
        param_2[2] = auVar8;
        *param_3 = *param_3 | 4;
      }
    }
    if (param_5 != (char *)0x0) goto LAB_00cbcca8;
    pcVar3 = (char *)0x0;
LAB_00cbcd80:
    lVar6 = (long)*param_4;
    uVar2 = *(ushort *)((long)param_4 - lVar6);
    if (uVar2 < 0xb) {
      uVar4 = 0;
    }
    else {
      uVar7 = (ulong)((ushort *)((long)param_4 - lVar6))[5];
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = (ulong)*(byte *)((long)param_4 + uVar7);
      }
    }
    if (param_5 != (char *)0x0) {
      param_5[0x11] = (char)uVar4;
      goto LAB_00cbccd0;
    }
  }
  else {
LAB_00cbcca8:
    pcVar3 = param_5 + 0x10;
    if (*pcVar3 != '\0') {
      return;
    }
    uVar4 = (ulong)(byte)param_5[0x11];
    if (param_5[0x11] == 0) goto LAB_00cbcd80;
LAB_00cbccd0:
    if (((int)uVar4 - 3U < 2) && (param_5 != (char *)0x0)) goto LAB_00cbcce0;
    lVar6 = (long)*param_4;
    uVar2 = *(ushort *)((long)param_4 - lVar6);
  }
  if (uVar2 < 0xd) {
    return;
  }
  uVar7 = (ulong)*(ushort *)((long)param_4 + (0xc - lVar6));
  if (uVar7 == 0) {
    return;
  }
  puVar1 = (uint *)((long)param_4 + uVar7);
  param_4 = (int *)((long)puVar1 + (ulong)*puVar1);
LAB_00cbcce0:
  if (param_4 != (int *)0x0) {
    auVar8 = (**(code **)(PTR_PTR_047e3250 + uVar4 * 8))(param_1,param_4,pcVar3);
    param_2[1] = auVar8;
    *param_3 = *param_3 | 2;
  }
  return;
}


