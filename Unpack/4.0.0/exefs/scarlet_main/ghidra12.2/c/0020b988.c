/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020b988; name: FUN_0020b988
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0020b988(long param_1)

{
  undefined *puVar1;
  undefined7 *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_280 [184];
  undefined8 local_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  undefined8 local_1b0;
  long *plStack_1a8;
  byte local_1a0;
  undefined7 uStack_19f;
  undefined7 *local_190;
  long *plStack_188;
  undefined1 auStack_180 [16];
  byte *local_170;
  byte *local_168;
  byte *local_160;
  undefined *local_158;
  undefined1 auStack_148 [40];
  int local_120 [2];
  byte local_118;
  undefined7 uStack_117;
  undefined8 local_108;
  long *plStack_100;
  char local_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined1 auStack_d0 [24];
  undefined *local_b8;
  undefined *local_a8;
  undefined *puStack_a0;
  long *******local_98;
  long *******ppppppplStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
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
  (**(code **)(*plVar3 + 0x30))(local_120);
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
                    /* try { // try from 0020ba54 to 0020ba5f has its CatchHandler @ 0020bd6c */
  FUN_002182a4(auStack_148,auStack_d0);
  if (local_120[0] != 0) {
    ppppppplStack_90 = (long *******)FUN_01cf7e20();
    local_98 = (long *******)0x0;
    local_a8 = (undefined *)0x0;
    puStack_a0 = (undefined *)0x0;
    local_70 = (long *)FUN_01cf7e20();
    local_78 = 0;
    local_88 = 0;
    local_80 = 0;
    local_50 = (long *)FUN_01cf7e20();
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    FUN_0020be74(auStack_280,local_120,&local_a8);
    if ((local_68 & 1) != 0) {
      (**(code **)(*local_50 + 0x18))(local_50,local_58,local_68 & 0xfffffffffffffffe,1);
    }
    if ((local_88 & 1) != 0) {
      (**(code **)(*local_70 + 0x18))(local_70,local_78,local_88 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_a8 & 1) != 0) {
      (*(code *)(*ppppppplStack_90)[3])
                (ppppppplStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
    }
    goto LAB_0020bc48;
  }
  puVar1 = PTR_DAT_047cbb58;
  if (local_b8 != (undefined *)0x0) {
    puVar1 = local_b8;
  }
                    /* try { // try from 0020badc to 0020bae3 has its CatchHandler @ 0020bd5c */
  FUN_0021b394(auStack_180,puVar1);
  if ((*local_170 & 1) == 0) {
    local_170 = local_170 + 1;
  }
  else {
    local_170 = *(byte **)(local_170 + 0x10);
  }
  FUN_00266fc0(&local_1c0,local_170);
  puVar2 = &uStack_19f;
  if ((local_1a0 & 1) != 0) {
    puVar2 = local_190;
  }
  if ((*local_168 & 1) == 0) {
    local_168 = local_168 + 1;
    if ((*local_160 & 1) != 0) goto LAB_0020bba8;
LAB_0020bbc0:
    local_160 = local_160 + 1;
  }
  else {
    local_168 = *(byte **)(local_168 + 0x10);
    if ((*local_160 & 1) == 0) goto LAB_0020bbc0;
LAB_0020bba8:
    local_160 = *(byte **)(local_160 + 0x10);
  }
  puVar1 = PTR_DAT_047cbb60;
  if (local_158 != (undefined *)0x0) {
    puVar1 = local_158;
  }
  local_1c8 = *(undefined8 *)(puVar1 + 0x10);
  FUN_00201264(&local_a8,puVar2,local_168,local_160,&local_1c8);
  FUN_0020be74(auStack_280,local_120,&local_a8);
  if ((local_68 & 1) != 0) {
    (**(code **)(*local_50 + 0x18))(local_50,local_58,local_68 & 0xfffffffffffffffe,1);
  }
  if ((local_88 & 1) != 0) {
    (**(code **)(*local_70 + 0x18))(local_70,local_78,local_88 & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_a8 & 1) != 0) {
    (*(code *)(*ppppppplStack_90)[3])
              (ppppppplStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
  }
  if ((local_1a0 & 1) != 0) {
    (**(code **)(*plStack_188 + 0x18))
              (plStack_188,local_190,CONCAT71(uStack_19f,local_1a0) & 0xfffffffffffffffe,1);
  }
  if ((local_1c0 & 1) != 0) {
    (**(code **)(*plStack_1a8 + 0x18))
              (plStack_1a8,local_1b0,CONCAT71(uStack_1bf,local_1c0) & 0xfffffffffffffffe,1);
  }
  FUN_0021b534(auStack_180);
LAB_0020bc48:
  FUN_002183b0(auStack_148);
  FUN_002183b0(auStack_d0);
  if (local_f8 != '\0') {
    FUN_01cfa44c(auStack_f0,local_e8);
  }
  if ((local_118 & 1) != 0) {
    (**(code **)(*plStack_100 + 0x18))
              (plStack_100,local_108,CONCAT71(uStack_117,local_118) & 0xfffffffffffffffe,1);
  }
  FUN_00200f9c(uVar8,auStack_280);
  FUN_001fc7e8(auStack_280);
  return 1;
}


