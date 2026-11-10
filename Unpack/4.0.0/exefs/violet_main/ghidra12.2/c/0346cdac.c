/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346cdac; name: FUN_0346cdac
 */


void FUN_0346cdac(long *param_1)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(param_1 + 1) == 0) {
    return;
  }
  lVar4 = *param_1;
  pfVar2 = (float *)(lVar4 + (ulong)*(uint *)(param_1 + 1) * 0xc);
  lVar1 = 0;
  uVar3 = 1;
  do {
    fVar5 = *(float *)(lVar4 + lVar1 + 0x10) - *(float *)(lVar4 + lVar1 + 4);
    pfVar2[1] = fVar5;
    fVar6 = 1.0 / (((float *)(*param_1 + lVar1))[3] - *(float *)(*param_1 + lVar1));
    *pfVar2 = fVar6;
    lVar4 = *param_1 + lVar1;
    switch(*(undefined4 *)(lVar4 + 8)) {
    case 1:
    case 7:
      fVar5 = 1.5707964;
      goto LAB_0346ce70;
    case 2:
      fVar5 = fVar5 * -0.5;
      goto LAB_0346ce7c;
    case 3:
    case 5:
      fVar5 = 3.1415927;
      goto LAB_0346ce70;
    case 4:
      fVar5 = *(float *)(lVar4 + 0x10) - *(float *)(lVar4 + 4);
LAB_0346ce70:
      *pfVar2 = fVar6 * fVar5;
      break;
    case 6:
      fVar5 = fVar5 * 0.5;
LAB_0346ce7c:
      pfVar2[1] = fVar5;
      break;
    case 9:
      *pfVar2 = 0.0;
    }
    if (*(uint *)(param_1 + 1) <= uVar3) {
      return;
    }
    lVar4 = *param_1;
    lVar1 = lVar1 + 0xc;
    pfVar2 = pfVar2 + 2;
    uVar3 = uVar3 + 1;
  } while( true );
}


