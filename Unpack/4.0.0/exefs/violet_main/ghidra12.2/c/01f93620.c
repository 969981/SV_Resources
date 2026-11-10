/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f93620; name: FUN_01f93620
 */


void FUN_01f93620(float param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_c;
  float fStack_8;
  float local_4;
  
  local_4 = param_1;
  *(byte *)(param_2 + 0xd1) =
       *(byte *)(param_2 + 0xd1) | 1.1920929e-07 < ABS(param_1 - *(float *)(param_2 + 0x114));
  local_c = 1.0;
  fStack_8 = 0.0;
  pfVar1 = &local_c;
  if (param_1 <= 1.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= param_1) {
    pfVar2 = pfVar1;
  }
  *(float *)(param_2 + 0x114) = *pfVar2;
  if ((1.1920929e-07 < *(float *)(param_2 + 0x430)) &&
     (1.1920929e-07 < *(float *)(param_2 + 0x430) - *(float *)(param_2 + 0x434))) {
    *(byte *)(param_2 + 0x371) =
         *(byte *)(param_2 + 0x371) | 1.1920929e-07 < ABS(param_1 - *(float *)(param_2 + 0x3b4));
    local_c = 1.0;
    fStack_8 = 0.0;
    pfVar1 = &local_c;
    if (param_1 <= 1.0) {
      pfVar1 = &local_4;
    }
    pfVar2 = &fStack_8;
    if (0.0 <= param_1) {
      pfVar2 = pfVar1;
    }
    *(float *)(param_2 + 0x3b4) = *pfVar2;
  }
  *(undefined1 *)(param_2 + 0x2d0) = 1;
  return;
}


