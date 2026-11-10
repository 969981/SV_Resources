/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03097da0; name: FUN_03097da0
 */


uint FUN_03097da0(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4,int *param_5,
                 long *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  lVar7 = *(long *)(param_1 + 0x20);
  iVar4 = *param_2;
  if ((*(int *)(lVar7 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar7 + 0x100) + (long)iVar4) & 1) == 0)) {
    if (param_6 != (long *)0x0) {
      local_68[0] = iVar4;
      iVar4 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_68,param_7,param_8);
      uVar5 = 0;
      if (iVar4 == 0) goto LAB_03097f58;
      iVar4 = *param_2;
    }
    *param_5 = iVar4;
    local_70[0] = *param_2;
    uVar5 = FUN_030979ac(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),local_70,param_3,param_4)
    ;
  }
  else {
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x168) + (long)iVar4 * 4);
    uVar12 = (ulong)uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = 0;
      iVar4 = -1;
      uVar13 = 0x3f8000003f800000;
    }
    else {
      uVar10 = *(uint *)(lVar7 + 0x170);
      lVar9 = (long)(int)uVar10;
      if ((int)uVar10 <= (int)(uVar3 + 1)) {
        uVar10 = uVar3 + 1;
      }
      uVar8 = uVar12;
      do {
        uVar2 = uVar8 + 1;
        if (lVar9 <= (long)uVar2) goto LAB_03097ea0;
        lVar1 = uVar8 * 4;
        uVar8 = uVar2;
      } while (*(int *)(*(long *)(lVar7 + 0x168) + 4 + lVar1) == iVar4);
      uVar10 = (uint)uVar2;
LAB_03097ea0:
      uVar5 = 0;
      if ((int)uVar3 < (int)uVar10) {
        if (param_6 == (long *)0x0) {
          uVar13 = 0x3f8000003f800000;
          iVar4 = -1;
          while( true ) {
            uVar8 = FUN_03097b20(lVar7,uVar12,param_3,&local_80);
            iVar6 = (int)uVar12;
            if ((uVar8 & 1) != 0) {
              if ((float)uVar13 <= (float)local_80) {
              }
              else {
                uVar5 = 1;
                iVar4 = iVar6;
                uVar13 = local_80;
              }
            }
            if (uVar10 - 1 == iVar6) break;
            lVar7 = *(long *)(param_1 + 0x20);
            uVar12 = (ulong)(iVar6 + 1);
          }
        }
        else {
          uVar13 = 0x3f8000003f800000;
          iVar4 = -1;
          do {
            iVar11 = (int)uVar12;
            local_78[0] = iVar11;
            iVar6 = (**(code **)(*param_6 + 0x28))(param_6,param_1,local_78,param_7,param_8);
            if ((iVar6 != 0) &&
               (uVar12 = FUN_03097b20(*(undefined8 *)(param_1 + 0x20),uVar12,param_3,&local_80),
               (uVar12 & 1) != 0)) {
              if ((float)uVar13 <= (float)local_80) {
              }
              else {
                uVar5 = 1;
                iVar4 = iVar11;
                uVar13 = local_80;
              }
            }
            uVar12 = (ulong)(iVar11 + 1U);
          } while (uVar10 != iVar11 + 1U);
        }
      }
      else {
        iVar4 = -1;
        uVar13 = 0x3f8000003f800000;
      }
    }
    *param_4 = uVar13;
    *param_5 = iVar4;
  }
LAB_03097f58:
  return uVar5 & 1;
}


