/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007feb9c; name: FUN_007feb9c
 */


void FUN_007feb9c(long *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  long local_1e0 [24];
  long local_120 [24];
  
  if ((param_3 != 0) && (*(short *)((long)param_1 + 0x114e) != 0)) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      if (((param_3 >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0) &&
         (uVar3 = FUN_00796784(*(long *)(param_1[0x11] + uVar7 * 8) + 0x10), (uVar3 & 1) != 0)) {
        lVar4 = FUN_00796988(*(long *)(param_1[0x11] + uVar7 * 8) + 0x10);
        local_120[(int)uVar8] = lVar4;
        uVar8 = uVar8 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)((long)param_1 + 0x114e));
    if (0 < (int)uVar8) {
      uVar10 = 0;
      iVar6 = 0;
      uVar7 = (ulong)uVar8;
      plVar11 = local_120;
      do {
        FUN_00796584(auStack_200);
        nn::os::LockMutex((MutexType *)(param_1 + 0x26f));
        lVar4 = *plVar11;
        plVar5 = (long *)FUN_00801444(param_1[0x261],lVar4);
        if (plVar5 == (long *)0x0) {
LAB_007fece4:
          lVar9 = lVar4;
LAB_007fece8:
          local_1e0[iVar6] = lVar9;
          iVar6 = iVar6 + 1;
          uVar3 = (**(code **)(*param_1 + 0x3b0))(param_1);
          if ((uVar3 & 1) != 0) {
            FUN_00796584(auStack_220);
            FUN_007969ac(auStack_220,lVar9);
            FUN_007969f8(auStack_220,0x4e96);
            iVar2 = FUN_007a0340(param_1,auStack_220);
            uVar8 = 1 << (ulong)((int)(short)iVar2 & 0x1f);
            if (iVar2 * 0x10000 < -0xffff) {
              uVar8 = 0;
            }
            uVar10 = uVar8 | uVar10;
          }
        }
        else {
          if ((int)plVar5[2] != 0xd) {
            lVar9 = *plVar5;
            if (*plVar5 == -1) goto LAB_007fece4;
            goto LAB_007fece8;
          }
          plVar1 = plVar5 + 7;
          if ((char)plVar5[0xb] != '\0') {
            plVar1 = plVar5 + 3;
          }
          FUN_0078a1c0(auStack_220,plVar1);
          FUN_007968fc(auStack_200,auStack_220);
          FUN_0284e3d4(auStack_220);
          FUN_0079fc68(param_1,param_2,auStack_200);
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x26f));
        plVar11 = plVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (0 < iVar6) {
        (**(code **)(*param_1 + 0x3a8))(param_1,param_2,local_1e0,iVar6);
      }
      goto joined_r0x007fed54;
    }
  }
  uVar10 = 0;
joined_r0x007fed54:
  if (param_4 != (uint *)0x0) {
    *param_4 = *param_4 | uVar10;
  }
  return;
}


