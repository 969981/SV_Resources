/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00140640; name: FUN_00140640
 */


ulong FUN_00140640(undefined8 param_1,double *param_2,double *param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  size_t sVar7;
  double dVar8;
  double dVar9;
  char *__s1;
  char *__s2;
  size_t sVar10;
  size_t sVar11;
  double dVar12;
  double dVar13;
  
  bVar2 = *(byte *)(param_2 + 1) & 0xf;
  if (bVar2 == 4) {
    if (((ulong)param_3[1] & 0xf) == 4) {
      dVar9 = *param_2;
      __s1 = (char *)((long)dVar9 + 0x18);
      dVar8 = *param_3;
      if (*(char *)((long)dVar9 + 8) == '\x04') {
        sVar10 = (size_t)*(byte *)((long)dVar9 + 0xb);
        cVar3 = *(char *)((long)dVar8 + 8);
      }
      else {
        sVar10 = *(size_t *)((long)dVar9 + 0x10);
        cVar3 = *(char *)((long)dVar8 + 8);
      }
      if (cVar3 == '\x04') {
        sVar11 = (size_t)*(byte *)((long)dVar8 + 0xb);
      }
      else {
        sVar11 = *(size_t *)((long)dVar8 + 0x10);
      }
      __s2 = (char *)((long)dVar8 + 0x18);
      uVar5 = strcoll(__s1,__s2);
      if (uVar5 == 0) {
        do {
          sVar7 = strlen(__s1);
          if (sVar7 == sVar11) {
            uVar5 = (uint)(sVar7 != sVar10);
            break;
          }
          uVar5 = 0xffffffff;
          if (sVar7 == sVar10) break;
          lVar1 = sVar7 + 1;
          __s1 = __s1 + lVar1;
          __s2 = __s2 + lVar1;
          sVar10 = sVar10 - lVar1;
          sVar11 = sVar11 - lVar1;
          uVar5 = strcoll(__s1,__s2);
        } while (uVar5 == 0);
      }
      return (ulong)((int)uVar5 < 1);
    }
  }
  else if ((bVar2 == 3) && (bVar2 = *(byte *)(param_3 + 1), (bVar2 & 0xf) == 3)) {
    if (*(byte *)(param_2 + 1) != 3) {
      dVar8 = *param_2;
      if (bVar2 == 0x13) {
        dVar9 = *param_3;
      }
      else {
        dVar9 = *param_3;
        if (0x40000000000000 < (long)dVar9 + 0x20000000000000U) {
          dVar13 = (double)(long)dVar8;
          dVar12 = dVar13 + 1.0;
          if (dVar13 == dVar8) {
            dVar12 = dVar13;
          }
          bVar4 = false;
          if ((-9.223372036854776e+18 <= dVar12) && (bVar4 = false, !NAN(dVar12))) {
            bVar4 = dVar12 < 9.223372036854776e+18;
          }
          if (!bVar4) {
            return (ulong)(dVar8 < 0.0);
          }
          return (ulong)((long)dVar12 <= (long)dVar9);
        }
        dVar9 = (double)(long)dVar9;
      }
      return (ulong)(dVar8 <= dVar9);
    }
    dVar8 = *param_2;
    if (bVar2 == 3) {
      dVar9 = *param_3;
    }
    else {
      dVar9 = *param_3;
      if ((long)dVar8 + 0x20000000000000U < 0x40000000000001) {
        return (ulong)((double)(long)dVar8 <= dVar9);
      }
      dVar12 = (double)(long)dVar9;
      if ((dVar12 < -9.223372036854776e+18) || (9.223372036854776e+18 <= dVar12)) {
        return (ulong)(0.0 < dVar9);
      }
      dVar9 = (double)(long)dVar12;
    }
    return (ulong)((long)dVar8 <= (long)dVar9);
  }
  uVar6 = FUN_0013e620();
  return uVar6;
}


