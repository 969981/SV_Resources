/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e5ad0; name: FUN_017e5ad0
 */


void FUN_017e5ad0(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_017e4fe4();
  FUN_014f5f00();
  FUN_017e5c90();
  uVar6 = FUN_01242804();
  if ((uVar6 & 1) != 0) {
    FUN_017e4fe4(param_1);
    FUN_014f5f00();
    uVar7 = FUN_017e5c90();
    pcVar8 = (char *)FUN_017e5c98(uVar7,0);
    if (*pcVar8 == '\x01') {
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      uVar5 = FUN_0124fb2c(uVar7,&local_70);
      local_d0[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_b0 = 0;
      local_c0 = uVar7;
      lVar9 = FUN_01498338(param_1);
      local_c8 = *(undefined8 *)(lVar9 + 0x38);
      local_b8 = uVar5;
      if (((0 < (int)uVar5) && (FUN_0106fc54(&local_b0,&local_70), uVar5 != 1)) &&
         (FUN_0106fc54(&local_a0,&local_60), uVar5 != 2)) {
        lVar9 = (ulong)uVar5 - 2;
        puVar10 = &local_90;
        puVar11 = &local_50;
        do {
          FUN_0106fc54(puVar10,puVar11);
          lVar9 = lVar9 + -1;
          puVar10 = puVar10 + 2;
          puVar11 = puVar11 + 2;
        } while (lVar9 != 0);
      }
      lVar9 = FUN_01498338(param_1);
      FUN_01071928(&local_d8,*(undefined8 *)(lVar9 + 0x20),local_d0);
      FUN_017e54a8(param_1,&local_d8);
      if (local_d8 != (long *)0x0) {
        lVar9 = local_d8[6];
        psVar1 = (short *)(lVar9 + 0x1a);
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
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_d8 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


