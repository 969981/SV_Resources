/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011f0f0; name: FUN_0011f0f0
 */


void FUN_0011f0f0(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [16];
  
  uVar2 = FUN_0011e000(param_3,*param_6);
  bVar1 = (param_4 & 0x40000) == 0;
  *param_6 = uVar2;
  uVar3 = 0xfffff801;
  if (bVar1) {
    uVar3 = 0xfffffc01;
  }
  uVar4 = 0x7ff;
  if (bVar1) {
    uVar4 = 0x3ff;
  }
  FUN_0011e0f0(auStack_60,0,param_5,param_3,0x20a8,uVar3,uVar4);
  FUN_0011f1c0(param_1,param_2,uVar2,4,param_3,param_5,&DAT_03cb4fc0,auStack_60,0);
  return;
}


