/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb0134; name: FUN_01eb0134
 */


void FUN_01eb0134(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_50 [4];
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if ((((*(long *)(param_1 + 0x50) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 != 0)) &&
      (*(long *)(param_1 + 0x38) != 0)) &&
     ((lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar4 != 0 &&
      (uVar1 = FUN_00ea2b08(lVar4 + -0x28), (uVar1 & 1) != 0)))) {
    *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 1;
    plVar6 = (long *)(lVar5 + -0x28);
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    FUN_016947d8(local_50);
    local_14 = 0xd;
    if (local_50[0] != 0) {
      FUN_01eaf354(auStack_18,&local_14,local_50[0] + 8);
      if (local_50[0] != 0) {
        FUN_01eaf730(auStack_18,param_1 + 0x104,local_50[0] + 8);
      }
    }
    uVar2 = FUN_014c27b0(local_50);
    uVar3 = FUN_014c27c8(local_50);
    (**(code **)(*plVar6 + 0x70))(plVar6,uVar2,uVar3);
    FUN_01694aa8(local_50);
  }
  return;
}


