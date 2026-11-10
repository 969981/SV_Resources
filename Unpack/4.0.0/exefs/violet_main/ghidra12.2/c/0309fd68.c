/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309fd68; name: FUN_0309fd68
 */


void FUN_0309fd68(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long local_90;
  undefined8 local_88;
  uint local_68 [2];
  
  *param_1 = &PTR_FUN_0464d0a8;
  param_1[1] = param_2;
  uVar2 = 0;
  iVar9 = (int)((ulong)(param_6 - param_5) >> 2);
  plVar8 = param_1 + 3;
  *plVar8 = 0;
  param_1[4] = 0x8000000000000000;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = &DAT_03d7702c;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  if (1 < iVar9) {
    FUN_030a0c30(param_5,0,iVar9 + -1);
    uVar2 = *(uint *)((long)param_1 + 0x24) & 0x7fffffff;
  }
  if ((int)uVar2 < iVar9) {
    FUN_030a0cec(plVar8,(param_6 - param_5) * 0x40000000 >> 0x20);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != iVar9) {
    *(int *)(param_1 + 4) = iVar9;
    iVar3 = iVar9;
  }
  if (0 < iVar3) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      local_68[0] = *(uint *)(param_5 + lVar11 * 4);
      lVar5 = *plVar8;
      *(uint *)(lVar5 + lVar10) = local_68[0];
      lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) +
                                 ((ulong)(local_68[0] >> 0xe) & 0x3ff00)) + 0x20);
      if ((*(int *)(lVar6 + 0x108) != 0) &&
         ((*(byte *)(*(long *)(lVar6 + 0x100) + ((ulong)local_68[0] & 0x3fffff)) >> 1 & 1) != 0)) {
        local_68[0] = *(uint *)(*(long *)(lVar6 + 0x168) + ((ulong)local_68[0] & 0x3fffff) * 4) |
                      local_68[0] & 0xffc00000;
      }
      lVar5 = lVar5 + lVar10;
      *(uint *)(lVar5 + 4) = local_68[0];
      local_90 = 0;
      local_88 = -0x8000000000000000;
      FUN_0309ff54(plVar7,local_68,&local_90);
      lVar6 = local_88;
      uVar4 = (ulong)local_88._4_4_;
      local_88 = (ulong)local_88._4_4_ << 0x20;
      if ((-1 < lVar6) && (local_90 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar4 * 0x14);
      }
      *(undefined4 *)(lVar5 + 8) = 0xffffffff;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xc;
    } while (lVar11 < *(int *)(param_1 + 4));
  }
  iVar9 = *(int *)(param_1 + 6) + -1;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      puVar1 = (undefined4 *)(*plVar7 + (long)iVar9 * 0x30);
      FUN_030a13d0(puVar1 + 2,param_2,*puVar1,param_3,param_4);
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  param_1[2] = 0xffffffff00000000;
  return;
}


