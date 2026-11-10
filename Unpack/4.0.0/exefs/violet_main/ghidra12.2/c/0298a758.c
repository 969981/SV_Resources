/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298a758; name: FUN_0298a758
 */


int FUN_0298a758(uint param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = 0.0;
  if ((param_1 & 0xfff) != 0) {
    dVar5 = (double)(param_1 & 0xfff) * 0.000244140625;
  }
  dVar5 = dVar5 + (double)((int)param_1 >> 0xc);
  if (dVar5 == 0.0) {
    uVar2 = 0;
  }
  else {
    dVar5 = 255.0 / dVar5;
    dVar6 = 0.5;
    if (dVar5 <= 0.0) {
      dVar6 = -0.5;
    }
    uVar2 = (uint)(dVar5 * 4096.0 + dVar6);
  }
  fVar3 = 0.0;
  if ((uVar2 & 0xfff) != 0) {
    fVar3 = (float)(uVar2 & 0xfff) * 0.00024414062;
  }
  fVar3 = powf(fVar3 + (float)((int)uVar2 >> 0xc),0.1875);
  fVar4 = 0.5;
  if (fVar3 <= 0.0) {
    fVar4 = -0.5;
  }
  uVar2 = (uint)(fVar3 * 4096.0 + fVar4);
  dVar5 = 0.0;
  if ((uVar2 & 0xfff) != 0) {
    dVar5 = (double)(uVar2 & 0xfff) * 0.000244140625;
  }
  dVar5 = dVar5 + (double)((int)uVar2 >> 0xc);
  if (dVar5 == 0.0) {
    iVar1 = 0;
  }
  else {
    dVar5 = 65536.0 / dVar5;
    dVar6 = 0.5;
    if (dVar5 <= 0.0) {
      dVar6 = -0.5;
    }
    iVar1 = (int)(dVar5 * 4096.0 + dVar6) >> 0xc;
  }
  return iVar1;
}


