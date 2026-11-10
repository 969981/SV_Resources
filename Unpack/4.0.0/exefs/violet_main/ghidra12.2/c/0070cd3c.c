/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0070cd3c; name: FUN_0070cd3c
 */


void FUN_0070cd3c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *local_78;
  long lStack_70;
  ulong local_68;
  long *local_60 [4];
  long local_40 [2];
  
  lStack_70 = *(long *)(param_2 + 0x10);
  local_68 = *(ulong *)(lStack_70 + 0x18);
  uVar3 = *(ulong *)(lStack_70 + 8);
  if (local_68 < uVar3) {
    do {
      local_78 = *(long **)(*(long *)(lStack_70 + 0x20) + local_68 * 8);
      if (local_78 != (long *)0x0) {
        if (local_78 == *(long **)(*(long *)(lStack_70 + 0x20) + (local_68 ^ 1) * 8)) {
          local_78 = *(long **)(*local_78 + 0x20);
        }
        goto joined_r0x0070cdb0;
      }
      local_68 = local_68 + 1;
    } while (uVar3 != local_68);
    local_78 = (long *)0x0;
    local_68 = uVar3;
  }
  else {
    local_78 = (long *)0x0;
  }
joined_r0x0070cdb0:
  while (local_78 != (long *)0x0) {
    lVar4 = local_78[1];
    local_40[1] = 0;
    local_40[0] = lVar4;
    FUN_006eeb44(local_60,*(undefined8 *)(param_1 + 0x10),local_40);
    plVar1 = local_60[0];
    lVar2 = local_60[0][1];
    if (lVar2 == 0) {
      lVar2 = FUN_006ee9b0(param_1,lVar4);
      *plVar1 = lVar2;
      plVar1[1] = lVar2;
    }
    FUN_001fcec0(lVar2 + 0x18,lVar4 + 0x18);
    FUN_006ef338(&local_78);
  }
  return;
}


