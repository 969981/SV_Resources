/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047db50; name: FUN_0047db50
 */


int * FUN_0047db50(uint *param_1,code *param_2,code *param_3)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  piVar2 = (int *)FUN_00452c30(0x20,"external/openssl/crypto/stack/stack.c",0x50);
  if (piVar2 == (int *)0x0) {
    FUN_004806c0(0xf,0x7f,0x41,"external/openssl/crypto/stack/stack.c",0x51);
  }
  else {
    uVar5 = *(undefined8 *)param_1;
    uVar9 = *(undefined8 *)(param_1 + 6);
    uVar8 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)piVar2 = uVar5;
    *(undefined8 *)(piVar2 + 6) = uVar9;
    *(undefined8 *)(piVar2 + 4) = uVar8;
    uVar7 = *param_1;
    if (uVar7 == 0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[5] = 0;
    }
    else {
      if ((int)uVar7 < 5) {
        uVar7 = 4;
      }
      piVar2[5] = uVar7;
      lVar3 = FUN_00452ce0((ulong)uVar7 << 3,"external/openssl/crypto/stack/stack.c",0x60);
      *(long *)(piVar2 + 2) = lVar3;
      if (lVar3 == 0) {
        uVar5 = 0x62;
LAB_0047dc98:
        FUN_00452f80(piVar2,"external/openssl/crypto/stack/stack.c",uVar5);
        piVar2 = (int *)0x0;
      }
      else {
        iVar6 = *piVar2;
        if (0 < iVar6) {
          lVar3 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + lVar3 * 8) != 0) {
              lVar4 = (*param_2)();
              *(long *)(*(long *)(piVar2 + 2) + lVar3 * 8) = lVar4;
              if (lVar4 != 0) {
                iVar6 = *piVar2;
                goto LAB_0047dbd4;
              }
              if ((int)lVar3 != 0) {
                do {
                  if (*(long *)(*(long *)(piVar2 + 2) + (lVar3 + -1) * 8) != 0) {
                    (*param_3)();
                  }
                  bVar1 = 1 < lVar3;
                  lVar3 = lVar3 + -1;
                } while (bVar1);
              }
              FUN_00452f80(*(undefined8 *)(piVar2 + 2),"external/openssl/crypto/stack/stack.c",0x178
                          );
              uVar5 = 0x179;
              goto LAB_0047dc98;
            }
LAB_0047dbd4:
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar6);
        }
      }
    }
  }
  return piVar2;
}


