/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ee748; name: FUN_004ee748
 */


void FUN_004ee748(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 ulong *param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_60 [32];
  undefined1 local_34 [4];
  
  uVar1 = FUN_004ee7fc(param_1,(uint)param_2 & 7,param_2 >> 3 & 0xffffffff,param_4,param_6,
                       auStack_60,local_34);
  if ((uVar1 & 1) == 0) {
    if ((*param_5 & 1) == 0) {
      lVar2 = FUN_00264e54(param_5);
    }
    else {
      lVar2 = (*param_5 & 0xfffffffffffffffe) + 8;
    }
    FUN_00515960(param_2,lVar2,param_3,param_6);
  }
  else {
    FUN_004ee8f8(param_1,param_2 >> 3 & 0xffffffff,local_34[0],auStack_60,param_5,param_3,param_6);
  }
  return;
}


