/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297fb24; name: FUN_0297fb24
 */


void FUN_0297fb24(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 local_24 [2];
  
  *param_2 = 0;
  uVar1 = FUN_0297fc44(param_1,*param_3);
  local_24[0] = FUN_0297fd30(param_1,*param_3,uVar1);
  uVar7 = *param_3;
  uVar3 = FUN_01246e90(param_1);
  uVar2 = FUN_0293355c(uVar3,uVar7,uVar7,0,local_24);
  FUN_0297fd64(*(undefined8 *)(param_1 + 0x20),*param_3,local_24[0]);
  if ((uVar2 & 0xff) != 0) {
    FUN_0297fe20(param_1,*param_3,uVar2);
  }
  uVar3 = FUN_01246e90(param_1);
  FUN_02937de4(uVar3,*param_3,*param_3);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
    piVar4 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x290) + 8) + 0x50),
                                 uVar1);
    if (((piVar4 != (int *)0x0) && (*piVar4 == 1)) &&
       (uVar5 = FUN_01249510(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x330)), (uVar5 & 1) != 0))
    {
      FUN_012519ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f80));
    }
  }
  *param_2 = local_24[0];
  return;
}


