/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c0818; name: FUN_007c0818
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_007c0818(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_78;
  ulong uStack_70;
  uint local_68;
  ulong local_60;
  uint local_58;
  
  lVar8 = *(long *)PTR_DAT_047d0fc0;
  uVar7 = param_2;
  if (param_2 < 9) {
    uVar7 = 8;
  }
  if (uVar7 < *(ulong *)(param_1 + 0x38)) {
    uVar1 = -param_3;
    if (-1 < (int)param_3) {
      uVar1 = param_3;
    }
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar7 = uVar7 + 7 & 0xfffffffffffffff8;
      if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
        lVar6 = 0;
        iVar2 = *(int *)(param_1 + 0x88);
      }
      else {
        lVar6 = param_1 + 0x90;
        FUN_007c9e3c(lVar6);
        iVar2 = *(int *)(param_1 + 0x88);
      }
      iVar2 = iVar2 * param_3;
      if (iVar2 < 0) {
        iVar3 = -iVar2;
        if (iVar2 < -4) {
          lVar4 = FUN_007c0c74(param_1,uVar7,iVar3);
          iVar2 = iVar3;
          uVar1 = local_58;
        }
        else {
          lVar4 = FUN_007c0bb4();
          iVar2 = iVar3;
          uVar1 = local_58;
        }
      }
      else if (iVar2 < 5) {
        lVar4 = FUN_007c09b4();
        uVar1 = local_58;
      }
      else {
        lVar4 = FUN_007c0a84(param_1,uVar7,iVar2);
        uVar1 = local_58;
      }
      local_58 = iVar2;
      if (lVar4 == 0) {
        if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 != (undefined8 *)0x0)) {
          local_78 = param_1;
          uStack_70 = param_2;
          local_68 = param_3;
          local_60 = uVar7;
          (**(code **)*puVar5)(puVar5,&local_78);
          uVar1 = local_58;
        }
        local_58 = uVar1;
        lVar8 = 0;
      }
      else {
        *(undefined2 *)(lVar4 + 0x10) = *(undefined2 *)(param_1 + 0xd2);
        lVar8 = lVar4 + (ulong)*(ushort *)(lVar4 + 0x12) + 0x20;
        local_58 = uVar1;
      }
      if (lVar6 == 0) {
        return lVar8;
      }
      FUN_007c9e44(lVar6);
      return lVar8;
    }
  }
  if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 != (undefined8 *)0x0)) {
    local_78 = param_1;
    uStack_70 = param_2;
    local_68 = param_3;
    local_60 = uVar7;
    local_58 = param_3;
    (**(code **)*puVar5)(puVar5,&local_78);
  }
  return 0;
}


