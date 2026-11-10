/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a6c88; name: FUN_007a6c88
 */


void FUN_007a6c88(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong local_58 [2];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_007a6294(local_48,param_2,param_3,3);
  if (local_48[0] == 0) {
    local_58[0] = 0;
    FUN_007935cc(local_58);
    *(ulong *)(param_2 + 0xc0) = local_58[0];
    *(undefined4 *)(param_2 + 200) = 7;
    *(undefined8 *)(param_2 + 0x30) = 0xe8;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartRecreateNetwork";
    iVar1 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1b8))();
    plVar2 = (long *)FUN_0079365c();
    lVar3 = *plVar2;
    local_58[0] = 0;
    FUN_007935cc(local_58);
    *(ulong *)(param_2 + 0x70) = local_58[0] + lVar3 * iVar1;
    local_58[0] = local_58[0] & 0xffffffff00000000;
  }
  else {
    local_58[0] = CONCAT44(local_58[0]._4_4_,0x10408);
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


