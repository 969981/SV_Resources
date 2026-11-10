/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff544; name: FUN_020ff544
 */


bool FUN_020ff544(long param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01921d0c(*(undefined8 *)(param_1 + 0x48));
  if (iVar1 == 2) {
    *param_2 = 0x23d;
    *(undefined2 *)(param_2 + 1) = 0x100;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    FUN_0188bc30(param_2,0);
  }
  return iVar1 == 2;
}


