/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cce80; name: FUN_003cce80
 */


undefined8 FUN_003cce80(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = FUN_003a1e80(param_2,3);
  if (iVar1 == 0) {
    uVar4 = 0x93;
    iVar1 = 0x44;
    uVar6 = 0x417;
    goto LAB_003cd06c;
  }
  if ((param_3 != (long *)0x0) && (lVar8 = *param_3, lVar8 != 0)) {
    lVar7 = param_3[2];
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x660) + 0x100);
      if ((lVar7 == 0) && ((*(uint *)(param_1 + 0x698) >> 3 & 1) == 0)) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x550) + 0x1c8);
        if ((lVar7 != 0) || (lVar7 = *(long *)(*(long *)(param_1 + 0x660) + 0x20), lVar7 != 0)) {
          lVar5 = FUN_004879e0();
          if (lVar5 == 0) {
            uVar4 = 0x13c;
            iVar1 = 0x41;
            uVar6 = 0x3d4;
            goto LAB_003cd06c;
          }
          iVar1 = FUN_00487ac0(lVar5,lVar7,lVar8,0);
          if (iVar1 == 0) {
            FUN_00487a30(lVar5);
            uVar4 = 0x13c;
            iVar1 = 0xb;
            uVar6 = 0x3da;
            goto LAB_003cd06c;
          }
          FUN_00486040(lVar5);
          FUN_004808e0();
          uVar4 = FUN_004879c0(lVar5);
          iVar1 = FUN_003d9cd0(param_1,uVar4,0,0);
          if (iVar1 != 1) {
            FUN_00487a30(lVar5);
            uVar4 = 0x13c;
            uVar6 = 0x3f0;
            goto LAB_003cd06c;
          }
          iVar1 = FUN_0047e430(uVar4);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              uVar6 = FUN_0047e450(uVar4,iVar2);
              iVar3 = FUN_003cec10(param_1,param_2,uVar6,iVar2);
              if (iVar3 == 0) {
                FUN_00487a30(lVar5);
                return 0;
              }
              iVar2 = iVar2 + 1;
            } while (iVar1 != iVar2);
          }
          FUN_00487a30(lVar5);
          goto LAB_003cd03c;
        }
        lVar7 = 0;
      }
    }
    iVar1 = FUN_003d9cd0(param_1,lVar7,lVar8,0);
    if (iVar1 != 1) {
      uVar4 = 0x13c;
      uVar6 = 0x401;
      goto LAB_003cd06c;
    }
    iVar1 = FUN_003cec10(param_1,param_2,lVar8,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = 1;
    while( true ) {
      iVar2 = FUN_0047e430(lVar7);
      if (iVar2 <= iVar1 + -1) break;
      uVar4 = FUN_0047e450(lVar7,iVar1 + -1);
      iVar2 = FUN_003cec10(param_1,param_2,uVar4,iVar1);
      iVar1 = iVar1 + 1;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
LAB_003cd03c:
  iVar1 = FUN_003a1fe0(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = 0x93;
  iVar1 = 0x44;
  uVar6 = 0x420;
LAB_003cd06c:
  FUN_003c3950(param_1,0x50,uVar4,iVar1,"external/openssl/ssl/statem/statem_lib.c",uVar6);
  return 0;
}


