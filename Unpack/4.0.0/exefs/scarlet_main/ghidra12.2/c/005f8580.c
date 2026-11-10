/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f8580; name: FUN_005f8580
 */


void FUN_005f8580(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  uVar1 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0020f8d0(param_1,"tenants",7);
  FUN_0020f8d0(param_1,&DAT_03bdfb3b,1);
  plVar2 = (long *)FUN_01cf7e20();
  local_48 = plVar2;
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) goto LAB_005f87c0;
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if (sVar3 != 0) goto LAB_005f8648;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = sVar3;
    local_50 = pvVar4;
LAB_005f8648:
    memcpy(pvVar4,param_2,sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  if ((local_60 & 1) == 0) {
    sVar3 = local_60 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_60 + 1);
  }
  else {
    sVar3 = local_58;
    pvVar4 = local_50;
  }
  FUN_0020f8d0(param_1,pvVar4,sVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  FUN_0020f8d0(param_1,&DAT_03bdfb3b,1);
  FUN_0020f8d0(param_1,"GameSessionShortAliases",0x17);
  FUN_0020f8d0(param_1,&DAT_03bdfb3b,1);
  plVar2 = (long *)FUN_01cf7e20();
  local_48 = plVar2;
  sVar3 = strlen(param_3);
  if (0xffffffffffffffef < sVar3) {
LAB_005f87c0:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if (sVar3 == 0) goto LAB_005f8760;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = sVar3;
    local_50 = pvVar4;
  }
  memcpy(pvVar4,param_3,sVar3);
LAB_005f8760:
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  if ((local_60 & 1) == 0) {
    sVar3 = local_60 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_60 + 1);
  }
  else {
    sVar3 = local_58;
    pvVar4 = local_50;
  }
  FUN_0020f8d0(param_1,pvVar4,sVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}


