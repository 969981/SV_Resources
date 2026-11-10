/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a9758; name: FUN_031a9758
 */


undefined4 FUN_031a9758(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 local_244;
  undefined1 *local_240;
  undefined8 local_238;
  undefined1 auStack_230 [512];
  
  if (*(int *)(param_1 + 0x18) == param_3) {
    if (param_1 != param_2) {
      FUN_031a7e98(param_2,param_1);
    }
    uVar3 = 0;
  }
  else {
    local_244 = 0;
    local_240 = auStack_230;
    local_238 = -0x7ffffff000000000;
    iVar2 = FUN_031a8940(*(int *)(param_1 + 0x18),param_3,param_1 == param_2,&local_240,&local_244);
    if (iVar2 < 0) {
      uVar3 = 0x80040200;
    }
    else {
      uVar3 = FUN_031a984c(param_1,param_2,local_240,local_240 + (long)(int)local_238 * 0x20,
                           local_244,param_4);
    }
    lVar1 = local_238;
    uVar4 = (ulong)local_238._4_4_;
    local_238 = (ulong)local_238._4_4_ << 0x20;
    if ((-1 < lVar1) && (local_240 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_240,uVar4 << 5);
    }
  }
  return uVar3;
}


