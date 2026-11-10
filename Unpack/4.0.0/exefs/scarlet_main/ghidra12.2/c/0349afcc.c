/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349afcc; name: FUN_0349afcc
 */


int FUN_0349afcc(long param_1,int param_2)

{
  undefined *puVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  undefined4 local_108;
  uint local_104;
  char local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined2 local_e4;
  undefined1 local_e0;
  undefined1 auStack_d8 [4];
  uint local_d4;
  undefined *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar6 = PTR_DAT_047e7240;
  puVar5 = PTR_DAT_047e2fd0;
  if ((param_2 == 0) && (*(int *)(param_1 + 0x468) == 0)) {
    return 1;
  }
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0xff;
  local_90 = 0xff;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar1 = PTR_DAT_047e7240 + 0x10;
  local_68 = (long *)0x0;
  local_c0 = 0;
  local_c8 = puVar1;
  plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(6,0x18);
  puVar7 = PTR_DAT_047e7248;
  if (plVar10 == (long *)0x0) {
    iVar9 = 0x34;
    local_c8 = puVar1;
    goto LAB_0349b434;
  }
  *(undefined4 *)(plVar10 + 1) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  local_d4 = *(uint *)(param_1 + 0x8c);
  local_f8 = PTR_DAT_047e7250 + 0x10;
  local_e0 = 0;
  local_f0 = 0x3102;
  local_ec = 0;
  local_e4 = 0;
  uVar12 = 0;
  if (*(char *)(param_1 + 0x46f) == '\0') {
    uVar12 = *(undefined4 *)(param_1 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x378) = uVar12;
  *(undefined4 *)(param_1 + 0x37c) = 0xb50007;
  local_68 = plVar10;
  iVar9 = (**(code **)(*plVar10 + 0x38))(plVar10,0,0,&local_f8,auStack_d8);
  if (iVar9 == 1) {
    (**(code **)(*(long *)(param_1 + 0x150) + 0x28))(param_1 + 0x150);
    (**(code **)(*(long *)(param_1 + 0x1b8) + 0x28))(param_1 + 0x1b8);
    (**(code **)(*(long *)(param_1 + 0x220) + 0x28))(param_1 + 0x220);
    (**(code **)(*(long *)(param_1 + 0x288) + 0x28))(param_1 + 0x288);
    FUN_0349aa74(param_1);
    puVar1 = PTR_DAT_047e6d08;
    if ((local_d4 & 0xf00) == 0x300) {
      local_108 = 0;
      (**(code **)(*plVar10 + 0x68))(plVar10,&local_108);
      *(short *)(param_1 + 0x410) = (short)*(undefined4 *)puVar1;
      *(undefined4 *)(param_1 + 0x408) = local_108;
      iVar9 = FUN_034768d8(param_1 + 0x400);
      if (iVar9 == 1) {
        if (local_fc != '\0') {
          uVar12 = *(undefined4 *)puVar1;
          *(undefined4 *)(param_1 + 0x438) = 0x3102;
          *(short *)(param_1 + 0x440) = (short)uVar12;
          iVar9 = FUN_034768d8(param_1 + 0x430);
          if (iVar9 != 1) goto LAB_0349b40c;
        }
        *(undefined4 *)(param_1 + 0x148) = 0;
        if (local_104 == 0) {
LAB_0349b22c:
          plVar8 = local_68;
          uVar13 = local_d4;
          *(undefined4 *)(param_1 + 0x30) = 0xb50007;
          lVar11 = param_1 + 0x390;
          local_68 = (long *)0x0;
          (**(code **)(*(long *)(param_1 + 0x390) + 0x28))(lVar11);
          plVar10 = local_b8;
          *(undefined8 *)(param_1 + 0x398) = local_c0;
          *(long **)(param_1 + 0x3a0) = local_b8;
          if (local_b8 != (long *)0x0) {
            pMVar2 = (MutexType *)(local_b8 + 0xe);
            nn::os::LockMutex(pMVar2);
            if (plVar10[0x12] == 0) {
              plVar10[0x12] = lVar11;
              *(undefined8 *)(param_1 + 1000) = 0;
            }
            else {
              *(long *)(param_1 + 1000) = plVar10[0x12];
              plVar10[0x12] = lVar11;
            }
            nn::os::UnlockMutex(pMVar2);
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          local_c0 = 0;
          (**(code **)(local_c8 + 0x28))(&local_c8);
          *(long **)(param_1 + 0x3f0) = plVar8;
          *(uint *)(param_1 + 100) = uVar13;
          *(bool *)(param_1 + 0x470) = (uVar13 & 0xf00) == 0x300;
          if (plVar8 != (long *)0x0) {
            iVar9 = (**(code **)(*plVar8 + 0x60))(plVar8);
            *(bool *)(param_1 + 0x471) = iVar9 == 1;
            if ((iVar9 == 1) && (*(char *)(param_1 + 0x470) != '\0')) {
              (**(code **)(**(long **)(param_1 + 0x3f0) + 0x68))
                        (*(long **)(param_1 + 0x3f0),param_1 + 0x118);
            }
          }
          *(int *)(param_1 + 0x468) = param_2;
          if (*PTR_DAT_047e6980 == '\0') {
            iVar9 = 1;
          }
          else {
            lVar11 = *(long *)PTR_DAT_047e6f28;
            uVar13 = *(uint *)(param_1 + 0x80);
            nn::os::LockMutex((MutexType *)(lVar11 + 0x2a0));
            uVar3 = *(uint *)(lVar11 + 0x2c8);
            if (uVar3 == 0) {
              lVar14 = 0;
            }
            else {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar13 / uVar3;
              }
              for (lVar14 = *(long *)(*(long *)(lVar11 + 0x2c0) +
                                     (ulong)(uVar13 - uVar4 * uVar3) * 8); lVar14 != 0;
                  lVar14 = *(long *)(lVar14 + 8)) {
                if (*(uint *)(lVar14 + 0x10) == uVar13) {
                  *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
                  break;
                }
              }
            }
            nn::os::UnlockMutex((MutexType *)(lVar11 + 0x2a0));
            plVar10 = *(long **)(param_1 + 0x388);
            *(long *)(param_1 + 0x388) = lVar14;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))();
              lVar14 = *(long *)(param_1 + 0x388);
            }
            if (lVar14 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              if (*(long *)(lVar14 + 0xa8) != 0) {
                uVar13 = (uint)*(byte *)(*(long *)(lVar14 + 0xa8) + 0x24);
              }
            }
            uVar12 = *(undefined4 *)(param_1 + 8);
            *(uint *)(param_1 + 8) = uVar13;
            *(undefined4 *)(param_1 + 0xc) = uVar12;
            FUN_0349d698(param_1,0);
            iVar9 = 1;
            FUN_0349d698(param_1,1);
            FUN_0349d698(param_1,2);
            FUN_0349d698(param_1,3);
          }
        }
        else {
          lVar11 = (**(code **)(puVar5 + 0x10))(0,(ulong)local_104 * 0xc0);
          *(long *)(param_1 + 0x128) = lVar11;
          if (lVar11 != 0) {
            *(uint *)(param_1 + 0x134) = local_104;
            lVar11 = (**(code **)(puVar5 + 0x10))(0,0x4b00);
            *(long *)(param_1 + 0x138) = lVar11;
            if (lVar11 != 0) {
              *(undefined4 *)(param_1 + 0x144) = 100;
              goto LAB_0349b22c;
            }
          }
          iVar9 = 0x34;
        }
      }
    }
    else {
      uVar12 = *(undefined4 *)PTR_DAT_047e6d08;
      *(uint *)(param_1 + 0x408) = local_d4;
      *(short *)(param_1 + 0x410) = (short)uVar12;
      iVar9 = FUN_034768d8(param_1 + 0x400);
      if (iVar9 == 1) goto LAB_0349b22c;
    }
  }
LAB_0349b40c:
  local_c8 = puVar6 + 0x10;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x10))(local_68,PTR_PTR_047e71e0);
    local_68 = (long *)0x0;
  }
LAB_0349b434:
  FUN_03480ed4(&local_c8);
  local_c8 = PTR_DAT_047e7170 + 0x10;
  FUN_03480ed4(&local_c8);
  return iVar9;
}


