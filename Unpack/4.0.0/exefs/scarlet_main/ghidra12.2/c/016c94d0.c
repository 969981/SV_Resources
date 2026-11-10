/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c94d0; name: FUN_016c94d0
 */


void FUN_016c94d0(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *local_e0;
  ulong local_d8;
  char *pcStack_d0;
  undefined1 local_c8 [8];
  long *local_c0;
  undefined4 local_54;
  undefined8 local_38;
  
  plVar7 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_38 = FUN_00d4e220(plVar7,param_2,0);
    local_54 = 0;
    local_d8 = 0x10634bf941e9f9e1;
    pcStack_d0 = "PfxChromaticAberrationOffset";
    local_c8 = (undefined1  [8])0x1c;
    local_c0 = (long *)0x0;
    FUN_00d4a2a4(plVar7,&local_38,&local_d8,&local_54);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    puVar13 = &DAT_cbf29ce484222645;
    memset(&local_d8,0,0x80);
    sVar9 = strlen((char *)&local_d8);
    *(undefined8 *)(local_c8 + (sVar9 - 0x10)) = s_PfxChromaticAberrationOffset_03c0496c._0_8_;
    *(undefined8 *)((long)&pcStack_d0 + sVar9) = s_PfxChromaticAberrationOffset_03c0496c._8_8_;
    *(ulong *)(local_c8 + sVar9) =
         CONCAT35(s_PfxChromaticAberrationOffset_03c0496c._21_3_,
                  s_PfxChromaticAberrationOffset_03c0496c._16_5_);
    *(ulong *)(local_c8 + sVar9 + 5) =
         CONCAT53(s_PfxChromaticAberrationOffset_03c0496c._24_5_,
                  s_PfxChromaticAberrationOffset_03c0496c._21_3_);
    sVar9 = strlen((char *)&local_d8);
    *(undefined2 *)(local_c8 + (sVar9 - 0x10)) = 0x5f;
    strcat((char *)&local_d8,*(char **)(param_2 + 8));
    uVar8 = local_54;
    uVar11 = local_d8 & 0xff;
    if ((char)local_d8 != '\0') {
      pbVar12 = (byte *)((ulong)&local_d8 | 1);
      do {
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ uVar11) * 0x100000001b3);
        bVar2 = *pbVar12;
        uVar11 = (ulong)bVar2;
        pbVar12 = pbVar12 + 1;
      } while (bVar2 != 0);
    }
    local_e0 = puVar13;
    puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_e0);
    *(undefined4 *)(puVar10 + 2) = uVar8;
    *puVar10 = PTR_LAB_047dcdf0;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


