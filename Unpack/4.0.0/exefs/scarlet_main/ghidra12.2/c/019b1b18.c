/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b1b18; name: FUN_019b1b18
 */


void FUN_019b1b18(long param_1,long param_2,char *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar12;
  undefined4 *puVar11;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  *(char *)(param_1 + 0xd6) = *param_3;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  uVar9 = 0x100400;
  if (param_3[0x2c] == '\0') {
    FUN_026f3340(0,0);
    uVar9 = 0x104400;
  }
  FUN_019b2050(&local_70,*(undefined8 *)(param_1 + 0x68));
  plVar5 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(ulong *)(param_1 + 0x80) = CONCAT44(uStack_6c,local_70);
  plVar5 = *(long **)(param_3 + 0x20);
  if (plVar5 == (long *)0x0) {
    local_70 = 0;
    FUN_019b1ee4(param_1 + 0x98,&local_70);
    local_70 = 1;
    FUN_019b1ee4(param_1 + 0x98,&local_70);
    local_70 = 2;
  }
  else {
    puVar10 = (undefined4 *)plVar5[1];
    if ((undefined4 *)*plVar5 != puVar10) {
      puVar11 = (undefined4 *)*plVar5;
      do {
        puVar12 = puVar11 + 1;
        local_70 = *puVar11;
        FUN_019b1ecc(param_1 + 0x98,&local_70);
        puVar11 = puVar12;
      } while (puVar10 != puVar12);
    }
    if (*(long *)(param_1 + 0xa0) != *(long *)(param_1 + 0x98)) goto LAB_019b1bfc;
    local_70 = 0;
  }
  FUN_019b1ee4(param_1 + 0x98,&local_70);
LAB_019b1bfc:
  puVar10 = *(undefined4 **)(param_1 + 0x98);
  puVar11 = *(undefined4 **)(param_1 + 0xa0);
  iVar6 = (int)((ulong)((long)puVar11 - (long)puVar10) >> 2);
  *(int *)(param_1 + 0xd0) = iVar6;
  if ((long)puVar11 - (long)puVar10 != 0) {
    thunk_FUN_0011f680(*puVar10,0);
    if ((puVar10 + 1 != puVar11) && (thunk_FUN_0011f680(puVar10[1],0), puVar10 + 2 != puVar11)) {
      thunk_FUN_0011f680(puVar10[2],0);
      for (puVar10 = puVar10 + 3; puVar10 != puVar11; puVar10 = puVar10 + 1) {
        thunk_FUN_0011f680(*puVar10,0);
      }
    }
    iVar6 = *(int *)(param_1 + 0xd0);
  }
  if (0 < iVar6) {
    snprintf((char *)&local_70,0x20,"BinkSync%d",0);
    FUN_019b1ef8(0x400,&local_70);
    if (1 < *(int *)(param_1 + 0xd0)) {
      snprintf((char *)&local_70,0x20,"BinkSync%d",1);
      FUN_019b1ef8(0x401,&local_70);
      if (2 < *(int *)(param_1 + 0xd0)) {
        snprintf((char *)&local_70,0x20,"BinkSync%d",2);
        FUN_019b1ef8(0x402,&local_70);
        if (3 < *(int *)(param_1 + 0xd0)) {
          iVar6 = 3;
          do {
            snprintf((char *)&local_70,0x20,"BinkSync%d",iVar6);
            FUN_019b1ef8(iVar6 + 0x400,&local_70);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0xd0));
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xd4) = 1;
  lVar7 = FUN_019b1fc0(*(undefined8 *)(param_2 + 8),uVar9);
  *(long *)(param_1 + 0x90) = lVar7;
  if (lVar7 != 0) {
    FUN_019b1ef8(1,"BinkBackgroundSound");
    FUN_019b1ef8(2,"BinkBackgroundIO");
    FUN_019b33b4(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x90));
    lVar7 = *(long *)(param_1 + 0x70);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_019b1e14;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019b1e14:
          bVar4 = false;
        }
        if (bVar4) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            uVar9 = (*(undefined4 **)(param_1 + 0x90))[1];
            *(undefined4 *)(lVar7 + 0x58) = **(undefined4 **)(param_1 + 0x90);
            *(undefined4 *)(lVar7 + 0x5c) = uVar9;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))(lVar7 + -0x28);
          }
          break;
        }
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
    FUN_019b2204(param_1,param_3);
    if (*param_3 == '\0') {
      FUN_01a58724(param_1,param_3);
    }
  }
  return;
}


