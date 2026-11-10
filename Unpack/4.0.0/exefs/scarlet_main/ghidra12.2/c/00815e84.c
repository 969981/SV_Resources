/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00815e84; name: FUN_00815e84
 */


undefined8 FUN_00815e84(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  void *pvVar5;
  ulong local_b8;
  size_t local_b0;
  void *local_a8;
  ulong local_a0;
  size_t local_98;
  void *local_90;
  ulong local_88;
  size_t local_80;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  if ((*(char *)(param_1 + 0x740) == '\0') || (*(char *)(param_1 + 0x780) == '\0')) {
    return 0;
  }
  local_88 = CONCAT44(local_88._4_4_,6);
  pcVar3 = (char *)(param_1 + 0x740);
  local_70 = FUN_00793098(param_1 + 0x88);
  local_48 = (undefined8 *)FUN_00818110(&local_88,&local_70);
  FUN_00819e6c(param_2,&local_48);
  puVar1 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  local_70 = CONCAT44(local_70._4_4_,0x14);
  local_50 = (undefined8 *)FUN_00818210(&local_70,pcVar3);
  FUN_00819e6c(param_2,&local_50);
  puVar1 = local_50;
  local_50 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  local_70 = CONCAT44(local_70._4_4_,0x15);
  local_58 = (undefined8 *)FUN_00818210(&local_70,param_1 + 0x780);
  FUN_00819e6c(param_2,&local_58);
  puVar1 = local_58;
  local_58 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  __s = (char *)FUN_00793098(param_1 + 0x88);
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_88 | 1);
    if (sVar2 != 0) goto LAB_0081602c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_88 = uVar4 | 1;
    local_80 = sVar2;
    local_78 = pvVar5;
LAB_0081602c:
    memcpy(pvVar5,__s,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_a0 | 1);
    if (sVar2 != 0) goto LAB_0081609c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_a0 = uVar4 | 1;
    local_98 = sVar2;
    local_90 = pvVar5;
LAB_0081609c:
    memcpy(pvVar5,pcVar3,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  pcVar3 = (char *)FUN_00793098(param_1 + 0x2b8);
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_b8 | 1);
    if (sVar2 == 0) goto LAB_00816124;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_b8 = uVar4 | 1;
    local_b0 = sVar2;
    local_a8 = pvVar5;
  }
  memcpy(pvVar5,pcVar3,sVar2);
LAB_00816124:
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  FUN_0081c790(&local_88,&local_a0,&local_b8,&local_70);
  if ((local_b8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
  if ((local_88 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_78);
  }
  FUN_0081a130(param_2,&local_70);
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  return 1;
}


