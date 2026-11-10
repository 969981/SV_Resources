/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4791c; name: FUN_00f4791c
 */


void FUN_00f4791c(long param_1,undefined8 param_2)

{
  short *psVar1;
  void *__src;
  void *__dest;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  int iVar7;
  long *plVar8;
  short sVar9;
  long lVar10;
  uint uVar11;
  
  if (*(char *)(param_1 + 0x179) != '\0') {
    iVar2 = *(int *)(param_1 + 0x17c);
    plVar8 = (long *)FUN_00f4b204(param_1);
    lVar10 = *plVar8;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar9 = *(short *)(lVar10 + 0x1a);
LAB_00f47b2c:
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f47b50;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f47b50:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x00f47b58;
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 != 0) {
        plVar8 = (long *)(lVar10 + -0x28);
        iVar7 = FUN_01fad2d4(plVar8);
        lVar10 = *(long *)(lVar10 + 0x70);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
          if (iVar2 == 3 && iVar7 != 1) goto LAB_00f47944;
          goto LAB_00f47a50;
        }
        if (sVar9 == 0) goto LAB_00f47af4;
        if (iVar2 != 3 || iVar7 == 1) goto LAB_00f47a50;
        goto LAB_00f47944;
      }
    }
LAB_00f47a48:
    if (iVar2 != 3) {
LAB_00f47a50:
      FUN_00f4b090(param_1);
      plVar8 = (long *)FUN_00f47d18(param_1);
      lVar10 = *plVar8;
      if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar9 = *(short *)(lVar10 + 0x1a);
LAB_00f47c8c:
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f47cb0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f47cb0:
          bVar5 = false;
        }
        if (!bVar5) goto code_r0x00f47cb8;
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar8 = (long *)(lVar10 + -0x28);
          FUN_015c862c(plVar8);
          lVar10 = *(long *)(lVar10 + 0x70);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar9 == 0) goto LAB_00f47af4;
        }
      }
LAB_00f47a68:
      *(undefined1 *)(param_1 + 0x179) = 0;
    }
  }
LAB_00f47944:
  lVar10 = *(long *)(param_1 + 0x140);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0xc0) == 1) {
      FUN_00f4940c(lVar10);
      FUN_00f49928(lVar10);
    }
    else if ((*(int *)(lVar10 + 0xc0) == 0) && (FUN_00f4aec0(lVar10), *(int *)(lVar10 + 0xc4) == 5))
    {
      *(undefined4 *)(lVar10 + 0xc0) = 1;
    }
  }
  lVar10 = *(long *)(param_1 + 0x148);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0xae0) == 1) {
      FUN_00f4801c(lVar10,param_2);
    }
    else if (*(int *)(lVar10 + 0xae0) == 0) {
      FUN_00f4a00c();
    }
  }
  lVar10 = *(long *)(param_1 + 0x150);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x15c8) == 1) {
      FUN_00f4837c(lVar10,param_2);
    }
    else if (*(int *)(lVar10 + 0x15c8) == 0) {
      FUN_00f4a884();
    }
  }
  if (*(int *)(param_1 + 0x170) == 1) {
    plVar8 = (long *)FUN_00f47d18(param_1);
    lVar10 = *plVar8;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar9 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f47aa4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f47aa4:
          bVar5 = false;
        }
        if (bVar5) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return;
          }
          __dest = *(void **)(param_1 + 0x180);
          plVar8 = (long *)(lVar10 + -0x28);
          if (__dest != *(void **)(param_1 + 0x188)) {
            __src = (void *)((long)__dest + 0x40);
            FUN_01fad2dc(plVar8,__dest);
            sVar6 = *(long *)(param_1 + 0x188) - (long)__src;
            if (sVar6 != 0) {
              memmove(__dest,__src,sVar6);
            }
            *(size_t *)(param_1 + 0x188) = (long)__dest + sVar6;
            if (sVar6 != 0) {
              uVar11 = 1;
              do {
                FUN_01fad2dc(plVar8,__dest);
                sVar6 = *(long *)(param_1 + 0x188) - (long)__src;
                if (sVar6 != 0) {
                  memmove(__dest,__src,sVar6);
                }
                *(size_t *)(param_1 + 0x188) = (long)__dest + sVar6;
              } while ((uVar11 < 0x1d) && (uVar11 = uVar11 + 1, sVar6 != 0));
            }
          }
          lVar10 = *(long *)(lVar10 + 0x70);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f47c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x50))(plVar8);
            return;
          }
          if (sVar9 != 0) {
            return;
          }
LAB_00f47af4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x170) == 0) {
    FUN_00f4aca4(param_1);
    return;
  }
  return;
code_r0x00f47b58:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_00f47a48;
  goto LAB_00f47b2c;
code_r0x00f47cb8:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_00f47a68;
  goto LAB_00f47c8c;
}


