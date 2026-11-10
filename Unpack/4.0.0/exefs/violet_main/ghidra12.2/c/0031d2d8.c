/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031d2d8; name: FUN_0031d2d8
 */


void FUN_0031d2d8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)param_1[0x13];
  uVar3 = param_1[0x18];
  uVar5 = (ulong)*(uint *)(plVar1 + 1);
  while( true ) {
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar5 - uVar3,param_1 + 0xf);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar3 = (**(code **)(**(long **)param_1[0x13] + 0x20))(*(long **)param_1[0x13],&local_50);
    if (uVar3 != 0) break;
    uStack_68 = uStack_48;
    local_70 = local_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    FUN_003686e0(param_1 + 0x14,&local_70);
    plVar1 = *(long **)param_1[0x13];
    uVar3 = param_1[0x18];
    uVar5 = (ulong)*(uint *)(plVar1 + 1);
    if (uVar3 == uVar5) {
      FUN_0031d11c(param_1);
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    uVar2 = param_1[0x67];
    *(undefined1 *)(param_1 + 0x61) = 0;
    param_1[0x67] = 0;
    FUN_003504a8(*param_1,param_1 + 0x62,uVar2,"Continuing OnRecvTrailingMetadataReady");
  }
  lVar4 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar4 + 0x10),uVar3);
  }
  if (uVar3 < 5) {
    return;
  }
  FUN_00350fd0(uVar3);
  return;
}


