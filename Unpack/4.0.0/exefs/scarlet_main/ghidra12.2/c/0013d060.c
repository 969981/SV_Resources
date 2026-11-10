/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013d060; name: FUN_0013d060
 */


long FUN_0013d060(long param_1,uint param_2,double *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  double dVar6;
  int local_24;
  
  switch(param_2 & 0x3f) {
  case 1:
    return *(long *)(param_1 + 0x18);
  default:
    uVar4 = (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) | 1U) ^ 0xfffffffe;
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = *(uint *)param_3 / uVar4;
    }
    return *(long *)(param_1 + 0x18) + (ulong)(*(uint *)param_3 - uVar2 * uVar4) * 0x18;
  case 3:
    uVar4 = *(uint *)param_3;
    lVar5 = *(long *)(param_1 + 0x18);
    break;
  case 4:
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = *(uint *)((long)*param_3 + 0xc);
    break;
  case 0x11:
    return *(long *)(param_1 + 0x18) +
           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(param_1 + 0xb) & 0x3f)) & 1) * 0x18;
  case 0x13:
    lVar5 = *(long *)(param_1 + 0x18);
    dVar6 = frexp(*param_3,&local_24);
    dVar6 = dVar6 * 2147483648.0;
    bVar3 = false;
    if ((-9.223372036854776e+18 <= dVar6) && (bVar3 = false, !NAN(dVar6))) {
      bVar3 = dVar6 < 9.223372036854776e+18;
    }
    if (bVar3) {
      uVar4 = local_24 + (int)(long)dVar6;
      uVar4 = uVar4 ^ (int)uVar4 >> 0x1f;
    }
    else {
      uVar4 = 0;
    }
    uVar2 = (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) | 1U) ^ 0xfffffffe;
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = (int)uVar4 / (int)uVar2;
    }
    uVar4 = uVar4 - iVar1 * uVar2;
    goto LAB_0013d1e8;
  case 0x14:
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = FUN_0013b950(*param_3);
    uVar4 = uVar4 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU);
LAB_0013d1e8:
    return lVar5 + (long)(int)uVar4 * 0x18;
  }
  return lVar5 + (long)(int)(uVar4 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU))
                 * 0x18;
}


