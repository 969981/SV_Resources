/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03088128; name: FUN_03088128
 */


void FUN_03088128(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar3 = FUN_00e0e904();
  }
  *(undefined4 *)(lVar3 + 0x98) = 0;
  *(undefined4 *)(lVar3 + 0xa8) = 0;
  puVar2 = PTR_PTR_047d1a50;
  if (*(int *)(lVar3 + 200) != 0) {
    lVar4 = *(long *)(lVar3 + 0xc0);
    lVar5 = (long)*(int *)(lVar3 + 200) << 4;
    do {
      lVar1 = lVar4 + lVar5;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 2);
      }
      lVar5 = lVar5 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(lVar3 + 200) = 0;
  *(undefined4 *)(lVar3 + 0xb8) = 0;
  if (0 < *(int *)(lVar3 + 0x88)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      *(undefined4 *)(*(long *)(lVar3 + 0x80) + lVar5) = 0xffffffff;
      lVar1 = *(long *)(lVar3 + 0x80) + lVar5;
      lVar5 = lVar5 + 8;
      *(undefined4 *)(lVar1 + 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar3 + 0x88));
  }
  return;
}


