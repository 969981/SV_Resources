/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322c554; name: FUN_0322c554
 */


void FUN_0322c554(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 auStack_550 [128];
  int local_138;
  long local_130;
  undefined8 *puStack_128;
  undefined8 auStack_120 [32];
  
  local_130 = (long)(int)*param_3;
  if (0x1f < (int)*param_3) {
    local_130 = 0x20;
  }
  if (local_130 != 0) {
    local_138 = -0x28;
    lVar1 = local_130;
    puVar2 = auStack_120;
    puVar3 = (undefined8 *)register0x00000008;
    do {
      if (local_138 < 0) {
        iVar5 = local_138 + 8;
        if (-8 < local_138) goto LAB_0322c5f8;
        puVar4 = (undefined8 *)((long)auStack_550 + (long)local_138 + 0x400);
        local_138 = iVar5;
      }
      else {
        iVar5 = local_138;
LAB_0322c5f8:
        puVar4 = puVar3;
        puVar3 = puVar3 + 1;
        local_138 = iVar5;
      }
      lVar1 = lVar1 + -1;
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  puStack_128 = param_3;
  FUN_0322c2f4(param_1,param_2,&local_130);
  return;
}


