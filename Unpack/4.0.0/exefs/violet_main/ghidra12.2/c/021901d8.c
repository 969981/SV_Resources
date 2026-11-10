/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021901d8; name: FUN_021901d8
 */


void FUN_021901d8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x42) != '\0') {
    pcVar3 = *(char **)(param_2 + 0x5a0);
    if (pcVar3 == (char *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = pcVar3[1] != '\0' && *pcVar3 == '\x01';
    }
    (**(code **)(param_2 + 0xa40))(param_2 + 0xa60);
    uVar2 = FUN_01026e74(param_1);
    lVar4 = *(long *)(param_1 + 0x78);
    uVar5 = uVar2 >> 6;
    uVar2 = 1L << (uVar2 & 0x3f);
    if (bVar1) {
      uVar2 = *(ulong *)(lVar4 + uVar5 * 8) | uVar2;
    }
    else {
      uVar2 = *(ulong *)(lVar4 + uVar5 * 8) & (uVar2 ^ 0xffffffffffffffff);
    }
    *(ulong *)(lVar4 + uVar5 * 8) = uVar2;
  }
  return;
}


