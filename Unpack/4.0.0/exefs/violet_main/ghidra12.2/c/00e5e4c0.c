/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5e4c0; name: FUN_00e5e4c0
 */


void FUN_00e5e4c0(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  uint uVar11;
  ulong local_68 [2];
  int local_58 [4];
  undefined4 local_48 [2];
  
  plVar6 = DAT_0485e990;
  if (DAT_0485e990 == (long *)0x0) {
LAB_00e5e534:
    bVar10 = true;
  }
  else {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) != 0) {
      DAT_0485e990 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      goto LAB_00e5e534;
    }
    nn::os::LockMutex((MutexType *)&DAT_0485e970);
    bVar10 = false;
  }
  puVar5 = PTR_DAT_047d0900;
  if (*(long *)PTR_DAT_047d0900 != 0) {
    FUN_00f45260(*(long *)PTR_DAT_047d0900,0);
  }
  puVar4 = PTR_DAT_047d0860;
  if (*(long *)PTR_DAT_047d0860 != 0) {
    lVar7 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea44,0x77);
    if (lVar7 != 0) {
      FUN_00e5e850(lVar7,1,1,1000);
    }
    if (((*(long *)puVar4 != 0) &&
        (lVar7 = FUN_00f21488(*(long *)puVar4 + 0x10,DAT_0485ea44,0x77), lVar7 != 0)) &&
       (uVar8 = FUN_00e5e7a0(), (uVar8 & 1) == 0)) {
      local_68[0] = 0;
      FUN_00e5e7c4(local_58,lVar7,local_68);
      if ((local_58[0] == 0) && (DAT_045dfcf4 != 0)) {
        if (DAT_0485e9f8 != 0) {
          lVar7 = FUN_00e5ecec(DAT_0485e9f8,0);
          if (lVar7 != 0) {
            lVar9 = local_68[0] - *(long *)(lVar7 + 0x78);
            if (local_68[0] <= *(long *)(lVar7 + 0x78) - 1U) {
              lVar9 = 0;
            }
            *(ulong *)(lVar7 + 0x78) = local_68[0];
            *(long *)(lVar7 + 0x80) = lVar9;
          }
          if ((DAT_0485e9f8 != 0) && (lVar7 = FUN_02789d98(DAT_0485e9f8,0), lVar7 != 0)) {
            lVar9 = local_68[0] - *(long *)(lVar7 + 0x78);
            if (local_68[0] <= *(long *)(lVar7 + 0x78) - 1U) {
              lVar9 = 0;
            }
            *(ulong *)(lVar7 + 0x78) = local_68[0];
            *(long *)(lVar7 + 0x80) = lVar9;
          }
        }
        if (1 < DAT_045dfcf4) {
          uVar11 = 1;
          do {
            if (DAT_0485e9f8 != 0) {
              lVar7 = FUN_00e5ecec(DAT_0485e9f8,uVar11 & 0xff);
              if (lVar7 != 0) {
                lVar9 = local_68[0] - *(long *)(lVar7 + 0x78);
                if (local_68[0] <= *(long *)(lVar7 + 0x78) - 1U) {
                  lVar9 = 0;
                }
                *(ulong *)(lVar7 + 0x78) = local_68[0];
                *(long *)(lVar7 + 0x80) = lVar9;
              }
              if ((DAT_0485e9f8 != 0) &&
                 (lVar7 = FUN_02789d98(DAT_0485e9f8,uVar11 & 0xff), lVar7 != 0)) {
                lVar9 = local_68[0] - *(long *)(lVar7 + 0x78);
                if (local_68[0] <= *(long *)(lVar7 + 0x78) - 1U) {
                  lVar9 = 0;
                }
                *(ulong *)(lVar7 + 0x78) = local_68[0];
                *(long *)(lVar7 + 0x80) = lVar9;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < DAT_045dfcf4);
        }
      }
    }
  }
  if ((DAT_0485e9d8 != (long *)0x0) &&
     ((**(code **)(*DAT_0485e9d8 + 0x20))(), DAT_0485e9d8 != (long *)0x0)) {
    (**(code **)(*DAT_0485e9d8 + 0x28))(local_68);
    if ((int)local_68[0] != 0) goto LAB_00e5e590;
  }
  if (*(long *)puVar5 != 0) {
    FUN_00cbd7b4(local_68);
    if ((int)local_68[0] != 0) goto LAB_00e5e590;
  }
  local_58[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(local_68,local_58);
LAB_00e5e590:
  if (!bVar10) {
    nn::os::UnlockMutex((MutexType *)&DAT_0485e970);
  }
  return;
}


