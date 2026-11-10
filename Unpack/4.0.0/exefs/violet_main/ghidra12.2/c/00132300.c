/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00132300; name: FUN_00132300
 */


void FUN_00132300(long param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x10) != 0x123) {
    FUN_001329f0(param_1,0x123);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x1323a8);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_00138a10(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_001323b0(uVar2,uVar3,param_2,1);
  if (*param_2 == 0) {
    FUN_001323b0(uVar2,*(undefined8 *)(param_1 + 0x68),param_2,1);
    local_48[0] = 7;
    uStack_38 = 0xffffffffffffffff;
    local_40 = uVar3;
    FUN_00135110(uVar2,param_2,local_48);
  }
  return;
}


