/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eafb20; name: FUN_01eafb20
 */


uint FUN_01eafb20(long param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_4c;
  long local_48 [4];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x104) + 1;
    *(short *)(param_1 + 0x104) = sVar1;
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    uVar3 = param_4[1];
    plVar6 = (long *)(lVar5 + -0x28);
    *(undefined8 *)(param_1 + 0x138) = *param_4;
    *(int *)(param_1 + 0x140) = (int)uVar3;
    *(undefined1 *)(param_1 + 0x136) = param_3;
    *(short *)(param_1 + 0x134) = sVar1;
    FUN_016947d8(local_48);
    local_4c = 8;
    if (local_48[0] != 0) {
      FUN_01eaf354(auStack_28,&local_4c,local_48[0] + 8);
      if (local_48[0] != 0) {
        FUN_01eaf730(auStack_28,param_1 + 0x104,local_48[0] + 8);
        if (local_48[0] != 0) {
          FUN_01eafc20(auStack_28,param_1 + 0x134,local_48[0] + 8);
        }
      }
    }
    uVar3 = FUN_014c27b0(local_48);
    uVar4 = FUN_014c27c8(local_48);
    uVar2 = (**(code **)(*plVar6 + 0x70))(plVar6,uVar3,uVar4);
    FUN_01694aa8(local_48);
  }
  return uVar2 & 1;
}


