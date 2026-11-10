/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030dbcd0; name: FUN_030dbcd0
 */


void FUN_030dbcd0(long param_1)

{
  long *in_x5;
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) +
                   (long)*(int *)(param_1 + 0x20) * 0x100);
  FUN_030e27ac(param_1 + 0x28);
  if ((int)in_x5[1] != 0) {
    lVar4 = (long)(int)in_x5[1] * 0xc;
    piVar2 = (int *)(*in_x5 + 4);
    do {
      if ((((char)piVar2[-1] != '\x03') &&
          (lVar1 = *(long *)(lVar3 + 0x20), *(int *)(lVar1 + 0x108) != 0)) &&
         ((*(byte *)(*(long *)(lVar1 + 0x100) + (long)*piVar2) >> 2 & 1) != 0)) {
        FUN_030d9db8(param_1 + 0xd8,piVar2);
      }
      lVar4 = lVar4 + -0xc;
      piVar2 = piVar2 + 3;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(long *)(param_1 + 0x98) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x98),(ulong)*(uint *)(param_1 + 0xa4) << 2);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0xa8),(ulong)*(uint *)(param_1 + 0xb4) << 2);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  return;
}


