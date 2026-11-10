/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5cdb4; name: FUN_00c5cdb4
 */


undefined8 FUN_00c5cdb4(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  plVar4 = (long *)*param_2;
  iVar3 = *(int *)((long)plVar4 + 0x74);
  if (iVar3 == 2) {
    cVar1 = *(char *)((long)plVar4 + 0x71);
    if ((char)plVar4[0xe] != cVar1) {
      *(char *)(plVar4 + 0xe) = cVar1;
      if (cVar1 == '\0') {
        pcVar6 = *(code **)(*plVar4 + 0x98);
      }
      else {
        pcVar6 = *(code **)(*plVar4 + 0x90);
      }
      (*pcVar6)();
    }
  }
  else {
    if (iVar3 == 4) {
      if (plVar4[0x68] != -1) {
        FUN_01336468(param_1);
        plVar4 = (long *)*param_2;
      }
      uVar9 = plVar4[0x15];
      nn::os::LockMutex((MutexType *)(param_1 + 0x120));
      lVar8 = *(long *)(param_1 + 0x210);
      if (lVar8 != 0) {
        lVar5 = param_1 + 0x210;
        do {
          bVar2 = *(ulong *)(lVar8 + 0x20) < uVar9;
          if (!bVar2) {
            lVar5 = lVar8;
          }
          lVar8 = *(long *)(lVar8 + (ulong)bVar2 * 8);
        } while (lVar8 != 0);
        if ((lVar5 != param_1 + 0x210) && (*(ulong *)(lVar5 + 0x20) <= uVar9)) {
          FUN_01335e48(param_1 + 0x208);
        }
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
      return 1;
    }
    if (iVar3 == 3) {
      lVar8 = plVar4[0x17];
      plVar4 = *(long **)(param_1 + 8);
      plVar7 = (long *)(lVar8 + 0x38);
      if (*plVar7 != -1) {
        iVar3 = (**(code **)(*plVar4 + 0x100))(plVar4);
        if (iVar3 != 0) {
          (**(code **)(*plVar4 + 0xd8))(plVar4,plVar7,1,0);
        }
        *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
        return 0;
      }
    }
  }
  return 0;
}


