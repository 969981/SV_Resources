/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd9e24; name: FUN_01dd9e24
 */


void FUN_01dd9e24(float param_1,float param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_60 [24];
  long *local_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  fVar3 = param_2;
  FUN_0135d26c(auStack_60,param_3 + 0xab8);
  fVar2 = (float)FUN_01dcc3fc(uVar1,auStack_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined4 *)(param_3 + 0xc00) = 4;
  *(float *)(param_3 + 0xbf8) = (param_1 - fVar2) * 0.25;
  *(float *)(param_3 + 0xbfc) = ((param_2 - fVar3) + -20.0) * 0.25;
  return;
}


