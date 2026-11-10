/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b56e4; name: FUN_002b56e4
 */


void FUN_002b56e4(long param_1,char *param_2)

{
  bool bVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *local_70;
  undefined8 *local_68;
  size_t sStack_60;
  undefined8 *local_58;
  undefined1 auStack_50 [8];
  undefined8 **local_48;
  
  if (*param_2 == '\0') {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    if (*(char *)(lVar4 + 0xa8) == '\0') goto LAB_002b5ad0;
    if ((*(byte *)(lVar4 + 0xb0) & 1) == 0) {
      if (*(byte *)(lVar4 + 0xb0) >> 1 == 0) goto LAB_002b5ad0;
    }
    else if (*(long *)(lVar4 + 0xb8) == 0) goto LAB_002b5ad0;
    pcVar9 = *(char **)PTR_PTR_047cc6f8;
    sVar2 = strlen(pcVar9);
    if (0xffffffffffffffef < sVar2) goto LAB_002b5e2c;
    if (sVar2 < 0x17) {
      local_68 = (undefined8 *)CONCAT71(local_68._1_7_,(char)((int)sVar2 << 1));
      puVar10 = (undefined8 *)((ulong)&local_68 | 1);
      if (sVar2 != 0) goto LAB_002b59ec;
    }
    else {
      uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
      puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      local_68 = (undefined8 *)(uVar5 | 1);
      sStack_60 = sVar2;
      local_58 = puVar10;
LAB_002b59ec:
      memcpy(puVar10,pcVar9,sVar2);
    }
    *(undefined1 *)((long)puVar10 + sVar2) = 0;
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    local_48 = &local_68;
                    /* try { // try from 002b5a18 to 002b5a67 has its CatchHandler @ 002b5ec8 */
    lVar4 = FUN_002c3ab0(param_1 + 0x108,&local_68,&DAT_03cc9966,&local_48,auStack_50);
    lVar6 = FUN_002c4c8c(lVar4 + 0x70,lVar6 + 0xb0);
    if (lVar4 + 0x78 != lVar6) {
      FUN_002c4d9c(lVar4 + 0x70);
    }
    FUN_002b4f10(param_1,&local_68);
    if (((ulong)local_68 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    lVar4 = lVar6;
    if (*(char *)(lVar6 + 0xe8) != '\0') {
      plVar7 = (long *)(lVar6 + 0xf0);
      if (*plVar7 != 0) {
        FUN_002c14bc(plVar7);
        FUN_0049e790(PTR_LAB_047cba48,*plVar7);
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
      }
      *(undefined1 *)(lVar6 + 0xe8) = 0;
    }
LAB_002b5ad0:
    if (*(char *)(lVar4 + 0xa8) != '\0') {
      if (*(char *)(lVar4 + 200) != '\0') {
        plVar7 = (long *)(lVar4 + 0xd0);
        if (*plVar7 != 0) {
          FUN_002c14bc(plVar7);
          FUN_0049e790(PTR_LAB_047cba48,*plVar7);
        }
        *(undefined1 *)(lVar4 + 200) = 0;
      }
      if ((*(byte *)(lVar4 + 0xb0) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar4 + 0xc0));
      }
      *(undefined1 *)(lVar4 + 0xa8) = 0;
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    }
    (**(code **)(**(long **)(lVar4 + 0x98) + 0x20))();
    return;
  }
  pcVar9 = *(char **)PTR_PTR_047cc6f0;
  sVar2 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar2) goto LAB_002b5e2c;
  plVar7 = (long *)(param_1 + 0x108);
  if (sVar2 < 0x17) {
    local_68 = (undefined8 *)CONCAT71(local_68._1_7_,(char)((int)sVar2 << 1));
    puVar10 = (undefined8 *)((ulong)&local_68 | 1);
    if (sVar2 != 0) goto LAB_002b579c;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_68 = (undefined8 *)(uVar5 | 1);
    sStack_60 = sVar2;
    local_58 = puVar10;
LAB_002b579c:
    memcpy(puVar10,pcVar9,sVar2);
  }
  *(undefined1 *)((long)puVar10 + sVar2) = 0;
                    /* try { // try from 002b57b0 to 002b57bf has its CatchHandler @ 002b5ecc */
  puVar3 = (undefined8 *)FUN_002c3c14(plVar7,&local_48,&local_68);
  puVar10 = (undefined8 *)*puVar3;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    puVar10[6] = local_58;
    puVar10[5] = sStack_60;
    puVar10[4] = local_68;
    sStack_60 = 0;
    local_58 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    puVar10[0xe] = 0;
    puVar10[0xd] = 0;
    puVar10[0x10] = 0;
    puVar10[0xf] = 0;
    puVar10[0xe] = puVar10 + 0xf;
    puVar10[0xc] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[7] = 0;
    puVar10[2] = local_48;
    *puVar10 = 0;
    puVar10[1] = 0;
    *puVar3 = puVar10;
    if (*(long *)*plVar7 == 0) {
      puVar3 = puVar10;
    }
    else {
      *plVar7 = *(long *)*plVar7;
      puVar3 = (undefined8 *)*puVar3;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x110),puVar3);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  }
  if (((ulong)local_68 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  local_68 = (undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0x80);
  lVar4 = FUN_002c3f38(puVar10 + 0xe,local_68,&DAT_03cc9966,&local_68,&local_48);
  lVar4 = *(long *)(lVar4 + 0x38);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x49) != '\0')) {
    FUN_00360570(lVar4 + 0x50);
    *(undefined1 *)(lVar4 + 0x49) = 0;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
  cVar8 = *(char *)(lVar4 + 0xa8);
  bVar1 = (cVar8 != '\0') != (*param_2 != '\0');
  if ((bVar1) || (cVar8 == '\0')) {
    if (!bVar1) {
      return;
    }
  }
  else {
    uVar5 = FUN_002c0c44(lVar4 + 0xb0,param_2 + 8);
    if ((uVar5 & 1) != 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    cVar8 = *(char *)(lVar4 + 0xa8);
  }
  if (cVar8 != '\0') {
    if ((*(byte *)(lVar4 + 0xb0) & 1) == 0) {
      if (*(byte *)(lVar4 + 0xb0) >> 1 != 0) {
LAB_002b5960:
        pcVar9 = *(char **)PTR_PTR_047cc6f8;
        sVar2 = strlen(pcVar9);
        if (0xffffffffffffffef < sVar2) goto LAB_002b5e2c;
        if (sVar2 < 0x17) {
          local_68 = (undefined8 *)CONCAT71(local_68._1_7_,(char)((int)sVar2 << 1));
          puVar10 = (undefined8 *)((ulong)&local_68 | 1);
          if (sVar2 != 0) goto LAB_002b5b6c;
        }
        else {
          uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
          puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
          local_68 = (undefined8 *)(uVar5 | 1);
          sStack_60 = sVar2;
          local_58 = puVar10;
LAB_002b5b6c:
          memcpy(puVar10,pcVar9,sVar2);
        }
        *(undefined1 *)((long)puVar10 + sVar2) = 0;
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
        if ((param_2[8] & 1U) == 0) {
          uVar5 = (ulong)((byte)param_2[8] >> 1);
        }
        else {
          uVar5 = *(ulong *)(param_2 + 0x10);
        }
        local_48 = &local_68;
                    /* try { // try from 002b5bac to 002b5bff has its CatchHandler @ 002b5ec4 */
        lVar6 = FUN_002c3ab0(param_1 + 0x108,&local_68,&DAT_03cc9966,&local_48,auStack_50);
        lVar4 = FUN_002c4c8c(lVar6 + 0x70,lVar4 + 0xb0);
        if (lVar6 + 0x78 != lVar4) {
          FUN_002c4d9c(lVar6 + 0x70);
        }
        if (uVar5 == 0) {
          FUN_002b4f10(param_1,&local_68);
        }
        if (((ulong)local_68 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_58);
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
        lVar4 = lVar6;
        if (*(char *)(lVar6 + 0xe8) != '\0') {
          plVar7 = (long *)(lVar6 + 0xf0);
          if (*plVar7 != 0) {
            FUN_002c14bc(plVar7);
            FUN_0049e790(PTR_LAB_047cba48,*plVar7);
            lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
          }
          *(undefined1 *)(lVar6 + 0xe8) = 0;
        }
      }
    }
    else if (*(long *)(lVar4 + 0xb8) != 0) goto LAB_002b5960;
  }
  FUN_002c0d78(lVar4 + 0xa8,param_2);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
  if (*(char *)(lVar4 + 200) != '\0') {
    local_68 = (undefined8 *)0x0;
                    /* try { // try from 002b5c90 to 002b5cbb has its CatchHandler @ 002b5e80 */
    lVar4 = FUN_002b5ef0(lVar4,lVar4 + 0xd0,&local_68);
    plVar7 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0x98);
    if (lVar4 == 0) {
      local_70 = local_68;
      local_68 = (undefined8 *)0x0;
                    /* try { // try from 002b5d10 to 002b5d17 has its CatchHandler @ 002b5e34 */
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_70);
      puVar3 = local_70;
      puVar10 = local_68;
      if (local_70 != (undefined8 *)0x0) {
        plVar7 = local_70 + 1;
        do {
          lVar4 = *plVar7;
          cVar8 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar1) {
            *plVar7 = lVar4 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)*local_70)(local_70);
          FUN_0049e790(PTR_LAB_047cba48,puVar3);
          puVar10 = local_68;
        }
      }
    }
    else {
      (**(code **)(*plVar7 + 0x18))();
      puVar10 = local_68;
    }
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    plVar7 = puVar10 + 1;
    do {
      lVar4 = *plVar7;
      cVar8 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar1) {
        *plVar7 = lVar4 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar4 + -1 != 0) {
      return;
    }
    local_68 = puVar10;
    (**(code **)*puVar10)(puVar10);
    goto LAB_002b5de4;
  }
  pcVar9 = *(char **)PTR_PTR_047cc6f8;
  sVar2 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar2) {
LAB_002b5e2c:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_68 = (undefined8 *)CONCAT71(local_68._1_7_,(char)((int)sVar2 << 1));
    puVar10 = (undefined8 *)((ulong)&local_68 | 1);
    if (sVar2 != 0) goto LAB_002b5da0;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_68 = (undefined8 *)(uVar5 | 1);
    sStack_60 = sVar2;
    local_58 = puVar10;
LAB_002b5da0:
    memcpy(puVar10,pcVar9,sVar2);
  }
  *(undefined1 *)((long)puVar10 + sVar2) = 0;
                    /* try { // try from 002b5dc4 to 002b5dcf has its CatchHandler @ 002b5e7c */
  FUN_002b3fb4(param_1,&local_68,
               *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0xb0);
  if (((ulong)local_68 & 1) == 0) {
    return;
  }
  puVar10 = local_58;
LAB_002b5de4:
  FUN_0049e790(PTR_LAB_047cba48,puVar10);
  return;
}


