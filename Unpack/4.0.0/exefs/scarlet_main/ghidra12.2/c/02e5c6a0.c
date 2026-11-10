/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e5c6a0; name: FUN_02e5c6a0
 */


void FUN_02e5c6a0(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_PTR_047e3248;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 5) {
    uVar4 = 0;
LAB_02e5c7d0:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[2] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[2]);
    }
    if ((*puVar5 < 7) || ((ulong)puVar5[3] == 0)) goto LAB_02e5c7d0;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[3]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = (**(code **)(PTR_PTR_047e3248 + uVar4 * 8))(param_1,lVar3,0);
  *param_2 = uVar6;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 9) {
    uVar4 = 0;
LAB_02e5c7dc:
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[4] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[4]);
    }
    if ((*puVar5 < 0xb) || ((ulong)puVar5[5] == 0)) goto LAB_02e5c7dc;
    puVar1 = (uint *)((long)param_3 + (ulong)puVar5[5]);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar6 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3,0);
  param_2[1] = uVar6;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0xd) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[6] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[6]);
    }
    if ((0xe < *puVar5) && ((ulong)puVar5[7] != 0)) {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[7]);
      lVar3 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_02e5c7a4;
    }
  }
  lVar3 = 0;
LAB_02e5c7a4:
  uVar6 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar3,0);
  param_2[2] = uVar6;
  return;
}


