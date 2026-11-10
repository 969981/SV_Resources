/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a05d78; name: FUN_02a05d78
 */


void FUN_02a05d78(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  byte local_50;
  undefined7 uStack_4f;
  long local_48;
  undefined8 local_40;
  long *plStack_38;
  long *local_18;
  
  FUN_01c344f4(&local_18);
  plVar5 = local_18;
  if (local_18 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  if (*(int *)(param_2 + 0x48) == 2) {
    uVar6 = FUN_01f787c4(param_2);
    FUN_01f7b878(plVar5,uVar6);
    FUN_01c0b814(param_1,&local_18);
    goto LAB_02a05e7c;
  }
  uVar7 = FUN_01f7880c(param_2 + 400,"Regulation");
  if ((uVar7 & 1) != 0) {
    *param_1 = 0;
    goto LAB_02a05e7c;
  }
  FUN_01e73af4(&local_50,param_2 + 400,"Regulation");
  if (((local_50 & 1) == 0) || (local_48 != 0x29c0)) {
LAB_02a05e54:
    *param_1 = 0;
  }
  else {
    FUN_01e71748(local_18,local_40,0x29c0);
    uVar7 = FUN_01e71950(local_18);
    if ((uVar7 & 1) == 0) goto LAB_02a05e54;
    FUN_01c0b814(param_1,&local_18);
  }
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
LAB_02a05e7c:
  if (local_18 != (long *)0x0) {
    lVar8 = local_18[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


