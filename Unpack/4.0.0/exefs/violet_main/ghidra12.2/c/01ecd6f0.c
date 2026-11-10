/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ecd6f0; name: FUN_01ecd6f0
 */


undefined8 FUN_01ecd6f0(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *__s;
  undefined8 *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  FUN_01ecd9c0(param_1 + 0xc);
  if ((*(int *)(param_1 + 9) != 1) &&
     (((long *)param_1[10] == (long *)0x0 ||
      (uVar5 = (**(code **)(*(long *)param_1[10] + 0x70))(), (uVar5 & 1) == 0)))) {
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    __s = (char *)(param_1 + 1);
    __s[0] = '\0';
    __s[1] = '\0';
    __s[2] = '\0';
    __s[3] = '\0';
    __s[4] = '\0';
    __s[5] = '\0';
    __s[6] = '\0';
    __s[7] = '\0';
    snprintf(__s,0x40,"%s",param_2);
    local_70 = 0x30c9981689681b60;
    pcStack_68 = "BcatSync";
    local_60 = 8;
    local_58 = (long *)0x0;
    FUN_01e78dec(&local_50,&local_70,*param_1);
    local_90 = 0x110cb6f47890bc04;
    pcStack_88 = "LoadDirectory";
    local_80 = 0xd;
    local_78 = (long *)0x0;
    FUN_01ecd9d0(&local_48,local_50,&local_90,*param_1,__s);
    local_b0 = 0x2d1a1220bc1efa7c;
    pcStack_a8 = "LoadSuccess";
    local_a0 = 0xb;
    local_98 = (long *)0x0;
    local_b8 = param_1;
    FUN_01ece16c(&local_40,local_48,&local_b0,&local_b8);
    local_d8 = 0x55d7f8250e00c96d;
    pcStack_d0 = "LoadFailure";
    local_c8 = 0xb;
    uStack_c0 = 0;
    local_e0 = param_1;
    FUN_01ece230(&local_38,local_40,&local_d8,&local_e0);
    local_18 = param_1[10];
    param_1[10] = 0;
    FUN_0186e214(&local_18);
    uVar6 = local_38;
    local_38 = 0;
    param_1[10] = uVar6;
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ecd998;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    FUN_01e7a01c(&local_48);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      lVar7 = local_50[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_50 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_01ecd998:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar6 = 0;
    if ((long *)param_1[10] != (long *)0x0) {
      uVar5 = (**(code **)(*(long *)param_1[10] + 0x70))();
      if ((uVar5 & 1) != 0) {
        if (*(char *)(param_1 + 0xb) != '\0') {
          *(undefined1 *)(param_1 + 0xb) = 0;
        }
        *(undefined4 *)(param_1 + 9) = 1;
        return 1;
      }
      uVar6 = param_1[10];
    }
    param_1[10] = 0;
    local_18 = uVar6;
    FUN_0186e214(&local_18);
  }
  return 0;
}


