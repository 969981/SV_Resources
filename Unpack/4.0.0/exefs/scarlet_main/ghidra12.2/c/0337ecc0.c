/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337ecc0; name: FUN_0337ecc0
 */


void FUN_0337ecc0(int *param_1,int *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_58 [4];
  byte local_54 [4];
  
  *param_3 = 0;
  if (*param_1 < 2) {
    iVar4 = FUN_0337c630(param_1,0,param_3,0);
  }
  else {
    local_58[0] = 0xff;
    plVar8 = *(long **)(param_1 + 2);
    pbVar1 = (byte *)*plVar8;
    lVar7 = plVar8[1];
    if (lVar7 - (long)pbVar1 == 0 || lVar7 < (long)pbVar1) {
      plVar5 = (long *)plVar8[7];
      if (plVar5 == (long *)0x0) {
        memcpy(local_58,pbVar1,lVar7 - (long)pbVar1);
        *plVar8 = lVar7;
      }
      else {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar8,local_58,1);
      }
    }
    else {
      local_58[0] = *pbVar1;
      *plVar8 = (long)(pbVar1 + 1);
    }
    bVar3 = local_58[0];
    uVar9 = (ulong)(local_58[0] >> 1) & 0x3f;
    if ((char)local_58[0] < '\0') {
      uVar10 = 6;
      do {
        local_54[0] = 0xff;
        plVar8 = *(long **)(param_1 + 2);
        pbVar1 = (byte *)*plVar8;
        lVar7 = plVar8[1];
        if (lVar7 - (long)pbVar1 == 0 || lVar7 < (long)pbVar1) {
          plVar5 = (long *)plVar8[7];
          if (plVar5 == (long *)0x0) {
            memcpy(local_54,pbVar1,lVar7 - (long)pbVar1);
            *plVar8 = lVar7;
          }
          else {
            (**(code **)(*plVar5 + 0x38))(plVar5,plVar8,local_54,1);
          }
        }
        else {
          local_54[0] = *pbVar1;
          *plVar8 = (long)(pbVar1 + 1);
        }
        uVar2 = uVar10 & 0x3f;
        uVar10 = (ulong)((int)uVar10 + 7);
        uVar9 = ((ulong)local_54[0] & 0x7f) << uVar2 | uVar9;
      } while ((char)local_54[0] < '\0');
    }
    uVar10 = -uVar9;
    if ((bVar3 & 1) == 0) {
      uVar10 = uVar9;
    }
    iVar4 = (int)uVar10;
    if (iVar4 < param_1[0x18]) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x16) +
                      (-(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2));
    }
    else {
      iVar6 = param_1[0x22];
      lVar7 = (long)iVar6;
      if ((int)(param_1[0x23] & 0x7fffffffU) <= iVar6) {
        FUN_033805e8(param_1 + 0x20,lVar7 + 1);
        iVar6 = param_1[0x22];
      }
      *(int **)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8) = param_2;
      param_1[0x22] = (int)(lVar7 + 1);
    }
  }
  *param_2 = iVar4;
  return;
}


