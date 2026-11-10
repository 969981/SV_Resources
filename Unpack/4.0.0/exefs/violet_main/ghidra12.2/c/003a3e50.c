/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a3e50; name: FUN_003a3e50
 */


undefined8
FUN_003a3e50(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,ulong param_4,int param_5,
            long *param_6)

{
  undefined1 *__dest;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  ulong local_a8;
  undefined1 *local_90;
  undefined1 *local_88;
  
  if (*(long *)(param_1 + 0x26c) != 0) {
    uVar8 = 0x44;
    uVar9 = 0x333;
LAB_003a3e90:
    FUN_003c3950(param_1,0x50,0xf5,uVar8,"external/openssl/ssl/record/rec_layer_d1.c",uVar9);
    return 0;
  }
  if ((*(int *)(*(long *)(param_1 + 0x2a) + 0xfc) != 0) &&
     (uVar8 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1), (int)uVar8 < 1)) {
    return uVar8;
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    return 0;
  }
  uVar6 = FUN_003b5ee0(param_1);
  if ((uVar6 & 0xffffffff) < param_4) {
    uVar8 = 0xc2;
    uVar9 = 0x344;
    goto LAB_003a3e90;
  }
  if (((*(long *)(param_1 + 0x174) == 0) || (*(long *)(param_1 + 0x14c) == 0)) ||
     (lVar7 = FUN_0043b770(*(undefined8 *)(param_1 + 0x152)), lVar7 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_0043b770(*(undefined8 *)(param_1 + 0x152));
    uVar2 = FUN_0043b720();
    if ((int)uVar2 < 0) {
      uVar8 = 0xc2;
      uVar9 = 0x354;
      goto LAB_003a4278;
    }
  }
  puVar10 = *(undefined1 **)(param_1 + 0x264);
  *puVar10 = (char)param_2;
  local_ac = param_2;
  if ((**(int **)(param_1 + 2) == 0x1ffff) && (param_1[0x1a8] != 0x100)) {
    *(undefined2 *)(puVar10 + 1) = 0xfffe;
    if (*(long *)(param_1 + 0x14c) != 0) goto LAB_003a3fe0;
LAB_003a4024:
    iVar5 = 0;
  }
  else {
    puVar10[1] = (char)((uint)*param_1 >> 8);
    puVar10[2] = (char)*param_1;
    if (*(long *)(param_1 + 0x14c) == 0) goto LAB_003a4024;
LAB_003a3fe0:
    FUN_0043b170();
    uVar3 = FUN_0043b160();
    if ((uVar3 & 0xf0007) - 6 < 2) {
      iVar5 = 8;
    }
    else {
      if ((uVar3 & 0xf0007) != 2) goto LAB_003a4024;
      iVar4 = FUN_0043b4a0(*(undefined8 *)(param_1 + 0x14c));
      iVar5 = 0;
      if (1 < iVar4) {
        iVar5 = iVar4;
      }
    }
  }
  puVar11 = puVar10 + 0xd;
  lVar7 = (long)iVar5;
  __dest = puVar11 + lVar7;
  local_a8 = param_4;
  local_90 = __dest;
  local_88 = param_3;
  if (*(long *)(param_1 + 0x148) == 0) {
    memcpy(__dest,param_3,param_4);
    local_88 = __dest;
  }
  else {
    iVar4 = FUN_003a7e30(param_1,auStack_b0);
    if (iVar4 == 0) {
      uVar8 = 0x8d;
      uVar9 = 0x390;
      goto LAB_003a4278;
    }
  }
  if ((uVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) == 0)) {
    iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,auStack_b0,puVar11 + local_a8 + lVar7,1);
    if (iVar4 == 0) {
      uVar8 = 0x44;
      uVar9 = 0x3a4;
      goto LAB_003a4278;
    }
    local_a8 = local_a8 + uVar2;
  }
  if (iVar5 != 0) {
    local_a8 = local_a8 + lVar7;
  }
  local_90 = puVar11;
  local_88 = puVar11;
  iVar5 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))(param_1,auStack_b0,1,1);
  if (iVar5 < 1) {
    iVar5 = FUN_003c39d0(param_1);
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    uVar8 = 0x44;
    uVar9 = 0x3b4;
LAB_003a4278:
    FUN_003c3950(param_1,0x50,0xf5,uVar8,"external/openssl/ssl/record/rec_layer_d1.c",uVar9);
    return 0xffffffff;
  }
  if ((uVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) != 0)) {
    iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,auStack_b0,puVar11 + local_a8,1);
    if (iVar5 == 0) {
      uVar8 = 0x44;
      uVar9 = 0x3bd;
      goto LAB_003a4278;
    }
    local_a8 = local_a8 + uVar2;
  }
  puVar10[3] = *(undefined1 *)(*(long *)(param_1 + 0x63e) + 3);
  puVar10[4] = *(undefined1 *)(*(long *)(param_1 + 0x63e) + 2);
  uVar1 = *(undefined4 *)((long)param_1 + 0x18ea);
  *(undefined2 *)(puVar10 + 9) = *(undefined2 *)((long)param_1 + 0x18ee);
  *(undefined4 *)(puVar10 + 5) = uVar1;
  puVar10[0xb] = (char)(local_a8 >> 8);
  puVar10[0xc] = (char)local_a8;
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))(1,0,0x100,puVar10,0xd,param_1,*(undefined8 *)(param_1 + 0x30));
  }
  local_a8 = local_a8 + 0xd;
  local_ac = param_2;
  FUN_003a68f0(param_1 + 0x63a);
  if (param_5 == 0) {
    *(ulong *)(param_1 + 0x26c) = local_a8;
    *(undefined8 *)(param_1 + 0x26a) = 0;
    *(ulong *)(param_1 + 0x630) = param_4;
    *(undefined1 **)(param_1 + 0x636) = param_3;
    param_1[0x632] = param_2;
    *(ulong *)(param_1 + 0x634) = param_4;
    uVar8 = FUN_003a4fc0(param_1,param_2,param_3,param_4,param_6);
    return uVar8;
  }
  *param_6 = local_a8;
  return 1;
}


