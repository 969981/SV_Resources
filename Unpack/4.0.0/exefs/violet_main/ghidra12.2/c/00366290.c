/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00366290; name: FUN_00366290
 */


undefined8 FUN_00366290(undefined8 param_1,ulong param_2,undefined4 param_3,int param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2 + 3;
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = SUB168(auVar2 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  uVar4 = FUN_0038c780(uVar1 + (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe)
                               * 2 | 1);
  FUN_00366370(uVar4,param_1,param_2,param_3,param_4);
  return uVar4;
}


