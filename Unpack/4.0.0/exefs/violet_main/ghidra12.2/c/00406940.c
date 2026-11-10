/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00406940; name: FUN_00406940
 */


int FUN_00406940(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  size_t __n;
  void *__s2;
  undefined8 uVar7;
  void *__s1;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  size_t __n_00;
  int *piVar14;
  
  lVar6 = FUN_0040d100();
  if (lVar6 == 0) {
    return -1;
  }
  iVar1 = FUN_0040d580(param_1);
  iVar2 = FUN_0040d110(lVar6);
  __n = FUN_0040d690(param_1);
  __s2 = (void *)FUN_0040d680(param_1);
  uVar7 = FUN_0040d560(param_1);
  FUN_003ed410(param_2);
  iVar3 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x10));
  iVar5 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar5 = iVar3 + 7;
  }
  iVar4 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x40));
  iVar3 = iVar4 + 0xe;
  if (-1 < iVar4 + 7) {
    iVar3 = iVar4 + 7;
  }
  iVar4 = iVar3 >> 3;
  if (iVar3 >> 3 <= iVar5 >> 3) {
    iVar4 = iVar5 >> 3;
  }
  __n_00 = (size_t)(iVar4 * 6);
  __s1 = (void *)FUN_00452c30(__n_00,"external/openssl/crypto/ec/ec_curve.c",0xcaf);
  if (((((((__s1 != (void *)0x0) && (lVar6 = FUN_003ed5c0(param_2), lVar6 != 0)) &&
         (lVar8 = FUN_003ed5c0(param_2), lVar8 != 0)) &&
        ((lVar9 = FUN_003ed5c0(param_2), lVar9 != 0 && (lVar10 = FUN_003ed5c0(param_2), lVar10 != 0)
         ))) && ((lVar11 = FUN_003ed5c0(param_2), lVar11 != 0 &&
                 ((lVar12 = FUN_003ed5c0(param_2), lVar12 != 0 &&
                  (iVar5 = FUN_0040d6e0(param_1,lVar6,lVar8,lVar9,param_2), iVar5 != 0)))))) &&
      (lVar13 = FUN_0040d4a0(param_1), lVar13 != 0)) &&
     (((iVar5 = FUN_0040dd90(param_1,lVar13,lVar10,lVar11,param_2), iVar5 != 0 &&
       (iVar5 = FUN_0040d4b0(param_1,lVar12,param_2), iVar5 != 0)) &&
      (iVar5 = FUN_003ebc80(lVar6,__s1,iVar4), 0 < iVar5)))) {
    lVar6 = (long)iVar4;
    iVar5 = FUN_003ebc80(lVar8,(long)__s1 + lVar6,iVar4);
    if (((0 < iVar5) &&
        (iVar5 = FUN_003ebc80(lVar9,(void *)((long)__s1 + lVar6 * 2),iVar4), 0 < iVar5)) &&
       ((iVar5 = FUN_003ebc80(lVar10,(void *)((long)__s1 + lVar6 * 3),iVar4), 0 < iVar5 &&
        ((iVar5 = FUN_003ebc80(lVar11,(void *)((long)__s1 + lVar6 * 4),iVar4), 0 < iVar5 &&
         (iVar5 = FUN_003ebc80(lVar12,(void *)((long)__s1 + lVar6 * 5),iVar4), 0 < iVar5)))))) {
      if (iVar1 < 1) {
        lVar6 = 0;
        do {
          piVar14 = *(int **)((long)&PTR_DAT_044a42e0 + lVar6);
          if ((*piVar14 == iVar2) && (iVar4 == piVar14[2])) {
            iVar5 = piVar14[1];
            iVar1 = FUN_003eb480(uVar7);
            if ((((iVar1 != 0) || (iVar1 = FUN_003ec5f0(uVar7,piVar14[3]), iVar1 != 0)) &&
                (((__n == 0 || (piVar14[1] == 0)) ||
                 ((__n == (long)piVar14[1] && (iVar1 = memcmp(piVar14 + 4,__s2,__n), iVar1 == 0)))))
                ) && (iVar5 = memcmp(__s1,(void *)((long)(piVar14 + 4) + (long)iVar5),__n_00),
                     iVar5 == 0)) {
              iVar5 = *(int *)((long)&DAT_044a42d8 + lVar6);
              break;
            }
          }
          lVar6 = lVar6 + 0x20;
          iVar5 = 0;
        } while (lVar6 != 0xa40);
      }
      else if (__n == 0) {
        lVar6 = 0;
        do {
          piVar14 = *(int **)((long)&PTR_DAT_044a42e0 + lVar6);
          if ((*piVar14 == iVar2) &&
             (iVar4 == piVar14[2] && iVar1 == *(int *)((long)&DAT_044a42d8 + lVar6))) {
            iVar5 = piVar14[1];
            iVar3 = FUN_003eb480(uVar7);
            if (((iVar3 != 0) || (iVar3 = FUN_003ec5f0(uVar7,piVar14[3]), iVar3 != 0)) &&
               (iVar5 = memcmp(__s1,(void *)((long)piVar14 + (long)iVar5 + 0x10),__n_00), iVar5 == 0
               )) goto LAB_00406dc8;
          }
          lVar6 = lVar6 + 0x20;
          iVar5 = 0;
        } while (lVar6 != 0xa40);
      }
      else {
        lVar6 = 0;
        do {
          piVar14 = *(int **)((long)&PTR_DAT_044a42e0 + lVar6);
          if ((*piVar14 == iVar2) &&
             (iVar4 == piVar14[2] && iVar1 == *(int *)((long)&DAT_044a42d8 + lVar6))) {
            iVar5 = piVar14[1];
            iVar3 = FUN_003eb480(uVar7);
            if ((iVar3 != 0) || (iVar3 = FUN_003ec5f0(uVar7,piVar14[3]), iVar3 != 0)) {
              if (((piVar14[1] == 0) ||
                  ((__n == (long)piVar14[1] && (iVar3 = memcmp(piVar14 + 4,__s2,__n), iVar3 == 0))))
                 && (iVar5 = memcmp(__s1,(void *)((long)(piVar14 + 4) + (long)iVar5),__n_00),
                    iVar5 == 0)) goto LAB_00406dc8;
            }
          }
          lVar6 = lVar6 + 0x20;
          iVar5 = 0;
        } while (lVar6 != 0xa40);
      }
      goto LAB_00406ba4;
    }
  }
  iVar5 = -1;
LAB_00406ba4:
  FUN_00452f80(__s1,"external/openssl/crypto/ec/ec_curve.c",0xcec);
  FUN_003ed530(param_2);
  return iVar5;
LAB_00406dc8:
  iVar5 = iVar1;
  goto LAB_00406ba4;
}


