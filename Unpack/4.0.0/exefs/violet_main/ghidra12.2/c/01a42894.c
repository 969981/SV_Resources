/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a42894; name: FUN_01a42894
 */


void FUN_01a42894(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if ((param_6 & 1) == 0) {
    uVar2 = 0;
  }
  if ((param_3 & 1) == 0) {
    FUN_0299e570(*(undefined8 *)(param_1 + 0x200),uVar2,param_2);
    return;
  }
  uVar1 = FUN_0299e454(*(undefined8 *)(param_1 + 0x260),param_4,param_5);
  FUN_0299e528(*(undefined8 *)(param_1 + 0x200),uVar2,param_2,&LAB_0299bc40,uVar1);
  return;
}


