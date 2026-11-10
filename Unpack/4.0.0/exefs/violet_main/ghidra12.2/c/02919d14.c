/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02919d14; name: FUN_02919d14
 */


void FUN_02919d14(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 local_40;
  long lStack_38;
  
  lStack_38 = *(long *)(param_1 + 0x70);
  bVar1 = lStack_38 != 0;
  if (bVar1) {
    *param_2 = lStack_38;
    local_40 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))(*(long **)(param_1 + 0x38),&local_40);
    *(undefined4 *)(param_2 + 1) = uVar3;
  }
  uVar4 = (ulong)bVar1;
  lStack_38 = *(long *)(param_1 + 0x78);
  if (lStack_38 != 0) {
    lVar2 = uVar4 * 2;
    param_2[lVar2] = lStack_38;
    local_40 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))(*(long **)(param_1 + 0x38),&local_40);
    uVar4 = (ulong)(bVar1 + 1);
    *(undefined4 *)(param_2 + lVar2 + 1) = uVar3;
  }
  lStack_38 = *(long *)(param_1 + 0x80);
  if (lStack_38 != 0) {
    lVar2 = uVar4 * 2;
    param_2[lVar2] = lStack_38;
    local_40 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))(*(long **)(param_1 + 0x38),&local_40);
    uVar4 = (ulong)((int)uVar4 + 1);
    *(undefined4 *)(param_2 + lVar2 + 1) = uVar3;
  }
  lStack_38 = *(long *)(param_1 + 0x88);
  if (lStack_38 != 0) {
    param_2[uVar4 * 2] = lStack_38;
    local_40 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))(*(long **)(param_1 + 0x38),&local_40);
    *(undefined4 *)(param_2 + uVar4 * 2 + 1) = uVar3;
  }
  return;
}


