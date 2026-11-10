/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038f050; name: FUN_0038f050
 */


uint FUN_0038f050(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  byte bVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  char local_64 [4];
  void *local_60;
  ulong local_58;
  void *local_50;
  ulong local_48;
  
  local_50 = (void *)0x0;
  local_48 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  uVar4 = FUN_0038eeb0(param_1,param_2,&local_50,&local_60,local_64);
  uVar3 = local_48;
  pvVar2 = local_50;
  if ((uVar4 & 1) == 0) goto LAB_0038f1ec;
  if (local_50 == (void *)0x0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    bVar1 = (byte)*param_3;
  }
  else {
    if (0xffffffffffffffef < local_48) goto LAB_0038f208;
    if (local_48 < 0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)((int)local_48 << 1));
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if (local_48 != 0) goto LAB_0038f0fc;
    }
    else {
      uVar6 = local_48 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_80 = uVar6 | 1;
      uStack_78 = uVar3;
      local_70 = pvVar5;
LAB_0038f0fc:
      memcpy(pvVar5,pvVar2,uVar3);
    }
    *(undefined1 *)((long)pvVar5 + uVar3) = 0;
    bVar1 = (byte)*param_3;
  }
  if ((bVar1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_3[2]);
  }
  uVar3 = local_58;
  pvVar2 = local_60;
  param_3[2] = (ulong)local_70;
  param_3[1] = uStack_78;
  *param_3 = local_80;
  if (local_64[0] == '\0') goto LAB_0038f1ec;
  if (local_60 == (void *)0x0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    bVar1 = (byte)*param_4;
  }
  else {
    if (0xffffffffffffffef < local_58) {
LAB_0038f208:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_58 < 0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)((int)local_58 << 1));
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if (local_58 != 0) goto LAB_0038f1b0;
    }
    else {
      uVar6 = local_58 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_80 = uVar6 | 1;
      uStack_78 = uVar3;
      local_70 = pvVar5;
LAB_0038f1b0:
      memcpy(pvVar5,pvVar2,uVar3);
    }
    *(undefined1 *)((long)pvVar5 + uVar3) = 0;
    bVar1 = (byte)*param_4;
  }
  if ((bVar1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_4[2]);
  }
  param_4[2] = (ulong)local_70;
  param_4[1] = uStack_78;
  *param_4 = local_80;
LAB_0038f1ec:
  return uVar4 & 1;
}


