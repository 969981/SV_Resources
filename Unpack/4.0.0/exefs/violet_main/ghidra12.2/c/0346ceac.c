/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346ceac; name: FUN_0346ceac
 */


ulong FUN_0346ceac(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int local_34;
  undefined8 local_18;
  
  uVar2 = (**(code **)(*(long *)param_1[8] + 0x30))();
  *(uint *)(param_1 + 6) = uVar2;
  puVar1 = PTR_DAT_047e2fd0;
  if (uVar2 == 0) {
    uVar4 = 2;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0x24);
    if (uVar5 < uVar2) {
      if (param_1[5] != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        uVar2 = *(uint *)(param_1 + 6);
      }
      if (uVar2 <= *(uint *)(PTR_DAT_047e6ce8 + 0x68)) {
        uVar2 = *(uint *)(PTR_DAT_047e6ce8 + 0x68);
      }
      *(uint *)((long)param_1 + 0x24) = uVar2;
      lVar3 = (**(code **)(puVar1 + 0x18))(0,uVar2 << 1,0x20);
      param_1[5] = lVar3;
      if (lVar3 == 0) {
        return 0x34;
      }
      uVar5 = *(uint *)((long)param_1 + 0x24);
    }
    else {
      lVar3 = param_1[5];
    }
    *param_1 = lVar3;
    param_1[1] = lVar3 + (ulong)uVar5;
    if (param_2 == 0) {
      uVar4 = 1;
    }
    else {
      local_18 = 0;
      uVar4 = (**(code **)(*(long *)param_1[8] + 0x50))((long *)param_1[8],param_2,0,&local_18);
      if ((int)uVar4 == 1) {
        param_2 = param_2 - (int)local_18;
        uVar2 = FUN_0346cfd4(param_1,param_2,&local_34);
        if (local_34 != param_2) {
          uVar2 = 2;
        }
        uVar4 = (ulong)uVar2;
      }
    }
  }
  return uVar4;
}


