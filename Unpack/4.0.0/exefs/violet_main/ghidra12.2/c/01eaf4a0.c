/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaf4a0; name: FUN_01eaf4a0
 */


uint FUN_01eaf4a0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_4c;
  long local_48 [4];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar4 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar5 = (long *)(lVar4 + -0x28);
    FUN_016947d8(local_48);
    local_4c = 2;
    if (local_48[0] != 0) {
      FUN_01eaf354(auStack_28,&local_4c,local_48[0] + 8);
      if (local_48[0] != 0) {
        FUN_01eaf55c(auStack_28,param_2,local_48[0] + 8);
      }
    }
    uVar2 = FUN_014c27b0(local_48);
    uVar3 = FUN_014c27c8(local_48);
    uVar1 = (**(code **)(*plVar5 + 0x70))(plVar5,uVar2,uVar3);
    FUN_01694aa8(local_48);
  }
  return uVar1 & 1;
}


