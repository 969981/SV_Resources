/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352e8c0; name: FUN_0352e8c0
 */


undefined8 FUN_0352e8c0(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char local_24 [4];
  
  if ((param_4 != 0) && (*(int *)(param_4 + 0x10) != 0)) {
    FUN_0352eab8(param_1,param_4 + 8);
  }
  *param_1 = param_2;
  plVar8 = (long *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  do {
    uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((uVar4 & 1) != 0) {
      lVar7 = plVar8[4];
      *(int *)(param_1 + 4) = (int)lVar7;
      *(bool *)(param_1 + 5) = (int)lVar7 != 0;
      *(int *)((long)param_1 + 0x24) = (int)plVar8[2];
      sVar5 = *(short *)((long)plVar8 + 0x14);
      if (sVar5 == 0) {
        sVar5 = 0;
      }
      else if ((short)plVar8[3] != 0 || *(short *)((long)plVar8 + 0x16) != 0) {
        iVar3 = (int)*(short *)((long)plVar8 + 0x16) + (int)sVar5;
        iVar2 = (int)(short)iVar3;
        if (iVar3 < 1) {
          iVar2 = 1;
        }
        sVar1 = (short)plVar8[3] + sVar5;
        if (iVar2 != sVar1) {
          lVar7 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          iVar3 = (sVar1 - iVar2) + 1;
          *(long *)PTR_DAT_047e7068 = lVar7;
          sVar5 = 0;
          uVar4 = (ulong)lVar7 >> 0x21;
          if (iVar3 != 0) {
            sVar5 = (short)((int)(uint)uVar4 / iVar3);
          }
          sVar5 = ((short)uVar4 - sVar5 * (short)iVar3) + (short)iVar2;
        }
      }
      *(short *)((long)param_1 + 0x2a) = sVar5;
      return 1;
    }
    if (((int)plVar8[5] == 0) || (*(char *)((long)plVar8 + 0x36) == '\0')) {
      plVar8 = (long *)plVar8[1];
      if (plVar8 == (long *)0x0) {
        return 2;
      }
    }
    else {
      iVar3 = FUN_0352ebf8(param_1,plVar8);
      if (iVar3 != 1) {
        FUN_0352ef88(param_1);
        return 2;
      }
    }
    local_24[0] = '\0';
    uVar6 = *(uint *)(param_1 + 3);
    while (uVar4 = FUN_0352f160(param_1,param_1[2] + (ulong)uVar6 * 0x18 + -0x18,local_24),
          local_24[0] != '\0') {
      lVar7 = param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x18;
      lVar9 = plVar8[1];
      if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
         ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
      }
      *(undefined8 *)(lVar7 + -8) = 0;
      uVar6 = (int)param_1[3] - 1;
      *(uint *)(param_1 + 3) = uVar6;
      if (lVar9 == 0) {
        return 2;
      }
    }
    plVar8 = *(long **)(plVar8[4] + (uVar4 & 0xffff) * 8);
    if (plVar8 == (long *)0x0) {
      return 2;
    }
  } while( true );
}


