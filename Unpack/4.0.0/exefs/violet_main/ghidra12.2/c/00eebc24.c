/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eebc24; name: FUN_00eebc24
 */


void FUN_00eebc24(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
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
  
  local_80 = 0;
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0x3ffffffff;
  local_2a = 0x10001000100;
  local_78 = 0;
  local_60 = 0xffffffffffffffff;
  local_56 = 0;
  local_2c = 0;
  local_40 = 0xffffffff;
  local_50 = 0x1ffffffffff00ff;
  uStack_48 = 0xffffffffffffffff;
  local_34 = 0xffff00000000;
  local_3c = 0;
  if (((*PTR_DAT_047d8b18 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8b18), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dcc98,PTR_DAT_047d8b20,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b18);
  }
  lVar6 = *(long *)PTR_DAT_047d8b20;
  *(long *)PTR_DAT_047d8b28 = lVar6;
  local_58 = 0x3e6;
  if (*(int *)(lVar6 + 0x2c) != 0) {
    local_58 = 999;
  }
  local_52 = 0x46;
  lVar6 = FUN_00eebe4c(auStack_8,*(undefined8 *)(param_2 + 8),&local_80);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar6 = *param_1;
  }
  FUN_00eebdcc(lVar6);
  sVar4 = FUN_00cf44f4(*(undefined8 *)(lVar6 + 0x70));
  if ((sVar4 == 0x3e6) || (sVar4 = FUN_00cf44f4(*(undefined8 *)(lVar6 + 0x70)), sVar4 == 999)) {
    FUN_00eec030(*(undefined8 *)(lVar6 + 0x70),1);
  }
  return;
}


