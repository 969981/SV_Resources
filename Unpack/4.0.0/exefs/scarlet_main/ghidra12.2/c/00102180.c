/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00102180; name: FUN_00102180
 */


undefined4 FUN_00102180(long param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *__s;
  undefined *puVar5;
  size_t __n;
  long lVar6;
  void *__s_00;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 300) == 0) {
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x69c) = 0;
    *(undefined4 *)(param_1 + 0x644) = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40);
    lVar10 = 0;
    uVar11 = 0;
    uVar8 = 0;
    iVar9 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x1b8) + lVar10 + 0x1a0) != 0) {
        if (iVar9 == 0) {
          iVar9 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x5c);
          if (iVar9 < 1 || iVar9 == 2) {
            if (iVar9 < 0) {
              if (DAT_047ec2a0 != 0) {
                FUN_001209d0(&DAT_047ec328);
              }
              iVar9 = 1;
            }
            else {
              FUN_001209d0(param_1 + 0x520);
              iVar9 = 2;
            }
          }
          else {
            iVar9 = 0;
          }
        }
        lVar6 = *(long *)(param_1 + 0x1b8) + lVar10;
        iVar4 = (**(code **)(lVar6 + 0x1a0))(lVar6,param_2 != 0);
        if (iVar4 != 0) {
          uVar8 = 1;
        }
        if ((iVar3 == 0) || (iVar4 != 0)) {
          if ((iVar3 == 0) && (iVar4 != 0)) {
            if ((*(int *)(param_1 + 0xc) != 1) || (*(int *)(param_1 + 0x67c) == 1)) {
              piVar2 = (int *)(*(long *)(param_1 + 0x1b8) + lVar10);
              lVar6 = *(long *)(piVar2 + 10);
              uVar7 = *piVar2 - (int)lVar6;
              if ((int)uVar7 < 0) {
                uVar7 = piVar2[3] + uVar7;
              }
              iVar4 = piVar2[0x16];
              uVar7 = uVar7 & 0xffffffc0;
              if ((int)uVar7 < iVar4) {
                __n = (size_t)(iVar4 - uVar7);
                __s = (void *)(lVar6 - __n);
                __s_00 = *(void **)(piVar2 + 4);
                *(void **)(piVar2 + 10) = __s;
                if (__s < __s_00) {
                  uVar12 = (long)__s_00 - (long)__s;
                  *(ulong *)(piVar2 + 10) = (long)__s + (ulong)(uint)piVar2[3];
                  memset(__s_00,0,(ulong)((iVar4 - uVar7) - (int)uVar12));
                  __s = *(void **)(piVar2 + 10);
                  __n = uVar12 & 0xffffffff;
                }
                memset(__s,0,__n);
              }
              else if (uVar7 - iVar4 != 0 && iVar4 <= (int)uVar7) {
                uVar12 = lVar6 + (ulong)(uVar7 - iVar4);
                *(ulong *)(piVar2 + 10) = uVar12;
                if (*(long *)(piVar2 + 4) + (ulong)(uint)piVar2[3] < uVar12) {
                  *(ulong *)(piVar2 + 10) = uVar12 - (uint)piVar2[3];
                }
              }
            }
            *(undefined4 *)(param_1 + 0x40) = 1;
            *(undefined4 *)(param_1 + 0x644) = 0;
            *(undefined4 *)(param_1 + 0x69c) = 0;
          }
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1b8) + lVar10);
          *puVar1 = puVar1[2];
          lVar6 = *(long *)(param_1 + 0x1b8) + lVar10;
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x10);
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x1c0;
    } while (uVar11 < *(uint *)(param_1 + 300));
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        if (DAT_047ec2a0 == 0) {
          return uVar8;
        }
        puVar5 = &DAT_047ec328;
      }
      else {
        puVar5 = (undefined *)(param_1 + 0x520);
      }
      FUN_00120750(puVar5);
    }
  }
  return uVar8;
}


