/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020be238; name: FUN_020be238
 */


void FUN_020be238(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_2 = param_2 + (long)param_3 * 0x20;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  param_1[2] = *(undefined8 *)(param_2 + 0x58);
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


