/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03363e64; name: FUN_03363e64
 */


undefined8 FUN_03363e64(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char *__src;
  ulong uVar2;
  size_t sVar3;
  void *__dest;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  char *local_e8;
  ulong local_e0;
  char local_d8 [128];
  undefined4 local_58;
  ulong local_38;
  
  local_d8[0] = '\0';
  local_e8 = local_d8;
  local_e0 = 0x8000008000000001;
  local_58 = 1;
  FUN_031e20f0(*param_2,param_2[1],&local_e8);
  __src = local_e8;
  puVar1 = PTR_PTR_047d1a50;
  local_38 = 0;
  if (local_e8 != (char *)0x0) {
    sVar3 = strlen(local_e8);
    sVar3 = (size_t)((int)sVar3 + 1);
    __dest = (void *)(**(code **)(*(long *)puVar1 + 0x18))(puVar1,sVar3);
    memcpy(__dest,__src,sVar3);
    local_38 = (ulong)__dest | 1;
  }
  lVar4 = FUN_033418d0(param_1 + 5,&local_38);
  if (lVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(param_1[5] + (long)*(int *)(lVar4 + 4) * 0x10 + 8);
  }
  if ((local_38 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_38 - 1,0);
  }
  if ((int)uVar6 < 0) {
    uVar5 = (**(code **)(**(long **)(param_1[4] + 0x18) + 0x28))
                      (*(long **)(param_1[4] + 0x18),param_2);
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x98))(param_1,*(undefined8 *)(param_1[0xd] + (ulong)uVar6 * 8))
    ;
    uVar5 = *(undefined8 *)(lVar4 + 0x50);
  }
  uVar2 = local_e0;
  local_e0 = local_e0 & 0xffffffff00000000;
  if ((-1 < (long)uVar2) && (local_e8 != (char *)0x0)) {
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x20))(puVar1 + 0x20);
  }
  return uVar5;
}


