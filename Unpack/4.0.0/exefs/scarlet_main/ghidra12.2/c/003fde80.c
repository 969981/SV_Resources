/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fde80; name: FUN_003fde80
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_003fde80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_1a0 [64];
  long local_160 [32];
  
  iVar3 = FUN_003eb510(param_3,4);
  if (((iVar3 != 0) || (iVar3 = FUN_003eb510(param_2,4), iVar3 != 0)) ||
     (iVar3 = FUN_003eb510(param_4,4), iVar3 != 0)) {
    FUN_004806c0(3,0x7d,0x42,"external/openssl/crypto/bn/bn_exp.c",0xaf);
    return 0;
  }
  iVar3 = FUN_003eb2b0(param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_003ec570(param_4,1);
    if (iVar3 == 0) {
      iVar3 = FUN_003eb9f0(param_1,1);
      return iVar3;
    }
    FUN_003eb9f0(param_1,0);
    return 1;
  }
  FUN_003ed410(param_5);
  lVar6 = FUN_003ed5c0(param_5);
  lVar7 = FUN_003ed5c0(param_5);
  local_160[0] = lVar7;
  if (lVar7 != 0) {
    FUN_003feef0(auStack_1a0);
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar4 = FUN_003fef60(auStack_1a0,param_4,param_5);
    }
    else {
      lVar8 = FUN_003eb8f0(lVar6,param_4);
      if (lVar8 == 0) goto LAB_003fe2dc;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      iVar4 = FUN_003fef60(auStack_1a0,lVar6,param_5);
    }
    if ((0 < iVar4) && (iVar4 = FUN_003f0870(lVar7,param_2,param_4,param_5), iVar4 != 0)) {
      iVar4 = FUN_003eb480(lVar7);
      if (iVar4 != 0) {
        FUN_003eb9f0(param_1,0);
LAB_003fe008:
        iVar4 = 1;
        goto LAB_003fe2e0;
      }
      if (iVar3 < 0x2a0) {
        if (0xef < iVar3) {
          uVar9 = 5;
          goto LAB_003fe060;
        }
        if (0x4f < iVar3) {
          uVar9 = 4;
          goto LAB_003fe060;
        }
        if (0x17 < iVar3) {
          uVar9 = 3;
          goto LAB_003fe060;
        }
        uVar9 = 1;
      }
      else {
        uVar9 = 6;
LAB_003fe060:
        iVar4 = FUN_003fefa0(lVar6,lVar7,lVar7,auStack_1a0,param_5);
        if (iVar4 == 0) goto LAB_003fe2dc;
        plVar11 = local_160;
        lVar7 = (ulong)(uint)(1 << (ulong)(uVar9 - 1 & 0x1f)) - 1;
        do {
          plVar11 = plVar11 + 1;
          lVar8 = FUN_003ed5c0(param_5);
          *plVar11 = lVar8;
          if ((lVar8 == 0) ||
             (iVar4 = FUN_003fefa0(lVar8,plVar11[-1],lVar6,auStack_1a0,param_5), iVar4 == 0))
          goto LAB_003fe2dc;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar4 = FUN_003eb9f0(param_1,1);
      lVar6 = local_160[0];
      if (iVar4 != 0) {
        iVar3 = iVar3 + -1;
        if (uVar9 < 2) {
          iVar4 = 0;
          bVar10 = true;
          do {
            iVar5 = FUN_003ec150(param_3,iVar3);
            if (iVar5 == 0) {
              if (iVar4 == 0) {
                do {
                  if (iVar3 == 0) goto LAB_003fe008;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_003ec150(param_3,iVar3);
                } while (iVar4 == 0);
              }
              else {
                do {
                  iVar4 = FUN_003fefa0(param_1,param_1,param_1,auStack_1a0,param_5);
                  if (iVar4 == 0) goto LAB_003fe2dc;
                  if (iVar3 == 0) goto LAB_003fe008;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_003ec150(param_3,iVar3);
                } while (iVar4 == 0);
              }
            }
            if (((!bVar10) &&
                (iVar4 = FUN_003fefa0(param_1,param_1,param_1,auStack_1a0,param_5), iVar4 == 0)) ||
               (iVar4 = FUN_003fefa0(param_1,param_1,lVar6,auStack_1a0,param_5), iVar4 == 0))
            goto LAB_003fe2dc;
            bVar10 = false;
            iVar3 = iVar3 + -1;
            iVar4 = 1;
          } while (-1 < iVar3);
        }
        else {
          iVar4 = 0;
          bVar2 = 1;
          do {
            iVar5 = FUN_003ec150(param_3,iVar3);
            if (iVar5 == 0) {
              if (iVar4 == 0) {
                do {
                  if (iVar3 == 0) goto LAB_003fe008;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_003ec150(param_3,iVar3);
                } while (iVar4 == 0);
              }
              else {
                do {
                  iVar4 = FUN_003fefa0(param_1,param_1,param_1,auStack_1a0,param_5);
                  if (iVar4 == 0) goto LAB_003fe2dc;
                  if (iVar3 == 0) goto LAB_003fe008;
                  iVar3 = iVar3 + -1;
                  iVar4 = FUN_003ec150(param_3,iVar3);
                } while (iVar4 == 0);
              }
            }
            uVar12 = 0;
            uVar13 = 1;
            uVar14 = 1;
            iVar4 = iVar3;
            do {
              iVar4 = iVar4 + -1;
              if (iVar4 < 0) break;
              iVar5 = FUN_003ec150(param_3,iVar4);
              uVar1 = uVar14 - uVar12;
              if (iVar5 != 0) {
                uVar12 = uVar14;
              }
              uVar14 = uVar14 + 1;
              if (iVar5 != 0) {
                uVar13 = uVar13 << (ulong)(uVar1 & 0x1f) | 1;
              }
            } while (uVar9 != uVar14);
            if (!(bool)(bVar2 | (int)uVar12 < 0)) {
              iVar4 = uVar12 + 1;
              do {
                iVar5 = FUN_003fefa0(param_1,param_1,param_1,auStack_1a0,param_5);
                if (iVar5 == 0) goto LAB_003fe2dc;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar4 = FUN_003fefa0(param_1,param_1,local_160[(int)uVar13 >> 1],auStack_1a0,param_5);
            if (iVar4 == 0) goto LAB_003fe2dc;
            bVar2 = 0;
            iVar4 = 1;
            iVar3 = iVar3 + ~uVar12;
          } while (-1 < iVar3);
        }
        goto LAB_003fe2e0;
      }
    }
  }
LAB_003fe2dc:
  iVar4 = 0;
LAB_003fe2e0:
  FUN_003ed530(param_5);
  FUN_003fef20(auStack_1a0);
  return iVar4;
}


