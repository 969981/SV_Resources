/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00465060; name: FUN_00465060
 */


void FUN_00465060(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  size_t __nbytes;
  ssize_t sVar10;
  int *piVar11;
  int iVar12;
  stat local_160;
  uint local_d0;
  long local_c0;
  
  uVar5 = FUN_00464690(param_1,1);
  if (uVar5 != 0) {
    pvVar6 = (void *)FUN_00464760(param_1,uVar5);
    nn::os::GenerateRandomBytes(pvVar6,uVar5);
    FUN_004647f0(param_1,uVar5,uVar5 << 3);
  }
  lVar7 = FUN_00464860(param_1);
  if (lVar7 == 0) {
    lVar7 = FUN_00464690(param_1,1);
    puVar1 = PTR_getentropy_047cd4a0;
    if (lVar7 != 0) {
      iVar4 = 4;
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) break;
        uVar8 = FUN_00464760(param_1,lVar7);
        if (puVar1 == (undefined *)0x0) {
LAB_004650e8:
          piVar9 = __errno_location();
          *piVar9 = 0x26;
        }
        else {
          iVar3 = getentropy(uVar8,lVar7);
          if (iVar3 == 0) {
            if (0 < lVar7) {
              FUN_004647f0(param_1,lVar7,lVar7 << 3);
              break;
            }
          }
          else {
            piVar9 = __errno_location();
            if (*piVar9 == 0x26) goto LAB_004650e8;
          }
        }
        piVar9 = __errno_location();
      } while (*piVar9 == 4);
    }
    lVar7 = FUN_00464860(param_1);
    if (lVar7 == 0) {
      __nbytes = FUN_00464690(param_1,1);
      if (__nbytes != 0) {
        uVar5 = 0;
        do {
          piVar9 = &DAT_047f1aa8 + uVar5 * 10;
          if (((((*piVar9 == -1) ||
                (iVar4 = fstat(*piVar9,(stat *)(local_160.__unused + 1)), iVar4 == -1)) ||
               ((&DAT_047f1ab0)[uVar5 * 5] != local_160.__unused[1])) ||
              (((&DAT_047f1ab8)[uVar5 * 5] != local_160.__unused[2] ||
               (0x1ff < (local_d0 ^ (&DAT_047f1ac0)[uVar5 * 10]))))) ||
             ((&DAT_047f1ac8)[uVar5 * 5] != local_c0)) {
            iVar4 = open((&PTR_s__dev_urandom_044b62b0)[uVar5],0);
            *piVar9 = iVar4;
            if (iVar4 != -1) {
              iVar4 = fstat(iVar4,&local_160);
              if (iVar4 != -1) {
                (&DAT_047f1ac0)[uVar5 * 10] = (undefined4)local_160.st_nlink;
                (&DAT_047f1ac8)[uVar5 * 5] = local_160._32_8_;
                (&DAT_047f1ab8)[uVar5 * 5] = local_160.st_ino;
                (&DAT_047f1ab0)[uVar5 * 5] = local_160.st_dev;
                goto LAB_00465248;
              }
              close(*piVar9);
              *piVar9 = -1;
            }
          }
          else {
LAB_00465248:
            iVar4 = *piVar9;
            if (iVar4 != -1) {
              iVar3 = 2;
              do {
                pvVar6 = (void *)FUN_00464760(param_1,__nbytes);
                sVar10 = read(iVar4,pvVar6,__nbytes);
                if (sVar10 < 1) {
                  iVar12 = iVar3;
                  if ((sVar10 < 0) && (piVar11 = __errno_location(), *piVar11 != 4))
                  goto LAB_004652cc;
                }
                else {
                  FUN_004647f0(param_1,sVar10,sVar10 << 3);
                  __nbytes = __nbytes - sVar10;
                  iVar12 = 3;
                }
              } while ((__nbytes != 0) && (iVar3 = iVar12 + -1, 0 < iVar12));
              if ((sVar10 < 0) || (DAT_044b62a8 == 0)) {
LAB_004652cc:
                if ((((*piVar9 != -1) &&
                     (iVar4 = fstat(*piVar9,(stat *)(local_160.__unused + 1)), iVar4 != -1)) &&
                    ((&DAT_047f1ab0)[uVar5 * 5] == local_160.__unused[1])) &&
                   ((((&DAT_047f1ab8)[uVar5 * 5] == local_160.__unused[2] &&
                     ((local_d0 ^ (&DAT_047f1ac0)[uVar5 * 10]) < 0x200)) &&
                    ((&DAT_047f1ac8)[uVar5 * 5] == local_c0)))) {
                  close(*piVar9);
                }
                *piVar9 = -1;
              }
              __nbytes = FUN_00464690(param_1,1);
            }
          }
        } while ((__nbytes != 0) && (bVar2 = uVar5 < 3, uVar5 = uVar5 + 1, bVar2));
      }
      lVar7 = FUN_00464860(param_1);
      if (lVar7 == 0) {
        FUN_00464860(param_1);
        return;
      }
    }
  }
  return;
}


