/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b3570; name: FUN_008b3570
 */


float FUN_008b3570(long param_1,float *param_2,long *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  float fVar8;
  char local_58 [4];
  char local_54 [4];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x148) + 0x9c);
  *param_2 = 0.0;
  uVar2 = *(ushort *)(param_1 + 0x114);
  if (((uVar2 ^ 0xffff) & 0x9000) == 0) {
    fVar8 = *(float *)(param_1 + 0xf8);
    puVar7 = *(undefined2 **)(param_1 + 0xd8);
    iVar3 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        while (puVar6 = (undefined2 *)(**(code **)(*param_3 + 0x70))(param_3,local_58,puVar7),
              local_58[0] == '\0') {
          if ((puVar6 <= puVar7) ||
             (puVar7 = puVar6,
             (undefined2 *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112) * 2) <
             puVar6)) goto LAB_008b3670;
        }
        if (puVar6 == (undefined2 *)0x0) break;
        iVar4 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                          (*(long **)(param_1 + 0xf0),*puVar7);
        iVar5 = iVar5 + 1;
        *param_2 = *param_2 + (fVar8 / (float)iVar3) * (*(float *)(param_1 + 0x104) + (float)iVar4);
        puVar7 = puVar6;
      } while (iVar5 != iVar1);
    }
LAB_008b3670:
    fVar8 = *(float *)(param_1 + 0x50);
  }
  else {
    if ((~uVar2 & 0x3000) == 0) {
      return *(float *)(*(long *)(param_1 + 0x150) + 0x18);
    }
    if ((uVar2 >> 9 & 1) == 0) {
      if (iVar1 - 1U == 0) {
        return 0.0;
      }
      return *(float *)(*(long *)(param_1 + 0x150) + 4) / (float)(iVar1 - 1U);
    }
    if (iVar1 != 0) {
      iVar3 = 0;
      puVar7 = *(undefined2 **)(param_1 + 0xd8);
      do {
        while (puVar6 = (undefined2 *)(**(code **)(*param_3 + 0x70))(param_3,local_54,puVar7),
              local_54[0] == '\0') {
          if ((puVar6 <= puVar7) ||
             (puVar7 = puVar6,
             (undefined2 *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112) * 2) <
             puVar6)) goto LAB_008b3768;
        }
        if (puVar6 == (undefined2 *)0x0) break;
        if (((*(byte *)(param_1 + 0x115) >> 4 & 1) != 0) || (iVar3 != 0)) {
          iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                            (*(long **)(param_1 + 0xf0),*puVar7);
          *param_2 = *param_2 + *(float *)(param_1 + 0x104) + (float)iVar5;
        }
        iVar3 = iVar3 + 1;
        puVar7 = puVar6;
      } while (iVar3 != iVar1);
    }
LAB_008b3768:
    fVar8 = *param_2;
  }
  if (fVar8 == 0.0) {
    return 0.0;
  }
  return *(float *)(*(long *)(param_1 + 0x150) + 4) / fVar8;
}


