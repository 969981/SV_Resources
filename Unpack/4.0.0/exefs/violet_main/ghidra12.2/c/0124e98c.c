/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124e98c; name: FUN_0124e98c
 */


void FUN_0124e98c(long param_1,ulong param_2,uint param_3,uint param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_24;
  
  uVar2 = (ulong)param_3;
  lVar3 = 0;
  if (((uint)param_2 & 0xff) < 5) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (param_2 & 0xff) * 0x38 + 0x28;
  }
  if ((param_3 & 0xff) != (param_4 & 0xff)) {
    FUN_0124ea98(lVar3,uVar2,param_4);
  }
  plVar5 = *(long **)(lVar3 + (uVar2 & 0xff) * 8);
  (**(code **)(*plVar5 + 0x5d0))(plVar5,param_5);
  (**(code **)(*plVar5 + 0x5d8))(plVar5);
  uVar2 = FUN_00d9c090(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),param_2 & 0xffffffff,uVar2
                      );
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar3 + 0xf0);
  local_24 = (**(code **)(*plVar5 + 0x98))(plVar5);
  *(undefined4 *)(lVar4 + (uVar2 & 0xff) * 8 + 8) = local_24;
  puVar1 = (undefined1 *)FUN_010785a8(lVar4 + 0x60,&local_24);
  *puVar1 = (char)uVar2;
  FUN_0124eab4(lVar4,lVar3,uVar2 & 0xffffffff,*(undefined8 *)(lVar3 + 0x30));
  FUN_0124eb70(param_1,plVar5);
  return;
}


