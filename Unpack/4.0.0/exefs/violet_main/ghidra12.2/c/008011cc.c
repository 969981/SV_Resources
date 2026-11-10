/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008011cc; name: FUN_008011cc
 */


undefined8 FUN_008011cc(ushort *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((ulong)*param_1 == 0) {
    return 0;
  }
  uVar5 = 0;
  while (plVar6 = *(long **)(*(long *)(param_1 + 4) + uVar5 * 8), *plVar6 != param_2) {
    uVar5 = uVar5 + 1;
    if (*param_1 <= uVar5) {
      return 0;
    }
  }
  *(undefined4 *)(plVar6 + 2) = 0;
  *plVar6 = -1;
  plVar6[1] = 0;
  FUN_0078b184(plVar6 + 3);
  FUN_0078b184(plVar6 + 7);
  *(undefined2 *)(plVar6 + 0xb) = 0;
  *(undefined1 *)((long)plVar6 + 0x5a) = 0;
  *(undefined4 *)((long)plVar6 + 0x5c) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 1) {
    return 1;
  }
  uVar3 = *param_1;
  uVar5 = (ulong)uVar3;
  if (uVar5 == 0) {
    return 1;
  }
  plVar4 = *(long **)(param_1 + 0x14);
  plVar6 = plVar4;
  while( true ) {
    if (*plVar6 == -1) {
      return 1;
    }
    if (*plVar6 == param_2) break;
    plVar6 = plVar6 + 1;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) {
      return 1;
    }
  }
  *plVar6 = -1;
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  if (uVar3 < 2) {
    return 1;
  }
  uVar5 = 0;
  iVar2 = uVar3 - 1;
  do {
    uVar1 = (uint)uVar5 & 0xffff;
    if (plVar4[uVar5 & 0xffff] == -1 && (int)uVar1 < iVar2) {
      do {
        plVar4[uVar1] = plVar4[uVar1 + 1];
        uVar1 = uVar1 + 1 & 0xffff;
      } while ((int)uVar1 < iVar2);
    }
    uVar1 = (uint)uVar5 + 1;
    uVar5 = (ulong)uVar1;
  } while ((int)(uVar1 & 0xffff) < iVar2);
  return 1;
}


