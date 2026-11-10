/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00801ff4; name: FUN_00801ff4
 */


void FUN_00801ff4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) == 0) {
    *(undefined1 *)(param_1 + 0x5a) = 1;
    return;
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  puVar3 = (undefined1 *)(lVar1 + 0x6a);
  uVar5 = uVar2;
  do {
    if (*(long *)(puVar3 + -0x5a) == param_2) {
      *puVar3 = 1;
      return;
    }
    puVar3 = puVar3 + 0x80;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  *(undefined1 *)(param_1 + 0x5a) = 1;
  plVar4 = (long *)(lVar1 + 0x10);
  uVar5 = uVar2;
  do {
    if (*plVar4 == param_2) {
      return;
    }
    uVar5 = uVar5 - 1;
    plVar4 = plVar4 + 0x10;
  } while (uVar5 != 0);
  lVar6 = 0;
  while (*(long *)(lVar1 + lVar6 + 0x10) != -1) {
    lVar6 = lVar6 + 0x80;
    if (uVar2 * 0x80 == lVar6) {
      return;
    }
  }
  FUN_00801cb8();
  lVar1 = *(long *)(param_1 + 0xb8);
  *(long *)(lVar1 + lVar6 + 0x10) = param_2;
  *(undefined1 *)(lVar1 + lVar6 + 0x6a) = 0;
  uVar2 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) == 0) {
    DAT_0000006a = 1;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    plVar4 = (long *)(lVar1 + 0x10);
    do {
      lVar6 = *plVar4;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 0x10;
    } while (lVar6 != param_2);
    *(undefined1 *)(lVar1 + (uVar5 & 0xffffffff) * 0x80 + 0x6a) = 1;
    do {
      if (*(long *)(lVar1 + 0x10) == param_2) goto LAB_00802118;
      lVar1 = lVar1 + 0x80;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  lVar1 = 0;
LAB_00802118:
  if ((*(int *)(lVar1 + 0x20) < 1) &&
     (*(undefined8 *)(lVar1 + 0x74) = 0, *(int *)(lVar1 + 0x20) == 0)) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  return;
}


