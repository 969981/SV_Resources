/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034d3a0; name: FUN_0034d3a0
 */


undefined8 FUN_0034d3a0(long *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *local_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *local_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *local_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  FUN_003670f0(&local_70,0x400);
  uVar5 = uStack_68 & 0xff;
  if (local_70 != (long *)0x0) {
    uVar5 = uStack_68;
  }
  if (uVar5 >> 0x20 != 0) goto LAB_0034d5a0;
  *(int *)(param_1 + 4) = (int)uVar5;
  lVar7 = local_60;
  if (local_70 == (long *)0x0) {
    lVar7 = (long)&uStack_68 + 1;
  }
  param_1[3] = lVar7;
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar1 = 4;
      if (uVar10 != uVar6 - 1) {
        uVar1 = uVar9;
      }
      plVar8 = (long *)(*(long *)(param_2 + 8) + uVar10 * 0x20);
      if (*plVar8 == 0) {
        lVar7 = (long)plVar8 + 9;
        *(uint *)(param_1 + 1) = (uint)(byte)plVar8[1];
      }
      else {
        uVar6 = plVar8[1];
        if (uVar6 >> 0x20 != 0) goto LAB_0034d5a0;
        *(int *)(param_1 + 1) = (int)uVar6;
        lVar7 = plVar8[2];
      }
      *param_1 = lVar7;
      uVar6 = uVar5 & 0xffffffff;
      do {
        if ((int)uVar6 == 0) {
          uStack_88 = uStack_68;
          local_90 = local_70;
          uStack_78 = uStack_58;
          lStack_80 = local_60;
          FUN_00368650(param_3,&local_90);
          FUN_003670f0(&local_b0,0x400);
          uStack_68 = uStack_a8;
          local_70 = local_b0;
          uStack_58 = uStack_98;
          local_60 = lStack_a0;
          uVar5 = uStack_a8 & 0xff;
          if (local_b0 != (long *)0x0) {
            uVar5 = uStack_a8;
          }
          if (uVar5 >> 0x20 != 0) goto LAB_0034d5a0;
          *(int *)(param_1 + 4) = (int)uVar5;
          lVar7 = (long)&uStack_68 + 1;
          if (local_b0 != (long *)0x0) {
            lVar7 = lStack_a0;
          }
          param_1[3] = lVar7;
          iVar4 = (*param_4)(param_1,uVar1);
        }
        else {
          iVar4 = (*param_4)(param_1,uVar1);
        }
        if ((iVar4 < 0) && (iVar4 != -5)) goto LAB_0034d550;
        uVar5 = (ulong)*(uint *)(param_1 + 4);
        uVar6 = 0;
      } while (*(uint *)(param_1 + 4) == 0);
      if ((int)param_1[1] != 0) goto LAB_0034d550;
      uVar6 = *(ulong *)(param_2 + 0x10);
      uVar10 = uVar10 + 1;
      uVar9 = uVar1;
      if (uVar6 <= uVar10) goto code_r0x0034d518;
    } while( true );
  }
  goto LAB_0034d520;
code_r0x0034d518:
  if (iVar4 != 1) {
LAB_0034d550:
    if ((local_70 != (long *)0x0) && (plVar8 = (long *)*local_70, plVar8 != (long *)0x0)) {
      do {
        lVar7 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 1) {
        (*(code *)local_70[3])(local_70[4]);
      }
    }
    return 0;
  }
LAB_0034d520:
  if (local_70 != (long *)0x0) {
    lStack_c8 = uStack_68 - (uVar5 & 0xffffffff);
    local_d0 = local_70;
    uStack_b8 = uStack_58;
    lStack_c0 = local_60;
    uStack_68 = lStack_c8;
    FUN_00368650(param_3,&local_d0);
    return 1;
  }
LAB_0034d5a0:
                    /* WARNING: Subroutine does not return */
  abort();
}


