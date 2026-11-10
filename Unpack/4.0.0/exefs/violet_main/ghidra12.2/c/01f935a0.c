/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f935a0; name: FUN_01f935a0
 */


void FUN_01f935a0(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x430) - *(float *)(param_2 + 0x434);
  *(byte *)(param_2 + 0xd1) =
       *(byte *)(param_2 + 0xd1) | 1.1920929e-07 < ABS(param_1 - *(float *)(param_2 + 0x110));
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (1.1920929e-07 < *(float *)(param_2 + 0x430)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 1.1920929e-07;
      bVar2 = fVar4 == 1.1920929e-07;
      bVar3 = false;
    }
  }
  *(float *)(param_2 + 0x110) = param_1;
  if (!bVar2 && bVar1 == bVar3) {
    fVar4 = *(float *)(param_2 + 0x3b0);
    *(float *)(param_2 + 0x3b0) = param_1;
    *(byte *)(param_2 + 0x371) = *(byte *)(param_2 + 0x371) | 1.1920929e-07 < ABS(param_1 - fVar4);
  }
  *(undefined1 *)(param_2 + 0x2d0) = 1;
  return;
}


