/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a30d8; name: FUN_017a30d8
 */


void FUN_017a30d8(long param_1,ulong *param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x1a8);
  uVar3 = *param_2;
  if ((uVar4 & uVar4 - 1) == 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x1a0) + (uVar4 - 1 & uVar3) * 8);
    do {
      do {
        plVar5 = (long *)*plVar5;
      } while (plVar5[1] != uVar3);
    } while (plVar5[2] != uVar3);
  }
  else {
    uVar6 = uVar3;
    if (uVar4 <= uVar3) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x1a0) + uVar6 * 8);
    do {
      do {
        plVar5 = (long *)*plVar5;
      } while (plVar5[1] != uVar3);
    } while (plVar5[2] != uVar3);
  }
  lVar1 = *(long *)(param_1 + 0x208) + *(long *)((long)plVar5 + 0x30) * 0x40;
  bVar2 = FUN_028e70c0(*(undefined8 *)(lVar1 + 0x30));
  if (((bVar2 & 1) != 0) && (*(char *)(lVar1 + 0x28) == '\0')) {
    *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 1;
  }
  *(byte *)(lVar1 + 0x28) = bVar2 & 1;
  return;
}


