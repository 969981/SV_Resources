/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353a7c0; name: FUN_0353a7c0
 */


void * FUN_0353a7c0(int param_1,undefined8 param_2,void *param_3,ulong param_4,size_t param_5,
                   uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  
  if (param_3 == (void *)0x0) {
    __n = 0;
LAB_0353a85c:
    if ((param_6 >> 1 & 1) == 0) {
      uVar5 = __n + (__n >> 2) + (__n >> 3);
      uVar6 = uVar5;
      if (param_4 <= __n) {
        uVar6 = param_4;
      }
      if (param_4 <= uVar5) {
        param_4 = uVar6;
      }
      __dest = (void *)FUN_0353a070(param_1,param_2,param_4);
      if ((param_3 != (void *)0x0) && (__dest != (void *)0x0)) {
        if ((param_6 & 1) == 0) {
          if (param_4 <= __n) {
            __n = param_4;
          }
          memcpy(__dest,param_3,__n);
        }
        FUN_0353a2d0(param_1,param_3);
      }
    }
    else {
      __dest = (void *)0x0;
    }
  }
  else {
    uVar5 = *(ulong *)(&DAT_048d2178 + (long)param_1 * 0x638) & (ulong)param_3;
    if (*(uint *)(uVar5 + 0xc) < 0x7e) {
      uVar1 = *(uint *)(uVar5 + 0x24);
      uVar6 = (ulong)uVar1;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uint)((int)param_3 - (int)(uVar5 + 0x80)) / uVar1;
      }
      __dest = (void *)(uVar5 + 0x80 + uVar2 * uVar6);
      __n = (uVar6 - (long)param_3) + (long)__dest;
      if (param_5 != 0) {
        __n = param_5;
      }
      if (uVar6 < param_4) goto LAB_0353a85c;
    }
    else {
      lVar8 = (long)param_1;
      uVar6 = param_4 + 0x80;
      if (*(uint *)(uVar5 + 0xc) == 0x7e) {
        uVar9 = uVar6 >> (*(ulong *)(&DAT_048d2170 + lVar8 * 0x638) & 0x3f);
        if ((*(ulong *)(&DAT_048d2178 + (long)param_1 * 0x638) - 1 & uVar6) != 0) {
          uVar9 = uVar9 + 1;
        }
        uVar10 = (ulong)*(uint *)(uVar5 + 0x2c);
        __n = param_5;
        if (param_5 == 0) {
          __n = (uVar5 - (long)param_3) + (&DAT_048d2168)[lVar8 * 199] * uVar10;
        }
        uVar7 = __n >> 1;
        bVar3 = uVar10 <= uVar9;
        bVar4 = uVar9 == uVar10;
        uVar9 = uVar6;
      }
      else {
        uVar9 = uVar6 >> (*(ulong *)(&DAT_048d2158 + lVar8 * 0x638) & 0x3f);
        if ((*(long *)(&DAT_048d2150 + lVar8 * 0x638) - 1U & uVar6) != 0) {
          uVar9 = uVar9 + 1;
        }
        uVar6 = (ulong)*(uint *)(uVar5 + 0x2c);
        __n = (uVar5 - (long)param_3) + *(long *)(&DAT_048d2150 + lVar8 * 0x638) * uVar6;
        if (param_5 != 0) {
          __n = param_5;
        }
        uVar7 = (ulong)(*(uint *)(uVar5 + 0x2c) >> 1);
        bVar3 = uVar6 <= uVar9;
        bVar4 = uVar9 == uVar6;
      }
      __dest = (void *)(uVar5 + 0x80);
      if (bVar3 && !bVar4 || uVar9 < uVar7) goto LAB_0353a85c;
    }
    if (((param_6 & 1) == 0) && (__dest != param_3)) {
      memmove(__dest,param_3,__n);
    }
  }
  return __dest;
}


