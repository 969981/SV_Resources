/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117db50; name: FUN_0117db50
 */


bool FUN_0117db50(long *param_1,void *param_2,uint param_3,uint param_4,undefined2 *param_5,
                 long *param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  ulong __n;
  long *plVar14;
  undefined8 *puVar16;
  undefined8 *puVar15;
  undefined8 *puVar17;
  int local_70 [4];
  
  __n = (ulong)param_3;
  if ((((char)param_1[0xc] == '\0') && ((param_1[9] == 0 || (*(short *)(param_1[9] + 0x1a) == 0))))
     || ((long *)param_1[0xb] == (long *)0x0)) {
    return false;
  }
  lVar10 = param_6[1];
  lVar12 = *param_6;
  iVar8 = (**(code **)(*(long *)param_1[0xb] + 0x40))();
  puVar6 = PTR_DAT_047d0a08;
  uVar4 = (uint)((int)lVar10 - (int)lVar12) >> 3 & 0xffff;
  if (uVar4 == 0) {
    return false;
  }
  if (uVar4 < (iVar8 - 1U & 0xffff)) {
    puVar17 = (undefined8 *)param_6[1];
    puVar15 = (undefined8 *)*param_6;
    if ((undefined8 *)*param_6 != puVar17) {
      do {
        puVar16 = puVar15 + 1;
        uVar11 = (**(code **)(*param_1 + 0x78))(param_1,param_4 & 1,__n,*puVar15);
        if ((uVar11 & 1) == 0) {
          return false;
        }
        puVar15 = puVar16;
      } while (puVar17 != puVar16);
      puVar17 = (undefined8 *)*param_6;
      puVar15 = (undefined8 *)param_6[1];
      if (puVar17 != puVar15) {
        do {
          puVar16 = puVar17 + 1;
          (**(code **)(*param_1 + 0x68))(param_1,param_2,__n,param_4 & 1,param_5,*puVar17);
          puVar17 = puVar16;
        } while (puVar15 != puVar16);
        return true;
      }
    }
    return true;
  }
  if ((param_4 & 1) == 0) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar8 = FUN_00f21480();
    puVar5 = PTR_DAT_047d0860;
    if (iVar8 != 1) {
      return false;
    }
    if (*(long *)PTR_DAT_047d0860 == 0) {
      return false;
    }
    lVar10 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea80,0x68);
    if (lVar10 == 0) {
      return false;
    }
    if ((char)param_1[0xc] == '\0') {
      if (param_1[9] == 0) {
        return false;
      }
      if (*(short *)(param_1[9] + 0x1a) == 0) {
        return false;
      }
    }
    plVar14 = (long *)param_1[0xb];
    if (plVar14 == (long *)0x0) {
      return false;
    }
    uVar11 = (**(code **)*plVar14)(plVar14);
    if ((uVar11 & 1) == 0) {
      return false;
    }
    uVar7 = (**(code **)(*plVar14 + 0x40))(plVar14);
    if (uVar7 < 2) {
      return false;
    }
    if (*(long *)puVar6 == 0) {
      return false;
    }
    iVar8 = FUN_00f21480();
    if (iVar8 != 1) {
      return false;
    }
    if (*(long *)puVar5 == 0) {
      return false;
    }
    lVar12 = FUN_00f21488(*(long *)puVar5 + 0x10,DAT_0485ea80,0x68);
    if (lVar12 == 0) {
      return false;
    }
    uVar11 = FUN_0117e018(lVar12);
    if ((uVar11 & 1) == 0) {
      return false;
    }
    uVar4 = param_3 + 2;
    uVar9 = FUN_0117e030(lVar12);
    if (uVar9 < uVar4) {
      return false;
    }
    if (param_3 == 0) {
      return false;
    }
    if (0x8000 < uVar4) {
      return false;
    }
    *(undefined2 *)(param_1 + 0x28) = *param_5;
    memcpy((void *)((long)param_1 + 0x142),param_2,__n);
    plVar14 = DAT_0485e990;
    if (DAT_0485e990 == (long *)0x0) {
LAB_0117dd28:
      bVar13 = true;
    }
    else {
      if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) != 0) {
        DAT_0485e990 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          lVar12 = plVar14[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_0117dff0;
        }
        goto LAB_0117dd28;
      }
      nn::os::LockMutex((MutexType *)&DAT_0485e970);
      bVar13 = false;
    }
    FUN_0117e008(local_70,lVar10,param_1 + 0x28,uVar4);
    goto LAB_0117dd40;
  }
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    return false;
  }
  iVar8 = FUN_00f21480();
  puVar5 = PTR_DAT_047d0860;
  if (iVar8 != 1) {
    return false;
  }
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return false;
  }
  lVar10 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea74,0x80);
  if (lVar10 == 0) {
    return false;
  }
  if ((char)param_1[0xc] == '\0') {
    if (param_1[9] == 0) {
      return false;
    }
    if (*(short *)(param_1[9] + 0x1a) == 0) {
      return false;
    }
  }
  plVar14 = (long *)param_1[0xb];
  if (plVar14 == (long *)0x0) {
    return false;
  }
  uVar11 = (**(code **)*plVar14)(plVar14);
  if ((uVar11 & 1) == 0) {
    return false;
  }
  uVar7 = (**(code **)(*plVar14 + 0x40))(plVar14);
  if (uVar7 < 2) {
    return false;
  }
  if (*(long *)puVar6 == 0) {
    return false;
  }
  iVar8 = FUN_00f21480();
  if (iVar8 != 1) {
    return false;
  }
  if (*(long *)puVar5 == 0) {
    return false;
  }
  plVar14 = (long *)FUN_00f21488(*(long *)puVar5 + 0x10,DAT_0485ea74,0x80);
  if (plVar14 == (long *)0x0) {
    return false;
  }
  uVar4 = param_3 + 2;
  (**(code **)(*plVar14 + 0xa0))(local_70,plVar14,uVar4);
  if (local_70[0] != 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  if (0x8000 < uVar4) {
    return false;
  }
  *(undefined2 *)(param_1 + 0x28) = *param_5;
  memcpy((void *)((long)param_1 + 0x142),param_2,__n);
  plVar14 = DAT_0485e990;
  if (DAT_0485e990 == (long *)0x0) {
LAB_0117deec:
    bVar13 = true;
  }
  else {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) != 0) {
      DAT_0485e990 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_0117dff0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      goto LAB_0117deec;
    }
    nn::os::LockMutex((MutexType *)&DAT_0485e970);
    bVar13 = false;
  }
  FUN_0117e060(local_70,lVar10,param_1 + 0x28,uVar4,0);
LAB_0117dd40:
  if (bVar13) {
    return local_70[0] == 0;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0485e970);
  return local_70[0] == 0;
}


