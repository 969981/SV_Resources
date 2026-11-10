/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4f570; name: FUN_00c4f570
 */


ulong FUN_00c4f570(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 auStack_60 [4];
  undefined8 local_28;
  
  local_28 = *param_1;
  auStack_60[0] = *param_2;
  local_68 = *param_3;
  local_70 = *param_4;
  uVar4 = FUN_00c4f310(&local_28,auStack_60,&local_68,&local_70);
  puVar5 = (ulong *)*param_5;
  puVar6 = (ulong *)*param_4;
  if (*puVar6 < *puVar5) {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar9 = puVar6[2];
    uVar8 = puVar5[2];
    uVar7 = *puVar5;
    puVar6[1] = puVar5[1];
    puVar6[2] = uVar8;
    *puVar6 = uVar7;
    puVar5[1] = uVar2;
    puVar5[2] = uVar9;
    *puVar5 = uVar1;
    puVar5 = (ulong *)*param_4;
    puVar6 = (ulong *)*param_3;
    iVar3 = (int)uVar4;
    if (*puVar6 < *puVar5) {
      uVar4 = *puVar6;
      uVar1 = puVar6[1];
      uVar7 = puVar6[2];
      uVar2 = puVar5[2];
      uVar8 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = uVar2;
      *puVar6 = uVar8;
      puVar5[1] = uVar1;
      puVar5[2] = uVar7;
      *puVar5 = uVar4;
      puVar5 = (ulong *)*param_3;
      puVar6 = (ulong *)*param_2;
      if (*puVar6 < *puVar5) {
        uVar4 = *puVar6;
        uVar1 = puVar6[1];
        uVar7 = puVar6[2];
        uVar2 = puVar5[2];
        uVar8 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = uVar2;
        *puVar6 = uVar8;
        puVar5[1] = uVar1;
        puVar5[2] = uVar7;
        *puVar5 = uVar4;
        puVar5 = (ulong *)*param_2;
        puVar6 = (ulong *)*param_1;
        if (*puVar6 < *puVar5) {
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          uVar4 = (ulong)(iVar3 + 4);
          uVar9 = puVar6[2];
          uVar8 = puVar5[2];
          uVar7 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = uVar8;
          *puVar6 = uVar7;
          puVar5[1] = uVar2;
          puVar5[2] = uVar9;
          *puVar5 = uVar1;
        }
        else {
          uVar4 = (ulong)(iVar3 + 3);
        }
      }
      else {
        uVar4 = (ulong)(iVar3 + 2);
      }
    }
    else {
      uVar4 = (ulong)(iVar3 + 1);
    }
  }
  return uVar4;
}


