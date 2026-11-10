/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f2f3d4; name: FUN_01f2f3d4
 */


void FUN_01f2f3d4(undefined8 *param_1,long param_2,void *param_3,undefined2 param_4,
                 undefined2 param_5)

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
  undefined8 local_90;
  long local_88;
  long lStack_80;
  undefined2 local_78;
  long *local_70;
  undefined2 local_68 [2];
  undefined2 local_64 [2];
  undefined8 local_48;
  
  local_68[0] = param_5;
  local_64[0] = param_4;
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
    local_88 = param_2;
    lStack_80 = lVar8;
    local_78 = param_5;
    FUN_01f34b6c(&local_70,&local_88);
    if (local_70 != (long *)0x0) {
      uVar9 = *(undefined8 *)(param_2 + 8);
      FUN_017944b8(&local_88,*(undefined8 *)(param_2 + 0x48));
      FUN_01f34dc8(&local_90,uVar9,&local_70,local_64,local_68,&local_88);
      local_48 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = 0;
      FUN_018b3450(&local_48);
      uVar9 = local_90;
      local_90 = 0;
      *(undefined8 *)(param_2 + 0x40) = uVar9;
      FUN_01f34e8c(&local_90);
      FUN_017943a8(&local_88);
      if (*(long *)(param_2 + 0x40) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        FUN_019812f8(param_1);
      }
      if (local_70 == (long *)0x0) {
        return;
      }
      lVar8 = local_70[6];
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
        (**(code **)(*local_70 + 0x50))();
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


