/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346a714; name: FUN_0346a714
 */


undefined8 FUN_0346a714(long *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_2c;
  uint *local_28;
  
  local_2c = param_3;
  local_28 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x88))();
  if (iVar2 == 1) {
    local_28 = param_2 + 1;
    uVar3 = FUN_034ae500(param_1,&local_28,&local_2c,0);
    if ((int)uVar3 == 1) {
      uVar1 = *local_28;
      uVar5 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar3 = 1;
      }
      else {
        if (uVar1 == 1) {
          param_1[0x20] = (long)(param_1 + 0x1f);
          local_28 = local_28 + 1;
        }
        else {
          local_28 = local_28 + 1;
          lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar5 << 3,1);
          param_1[0x20] = lVar4;
          if (lVar4 == 0) {
            return 0x34;
          }
        }
        *(uint *)((long)param_1 + 0x10c) = uVar1;
        do {
          uVar1 = *local_28;
          local_28 = local_28 + 1;
          uVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar1);
          if ((int)uVar3 != 0xf && (int)uVar3 != 1) {
            return uVar3;
          }
          uVar1 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1);
    uVar3 = 0x5b;
  }
  return uVar3;
}


