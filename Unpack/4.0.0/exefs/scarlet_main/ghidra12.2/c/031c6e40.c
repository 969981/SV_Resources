/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c6e40; name: FUN_031c6e40
 */


long * FUN_031c6e40(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *__src;
  ulong uVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  undefined1 auStack_120 [24];
  char *local_e8;
  ulong local_e0;
  char local_d8 [128];
  undefined4 local_58;
  
  local_d8[0] = '\0';
  local_e8 = local_d8;
  local_e0 = 0x8000008000000001;
  local_58 = (undefined4)param_1[0x12];
  FUN_031c6c84(&local_e8,param_2,auStack_120 + 0x18);
  __src = local_e8;
  if (local_e8 != (char *)0x0) {
    iVar5 = ~(uint)local_e8 + (uint)local_e8 + (int)local_e0;
    if (iVar5 < 0) {
      sVar6 = strlen(local_e8);
      iVar5 = (int)sVar6;
    }
    iVar3 = (int)param_1[1];
    iVar5 = (int)((long)iVar3 + -1) + iVar5;
    uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    iVar7 = uVar1 - 1;
    iVar2 = iVar5;
    if (iVar7 <= iVar5) {
      iVar2 = iVar7;
    }
    if ((int)param_1[0x12] != 0) {
      iVar2 = iVar5;
    }
    iVar5 = iVar2 + 1;
    iVar7 = iVar3;
    if ((int)uVar1 <= iVar2) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
      iVar7 = (int)param_1[1];
    }
    if ((iVar7 <= iVar2) || (iVar5 < iVar7)) {
      *(int *)(param_1 + 1) = iVar5;
    }
    *(undefined1 *)(*param_1 + (long)iVar2) = 0;
    memmove((void *)(*param_1 + (long)iVar3 + -1),__src,(long)((int)param_1[1] - iVar3));
  }
  uVar4 = local_e0;
  local_e0 = local_e0 & 0xffffffff00000000;
  if ((-1 < (long)uVar4) && (local_e8 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return param_1;
}


