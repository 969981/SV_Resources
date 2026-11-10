/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352f528; name: FUN_0352f528
 */


void FUN_0352f528(long param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char local_34 [4];
  
  sVar5 = *(short *)(param_1 + 0x2a);
  if (1 < sVar5) {
    sVar5 = sVar5 + -1;
LAB_0352f550:
    *(short *)(param_1 + 0x2a) = sVar5;
    return;
  }
  if (sVar5 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(uint *)(param_1 + 0x18) == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x10) + uVar6 * 0x18 + -0x18);
  local_34[0] = '\x01';
  while( true ) {
    if (plVar8 == (long *)0x0) {
      return;
    }
    if ((*(uint *)(plVar8 + 6) & 0xfffffffd) == 0) goto LAB_0352f61c;
    lVar7 = *(long *)(param_1 + 0x10) + uVar6 * 0x18;
    sVar5 = *(short *)(lVar7 + -0x10);
    if (sVar5 == 0) goto LAB_0352f61c;
    if (1 < sVar5) break;
    plVar8 = (long *)plVar8[1];
    if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
       ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
      (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
    }
    *(undefined8 *)(lVar7 + -8) = 0;
    uVar2 = *(int *)(param_1 + 0x18) - 1;
    uVar6 = (ulong)uVar2;
    *(uint *)(param_1 + 0x18) = uVar2;
  }
  *(short *)(lVar7 + -0x10) = sVar5 + -1;
LAB_0352f61c:
  do {
    uVar6 = FUN_0352f160(param_1,*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18
                                 + -0x18,local_34);
    if (local_34[0] == '\0') {
      plVar8 = *(long **)(plVar8[4] + (uVar6 & 0xffff) * 8);
      uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if ((uVar6 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar7 = plVar8[4];
        *(int *)(param_1 + 0x20) = (int)lVar7;
        *(bool *)(param_1 + 0x28) = (int)lVar7 != 0;
        *(int *)(param_1 + 0x24) = (int)plVar8[2];
        sVar5 = *(short *)((long)plVar8 + 0x14);
        if (sVar5 == 0) {
          sVar5 = 0;
        }
        else if ((short)plVar8[3] != 0 || *(short *)((long)plVar8 + 0x16) != 0) {
          iVar4 = (int)*(short *)((long)plVar8 + 0x16) + (int)sVar5;
          iVar3 = (int)(short)iVar4;
          if (iVar4 < 1) {
            iVar3 = 1;
          }
          sVar1 = (short)plVar8[3] + sVar5;
          if (iVar3 != sVar1) {
            lVar7 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
            iVar4 = (sVar1 - iVar3) + 1;
            *(long *)PTR_DAT_047e7068 = lVar7;
            sVar5 = 0;
            uVar6 = (ulong)lVar7 >> 0x21;
            if (iVar4 != 0) {
              sVar5 = (short)((int)(uint)uVar6 / iVar4);
            }
            sVar5 = ((short)uVar6 - sVar5 * (short)iVar4) + (short)iVar3;
          }
        }
        goto LAB_0352f550;
      }
      if (((int)plVar8[5] == 0) || (*(char *)((long)plVar8 + 0x36) == '\0')) {
        plVar8 = (long *)plVar8[1];
      }
      else {
        iVar4 = FUN_0352ebf8(param_1,plVar8);
        if (iVar4 != 1) {
          FUN_0352ef88(param_1);
          return;
        }
      }
      local_34[0] = '\x01';
    }
    else {
      lVar7 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18;
      plVar8 = (long *)plVar8[1];
      if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
         ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
      }
      *(undefined8 *)(lVar7 + -8) = 0;
      uVar2 = *(int *)(param_1 + 0x18) - 1;
      *(uint *)(param_1 + 0x18) = uVar2;
      while( true ) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        if ((*(uint *)(plVar8 + 6) & 0xfffffffd) == 0) goto LAB_0352f768;
        lVar7 = *(long *)(param_1 + 0x10) + (ulong)uVar2 * 0x18;
        sVar5 = *(short *)(lVar7 + -0x10);
        if (sVar5 == 0) goto LAB_0352f768;
        if (1 < sVar5) break;
        plVar8 = (long *)plVar8[1];
        if ((*(long **)(lVar7 + -8) != (long *)0x0) &&
           ((*(uint *)(*(long *)(lVar7 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
          (**(code **)(**(long **)(lVar7 + -8) + 0x10))();
        }
        *(undefined8 *)(lVar7 + -8) = 0;
        uVar2 = *(int *)(param_1 + 0x18) - 1;
        *(uint *)(param_1 + 0x18) = uVar2;
      }
      *(short *)(lVar7 + -0x10) = sVar5 + -1;
    }
LAB_0352f768:
    if (plVar8 == (long *)0x0) {
      return;
    }
  } while( true );
}


