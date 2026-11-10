/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811b20; name: FUN_00811b20
 */


undefined8 FUN_00811b20(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined2 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  long local_50 [2];
  undefined1 auStack_40 [32];
  undefined4 local_18 [2];
  
  if ((param_1[0x1ee] == 0) || (param_1[0x20e] == 0)) {
    return 0;
  }
  **(undefined2 **)(param_1 + 0x4fc) = *param_1;
  FUN_008128e8(auStack_40,param_1 + 0x208);
  FUN_0284e39c(*(long *)(param_1 + 0x4fc) + 8,auStack_40);
  FUN_0284e3d4(auStack_40);
  lVar7 = *(long *)(param_1 + 0x4fc);
  uVar1 = *(uint *)(param_1 + 0x20e);
  *(short *)(lVar7 + 0x20) = (short)uVar1;
  uVar1 = uVar1 & 0xffff;
  *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(param_1 + 0x502);
  *(undefined1 *)(lVar7 + 0x41) = *(undefined1 *)(param_1 + 0x50c);
  *(undefined1 *)(lVar7 + 0x38) = 0;
  uVar10 = 1;
  if (param_1[0x1fe] == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)(lVar7 + 0x2c) = uVar10;
  uVar11 = (uint)(ushort)param_1[0x1ee];
  if (uVar11 == uVar1) {
    *(undefined4 *)(lVar7 + 0x28) = 1;
    lVar7 = FUN_008127c0();
    iVar2 = *(int *)(lVar7 + 4);
  }
  else {
    *(undefined4 *)(lVar7 + 0x28) = 2;
    *(uint *)(lVar7 + 0x34) = uVar1 - uVar11;
    if (uVar1 < uVar11) {
      *(undefined4 *)(lVar7 + 0x30) = 1;
      *(undefined1 *)(lVar7 + 0x40) = 0;
      lVar7 = FUN_008127c0();
      iVar2 = *(int *)(lVar7 + 4);
    }
    else {
      *(uint *)(lVar7 + 0x30) = uVar1 - uVar11;
      lVar7 = FUN_008127c0();
      iVar2 = *(int *)(lVar7 + 4);
    }
  }
  if (iVar2 == -1) {
    puVar8 = *(undefined2 **)(param_1 + 0x4fc);
    uVar10 = *(undefined4 *)(puVar8 + 0x14);
  }
  else {
    lVar7 = FUN_008127c0();
    uVar10 = *(undefined4 *)(lVar7 + 4);
    puVar8 = *(undefined2 **)(param_1 + 0x4fc);
    *(undefined4 *)(puVar8 + 0x14) = uVar10;
  }
  puVar4 = PTR_DAT_047d0868;
  PTR_DAT_047d0868[0x185] = (char)uVar10;
  puVar4[0x184] = *(undefined1 *)((long)puVar8 + 0x41);
  puVar4[0x186] = (char)*(undefined4 *)(puVar8 + 0x16);
  uVar9 = (ushort)*(byte *)(puVar8 + 0x20);
  if (*(byte *)(puVar8 + 0x20) != 0) {
    uVar9 = (ushort)*(undefined4 *)(puVar8 + 0x18);
  }
  *(ushort *)(puVar4 + 0x188) = uVar9;
  *(undefined2 *)(puVar4 + 0x194) = puVar8[0x10];
  *(undefined2 *)(puVar4 + 0x196) = *puVar8;
  puVar4[0x19f] = *(undefined1 *)(puVar8 + 0x1c);
  puVar4[0x18a] = 0;
  *(short *)(puVar4 + 0x198) = (short)*(undefined4 *)(param_1 + 0x50a);
  *(undefined2 *)(puVar4 + 0x19a) = param_1[0x508];
  *(short *)(puVar4 + 0x19c) = (short)*(undefined4 *)(puVar8 + 0x1e);
  local_18[0] = 0;
  puVar4[0x19e] = (char)*(undefined4 *)(param_1 + 0x500);
  FUN_0078a1c0(auStack_40,puVar8 + 4);
  FUN_0078c18c(auStack_40);
  FUN_0078a244(local_50,auStack_40,local_18);
  puVar5 = PTR_DAT_047d1878;
  *(undefined4 *)(puVar4 + 0x18c) = local_18[0];
  *(undefined4 *)(puVar5 + 0x1c0) = local_18[0];
  local_50[0] = 0;
  FUN_007935cc(local_50);
  lVar7 = local_50[0] - *(long *)(param_1 + 0x504);
  plVar6 = (long *)FUN_0079365c();
  uVar3 = 0;
  if (*plVar6 != 0) {
    uVar3 = (undefined2)(lVar7 / *plVar6);
  }
  param_1[0x508] = uVar3;
  FUN_0284e3d4(auStack_40);
  return 1;
}


