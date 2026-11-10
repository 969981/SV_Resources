/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c8b2c; name: FUN_031c8b2c
 */


undefined4 FUN_031c8b2c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
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
    lVar2 = local_130;
    puVar3 = auStack_120;
    puVar4 = (undefined8 *)register0x00000008;
    do {
      if (local_138 < 0) {
        iVar6 = local_138 + 8;
        if (-8 < local_138) goto LAB_031c8bd0;
        puVar5 = (undefined8 *)((long)auStack_550 + (long)local_138 + 0x400);
        local_138 = iVar6;
      }
      else {
        iVar6 = local_138;
LAB_031c8bd0:
        puVar5 = puVar4;
        puVar4 = puVar4 + 1;
        local_138 = iVar6;
      }
      lVar2 = lVar2 + -1;
      *puVar3 = *puVar5;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  puStack_128 = param_3;
  uVar1 = FUN_031c8c08(param_1,param_2,&local_130);
  return uVar1;
}


