/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f30fc; name: FUN_007f30fc
 */


void FUN_007f30fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar2 = PTR_DAT_047d1528;
  puVar1 = PTR_DAT_047d1520;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)puVar1 = 0;
  *(undefined2 *)puVar2 = 0;
  FUN_007935cc(param_1 + 0x68);
  return;
}


