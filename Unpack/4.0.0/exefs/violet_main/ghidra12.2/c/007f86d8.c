/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f86d8; name: FUN_007f86d8
 */


void FUN_007f86d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_88 [8];
  undefined *local_68 [3];
  undefined2 local_50;
  long local_48;
  
  if (*(int *)(param_2 + 0x6f0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007f8748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x50) + 0x38))(param_1,*(long **)(param_2 + 0x50),param_3);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    local_68[0] = (undefined *)CONCAT44(local_68[0]._4_4_,0x4c0d);
  }
  else {
    lVar3 = FUN_0078fac8(param_2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 - *(int *)(param_2 + 0x2c);
    }
    lVar1 = lVar3 + 0x10;
    FUN_0079704c(lVar1);
    *(undefined8 *)(lVar3 + 0x660) = 0;
    FUN_00797134(lVar1);
    FUN_0078f9e0(param_2,param_2,lVar3);
    FUN_00797268(param_2 + 0x88,param_3);
    local_48 = 0;
    FUN_007935cc(&local_48);
    local_68[0] = PTR_DAT_047d08c0 + 0x10;
    FUN_0284e360(local_68,0xffffffff);
    local_50 = 0;
    FUN_0284e338(local_88);
    iVar2 = FUN_007f885c(param_2,local_68,local_88);
    plVar4 = (long *)FUN_0079365c();
    *(long *)(param_2 + 0x6d8) = local_48 + *plVar4 * (long)iVar2;
    FUN_0284e3d4(local_88);
    FUN_0284e3d4(local_68);
    FUN_00797268(lVar1,param_2 + 0x88);
    *(undefined8 *)(lVar3 + 0x660) = *(undefined8 *)(param_2 + 0x6d8);
    local_68[0] = (undefined *)((ulong)local_68[0] & 0xffffffff00000000);
  }
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_88);
  FUN_00cbd7c0(param_1,local_68);
  return;
}


