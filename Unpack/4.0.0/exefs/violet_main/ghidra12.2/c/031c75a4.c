/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c75a4; name: FUN_031c75a4
 */


char ** FUN_031c75a4(char **param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char **ppcVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 *local_220;
  int local_218;
  uint local_214;
  undefined1 local_210 [128];
  char **local_190;
  int local_188;
  uint local_184;
  char *local_180 [16];
  char *local_100;
  int local_f8;
  int local_f4;
  char local_f0 [128];
  undefined4 local_70;
  
  local_100 = local_f0;
  local_f8 = 0;
  local_f4 = -0x7fffff80;
  if (&local_100 != param_1) {
    iVar10 = *(int *)(param_1 + 1);
    pcVar9 = *param_1;
    if (0x80 < iVar10) {
      FUN_031ca4ac(&local_100,PTR_PTR_047d1a50 + 0x20,(long)iVar10);
    }
    memcpy(local_100,pcVar9,(long)iVar10);
    local_70 = *(undefined4 *)(param_1 + 0x12);
    local_f8 = iVar10;
    if (1 < iVar10) {
      lVar6 = 0;
      do {
        if (local_100[lVar6] == '\\') {
          local_100[lVar6] = '/';
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar10 + -1);
    }
  }
  pcVar9 = local_100;
  if (*local_100 == '/') {
    puVar7 = &DAT_03bf34ed;
    if (local_100[1] != '/') {
      puVar7 = &DAT_03bdfb3b;
    }
  }
  else {
    puVar7 = &DAT_03c886bc;
  }
  local_190 = local_180;
  uVar11 = 1;
  local_188 = 1;
  local_184 = 0x80000010;
  local_180[0] = local_100;
  pvVar5 = memchr(local_100,0x2f,(long)(local_f8 + -1));
  uVar8 = (int)pvVar5 - (int)pcVar9;
  if (pvVar5 == (void *)0x0) {
    uVar8 = 0xffffffff;
  }
  if (-1 < (int)uVar8) {
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      pcVar9[uVar8] = '\0';
      pcVar1 = local_100 + (int)(uVar8 + 1);
      uVar11 = (long)local_188 + 1;
      if ((int)(local_184 & 0x7fffffff) <= local_188) {
        FUN_031b108c(&local_190,puVar2,uVar11);
      }
      pcVar9 = local_100;
      local_190[local_188] = pcVar1;
      local_188 = (int)uVar11;
      pvVar5 = memchr(local_100 + (uVar8 + 1),0x2f,(long)(int)((local_f8 - uVar8) + -2));
      uVar8 = (int)pvVar5 - (int)pcVar9;
      if (pvVar5 == (void *)0x0) {
        uVar8 = 0xffffffff;
      }
    } while (-1 < (int)uVar8);
  }
  local_220 = local_210;
  local_218 = 0;
  local_214 = 0x80000010;
  iVar10 = (int)uVar11;
  if (0x10 < (int)uVar11) {
    FUN_031b108c(&local_220,PTR_PTR_047d1a50 + 0x20,uVar11 & 0xffffffff);
    iVar10 = local_188;
  }
  if (0 < iVar10) {
    lVar13 = 0;
    lVar6 = 0;
    iVar10 = 0;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      ppcVar3 = local_190;
      pcVar9 = *(char **)((long)local_190 + lVar13);
      iVar4 = strcmp("..",pcVar9);
      if (iVar4 == 0) {
        if (iVar10 == 0) {
          lVar12 = (long)local_218 + 1;
          if ((int)(local_214 & 0x7fffffff) <= local_218) {
            FUN_031b108c(&local_220,puVar2,lVar12);
            pcVar9 = *(char **)((long)ppcVar3 + lVar13);
          }
          iVar10 = 0;
          goto LAB_031c7894;
        }
        local_218 = local_218 + -1;
        iVar10 = iVar10 + -1;
      }
      else {
        iVar4 = strcmp(".",pcVar9);
        if ((iVar4 != 0) && (*pcVar9 != '\0')) {
          lVar12 = (long)local_218 + 1;
          iVar10 = iVar10 + 1;
          if ((int)(local_214 & 0x7fffffff) <= local_218) {
            FUN_031b108c(&local_220,PTR_PTR_047d1a50 + 0x20,lVar12);
            pcVar9 = *(char **)((long)ppcVar3 + lVar13);
          }
LAB_031c7894:
          *(char **)(local_220 + (long)local_218 * 8) = pcVar9;
          local_218 = (int)lVar12;
        }
      }
      lVar6 = lVar6 + 1;
      lVar13 = lVar13 + 8;
    } while (lVar6 < local_188);
  }
  FUN_031c6afc(param_1,puVar7,0xffffffff);
  if (0 < local_218) {
    lVar6 = 0;
    do {
      FUN_031c79a0(param_1,*(undefined8 *)(local_220 + lVar6 * 8),0,0);
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_218);
  }
  local_218 = 0;
  if ((-1 < (int)local_214) && (local_220 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_220,(ulong)local_214 << 3);
  }
  local_188 = 0;
  if ((-1 < (int)local_184) && (local_190 != (char **)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_190,(ulong)local_184 << 3);
  }
  local_f8 = 0;
  if ((-1 < local_f4) && (local_100 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return param_1;
}


