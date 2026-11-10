/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167b8d8; name: FUN_0167b8d8
 */


void FUN_0167b8d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined2 local_48;
  
  puVar7 = (undefined4 *)param_3[3];
  puVar7[0x14] = 0;
  *puVar7 = 0;
  *(undefined2 *)(puVar7 + 1) = 0xe;
  puVar7[2] = 0;
  *(undefined2 *)(puVar7 + 3) = 0xe;
  puVar7[4] = 0;
  *(undefined2 *)(puVar7 + 5) = 0xe;
  puVar7[6] = 0;
  *(undefined2 *)(puVar7 + 7) = 0xe;
  puVar7[8] = 0;
  *(undefined2 *)(puVar7 + 9) = 0xe;
  puVar7[10] = 0;
  *(undefined2 *)(puVar7 + 0xb) = 0xe;
  puVar7[0xc] = 0;
  *(undefined2 *)(puVar7 + 0xd) = 0xe;
  puVar7[0xe] = 0;
  *(undefined2 *)(puVar7 + 0xf) = 0xe;
  puVar7[0x10] = 0;
  *(undefined2 *)(puVar7 + 0x11) = 0xe;
  puVar7[0x12] = 0;
  *(undefined2 *)(puVar7 + 0x13) = 0xe;
  *(undefined1 *)(param_3[2] + 0xa8) = 0;
  lVar8 = param_3[2];
  bVar2 = *(byte *)(lVar8 + 0xa8);
  if (bVar2 < *(byte *)(lVar8 + 0xa6)) {
    *(byte *)(lVar8 + 0xa8) = bVar2 + 1;
    plVar9 = *(long **)(lVar8 + (ulong)bVar2 * 8);
    while (plVar9 != (long *)0x0) {
      local_50 = *param_3;
      local_60 = param_3[1];
      local_48 = 0;
      plStack_58 = plVar9;
      FUN_0167bb8c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x4a0),&local_68,&local_60);
      uVar5 = local_67;
      uVar4 = local_68;
      lVar8 = param_3[3];
      uVar6 = (**(code **)(*plVar9 + 0x98))(plVar9);
      if (*(uint *)(lVar8 + 0x50) < 10) {
        *(undefined4 *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x50) * 8) = uVar6;
        iVar3 = *(int *)(lVar8 + 0x50);
        lVar1 = lVar8 + (long)iVar3 * 8;
        *(undefined1 *)(lVar1 + 4) = uVar4;
        *(undefined1 *)(lVar1 + 5) = uVar5;
        *(int *)(lVar8 + 0x50) = iVar3 + 1;
      }
      lVar8 = param_3[2];
      bVar2 = *(byte *)(lVar8 + 0xa8);
      if (*(byte *)(lVar8 + 0xa6) <= bVar2) {
        return;
      }
      *(byte *)(lVar8 + 0xa8) = bVar2 + 1;
      plVar9 = *(long **)(lVar8 + (ulong)bVar2 * 8);
    }
  }
  return;
}


