/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c8978; name: FUN_031c8978
 */


undefined4 FUN_031c8978(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 auStack_560 [128];
  int local_148;
  long local_140;
  undefined8 *puStack_138;
  undefined8 auStack_130 [32];
  
  local_140 = (long)(int)*param_3;
  if (0x1f < (int)*param_3) {
    local_140 = 0x20;
  }
  if (local_140 != 0) {
    local_148 = -0x28;
    lVar2 = local_140;
    puVar3 = auStack_130;
    puVar4 = (undefined8 *)register0x00000008;
    do {
      if (local_148 < 0) {
        iVar6 = local_148 + 8;
        if (-8 < local_148) goto LAB_031c8a28;
        puVar5 = (undefined8 *)((long)auStack_560 + (long)local_148 + 0x400);
        local_148 = iVar6;
      }
      else {
        iVar6 = local_148;
LAB_031c8a28:
        puVar5 = puVar4;
        puVar4 = puVar4 + 1;
        local_148 = iVar6;
      }
      lVar2 = lVar2 + -1;
      *puVar3 = *puVar5;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  puStack_138 = param_3;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,1);
  }
  if (*(int *)(param_1 + 1) != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  uVar1 = FUN_031c8c08(param_1,param_2,&local_140);
  return uVar1;
}


