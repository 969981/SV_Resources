/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469c10; name: FUN_00469c10
 */


long * FUN_00469c10(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                   long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int local_34;
  
  plVar3 = param_1;
  if ((param_1 == (long *)0x0) && (plVar3 = (long *)FUN_00469910(0,0), plVar3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if (*plVar3 == 0) {
    lVar4 = FUN_003eb5b0();
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_00469d38;
  }
  if (plVar3[1] == 0) {
    lVar4 = FUN_003eb5b0();
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_00469d38;
  }
  lVar4 = plVar3[2];
  if (param_2 != 0) {
    FUN_003eb520();
    lVar4 = FUN_003eb7a0(param_2);
    plVar3[2] = lVar4;
  }
  if (lVar4 != 0) {
    if (param_5 != 0) {
      plVar3[8] = param_5;
    }
    if (param_6 != 0) {
      plVar3[7] = param_6;
    }
    iVar2 = FUN_003ff740(*plVar3,plVar3[3]);
    if (iVar2 != 0) {
      uVar5 = 0xffffffdf;
      do {
        lVar4 = FUN_003ef640(plVar3[1],*plVar3,plVar3[3],param_4,&local_34);
        if (lVar4 != 0) {
          if (((code *)plVar3[8] == (code *)0x0) || (plVar3[7] == 0)) {
            iVar2 = FUN_003fd370(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar2 = (*(code *)plVar3[8])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          if (iVar2 == 0) break;
          if (plVar3[7] != 0) {
            iVar2 = FUN_003ecc60(plVar3[1],plVar3[1],plVar3[7],param_4);
            if (iVar2 == 0) break;
            iVar2 = FUN_003ecc60(*plVar3,*plVar3,plVar3[7],param_4);
            if ((iVar2 == 0) && (param_1 == (long *)0x0)) goto LAB_00469d3c;
          }
          return plVar3;
        }
        if (local_34 == 0) break;
        bVar1 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        if (bVar1) {
          FUN_004806c0(3,0x80,0x71,"external/openssl/crypto/bn/bn_blind.c",0x11d);
          break;
        }
        iVar2 = FUN_003ff740(*plVar3,plVar3[3]);
      } while (iVar2 != 0);
    }
  }
LAB_00469d38:
  if (param_1 != (long *)0x0) {
    return param_1;
  }
LAB_00469d3c:
  FUN_003eb520(*plVar3);
  FUN_003eb520(plVar3[1]);
  FUN_003eb520(plVar3[2]);
  FUN_003eb520(plVar3[3]);
  FUN_0047e620(plVar3[9]);
  FUN_00452f80(plVar3,"external/openssl/crypto/bn/bn_blind.c",0x5a);
  return (long *)0x0;
}


