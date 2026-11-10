/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017619b8; name: FUN_017619b8
 */


bool FUN_017619b8(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  Sha256Impl aSStack_118 [120];
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  long local_80;
  long lStack_78;
  undefined1 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 == *(long *)(param_1 + 0x10)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    do {
      plVar1 = (long *)(lVar10 + 0x18);
      lVar10 = lVar10 + 0x30;
      lVar11 = lVar11 + *plVar1 + 4;
    } while (*(long *)(param_1 + 0x10) != lVar10);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  lVar10 = lVar11 + 0x20;
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,lVar10,8);
  if (lVar8 == 0) {
    bVar7 = false;
  }
  else {
    local_70 = 0;
    puStack_88 = PTR_DAT_047dcc78 + 0x10;
    local_90 = 0;
    local_68 = &DAT_03d626d4;
    uStack_60 = 0x7f;
    local_58 = 0;
    local_a0 = &PTR_LAB_045a7a08;
    ppuStack_98 = &PTR_LAB_045a7958;
    local_80 = lVar8;
    lStack_78 = lVar11;
    uVar9 = FUN_017624e0(param_1,&local_a0);
    if ((uVar9 & 1) == 0) {
      bVar7 = false;
    }
    else {
      FUN_0172c2a0(auStack_128);
      FUN_0172c2fc(auStack_128);
      FUN_0172c2b0(auStack_128,lVar8,lVar11,0);
      FUN_0172c354(&local_148,auStack_128);
      puVar3 = (undefined8 *)(lVar8 + lVar11);
      puVar3[2] = local_138;
      puVar3[3] = uStack_130;
      *puVar3 = local_148;
      puVar3[1] = uStack_140;
      local_38 = (long *)0x0;
      auVar12 = FUN_01761cd8(&local_38,param_3,lVar10);
      bVar7 = false;
      if ((auVar12._8_4_ == 0) && ((auVar12._0_8_ >> 0x20 & 0xff) != 0)) {
        auVar12 = FUN_01761c28(local_38,lVar8,lVar10);
        if ((auVar12._0_8_ >> 0x20 & 0xff) == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = auVar12._8_4_ == 0;
        }
      }
      if (local_38 != (long *)0x0) {
        lVar11 = local_38[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_118);
    }
    uVar9 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*param_2 + 0x18))(param_2,lVar8,lVar10,8);
    }
    else {
      FUN_00c48fe8(param_2,lVar8,lVar10,8);
    }
  }
  return bVar7;
}


