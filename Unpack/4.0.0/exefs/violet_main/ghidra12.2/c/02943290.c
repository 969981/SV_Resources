/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943290; name: FUN_02943290
 */


void FUN_02943290(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
  }
  uVar2 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),uVar1,param_2);
  if (((((uVar2 & 1) != 0) &&
       (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x2d0), lVar3 != 0)) &&
      (*(byte *)(lVar3 + 10) < 2)) && (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)
     ) {
    *(undefined1 *)(lVar3 + 10) = 2;
  }
  return;
}


