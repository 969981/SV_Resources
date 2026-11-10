/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00105f50; name: FUN_00105f50
 */


void FUN_00105f50(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = *(uint *)((long)param_1 + 0x1c);
  *(uint *)(param_1 + 4) = (int)param_1[4] + param_3;
  if (uVar2 != 0) {
    if (param_3 < uVar2) {
      *(undefined4 *)(param_1 + 3) = 0;
      *(uint *)((long)param_1 + 0x1c) = uVar2 - param_3;
      return;
    }
    param_3 = param_3 - uVar2;
    param_2 = param_2 + (ulong)uVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  uVar2 = *(uint *)(param_1 + 3);
  if (param_3 <= *(uint *)(param_1 + 3)) {
    uVar2 = param_3;
  }
  lVar4 = *param_1;
  *(uint *)(param_1 + 3) = uVar2;
  uVar3 = (int)param_1[2] - (int)lVar4;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  if (lVar4 == param_2) {
    param_2 = param_2 + (ulong)uVar2;
  }
  else {
    FUN_00106020(lVar4,param_2,uVar1);
    uVar2 = uVar2 - uVar1;
    *param_1 = *param_1 + (ulong)uVar1;
    if (uVar2 == 0) {
      return;
    }
    *param_1 = param_1[1];
    FUN_00106020(param_1[1],param_2 + (ulong)uVar1,uVar2);
    param_2 = *param_1 + (ulong)uVar2;
  }
  *param_1 = param_2;
  return;
}


