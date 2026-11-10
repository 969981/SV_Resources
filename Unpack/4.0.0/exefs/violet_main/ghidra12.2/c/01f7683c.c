/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7683c; name: FUN_01f7683c
 */


void FUN_01f7683c(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 byte *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_340 [8];
  long *local_338;
  undefined8 local_330;
  undefined **local_328;
  undefined *puStack_320;
  undefined4 local_318;
  undefined1 auStack_310 [32];
  undefined4 local_2f0;
  undefined1 auStack_2e8 [32];
  undefined1 auStack_2c8 [32];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined *local_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined4 local_1b0;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [40];
  undefined8 local_58;
  undefined8 local_38;
  
  if ((*(long **)(param_2 + 0x70) == (long *)0x0) ||
     (uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar4 & 1) != 0)) {
    pbVar5 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar5 = param_5 + 1;
    }
    FUN_01f76a4c(auStack_1b8,param_3,param_4,pbVar5);
    puStack_320 = PTR_DAT_047cfd80 + 0x10;
    local_318 = local_1b0;
    local_328 = &PTR_LAB_0455cd38;
    FUN_01cfa5b0(auStack_310,auStack_1a8);
    local_2f0 = local_188;
    FUN_01cfa5b0(auStack_2e8,auStack_180);
    FUN_01cfa5b0(auStack_2c8,auStack_160);
    FUN_01cfa5b0(auStack_2a8,auStack_140);
    FUN_01cfa5b0(auStack_288,auStack_120);
    FUN_01cfa5b0(auStack_268,auStack_100);
    FUN_01cfa5b0(auStack_248,auStack_e0);
    FUN_01cfa5b0(auStack_228,auStack_c0);
    FUN_01cfa5b0(auStack_208,auStack_a0);
    FUN_01cfa5b0(auStack_1e8,auStack_80);
    local_1c8 = PTR_DAT_047cfd88 + 0x10;
    uStack_1c0 = local_58;
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    FUN_01f76b18(auStack_340,param_2 + 0x48,&local_328);
    FUN_01f762e8(&local_330,uVar7,auStack_340);
    local_38 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_01f710f0(&local_38);
    uVar7 = local_330;
    local_330 = 0;
    *(undefined8 *)(param_2 + 0x70) = uVar7;
    FUN_01d02728(&local_330);
    if (local_338 != (long *)0x0) {
      plVar1 = local_338 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_338 + 0x10))(local_338);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_01f717cc(auStack_340);
      FUN_01f763ac(param_1,auStack_340);
      FUN_01d0fcc8(auStack_340);
    }
    local_328 = &PTR_LAB_0455cd38;
    FUN_01d08584(&puStack_320);
    FUN_01d08584(auStack_1b8);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


