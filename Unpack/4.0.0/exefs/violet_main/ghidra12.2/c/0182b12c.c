/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182b12c; name: FUN_0182b12c
 */


void FUN_0182b12c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 local_2c;
  undefined8 local_2a;
  undefined1 auStack_8 [8];
  
  local_60 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0x3ffffffff;
  local_2a = 0x10001000100;
  local_50 = 0x1ffffffffff00ff;
  uStack_48 = 0xffffffffffffffff;
  local_40 = 0xffffffff;
  local_80 = 0;
  local_78 = 0;
  local_56 = 0;
  local_2c = 0;
  local_34 = 0xffff00000000;
  local_3c = 0;
  local_58 = 0;
  local_52 = 0;
  lVar5 = FUN_00eebe4c(auStack_8,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),&local_80);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


