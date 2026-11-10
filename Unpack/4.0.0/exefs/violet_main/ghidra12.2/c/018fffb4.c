/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fffb4; name: FUN_018fffb4
 */


void FUN_018fffb4(int *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  if (param_2[0xd] != 0) {
    local_60[0] = 0x10402;
    goto LAB_01900168;
  }
  uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  *(ushort *)((long)param_2 + 0x5a) = uVar1;
  uVar2 = uVar1 - 1;
  uVar11 = (ulong)uVar2;
  uVar5 = FUN_0078a12c();
  lVar6 = FUN_007bf9f0(uVar11 * 0xa8,uVar5);
  if (lVar6 == 0) {
LAB_01900048:
    param_2[0xd] = lVar6;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      FUN_007ef160(param_1,lVar6,param_3,param_4,uVar4);
      if (*param_1 == 0) {
        lVar6 = 0;
        do {
          if (uVar11 * 0xa8 == lVar6 + 0xa8) goto LAB_0190014c;
          lVar7 = param_2[0xd];
          uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
          FUN_007ef160(param_1,lVar7 + lVar6 + 0xa8,param_3,param_4,uVar4);
          lVar6 = lVar6 + 0xa8;
        } while (*param_1 == 0);
      }
      puVar8 = (undefined8 *)param_2[0xd];
      *(undefined2 *)((long)param_2 + 0x5a) = 0;
      param_2[0xc] = 0;
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      uVar11 = FUN_007bfae0(puVar8);
      if (0xa7 < uVar11) {
        uVar9 = 0;
        puVar10 = puVar8;
        do {
          (**(code **)*puVar10)(puVar10);
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 0x15;
        } while (uVar9 < uVar11 / 0xa8);
      }
      FUN_007bfaa0(puVar8);
      param_2[0xd] = 0;
      return;
    }
  }
  else {
    if (uVar2 != 0) {
      lVar7 = lVar6;
      uVar9 = uVar11;
      do {
        FUN_007eeea8(lVar7);
        uVar9 = uVar9 - 1;
        lVar7 = lVar7 + 0xa8;
      } while (uVar9 != 0);
      goto LAB_01900048;
    }
    param_2[0xd] = lVar6;
  }
LAB_0190014c:
  param_2[0xc] = 0xfffffff;
  puVar3 = PTR_DAT_047d0868;
  local_60[0] = 0;
  *(short *)(PTR_DAT_047d0868 + 0x39a) = (short)param_3;
  *(short *)(puVar3 + 0x39c) = (short)param_4;
LAB_01900168:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_60);
  return;
}


