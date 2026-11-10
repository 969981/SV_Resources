/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00132ca0; name: FUN_00132ca0
 */


void FUN_00132ca0(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long *local_60;
  uint local_58 [2];
  ulong local_50;
  
  plVar10 = param_2 + 1;
  iVar11 = (int)*plVar10;
  if (6 < iVar11 - 9U) {
                    /* WARNING: Subroutine does not return */
    FUN_00138770(param_1,"syntax error");
  }
  plVar9 = *(long **)(param_1 + 0x30);
  if (iVar11 == 9) {
    iVar11 = (int)plVar9[7] + (uint)*(ushort *)((long)param_2 + 0x12);
    lVar8 = **(long **)(plVar9[2] + 0x58);
    if (*(char *)(lVar8 + (long)iVar11 * 0x18 + 9) != '\0') {
LAB_00132d4c:
      plVar9 = (long *)(lVar8 + (long)iVar11 * 0x18 + 0x10);
LAB_00132d58:
      lVar8 = *plVar9;
      if (lVar8 != 0) goto LAB_00133004;
    }
  }
  else if (iVar11 == 10) {
    plVar9 = (long *)(*(long *)(*plVar9 + 0x50) + (long)(int)param_2[2] * 0x10);
    if (*(char *)((long)plVar9 + 10) != '\0') goto LAB_00132d58;
  }
  else if (iVar11 == 0xb) {
    lVar8 = **(long **)(param_1 + 0x58);
    iVar11 = (int)param_2[2];
    goto LAB_00132d4c;
  }
  if (*(int *)(param_1 + 0x10) == 0x3d) {
    FUN_00138a10(param_1);
    FUN_00131050(param_1,&local_60,0);
    iVar11 = 1;
    iVar2 = *(int *)(param_1 + 0x10);
    while (iVar2 == 0x2c) {
      FUN_00138a10(param_1);
      FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_60);
      FUN_00131050(param_1,&local_60,0);
      iVar11 = iVar11 + 1;
      iVar2 = *(int *)(param_1 + 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x30);
    if (iVar11 == param_3) {
      FUN_00133af0(lVar8,&local_60);
      lVar8 = *(long *)(param_1 + 0x30);
      goto LAB_00132fc4;
    }
    param_3 = param_3 - iVar11;
    if ((int)local_60 - 0x12U < 2) {
      iVar11 = 0;
      if (-1 < param_3) {
        iVar11 = param_3 + 1;
      }
      FUN_00133a60(lVar8,&local_60,iVar11);
      if (0 < param_3) {
LAB_00132f38:
        FUN_00133830(lVar8,param_3);
        goto LAB_00132fa4;
      }
    }
    else {
      if ((int)local_60 != 0) {
        FUN_00133e30(lVar8,&local_60);
      }
      if (0 < param_3) {
        FUN_00133110(lVar8,*(undefined1 *)(lVar8 + 0x44),param_3);
        goto LAB_00132f38;
      }
    }
    *(char *)(lVar8 + 0x44) = *(char *)(lVar8 + 0x44) + (char)param_3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x2c) {
      FUN_001329f0(param_1,0x3d);
      lVar8 = extraout_x8;
LAB_00133004:
      uVar7 = FUN_0012e860(*(undefined8 *)(param_1 + 0x38),
                           "attempt to assign to const variable \'%s\'",lVar8 + 0x18);
      FUN_00133030(param_1,uVar7);
                    /* WARNING: Does not return */
      pcVar4 = (code *)UndefinedInstructionException(0,0x133024);
      (*pcVar4)();
    }
    FUN_00138a10(param_1);
    local_60 = param_2;
    FUN_00131b80(param_1,local_58);
    if ((local_58[0] & 0xfffffffc) != 0xc) {
      lVar8 = *(long *)(param_1 + 0x30);
      bVar5 = false;
      bVar3 = *(byte *)(lVar8 + 0x44);
      do {
        uVar1 = *(uint *)(param_2 + 1);
        bVar6 = (byte)local_50;
        if ((uVar1 & 0xfffffffc) == 0xc) {
          if (uVar1 == 0xd) {
            if ((local_58[0] == 10) && ((uint)local_50 == *(byte *)((long)param_2 + 0x12))) {
              *(undefined4 *)(param_2 + 1) = 0xf;
              bVar5 = true;
              *(byte *)((long)param_2 + 0x12) = bVar3;
            }
          }
          else if (local_58[0] == 9) {
            if ((ushort)*(byte *)((long)param_2 + 0x12) == (ushort)bVar6) {
              bVar5 = true;
              *(byte *)((long)param_2 + 0x12) = bVar3;
            }
            if ((uVar1 == 0xc) && (*(ushort *)(param_2 + 2) == (ushort)bVar6)) {
              bVar5 = true;
              *(ushort *)(param_2 + 2) = (ushort)bVar3;
            }
          }
        }
        param_2 = (long *)*param_2;
      } while (param_2 != (long *)0x0);
      if (bVar5) {
        if (local_58[0] == 9) {
          local_50 = local_50 & 0xff;
          uVar7 = 0;
        }
        else {
          local_50 = local_50 & 0xffffffff;
          uVar7 = 9;
        }
        FUN_00133250(lVar8,uVar7,bVar3,local_50,0,0);
        FUN_00133830(lVar8,1);
      }
    }
    FUN_0013b000(*(undefined8 *)(param_1 + 0x38));
    FUN_00132ca0(param_1,&local_60,param_3 + 1);
    *(int *)(*(long *)(param_1 + 0x38) + 0xb0) = *(int *)(*(long *)(param_1 + 0x38) + 0xb0) + -1;
  }
LAB_00132fa4:
  lVar8 = *(long *)(param_1 + 0x30);
  local_50 = 0xffffffffffffffff;
  local_60 = (long *)CONCAT44(local_60._4_4_,8);
  local_58[0] = *(byte *)(lVar8 + 0x44) - 1;
LAB_00132fc4:
  FUN_00134820(lVar8,plVar10,&local_60);
  return;
}


