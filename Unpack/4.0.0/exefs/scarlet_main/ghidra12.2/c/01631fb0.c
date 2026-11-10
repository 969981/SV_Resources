/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01631fb0; name: FUN_01631fb0
 */


void FUN_01631fb0(long param_1,int *param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  void *__s;
  undefined2 *puVar14;
  float fVar15;
  undefined2 local_378 [64];
  undefined2 local_2f8 [64];
  undefined1 auStack_278 [144];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined1 auStack_1c8 [144];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined8 local_70;
  
  lVar11 = param_3[5];
  bVar3 = *(byte *)(lVar11 + 0xa6);
  if (*(char *)(lVar11 + 0xa7) == '\x01') {
    iVar8 = 0x1000;
  }
  else {
    plVar13 = (long *)FUN_0124acbc(param_1);
    iVar8 = (**(code **)(*plVar13 + 0x68))(plVar13,&DAT_03d6a510);
    fVar15 = 0.5;
    if ((float)iVar8 / 100.0 <= 0.0) {
      fVar15 = -0.5;
    }
    iVar8 = (int)(((float)iVar8 / 100.0) * 4096.0 + fVar15);
    lVar11 = param_3[5];
  }
  bVar1 = 1 < bVar3;
  memset(auStack_1c8,0,0x8f);
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  memset(auStack_278,0,0x8f);
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  FUN_01632554(lVar11,*(undefined8 *)(param_1 + 0x10),*param_3,auStack_1c8);
  FUN_0163268c(param_3[5],*(undefined8 *)(param_1 + 0x10),*param_3,auStack_278);
  memset((void *)((ulong)local_2f8 | 4),0,0x78);
  memset((void *)((ulong)local_378 | 4),0,0x78);
  local_98 = *param_3;
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  local_70 = param_3[9];
  __s = (void *)((ulong)&local_118 | 4);
  local_118 = (long *)((ulong)local_118 & 0xffffffffffff0000);
  puStack_90 = auStack_1c8;
  local_78 = iVar8;
  memset(__s,0,0x78);
  FUN_01635c8c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x140),&local_118,&local_98);
  local_2f8[0] = local_118._0_2_;
  memcpy((void *)((ulong)local_2f8 | 4),__s,0x78);
  local_98 = *param_3;
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  local_70 = param_3[9];
  local_118 = (long *)((ulong)local_118 & 0xffffffffffff0000);
  puStack_90 = auStack_278;
  local_78 = iVar8;
  memset(__s,0,0x78);
  FUN_01635c8c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x140),&local_118,&local_98);
  local_378[0] = local_118._0_2_;
  memcpy((void *)((ulong)local_378 | 4),__s,0x78);
  FUN_016323d4(param_1,local_2f8);
  FUN_016323d4(param_1,local_378);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  puVar14 = (undefined2 *)param_3[8];
  uVar7 = FUN_011afcb8(uVar12,0x9c,0xcf,0);
  *puVar14 = uVar7;
  uVar7 = FUN_011afcb8(uVar12,0x7e,0xcf,0);
  puVar14[2] = uVar7;
  uVar7 = FUN_011afcb8(uVar12,0x7e,0xcf,0);
  puVar14[3] = uVar7;
  uVar7 = FUN_011afcb8(uVar12,0x7e,0xcf,0);
  puVar14[4] = uVar7;
  uVar7 = FUN_011afcb8(uVar12,0x8b,0xcf,0);
  puVar14[1] = uVar7;
  uStack_110 = param_3[1];
  local_100 = param_3[2];
  plVar13 = (long *)*param_3;
  local_e8 = param_3[6];
  uStack_f8 = param_3[7];
  local_108 = local_2f8;
  local_118 = plVar13;
  local_f0 = bVar1;
  FUN_016327c4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x8c0),&local_98,&local_118);
  iVar8 = (int)local_98;
  if (((int)local_98 != 0) && (uVar9 = FUN_01636fb0(param_1,plVar13), (uVar9 & 1) != 0)) {
    FUN_0124e480(param_1);
    FUN_01242424(&local_118);
    (**(code **)(*local_118 + 0x48))(local_118,3,1);
    if (local_118 != (long *)0x0) {
      plVar13 = local_118 + 5;
      do {
        lVar11 = *plVar13;
        iVar6 = (int)lVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_118 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  local_108 = local_378;
  *param_2 = *param_2 + iVar8;
  uStack_110 = param_3[1];
  local_100 = param_3[2];
  local_118 = (long *)*param_3;
  local_e8 = param_3[6];
  uStack_f8 = param_3[7];
  local_f0 = bVar1;
  FUN_016327c4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x8c0),&local_98,&local_118);
  *param_2 = *param_2 + (int)local_98;
  lVar10 = *(long *)(param_1 + 0x18);
  uVar2 = *(uint *)(lVar10 + 0x68);
  lVar11 = lVar10 + 0x70;
  *(undefined1 *)(lVar11 + (ulong)uVar2) = 0;
  *(undefined1 *)(lVar11 + (ulong)(uVar2 + 1)) = 0xd1;
  *(undefined1 *)(lVar11 + (ulong)(uVar2 + 2)) = 1;
  *(uint *)(lVar10 + 0x68) = uVar2 + 4;
  *(undefined1 *)(lVar11 + (ulong)(uVar2 + 3)) = 0;
  return;
}


