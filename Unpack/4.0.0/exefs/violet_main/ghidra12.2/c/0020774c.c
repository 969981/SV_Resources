/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0020774c; name: FUN_0020774c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0020774c(long param_1)

{
  undefined *puVar1;
  undefined7 *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_270 [184];
  undefined8 local_1b8;
  byte local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a0;
  long *plStack_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined7 *local_180;
  long *plStack_178;
  undefined1 auStack_170 [16];
  byte *local_160;
  byte *local_158;
  byte *local_150;
  undefined *local_148;
  undefined1 auStack_138 [32];
  int local_118 [2];
  byte local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  long *plStack_f8;
  char local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_c8 [16];
  undefined *local_b8;
  undefined *local_a8;
  undefined *puStack_a0;
  long *******local_98;
  long *******ppppppplStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *plStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_98 = (long *******)&local_98;
  local_38 = 0;
  local_40 = (undefined **)0x0;
  puStack_a0 = PTR_DAT_047cbb38 + 0x10;
  local_a8 = puVar1;
  ppppppplStack_90 = local_98;
  (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200),&local_80);
  local_40 = &puStack_a0;
  thunk_FUN_006c4e40(&local_a8);
  local_a8 = puVar1;
  FUN_006c4274(&puStack_a0);
  plVar3 = *(long **)(param_1 + 200);
  plVar4 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  (**(code **)(*plVar3 + 0x30))(local_118);
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      lVar7 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
                    /* try { // try from 00207818 to 00207823 has its CatchHandler @ 00207b24 */
  FUN_00219954(auStack_138,auStack_c8);
  if (local_118[0] != 0) {
    ppppppplStack_90 = (long *******)FUN_01cf7e20();
    local_98 = (long *******)0x0;
    local_a8 = (undefined *)0x0;
    puStack_a0 = (undefined *)0x0;
    plStack_70 = (long *)FUN_01cf7e20();
    local_78 = 0;
    local_88 = 0;
    local_80 = 0;
    local_50 = (long *)FUN_01cf7e20();
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    FUN_00207c2c(auStack_270,local_118,&local_a8);
    if ((local_68 & 1) != 0) {
      (**(code **)(*local_50 + 0x18))(local_50,local_58,local_68 & 0xfffffffffffffffe,1);
    }
    if ((local_88 & 1) != 0) {
      (**(code **)(*plStack_70 + 0x18))(plStack_70,local_78,local_88 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_a8 & 1) != 0) {
      (*(code *)(*ppppppplStack_90)[3])
                (ppppppplStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
    }
    goto LAB_00207a04;
  }
  puVar1 = PTR_DAT_047cbb58;
  if (local_b8 != (undefined *)0x0) {
    puVar1 = local_b8;
  }
                    /* try { // try from 0020789c to 002078a3 has its CatchHandler @ 00207b14 */
  FUN_0021b394(auStack_170,puVar1);
  if ((*local_160 & 1) == 0) {
    local_160 = local_160 + 1;
  }
  else {
    local_160 = *(byte **)(local_160 + 0x10);
  }
  FUN_00266fc0(&local_1b0,local_160);
  puVar2 = &uStack_18f;
  if ((local_190 & 1) != 0) {
    puVar2 = local_180;
  }
  if ((*local_158 & 1) == 0) {
    local_158 = local_158 + 1;
    if ((*local_150 & 1) != 0) goto LAB_00207964;
LAB_0020797c:
    local_150 = local_150 + 1;
  }
  else {
    local_158 = *(byte **)(local_158 + 0x10);
    if ((*local_150 & 1) == 0) goto LAB_0020797c;
LAB_00207964:
    local_150 = *(byte **)(local_150 + 0x10);
  }
  puVar1 = PTR_DAT_047cbb60;
  if (local_148 != (undefined *)0x0) {
    puVar1 = local_148;
  }
  local_1b8 = *(undefined8 *)(puVar1 + 0x10);
  FUN_00201264(&local_a8,puVar2,local_158,local_150,&local_1b8);
  FUN_00207c2c(auStack_270,local_118,&local_a8);
  if ((local_68 & 1) != 0) {
    (**(code **)(*local_50 + 0x18))(local_50,local_58,local_68 & 0xfffffffffffffffe,1);
  }
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))(plStack_70,local_78,local_88 & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_a8 & 1) != 0) {
    (*(code *)(*ppppppplStack_90)[3])
              (ppppppplStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
  }
  if ((local_190 & 1) != 0) {
    (**(code **)(*plStack_178 + 0x18))
              (plStack_178,local_180,CONCAT71(uStack_18f,local_190) & 0xfffffffffffffffe,1);
  }
  if ((local_1b0 & 1) != 0) {
    (**(code **)(*plStack_198 + 0x18))
              (plStack_198,local_1a0,CONCAT71(uStack_1af,local_1b0) & 0xfffffffffffffffe,1);
  }
  FUN_0021b534(auStack_170);
LAB_00207a04:
  FUN_00219a0c(auStack_138);
  FUN_00219a0c(auStack_c8);
  if (local_f0 != '\0') {
    FUN_01cfa44c(auStack_e8,local_e0);
  }
  if ((local_110 & 1) != 0) {
    (**(code **)(*plStack_f8 + 0x18))
              (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  FUN_00200f9c(uVar8,auStack_270);
  FUN_001fc7e8(auStack_270);
  return 1;
}


