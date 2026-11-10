/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a541d0; name: FUN_00a541d0
 */


bool FUN_00a541d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ushort auStack_d4 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar10 = param_2 + -3;
    local_58 = param_2[-2];
    uStack_50 = param_2[-1];
    local_68 = param_1[2];
    uStack_60 = *puVar10;
    local_78 = *param_1;
    uStack_70 = param_1[1];
    uVar4 = *(uint *)*param_3;
    if ((uVar4 < 3) &&
       (*(ushort *)((long)&uStack_60 + (ulong)uVar4 * 2 + 4) <
        *(ushort *)((long)&local_78 + (ulong)uVar4 * 2 + 4))) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar8 = param_1[2];
      uVar3 = param_2[-1];
      uVar6 = *puVar10;
      param_1[1] = param_2[-2];
      param_1[2] = uVar3;
      *param_1 = uVar6;
      param_2[-2] = uVar2;
      param_2[-1] = uVar8;
      *puVar10 = uVar1;
    }
    break;
  case 3:
    FUN_00a53ae0(param_1,param_1 + 3,param_2 + -3,param_3);
    break;
  case 4:
    FUN_00a53d80(param_1,param_1 + 3,param_1 + 6,param_2 + -3,param_3);
    break;
  case 5:
    FUN_00a53f60(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3,param_3);
    break;
  default:
    FUN_00a53ae0(param_1,param_1 + 3,param_1 + 6,param_3);
    if (param_1 + 9 != param_2) {
      iVar5 = 0;
      lVar7 = 0x30;
      puVar10 = param_1 + 9;
      puVar12 = param_1 + 6;
      do {
        puVar9 = puVar10;
        local_90 = *puVar9;
        local_88 = puVar9[1];
        uStack_80 = puVar9[2];
        local_a0 = puVar12[1];
        uStack_98 = puVar12[2];
        local_a8 = *puVar12;
        uVar4 = *(uint *)*param_3;
        if ((uVar4 < 3) &&
           (*(ushort *)((long)&local_90 + (ulong)uVar4 * 2 + 4) <
            *(ushort *)((long)&local_a8 + (ulong)uVar4 * 2 + 4))) {
          local_48 = *puVar9;
          local_40 = puVar9[1];
          local_38 = puVar9[2];
          lVar11 = lVar7;
          while( true ) {
            puVar10 = (undefined8 *)((long)param_1 + lVar11);
            puVar10[3] = *puVar10;
            puVar10[4] = puVar10[1];
            puVar10[5] = puVar10[2];
            if (lVar11 == 0) break;
            local_c0 = local_48;
            uStack_b8 = local_40;
            local_b0 = local_38;
            local_d0 = puVar10[-2];
            uStack_c8 = puVar10[-1];
            uVar4 = *(uint *)*param_3;
            if ((2 < uVar4) ||
               (lVar11 = lVar11 + -0x18,
               auStack_d4[uVar4] <= *(ushort *)((long)&local_c0 + (ulong)uVar4 * 2 + 4)))
            goto LAB_00a543b4;
          }
          puVar10 = param_1;
LAB_00a543b4:
          iVar5 = iVar5 + 1;
          *puVar10 = local_48;
          puVar10[1] = local_40;
          puVar10[2] = local_38;
          if (iVar5 == 8) {
            return puVar9 + 3 == param_2;
          }
        }
        lVar7 = lVar7 + 0x18;
        puVar10 = puVar9 + 3;
        puVar12 = puVar9;
      } while (puVar9 + 3 != param_2);
    }
  }
  return true;
}


