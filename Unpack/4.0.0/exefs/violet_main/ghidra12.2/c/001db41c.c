/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001db41c; name: FUN_001db41c
 */


uint FUN_001db41c(uint param_1,uint param_2,int param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint local_78;
  uint uStack_74;
  uint local_72 [4];
  
  if (((param_2 & param_1) == 0xffffffff) && (param_3 == -1)) {
    uVar4 = FUN_001db360(param_4 & 0xffffffff);
  }
  else {
    if ((long)param_4 < 1) {
      iVar5 = 0;
      auVar9 = ZEXT816(0);
    }
    else {
      auVar9 = FUN_001e0dfc();
      iVar5 = (int)param_4;
    }
    bVar3 = param_1 != 0xffffffff;
    if (bVar3) {
      uStack_74 = 0xc3;
      local_78 = param_1;
    }
    uVar8 = (ulong)bVar3;
    uVar7 = uVar8;
    if (param_2 != 0xffffffff) {
      uVar7 = (ulong)(bVar3 + 1);
      *(uint *)((long)((long)register0x00000008 + -0x72) + (uVar8 * 4 + -3) * 2) = param_2;
      *(undefined4 *)((long)((long)register0x00000008 + -0x72) + (uVar8 * 4 + -1) * 2) = 0xc3;
    }
    uVar8 = uVar7;
    if (param_3 != -1) {
      uVar8 = (ulong)((int)uVar7 + 1);
      *(int *)((long)((long)register0x00000008 + -0x72) + (uVar7 * 4 + -3) * 2) = param_3;
      *(undefined4 *)((long)((long)register0x00000008 + -0x72) + (uVar7 * 4 + -1) * 2) = 0x104;
    }
    iVar6 = 0;
    if (param_4 != 0) {
      iVar6 = iVar5;
    }
    if ((long)param_4 < 0) {
      iVar6 = -1;
    }
    iVar5 = nnsocketPoll(&local_78,uVar8,iVar6);
    puVar2 = PTR_DAT_047cb950;
    while (iVar5 == -1) {
      iVar5 = nnsocketGetLastErrno();
      if (iVar5 != 0) {
        if (iVar5 != 4) {
          return 0xffffffff;
        }
        if (*(int *)puVar2 != 0) {
          return 0xffffffff;
        }
      }
      if (0 < (long)param_4) {
        auVar10 = FUN_001e0dfc();
        iVar6 = FUN_001e0e28(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_);
        iVar6 = (int)param_4 - iVar6;
        if (iVar6 < 1) goto LAB_001db5bc;
      }
      iVar1 = 0;
      if (param_4 != 0) {
        iVar1 = iVar6;
      }
      if ((long)param_4 < 0) {
        iVar1 = -1;
      }
      iVar5 = nnsocketPoll(&local_78,uVar8,iVar1);
      iVar6 = iVar1;
    }
    if (iVar5 < 0) {
      uVar4 = 0xffffffff;
    }
    else if (iVar5 == 0) {
LAB_001db5bc:
      uVar4 = 0;
    }
    else {
      if (param_1 == 0xffffffff) {
        uVar4 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
        uVar4 = (uint)((uStack_74 & 0x590000) != 0);
        if ((uStack_74 & 0xa20000) != 0) {
          uVar4 = uVar4 | 4;
        }
      }
      uVar8 = uVar7;
      if (param_2 != 0xffffffff) {
        uVar8 = (ulong)((int)uVar7 + 1);
        if ((((uint *)((long)register0x00000008 + -0x72))[uVar7 * 2] & 0x59) != 0) {
          uVar4 = uVar4 | 8;
        }
        if ((((uint *)((long)register0x00000008 + -0x72))[uVar7 * 2] & 0xa2) != 0) {
          uVar4 = uVar4 | 4;
        }
      }
      if (param_3 != -1) {
        if ((((uint *)((long)register0x00000008 + -0x72))[uVar8 * 2] & 0x104) != 0) {
          uVar4 = uVar4 | 2;
        }
        if ((((uint *)((long)register0x00000008 + -0x72))[uVar8 * 2] & 0x38) != 0) {
          uVar4 = uVar4 | 4;
        }
      }
    }
  }
  return uVar4;
}


