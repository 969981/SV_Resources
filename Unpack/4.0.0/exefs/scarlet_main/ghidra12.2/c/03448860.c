/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03448860; name: FUN_03448860
 */


int FUN_03448860(code *param_1,uint param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  nn::os::LockMutex((MutexType *)&DAT_048afad8);
  iVar10 = 0x1f;
  if ((param_1 != (code *)0x0) && (param_2 >> 0xd == 0)) {
    if (param_2 == 0) {
      iVar10 = 1;
    }
    else {
      uVar9 = 1;
      uVar6 = 1;
      do {
        uVar6 = uVar6 & param_2;
        if (uVar6 == 0) {
          iVar10 = 1;
        }
        else {
          uVar1 = (ulong)(uVar9 - 1);
          plVar2 = &DAT_048afaf8 + uVar1 * 2;
          puVar8 = &DAT_048afb00 + uVar1 * 4;
          uVar3 = *puVar8;
          uVar11 = (&DAT_048afb04)[uVar1 * 4];
          iVar10 = 0;
          if (uVar6 != 0x80 && uVar6 != 1) {
            iVar10 = param_4 + param_5 * 0x10 + param_6 * 0x10000;
          }
          if (uVar3 < uVar11) {
LAB_03448960:
            if (uVar3 < uVar11) {
              uVar6 = *puVar8;
              lVar5 = *plVar2;
              *puVar8 = uVar6 + 1;
              if (lVar5 != 0) {
                puVar7 = (undefined8 *)(lVar5 + (ulong)uVar6 * 0x18);
                lVar5 = lVar5 + (ulong)uVar6 * 0x18;
                *puVar7 = param_1;
                *(undefined8 *)(lVar5 + 8) = param_3;
                *(int *)(lVar5 + 0x10) = iVar10;
                goto LAB_034489bc;
              }
            }
            puVar7 = (undefined8 *)0x0;
          }
          else {
            iVar4 = uVar11 + (uVar11 >> 1);
            if (uVar11 == 0) {
              iVar4 = 1;
            }
            uVar11 = iVar4 + uVar11;
            lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar2,(ulong)uVar11 * 0x18);
            if (lVar5 != 0) {
              *plVar2 = lVar5;
              (&DAT_048afb04)[uVar1 * 4] = uVar11;
              goto LAB_03448960;
            }
            puVar7 = (undefined8 *)0x0;
          }
LAB_034489bc:
          iVar10 = 0x34;
          if (puVar7 != (undefined8 *)0x0) {
            iVar10 = 1;
          }
        }
        uVar6 = 1 << (ulong)(uVar9 & 0x1f);
      } while ((uVar6 <= param_2) && (uVar9 = uVar9 + 1, iVar10 == 1));
      if (((param_2 & 1) != 0) && (iVar10 == 1)) {
        if (((DAT_048afc00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048afc00), iVar4 != 0)) {
          DAT_048afbf8 = &PTR_LAB_047c0468;
          __cxa_guard_release(&DAT_048afc00);
        }
        (*param_1)(&DAT_048afbf8,1,param_3);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048afad8);
  return iVar10;
}


