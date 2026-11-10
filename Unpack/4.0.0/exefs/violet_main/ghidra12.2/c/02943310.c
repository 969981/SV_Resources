/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943310; name: FUN_02943310
 */


undefined8 FUN_02943310(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar4 + 0xc);
  }
  uVar2 = FUN_0128ab58(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),uVar1,param_2);
  if ((((uVar2 & 1) == 0) ||
      (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x2d0), lVar4 == 0)) ||
     (1 < *(byte *)(lVar4 + 10))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(lVar4 + 0xc) = 1;
    if (*(byte *)(lVar4 + 10) == 1) {
      uVar3 = 1;
      *(undefined1 *)(lVar4 + 10) = 2;
    }
  }
  return uVar3;
}


