/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd9ec8; name: FUN_01dd9ec8
 */


undefined8 FUN_01dd9ec8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_60 [24];
  long *local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc00) == 0) {
    FUN_0135d26c(auStack_60,param_1 + 0xab8);
    lVar2 = FUN_00c8c7ac(uVar3,auStack_60);
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    uVar3 = 0;
  }
  else {
    FUN_0135d26c(auStack_60,param_1 + 0xab8);
    lVar2 = FUN_00c8c7ac(uVar3,auStack_60);
    fVar7 = *(float *)(lVar2 + 0x30);
    fVar6 = *(float *)(lVar2 + 0x34);
    uVar1 = *(undefined4 *)(lVar2 + 0x38);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    fVar4 = *(float *)(param_1 + 0xbf8);
    fVar5 = *(float *)(param_1 + 0xbfc);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    FUN_0135d26c(auStack_60,param_1 + 0xab8);
    lVar2 = FUN_00c8c7ac(uVar3,auStack_60);
    *(float *)(lVar2 + 0x30) = fVar7 + fVar4;
    *(float *)(lVar2 + 0x34) = fVar6 + fVar5;
    *(undefined4 *)(lVar2 + 0x38) = uVar1;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    uVar3 = 1;
    *(int *)(param_1 + 0xc00) = *(int *)(param_1 + 0xc00) + -1;
  }
  return uVar3;
}


