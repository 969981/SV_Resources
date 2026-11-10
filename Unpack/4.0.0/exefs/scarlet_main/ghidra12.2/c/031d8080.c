/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d8080; name: FUN_031d8080
 */


void FUN_031d8080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char *__src;
  ulong uVar3;
  size_t sVar4;
  void *__dest;
  long lVar5;
  char *local_118;
  ulong local_110;
  char local_108 [128];
  undefined4 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) | 0x8000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  local_88 = 1;
  local_108[0] = '\0';
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_118 = local_108;
  local_110 = 0x8000008000000001;
  local_80 = &DAT_03bf8bcb;
  uStack_78 = param_3;
  FUN_031c71e0(&local_118,0,&local_80,local_108 + 0xb8);
  iVar2 = *(int *)(param_1 + 0x198);
  lVar5 = (long)iVar2 + 1;
  if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) <= iVar2) {
    FUN_031d94f4(param_1 + 400,PTR_PTR_047d1a50 + 0x20,lVar5);
  }
  __src = local_118;
  *(int *)(param_1 + 0x198) = (int)lVar5;
  lVar5 = *(long *)(param_1 + 400);
  sVar4 = strlen(local_118);
  sVar4 = (size_t)((int)sVar4 + 1);
  __dest = (void *)(**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8),sVar4);
  memcpy(__dest,__src,sVar4);
  uVar3 = local_110;
  puVar1 = (undefined8 *)(lVar5 + (long)iVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = __dest;
  local_110 = local_110 & 0xffffffff00000000;
  if ((-1 < (long)uVar3) && (local_118 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


