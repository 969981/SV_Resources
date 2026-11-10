/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4f6f0; name: FUN_00a4f6f0
 */


void FUN_00a4f6f0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = -0x401;
  lVar6 = 0x44;
  do {
    puVar2 = (undefined8 *)(param_1 + lVar6);
    local_48 = *puVar2;
    local_40 = puVar2[1];
    uStack_38 = puVar2[2];
    uVar4 = FUN_00a65174(&local_48,0,0);
    if (((uVar4 & 1) != 0) || (uVar4 = FUN_00a65174(&local_48,0,1), (uVar4 & 1) != 0)) {
      iVar1 = (int)lVar5 + 0x402;
      FUN_00a4f9fc(param_1,0,0,iVar1,1);
      FUN_00a4f9fc(param_1,1,0,iVar1,1);
    }
    bVar3 = lVar5 != -1;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x18;
  } while (bVar3);
  uVar4 = FUN_00a4f8c0(1);
  if ((uVar4 & 1) != 0) {
    lVar5 = -0x401;
    lVar6 = 0x44;
    do {
      puVar2 = (undefined8 *)(param_1 + lVar6);
      local_48 = *puVar2;
      local_40 = puVar2[1];
      uStack_38 = puVar2[2];
      uVar4 = FUN_00a65174(&local_48,1,0);
      if (((uVar4 & 1) != 0) || (uVar4 = FUN_00a65174(&local_48,1,1), (uVar4 & 1) != 0)) {
        iVar1 = (int)lVar5 + 0x402;
        FUN_00a4f9fc(param_1,0,1,iVar1,1);
        FUN_00a4f9fc(param_1,1,1,iVar1,1);
      }
      bVar3 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (bVar3);
  }
  uVar4 = FUN_00a4f8c0(2);
  if ((uVar4 & 1) != 0) {
    lVar5 = -0x401;
    lVar6 = 0x44;
    do {
      puVar2 = (undefined8 *)(param_1 + lVar6);
      local_48 = *puVar2;
      local_40 = puVar2[1];
      uStack_38 = puVar2[2];
      uVar4 = FUN_00a65174(&local_48,2,0);
      if (((uVar4 & 1) != 0) || (uVar4 = FUN_00a65174(&local_48,2,1), (uVar4 & 1) != 0)) {
        iVar1 = (int)lVar5 + 0x402;
        FUN_00a4f9fc(param_1,0,2,iVar1,1);
        FUN_00a4f9fc(param_1,1,2,iVar1,1);
      }
      bVar3 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (bVar3);
  }
  return;
}


