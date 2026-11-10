/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026a0a0; name: FUN_0026a0a0
 */


void FUN_0026a0a0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *local_78;
  long lStack_70;
  ulong local_68;
  long *local_60 [4];
  long local_40;
  undefined8 uStack_38;
  
  lStack_70 = *(long *)(param_2 + 0x10);
  local_68 = *(ulong *)(lStack_70 + 0x18);
  uVar2 = *(ulong *)(lStack_70 + 8);
  if (local_68 < uVar2) {
    do {
      local_78 = *(long **)(*(long *)(lStack_70 + 0x20) + local_68 * 8);
      if (local_78 != (long *)0x0) {
        if (local_78 == *(long **)(*(long *)(lStack_70 + 0x20) + (local_68 ^ 1) * 8)) {
          local_78 = *(long **)(*local_78 + 0x20);
        }
        goto joined_r0x0026a114;
      }
      local_68 = local_68 + 1;
    } while (uVar2 != local_68);
    local_78 = (long *)0x0;
    local_68 = uVar2;
  }
  else {
    local_78 = (long *)0x0;
  }
joined_r0x0026a114:
  while (local_78 != (long *)0x0) {
    lVar3 = local_78[1];
    uStack_38 = 0;
    local_40 = lVar3;
    FUN_00259dc4(local_60,*(undefined8 *)(param_1 + 0x10),&local_40);
    plVar1 = local_60[0];
    lVar4 = local_60[0][1];
    if (lVar4 == 0) {
      lVar4 = FUN_00259ca4(param_1,lVar3);
      *plVar1 = lVar4;
      plVar1[1] = lVar4;
    }
    if (lVar3 != lVar4) {
      FUN_002679fc(lVar4 + 0x18);
      if ((*(ulong *)(lVar4 + 0x20) & 1) != 0) {
        uVar2 = *(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffe;
        if ((*(byte *)(uVar2 + 8) & 1) == 0) {
          *(undefined2 *)(uVar2 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar2 + 0x18) = 0;
          *(undefined8 *)(uVar2 + 0x10) = 0;
        }
      }
      FUN_00269254(lVar4 + 0x18,lVar3 + 0x18);
    }
    FUN_0025aac8(&local_78);
  }
  return;
}


