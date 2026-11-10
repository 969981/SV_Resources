/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025db704; name: FUN_025db704
 */


undefined8 FUN_025db704(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
  if ((lVar2 == 0) || (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) != *(int *)(lVar2 + 0x2c))) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_00c41664();
    uVar1 = 0;
    if (lVar2 != 0) {
      *(long *)(*(long *)(param_1 + 0x260) + 0x38) = lVar2;
      uVar1 = *(undefined8 *)(param_1 + 0x260);
    }
  }
  return uVar1;
}


