/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173a5a8; name: FUN_0173a5a8
 */


void FUN_0173a5a8(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long local_80 [3];
  long *local_68;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 < 1) {
    uVar9 = 0xffffffff;
    uVar11 = 0;
    uVar7 = 0;
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar5 = 0xffffffff;
    uVar12 = 0;
    uVar7 = 0;
    uVar11 = 0;
    uVar9 = 0xffffffff;
    do {
      if (0 < iVar3) {
        iVar3 = iVar3 * uVar12;
        uVar10 = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar3 = 0;
          uVar10 = uVar12;
        }
        FUN_0111e884(local_80,param_1,iVar3 + uVar10);
        lVar2 = local_80[0];
        lVar6 = *param_2;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        uVar10 = uVar9;
        uVar8 = uVar5;
        if (lVar2 == lVar6) {
          uVar10 = 0;
          if (uVar9 != 0xffffffff) {
            uVar10 = uVar9;
          }
          uVar7 = 0;
          uVar8 = uVar12;
          if (uVar5 != 0xffffffff) {
            uVar8 = uVar5;
          }
          uVar11 = uVar12;
        }
        iVar3 = *(int *)(param_1 + 0xc);
        if (1 < iVar3) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            iVar3 = iVar3 * uVar12;
            uVar9 = 1;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x10);
            uVar9 = uVar12;
          }
          FUN_0111e884(local_80,param_1,iVar3 + uVar9);
          lVar2 = local_80[0];
          lVar6 = *param_2;
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (lVar2 == lVar6) {
            if (uVar10 == 0xffffffff) {
              uVar10 = 1;
            }
            uVar9 = uVar12;
            if (uVar8 != 0xffffffff) {
              uVar9 = uVar8;
            }
            uVar7 = 1;
            uVar11 = uVar12;
            uVar8 = uVar9;
          }
          iVar3 = *(int *)(param_1 + 0xc);
          if (2 < iVar3) {
            uVar9 = 2;
            do {
              if (*(int *)(param_1 + 0x1c) == 0) {
                iVar3 = iVar3 * uVar12;
                uVar5 = uVar9;
              }
              else {
                iVar3 = *(int *)(param_1 + 0x10) * uVar9;
                uVar5 = uVar12;
              }
              FUN_0111e884(local_80,param_1,iVar3 + uVar5);
              lVar2 = local_80[0];
              lVar6 = *param_2;
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              uVar5 = uVar9;
              if (uVar10 != 0xffffffff) {
                uVar5 = uVar10;
              }
              uVar1 = uVar12;
              if (uVar8 != 0xffffffff) {
                uVar1 = uVar8;
              }
              if (lVar2 == lVar6) {
                uVar10 = uVar5;
              }
              iVar3 = *(int *)(param_1 + 0xc);
              if (lVar2 == lVar6) {
                uVar8 = uVar1;
                uVar11 = uVar12;
                uVar7 = uVar9;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < iVar3);
          }
        }
        iVar4 = *(int *)(param_1 + 0x10);
        uVar9 = uVar10;
        uVar5 = uVar8;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar4);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = CONCAT44(uVar5,uVar9);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = CONCAT44(uVar11 + ~uVar5,uVar7 + ~uVar9);
  }
  return;
}


