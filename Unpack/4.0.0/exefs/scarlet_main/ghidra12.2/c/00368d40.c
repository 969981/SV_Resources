/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368d40; name: FUN_00368d40
 */


void FUN_00368d40(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long local_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  ulong uStack_58;
  long local_50;
  long lStack_48;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar2 = uVar6 - param_2;
  if (uVar6 < param_2) {
LAB_00368f1c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar6 == param_2) {
    FUN_00368a60(param_1,param_3);
  }
  else {
    lVar12 = param_3[4];
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      uVar11 = param_2;
      while( true ) {
        plVar9 = *(long **)(param_1 + 8);
        uStack_58 = plVar9[1];
        local_60 = *plVar9;
        lStack_48 = plVar9[3];
        local_50 = plVar9[2];
        *(long **)(param_1 + 8) = plVar9 + 4;
        *(long *)(param_1 + 0x10) = lVar8 + -1;
        uVar1 = uStack_58 & 0xff;
        if (local_60 != 0) {
          uVar1 = uStack_58;
        }
        uVar3 = uVar11 - uVar1;
        *(ulong *)(param_1 + 0x20) = uVar6 - uVar1;
        if (uVar11 < uVar1 || uVar3 == 0) break;
        local_80 = local_60;
        uStack_78 = uStack_58;
        lStack_70 = local_50;
        lStack_68 = lStack_48;
        FUN_003686e0(param_3,&local_80);
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto LAB_00368ee0;
        uVar6 = *(ulong *)(param_1 + 0x20);
        uVar11 = uVar3;
      }
      if (uVar3 == 0) {
        local_a0 = local_60;
        uStack_98 = uStack_58;
        lStack_90 = local_50;
        lStack_88 = lStack_48;
        FUN_003686e0(param_3,&local_a0);
      }
      else {
        FUN_00367d00(&local_a0,&local_60,uVar11,1);
        lVar5 = lStack_48;
        lVar4 = local_50;
        uVar1 = uStack_58;
        lVar8 = local_60;
        lVar7 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 8) = lVar7 + -0x20;
        *(ulong *)(lVar7 + -0x18) = uStack_98;
        *(long *)(lVar7 + -0x20) = local_a0;
        *(long *)(lVar7 + -8) = lStack_88;
        *(long *)(lVar7 + -0x10) = lStack_90;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        uVar6 = uStack_98 & 0xff;
        if (local_a0 != 0) {
          uVar6 = uStack_98;
        }
        *(ulong *)(param_1 + 0x20) = uVar6 + *(long *)(param_1 + 0x20);
        uVar6 = uStack_58 & 0xff;
        if (local_60 != 0) {
          uVar6 = uStack_58;
        }
        if (uVar6 != uVar11) goto LAB_00368f1c;
        lVar7 = param_3[2];
        if (lVar7 == 0) {
          lVar10 = *param_3;
          param_3[1] = lVar10;
        }
        else {
          lVar10 = param_3[1];
          if ((lVar10 - *param_3 >> 5) + lVar7 == param_3[3]) {
            FUN_003693d0(param_3);
            lVar10 = param_3[1];
          }
        }
        plVar9 = (long *)(lVar10 + lVar7 * 0x20);
        *plVar9 = lVar8;
        plVar9[1] = uVar1;
        plVar9[3] = lVar5;
        plVar9[2] = lVar4;
        param_3[4] = param_3[4] + uVar11;
        param_3[2] = lVar7 + 1;
      }
    }
LAB_00368ee0:
    if (((param_3[4] != lVar12 + param_2) || (*(long *)(param_1 + 0x20) != lVar2)) ||
       (*(long *)(param_1 + 0x10) == 0)) goto LAB_00368f1c;
  }
  return;
}


