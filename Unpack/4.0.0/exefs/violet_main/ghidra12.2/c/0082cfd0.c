/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082cfd0; name: FUN_0082cfd0
 */


void FUN_0082cfd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + param_1 + 0x48;
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  param_2[1] = *(undefined8 *)(lVar1 + 0x38);
  *param_2 = uVar4;
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  param_2[3] = *(undefined8 *)(lVar1 + 0x48);
  param_2[2] = uVar4;
  uVar2 = FUN_032418ec(param_2);
  if ((uVar2 & 1) == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


