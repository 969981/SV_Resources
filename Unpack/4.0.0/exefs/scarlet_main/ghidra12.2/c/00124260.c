/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124260; name: FUN_00124260
 */


undefined1  [16] FUN_00124260(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int local_24;
  
  auVar2 = FUN_00c41790(param_1,param_2,&local_24);
  uVar3 = auVar2._8_8_;
  if (local_24 == 0) {
    uVar1 = FUN_01b2ccf0(param_1,3);
    FUN_00123c80(param_1,param_2 & 0xffffffff,uVar1);
  }
  auVar2._8_8_ = uVar3;
  return auVar2;
}


