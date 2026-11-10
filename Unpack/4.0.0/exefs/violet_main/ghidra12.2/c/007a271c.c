/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a271c; name: FUN_007a271c
 */


void FUN_007a271c(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  
  do {
    uVar2 = (**(code **)(*param_1 + 0x330))(param_1);
  } while ((uint)DAT_047f9bec == (uVar2 & 0xffff));
  DAT_047f9bec = (ushort)uVar2;
  uVar3 = FUN_007ec4c0(param_1);
  if ((uVar3 & 0xffff) != (uVar2 & 0xffff)) {
    FUN_007ec4dc(param_1,uVar2);
    puVar1 = PTR_DAT_047d0860;
    lVar4 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
    if (*(long *)(lVar4 + 8) != 0) {
      FUN_007a544c(*(long *)(lVar4 + 8),uVar2);
    }
    lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
    lVar4 = *(long *)(lVar4 + 0x98);
    if (lVar4 != 0) {
      FUN_007e5190(auStack_60);
      FUN_007e1c44(auStack_70,lVar4,auStack_60);
      FUN_007e5348(auStack_60,uVar2);
      FUN_007e1bc4(lVar4,auStack_60);
      FUN_007e51d0(auStack_60);
    }
  }
  return;
}


