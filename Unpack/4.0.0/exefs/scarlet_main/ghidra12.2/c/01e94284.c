/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e94284; name: FUN_01e94284
 */


void FUN_01e94284(long param_1,undefined8 param_2,char *param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ushort *puVar8;
  undefined8 uVar9;
  long *local_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  if ((param_3 != (char *)0x0) && (param_5 != (undefined8 *)0x0)) {
    local_58 = 0x64e6f9b4d4037085;
    pcStack_50 = "message_error";
    local_48 = 0xd;
    local_40 = (long *)0x0;
    local_38 = param_2;
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    lVar7 = *(long *)PTR_DAT_047d8ac8;
    *(long *)PTR_DAT_047d8ad0 = lVar7;
    if (lVar7 != 0) {
      FUN_01286898(&local_60,lVar7,&local_58,*(undefined1 *)(param_1 + 0x48));
      if (local_60 != (long *)0x0) {
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_01e9444c();
          FUN_00e38854(local_60,&local_38,*(undefined8 *)(param_1 + 0x40));
          puVar8 = (ushort *)FUN_0196c644(*(undefined8 *)(param_1 + 0x40));
          iVar5 = nn::util::ConvertStringUtf16NativeToUtf8(param_3,param_4,puVar8);
          if (iVar5 == 0) {
            uVar4 = *(byte *)(param_1 + 0x48) - 1;
            if (uVar4 < 10) {
              uVar6 = *(undefined4 *)(&DAT_03d5b764 + (long)(char)uVar4 * 4);
            }
            else {
              uVar6 = 1;
            }
            uVar9 = nn::settings::LanguageCode::Make(uVar6);
            *param_5 = uVar9;
          }
        }
        if (local_60 != (long *)0x0) {
          plVar1 = local_60 + 5;
          do {
            lVar7 = *plVar1;
            iVar5 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
          else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


