/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd230; name: FUN_007fd230
 */


void FUN_007fd230(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_38);
    return;
  }
  lVar1 = FUN_0078bb34();
  if (lVar1 != 0) {
    uVar2 = FUN_0078bb34();
    FUN_0078bb44(local_38,uVar2,0);
  }
  FUN_007fd2c4(param_1,param_2,param_3);
  return;
}


