/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9e88; name: FUN_001f9e88
 */


void FUN_001f9e88(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    *(long *)(lVar1 + 0x78) = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x70) = lVar1;
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
  }
  else {
    *(long *)(lVar3 + 0x88) = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = lVar3;
    }
  }
  *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) - *(int *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xe6) != '\0') {
    FUN_001f9cbc(param_1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


