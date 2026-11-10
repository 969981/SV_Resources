/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ca468; name: FUN_034ca468
 */


undefined8 FUN_034ca468(long *param_1,long param_2,int param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int local_5c;
  long local_58;
  
  local_5c = param_3;
  local_58 = param_2;
  iVar5 = (**(code **)(*param_1 + 0x88))();
  if (iVar5 != 3) {
    (**(code **)(*param_1 + 0x88))(param_1);
    return 0x5b;
  }
  uVar8 = (uint)*(byte *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 9);
  uVar4 = *(undefined4 *)(param_2 + 0xd);
  local_58 = param_2 + 0x12;
  uVar1 = uVar2 & 0xf;
  uVar9 = *(byte *)(param_2 + 0x11) & 1 | (uint)(uVar8 == 1) << 1 |
          (*(byte *)(param_2 + 0x11) >> 3 & 1) << 10;
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      local_5c = param_3 - *(uint *)(param_2 + 0x12);
      local_58 = param_2 + (ulong)*(uint *)(param_2 + 0x12) + 0x16;
      uVar7 = *(ushort *)((long)param_1 + 0x104);
      if (((uVar7 & 0x7c) == 4) && (param_1[0x21] != 0)) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        uVar7 = *(ushort *)((long)param_1 + 0x104);
        param_1[0x21] = 0;
      }
      param_1[0x21] = 0;
      uVar7 = uVar7 & 0xf800 | 8;
      *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1f) = uVar3;
      *(undefined8 *)((long)param_1 + 0xfc) = 0xffffffff;
      goto LAB_034ca5e8;
    }
    if (uVar1 != 1) {
      return 2;
    }
    if (uVar8 == 0) {
      uVar9 = uVar9 | 0xc;
    }
    else {
      if (1 < uVar8 - 1) {
        return 2;
      }
      uVar9 = uVar9 | 4;
    }
  }
  if (((*(ushort *)((long)param_1 + 0x104) & 0x7c) == 4) && (param_1[0x21] != 0)) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x21] = 0;
  }
  param_1[0x20] = CONCAT44(uVar9,uVar4);
  param_1[0x21] = 0;
  uVar7 = (ushort)uVar9 | 0x80;
  *(uint *)(param_1 + 0x22) = uVar2;
  param_1[0x1f] = CONCAT44(uVar3,uVar3);
LAB_034ca5e8:
  *(ushort *)((long)param_1 + 0x104) = uVar7;
  uVar6 = FUN_034ae500(param_1,&local_58,&local_5c,param_5 & 1);
  return uVar6;
}


