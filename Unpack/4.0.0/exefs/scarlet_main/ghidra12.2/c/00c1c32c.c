/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1c32c; name: FUN_00c1c32c
 */


long FUN_00c1c32c(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined4 local_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  uVar4 = FUN_00c202f0(param_1,*(undefined4 *)(param_2 + 0x38),param_2,&local_70);
  if ((uVar4 & 1) != 0) {
    puVar2 = (undefined8 *)CONCAT44(uStack_6c,local_70);
    *(char *)(puVar2 + 1) = (char)*(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)((long)puVar2 + 9) = 1;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 == 0) {
      lVar11 = tpidr_el0;
      plVar5 = *(long **)(lVar11 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
    }
    else {
      plVar5 = (long *)FUN_00c0e238(lVar11,0,0x18);
      *plVar5 = lVar11;
      plVar5[1] = 0;
      plVar5[2] = 0;
      FUN_00c0e13c(lVar11,plVar5,PTR_LAB_047dad90);
    }
    *puVar2 = plVar5;
  }
  plVar5 = (long *)CONCAT44(uStack_6c,local_70);
  lVar11 = *plVar5;
  piVar6 = *(int **)(lVar11 + 0x10);
  if (piVar6 != (int *)0x0) {
    iVar3 = *(int *)(lVar11 + 8);
    if (iVar3 < *piVar6) {
      *(int *)(lVar11 + 8) = iVar3 + 1;
      if (*(long *)(piVar6 + (long)iVar3 * 2 + 2) != 0) {
        return *(long *)(piVar6 + (long)iVar3 * 2 + 2);
      }
      lVar11 = *plVar5;
    }
  }
  if (*(int *)(lVar11 + 8) == 0) {
    plVar10 = (long *)(**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x68));
    if (plVar10 == (long *)0x0) {
      local_70 = 3;
      local_58[0x10] = '\0';
      local_58[0x11] = '\0';
      local_58[0x12] = '\0';
      local_58[0x13] = '\0';
      local_58[0x14] = '\0';
      local_58[0x15] = '\0';
      local_58[0x16] = '\0';
      local_58[0x17] = '\0';
      local_60 = 0x10a;
      local_68 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set_heavy.cc"
      ;
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      std::string::append(local_58);
      FUN_00bb0e90(&local_70);
      FUN_00bb0d74(&local_70);
    }
  }
  else {
    plVar10 = *(long **)(*(long *)(lVar11 + 0x10) + 8);
  }
  lVar11 = (**(code **)(*plVar10 + 0x20))(plVar10,*(undefined8 *)(param_1 + 0x18));
  plVar5 = (long *)*plVar5;
  piVar6 = (int *)plVar5[2];
  if (piVar6 == (int *)0x0) {
    iVar3 = (int)plVar5[1];
    iVar9 = *(int *)((long)plVar5 + 0xc);
LAB_00c1c534:
    FUN_00c11f04(plVar5,(iVar9 - iVar3) + 1);
LAB_00c1c544:
    piVar6 = (int *)plVar5[2];
    iVar1 = *piVar6;
  }
  else {
    iVar1 = *piVar6;
    iVar8 = (int)plVar5[1];
    iVar9 = *(int *)((long)plVar5 + 0xc);
    lVar7 = (long)iVar8;
    if (iVar1 < iVar9) {
      if (iVar8 < iVar1) {
        *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar6 + lVar7 * 2 + 2);
        iVar8 = (int)plVar5[1];
      }
      *(long *)(piVar6 + (long)iVar8 * 2 + 2) = lVar11;
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      *(int *)plVar5[2] = *(int *)plVar5[2] + 1;
      return lVar11;
    }
    iVar3 = iVar9;
    if (iVar8 == iVar9) goto LAB_00c1c534;
    if (iVar1 == iVar9) {
      if ((*(long **)(piVar6 + lVar7 * 2 + 2) != (long *)0x0) && (*plVar5 == 0)) {
        (**(code **)(**(long **)(piVar6 + lVar7 * 2 + 2) + 8))();
      }
      goto LAB_00c1c554;
    }
    if (iVar8 < iVar1) {
      *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar6 + lVar7 * 2 + 2);
      goto LAB_00c1c544;
    }
  }
  *piVar6 = iVar1 + 1;
LAB_00c1c554:
  lVar7 = plVar5[1];
  *(int *)(plVar5 + 1) = (int)lVar7 + 1;
  *(long *)(plVar5[2] + (long)(int)lVar7 * 8 + 8) = lVar11;
  return lVar11;
}


