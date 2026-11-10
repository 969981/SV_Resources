/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a03d94; name: FUN_02a03d94
 */


void FUN_02a03d94(undefined8 *param_1,long param_2,long param_3,char *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 local_ac8;
  undefined **local_ac0;
  undefined1 auStack_ab8 [8];
  undefined8 local_ab0;
  undefined1 local_aa8;
  undefined1 auStack_aa7 [15];
  undefined *local_a98;
  undefined1 auStack_a90 [32];
  undefined1 auStack_a70 [32];
  undefined4 local_a50;
  undefined1 auStack_a48 [32];
  undefined1 auStack_a28 [32];
  undefined1 auStack_a08 [32];
  undefined1 auStack_9e8 [1880];
  undefined1 auStack_290 [256];
  byte local_190;
  undefined7 uStack_18f;
  long *local_188;
  ulong local_180;
  long *local_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [104];
  undefined8 local_58;
  
  if ((*(long **)(param_2 + 0x70) != (long *)0x0) &&
     (uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar4 & 1) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(int *)(param_3 + 0x48) - 1U < 2) {
    uVar6 = *(undefined4 *)(param_2 + 0x78);
  }
  else {
    uVar6 = 0;
  }
  FUN_01f7135c(&local_ac0,param_2 + 0x7c);
  FUN_01d09f08(&local_190);
  FUN_01f72c48(auStack_170,uVar6,&local_ac0,&local_190);
  if ((local_190 & 1) != 0) {
    (**(code **)(*local_178 + 0x18))
              (local_178,local_180,CONCAT71(uStack_18f,local_190) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_ac0 & 1) != 0) {
    (**(code **)(*(long *)CONCAT71(auStack_aa7._0_7_,local_aa8) + 0x18))
              ((long *)CONCAT71(auStack_aa7._0_7_,local_aa8),local_ab0,
               (ulong)local_ac0 & 0xfffffffffffffffe,1);
  }
  if (*param_4 != '\0') {
    lVar7 = *(long *)(param_4 + 8);
    if (lVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_02a0408c;
    }
    memset(&local_ac0,0,0x930);
    local_aa8 = (undefined1)*(undefined4 *)(param_2 + 0x78);
    memcpy(auStack_290,param_4 + 0x10,0x100);
    FUN_01674c7c(lVar7,auStack_aa7 + 3,1);
    lVar7 = *(long *)(param_4 + 0x110);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x54) != '\0')) {
      FUN_011b8d00((ulong)&local_ac0 | 2,*(undefined8 *)(lVar7 + 0x30),0xb);
    }
    local_ac0 = (undefined **)CONCAT71(local_ac0._1_7_,param_4[0x118]);
    FUN_01f7545c(auStack_170,&local_ac0,0x930);
  }
  FUN_01cfa5b0(&local_190,param_3 + 8);
  local_ac0 = &PTR_FUN_0455ccb8;
  uVar4 = (ulong)&local_190 | 1;
  if ((local_190 & 1) != 0) {
    uVar4 = local_180;
  }
  FUN_01f7135c(auStack_ab8,uVar4);
  local_a98 = PTR_DAT_047cfbf8 + 0x10;
  FUN_01cfa5b0(auStack_a90,auStack_168);
  FUN_01cfa5b0(auStack_a70,auStack_148);
  local_a50 = local_128;
  FUN_01cfa5b0(auStack_a48,auStack_120);
  FUN_01cfa5b0(auStack_a28,auStack_100);
  FUN_01cfa5b0(auStack_a08,auStack_e0);
  memcpy(auStack_9e8,auStack_c0,100);
  if ((local_190 & 1) != 0) {
    (**(code **)(*local_178 + 0x18))
              (local_178,local_180,CONCAT71(uStack_18f,local_190) & 0xfffffffffffffffe,1);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  FUN_006c7b04(&local_190,param_2 + 0x48,&local_ac0);
  FUN_01f74e90(&local_ac8,uVar5,&local_190);
  local_58 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  FUN_01f710f0(&local_58);
  uVar5 = local_ac8;
  local_ac8 = 0;
  *(undefined8 *)(param_2 + 0x70) = uVar5;
  FUN_01d00ad8(&local_ac8);
  if (local_188 != (long *)0x0) {
    plVar1 = local_188 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_188 + 0x10))(local_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_2 + 0x70) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01f717cc(&local_190);
    FUN_01f74f54(param_1,&local_190);
    FUN_01d0fcc8(&local_190);
  }
  FUN_01f75534(&local_ac0);
LAB_02a0408c:
  FUN_01d06ee8(auStack_170);
  return;
}


