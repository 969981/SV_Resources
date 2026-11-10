/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b5ba0; name: FUN_003b5ba0
 */


undefined8
FUN_003b5ba0(undefined8 param_1,long *param_2,long *param_3,long *param_4,int param_5,int param_6)

{
  ulong __n;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  char local_64 [4];
  
  uVar9 = param_2[1];
  if (uVar9 == 0) {
    if (param_6 == 0) {
      FUN_004806c0(0x14,0x207,0xb7,"external/openssl/ssl/ssl_lib.c",0x15b7);
      return 0;
    }
    uVar6 = 0x2f;
    uVar7 = 0xb7;
    uVar8 = 0x15b5;
LAB_003b5c24:
    FUN_003c3950(param_1,uVar6,0x207,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
    return 0;
  }
  __n = 2;
  if (param_5 != 0) {
    __n = 3;
  }
  uVar1 = 0;
  if (__n != 0) {
    uVar1 = uVar9 / __n;
  }
  if (uVar9 != uVar1 * __n) {
    if (param_6 == 0) {
      FUN_004806c0(0x14,0x207,0x97,"external/openssl/ssl/ssl_lib.c",0x15c1);
      return 0;
    }
    uVar6 = 0x32;
    uVar7 = 0x97;
    uVar8 = 0x15be;
    goto LAB_003b5c24;
  }
  lVar3 = FUN_0047dcc0();
  lVar4 = FUN_0047dcc0();
  if ((lVar3 == 0) || (lVar4 == 0)) {
    if (param_6 != 0) {
      uVar6 = 0x50;
      uVar7 = 0x41;
      uVar8 = 0x15ca;
      goto LAB_003b5ce0;
    }
    uVar6 = 0x41;
    uVar7 = 0x15cc;
  }
  else {
    uVar9 = param_2[1];
    if (__n <= uVar9) {
      if (param_5 == 0) {
        do {
          pvVar10 = (void *)*param_2;
          memcpy(local_64,pvVar10,__n);
          *param_2 = (long)pvVar10 + __n;
          param_2[1] = uVar9 - __n;
          piVar5 = (int *)FUN_003b1d10(param_1,local_64,1);
          if (piVar5 != (int *)0x0) {
            if (*piVar5 != 0) {
              iVar2 = FUN_0047e2f0(lVar3,piVar5);
              if (iVar2 == 0) goto LAB_003b5e40;
              if (*piVar5 != 0) goto LAB_003b5d14;
            }
            iVar2 = FUN_0047e2f0(lVar4,piVar5);
            if (iVar2 == 0) goto LAB_003b5e40;
          }
LAB_003b5d14:
          uVar9 = param_2[1];
        } while (__n <= uVar9);
      }
      else {
        do {
          pvVar10 = (void *)*param_2;
          memcpy(local_64,pvVar10,__n);
          *param_2 = (long)pvVar10 + __n;
          param_2[1] = uVar9 - __n;
          if ((local_64[0] == '\0') &&
             (piVar5 = (int *)FUN_003b1d10(param_1,(ulong)local_64 | 1,1), piVar5 != (int *)0x0)) {
            if (*piVar5 != 0) {
              iVar2 = FUN_0047e2f0(lVar3,piVar5);
              if (iVar2 == 0) goto LAB_003b5e40;
              if (*piVar5 != 0) goto LAB_003b5d8c;
            }
            iVar2 = FUN_0047e2f0(lVar4,piVar5);
            if (iVar2 == 0) goto LAB_003b5e40;
          }
LAB_003b5d8c:
          uVar9 = param_2[1];
        } while (__n <= uVar9);
      }
    }
    if (uVar9 == 0) {
      if (param_3 == (long *)0x0) {
        FUN_0047db00(lVar3);
      }
      else {
        *param_3 = lVar3;
      }
      if (param_4 == (long *)0x0) {
        FUN_0047db00(lVar4);
        return 1;
      }
      *param_4 = lVar4;
      return 1;
    }
    if (param_6 != 0) {
      uVar6 = 0x32;
      uVar7 = 0x10f;
      uVar8 = 0x15ea;
LAB_003b5ce0:
      FUN_003c3950(param_1,uVar6,0x207,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
      goto LAB_003b5ea4;
    }
    uVar6 = 0x10f;
    uVar7 = 0x15ec;
  }
LAB_003b5ea0:
  FUN_004806c0(0x14,0x207,uVar6,"external/openssl/ssl/ssl_lib.c",uVar7);
LAB_003b5ea4:
  FUN_0047db00(lVar3);
  FUN_0047db00(lVar4);
  return 0;
LAB_003b5e40:
  if (param_6 != 0) {
    uVar6 = 0x50;
    uVar7 = 0x41;
    uVar8 = 0x15e0;
    goto LAB_003b5ce0;
  }
  uVar6 = 0x41;
  uVar7 = 0x15e2;
  goto LAB_003b5ea0;
}


