/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013ffb0; name: FUN_0013ffb0
 */


undefined4 FUN_0013ffb0(double *param_1,double *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  double *pdVar5;
  undefined4 uVar6;
  double local_40 [2];
  
  pdVar5 = local_40;
  if (((ulong)param_1[1] & 0xf) == 4) {
    lVar2 = FUN_0012dc70((long)*param_1 + 0x18,local_40);
    dVar3 = *param_1;
    if (*(char *)((long)dVar3 + 8) == '\x04') {
      uVar4 = (ulong)*(byte *)((long)dVar3 + 0xb);
    }
    else {
      uVar4 = *(ulong *)((long)dVar3 + 0x10);
    }
    if (lVar2 != uVar4 + 1) goto LAB_00140010;
    bVar1 = false;
  }
  else {
LAB_00140010:
    bVar1 = true;
    pdVar5 = param_1;
  }
  if (!bVar1) {
    param_1 = local_40;
  }
  if (*(char *)(param_1 + 1) == '\x03') {
    dVar3 = *pdVar5;
LAB_001400a8:
    uVar6 = 1;
    *param_2 = dVar3;
  }
  else {
    if (*(char *)(param_1 + 1) == '\x13') {
      dVar3 = (double)(long)*pdVar5;
      if (dVar3 != *pdVar5) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_3 == 2) {
          dVar3 = dVar3 + 1.0;
        }
      }
      bVar1 = false;
      if ((-9.223372036854776e+18 <= dVar3) && (bVar1 = false, !NAN(dVar3))) {
        bVar1 = dVar3 < 9.223372036854776e+18;
      }
      if (bVar1) {
        dVar3 = (double)(long)dVar3;
        goto LAB_001400a8;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


