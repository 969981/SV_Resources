/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a42154; name: FUN_00a42154
 */


void FUN_00a42154(long param_1,undefined1 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float local_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  pfVar6 = *(float **)(lVar3 + 0x80);
  if ((int)((ulong)(*(long *)(lVar3 + 0x18) - *(long *)(lVar3 + 0x10)) >> 2) < 1) {
    lVar4 = 0;
    pfVar5 = pfVar6;
  }
  else {
    lVar4 = (long)**(int **)(lVar3 + 0x48) << 1;
    pfVar5 = pfVar6 + **(int **)(lVar3 + 0x48);
  }
  iVar7 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18);
  if (0 < iVar7) {
    do {
      local_4 = *pfVar6;
      local_8 = *pfVar5;
      local_c = pfVar6[lVar4];
      local_14 = 255.0;
      fStack_10 = 0.0;
      pfVar1 = &local_14;
      if (local_4 <= 255.0) {
        pfVar1 = &local_4;
      }
      pfVar2 = &fStack_10;
      if (0.0 <= local_4) {
        pfVar2 = pfVar1;
      }
      pfVar1 = &local_14;
      if (local_8 <= 255.0) {
        pfVar1 = &local_8;
      }
      *param_2 = (char)(int)*pfVar2;
      local_14 = 255.0;
      fStack_10 = 0.0;
      pfVar2 = &fStack_10;
      if (0.0 <= local_8) {
        pfVar2 = pfVar1;
      }
      pfVar6 = pfVar6 + 1;
      param_2[1] = (char)(int)*pfVar2;
      pfVar1 = &local_14;
      if (local_c <= 255.0) {
        pfVar1 = &local_c;
      }
      local_14 = 255.0;
      fStack_10 = 0.0;
      pfVar2 = &fStack_10;
      if (0.0 <= local_c) {
        pfVar2 = pfVar1;
      }
      iVar7 = iVar7 + -1;
      fVar8 = *pfVar2;
      param_2[3] = 0xff;
      param_2[2] = (char)(int)fVar8;
      param_2 = param_2 + 4;
      pfVar5 = pfVar5 + 1;
    } while (iVar7 != 0);
  }
  return;
}


