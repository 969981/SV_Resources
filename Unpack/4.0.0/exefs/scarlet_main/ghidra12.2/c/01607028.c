/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01607028; name: FUN_01607028
 */


undefined8 FUN_01607028(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [32];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 auStack_238 [168];
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  code *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [4];
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  
  local_290 = 0;
  uStack_288 = 0;
  local_8c = 0x3f80000000000008;
  uStack_84 = 0x100000064;
  local_7c = 0x461c4000;
  local_74 = 0x1010101;
  local_70 = 1;
  (**(code **)(*(long *)param_1[0xc] + 0x28))((long *)param_1[0xc],auStack_2b0);
  (**(code **)(*(long *)param_1[0xc] + 0x30))();
  (**(code **)(*(long *)param_1[0x14] + 0x28))();
  (**(code **)(*(long *)param_1[0x14] + 0x20))((long *)param_1[0x14],auStack_e8);
  (**(code **)(*(long *)param_1[8] + 0x18))();
  (**(code **)(*(long *)param_1[4] + 0x28))((long *)param_1[4],&local_190);
  local_7c = 0x461c4000;
  local_74 = 0x1010101;
  local_8c = 0x3f80000000000008;
  uStack_84 = 0x100000064;
  local_190 = &LAB_02e42bdc;
  puStack_188 = &LAB_02e42be0;
  local_180 = &LAB_02e42be4;
  puStack_178 = &LAB_02e42c08;
  local_170 = &LAB_02e42c2c;
  puStack_168 = &LAB_02e42c4c;
  local_70 = 1;
  local_150 = &LAB_02e42c80;
  local_160 = FUN_029aab28;
  puStack_158 = &LAB_02e42c6c;
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x30);
  if (lVar4 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  FUN_0135d328(auStack_2c0,lVar4,0);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2,auStack_2b0);
  }
  uVar2 = (**(code **)(*(long *)param_1[4] + 0x10))();
  if (((uVar2 & 1) != 0) ||
     (iVar1 = (**(code **)(*(long *)param_1[4] + 0x20))((long *)param_1[4],&local_190), iVar1 == 1))
  {
    if (*(char *)((long)param_1 + 0xe2) == '\0') {
      lVar3 = (**(code **)(*(long *)param_1[0x14] + 0x18))((long *)param_1[0x14],auStack_e8);
      if ((lVar3 == 0) ||
         (iVar1 = (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,auStack_e0,0), iVar1 != 1
         )) goto LAB_016072f8;
      *(undefined1 *)((long)param_1 + 0xe2) = 1;
    }
    uVar2 = (**(code **)(*(long *)param_1[0xc] + 0x18))();
    if (((uVar2 & 1) != 0) ||
       (iVar1 = (**(code **)(*(long *)param_1[0xc] + 0x20))
                          ((long *)param_1[0xc],auStack_2b0,auStack_238), iVar1 == 1)) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        iVar1 = (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],auStack_90);
        if (iVar1 != 1) goto LAB_016072f8;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      if (*(char *)((long)param_1 + 0xe1) != '\0') {
        uVar5 = 1;
        goto LAB_016072cc;
      }
      iVar1 = (**(code **)(*(long *)param_1[0x10] + 0x10))((long *)param_1[0x10],&local_8c);
      if (iVar1 == 1) {
        uVar5 = 1;
        *(undefined1 *)((long)param_1 + 0xe1) = 1;
        goto LAB_016072cc;
      }
    }
  }
LAB_016072f8:
  uVar5 = 0;
LAB_016072cc:
  FUN_0135d2ec(auStack_2c0);
  return uVar5;
}


