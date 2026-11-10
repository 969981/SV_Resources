/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f31490; name: FUN_01f31490
 */


void FUN_01f31490(undefined8 *param_1,long param_2,void *param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  long *local_60;
  undefined2 local_54 [2];
  
  local_54[0] = 6;
  lVar8 = FUN_01981264();
  if ((lVar8 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    memcpy((void *)(param_2 + 0x50),param_3,0x50);
    if (*(char *)(param_2 + 0xa0) == '\0') {
      if (*(char *)((long)param_3 + 0x50) != '\0') {
        memcpy((void *)(param_2 + 0xa4),(void *)((long)param_3 + 0x54),0x28);
        *(undefined1 *)(param_2 + 0xa0) = 1;
      }
    }
    else if (*(char *)((long)param_3 + 0x50) == '\0') {
      *(undefined1 *)(param_2 + 0xa0) = 0;
    }
    else {
      memcpy((void *)(param_2 + 0xa4),(void *)((long)param_3 + 0x54),0x28);
    }
    lVar10 = 0;
    do {
      lVar2 = param_2 + lVar10;
      cVar6 = *(char *)((long)param_3 + lVar10 + 0x80);
      if (*(char *)(lVar2 + 0xd0) == '\0') {
        if (cVar6 != '\0') {
          memcpy((void *)(lVar2 + 0xd8),(void *)((long)param_3 + lVar10 + 0x88),0x28);
          *(undefined1 *)(lVar2 + 0xd0) = 1;
        }
      }
      else if (cVar6 == '\0') {
        *(undefined1 *)(lVar2 + 0xd0) = 0;
      }
      else {
        uVar9 = *(undefined8 *)((long)param_3 + lVar10 + 0x88);
        uVar4 = *(undefined8 *)((long)param_3 + lVar10 + 0x90);
        uVar5 = *(undefined8 *)((long)param_3 + lVar10 + 0xa0);
        *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)((long)param_3 + lVar10 + 0x98);
        *(undefined8 *)(lVar2 + 0xf0) = uVar5;
        *(undefined8 *)(lVar2 + 0xd8) = uVar9;
        *(undefined8 *)(lVar2 + 0xe0) = uVar4;
        *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)((long)param_3 + lVar10 + 0xa8);
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != 0x480);
    local_70 = param_2;
    lStack_68 = lVar8;
    FUN_01f3c38c(&local_60,&local_70);
    if (local_60 != (long *)0x0) {
      uVar9 = FUN_01986dac(*(undefined8 *)(param_2 + 8),&local_60,local_54);
      FUN_01986cf0(&local_78,uVar9);
      local_70 = *(long *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = 0;
      FUN_018b3450(&local_70);
      uVar9 = local_78;
      local_78 = 0;
      *(undefined8 *)(param_2 + 0x40) = uVar9;
      FUN_01986b68(&local_78);
      if (*(long *)(param_2 + 0x40) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        FUN_019812f8(param_1);
      }
      if (local_60 == (long *)0x0) {
        return;
      }
      lVar8 = local_60[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
        return;
      }
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


