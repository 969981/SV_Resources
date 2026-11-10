/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03098ba8; name: FUN_03098ba8
 */


uint FUN_03098ba8(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,int *param_6,long *param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  uint local_84;
  undefined8 local_80;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  lVar6 = *(long *)(param_1 + 0x20);
  iVar4 = *param_2;
  if ((*(int *)(lVar6 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar6 + 0x100) + (long)iVar4) & 1) == 0)) {
    if (param_7 != (long *)0x0) {
      local_68[0] = iVar4;
      iVar4 = (**(code **)(*param_7 + 0x28))(param_7,param_1,local_68,param_8,param_9);
      local_84 = 0;
      if (iVar4 == 0) goto LAB_03098de8;
      iVar4 = *param_2;
    }
    *param_6 = iVar4;
    local_70[0] = *param_2;
    local_84 = FUN_0309879c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),local_70,param_3,
                            param_4,param_5);
  }
  else {
    uVar3 = *(uint *)(*(long *)(lVar6 + 0x168) + (long)iVar4 * 4);
    uVar12 = (ulong)uVar3;
    if ((int)uVar3 < 0) {
      local_84 = 0;
      iVar4 = -1;
      uVar10 = 0x3f8000003f800000;
    }
    else {
      uVar9 = *(uint *)(lVar6 + 0x170);
      lVar8 = (long)(int)uVar9;
      if ((int)uVar9 <= (int)(uVar3 + 1)) {
        uVar9 = uVar3 + 1;
      }
      uVar7 = uVar12;
      do {
        uVar2 = uVar7 + 1;
        if (lVar8 <= (long)uVar2) goto LAB_03098cb4;
        lVar1 = uVar7 * 4;
        uVar7 = uVar2;
      } while (*(int *)(*(long *)(lVar6 + 0x168) + 4 + lVar1) == iVar4);
      uVar9 = (uint)uVar2;
LAB_03098cb4:
      if ((int)uVar3 < (int)uVar9) {
        if (param_7 == (long *)0x0) {
          local_84 = 0;
          uVar10 = 0x3f8000003f800000;
          iVar4 = -1;
          while( true ) {
            uVar7 = FUN_03098920(lVar6,uVar12,param_3,param_4,&local_80);
            iVar5 = (int)uVar12;
            if ((uVar7 & 1) != 0) {
              if ((float)uVar10 <= (float)local_80) {
              }
              else {
                local_84 = 1;
                iVar4 = iVar5;
                uVar10 = local_80;
              }
            }
            if (uVar9 - 1 == iVar5) break;
            lVar6 = *(long *)(param_1 + 0x20);
            uVar12 = (ulong)(iVar5 + 1);
          }
        }
        else {
          uVar10 = 0x3f8000003f800000;
          iVar4 = -1;
          local_84 = 0;
          do {
            iVar11 = (int)uVar12;
            local_78[0] = iVar11;
            iVar5 = (**(code **)(*param_7 + 0x28))(param_7,param_1,local_78,param_8,param_9);
            if ((iVar5 != 0) &&
               (uVar12 = FUN_03098920(*(undefined8 *)(param_1 + 0x20),uVar12,param_3,param_4,
                                      &local_80), (uVar12 & 1) != 0)) {
              if ((float)uVar10 <= (float)local_80) {
              }
              else {
                local_84 = 1;
                iVar4 = iVar11;
                uVar10 = local_80;
              }
            }
            uVar12 = (ulong)(iVar11 + 1U);
          } while (uVar9 != iVar11 + 1U);
        }
      }
      else {
        local_84 = 0;
        iVar4 = -1;
        uVar10 = 0x3f8000003f800000;
      }
    }
    *param_5 = uVar10;
    *param_6 = iVar4;
  }
LAB_03098de8:
  return local_84 & 1;
}


