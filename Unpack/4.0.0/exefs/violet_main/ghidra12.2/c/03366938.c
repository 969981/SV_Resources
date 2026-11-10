/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03366938; name: FUN_03366938
 */


void FUN_03366938(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  size_t sVar2;
  char cVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  code *pcVar12;
  char *pcVar13;
  uint uVar14;
  size_t sVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long local_68;
  
  puVar4 = PTR_DAT_047d1a08;
  uVar11 = param_3 - param_2;
  iVar6 = (int)uVar11;
  if (iVar6 < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      if (*(char *)(param_2 + uVar17) != ' ' && *(char *)(param_2 + uVar17) != '\t')
      goto LAB_033669a0;
      uVar17 = uVar17 + 1;
    } while ((uVar11 & 0xffffffff) != uVar17);
    uVar17 = uVar11 & 0xffffffff;
  }
LAB_033669a0:
  iVar16 = (int)uVar17;
  uVar14 = (uint)param_2;
  iVar7 = (int)param_3;
  if (iVar16 + 1 < iVar6) {
    lVar19 = 0;
    iVar18 = ~uVar14 + iVar7;
    do {
      if (*(char *)(param_2 + iVar18) != ' ' && *(char *)(param_2 + iVar18) != '\t') break;
      lVar19 = lVar19 + 1;
      iVar18 = iVar18 + -1;
    } while ((long)iVar16 + 1 + lVar19 < (long)iVar6);
  }
  else {
    lVar19 = 0;
  }
  iVar18 = (int)lVar19;
  iVar6 = (iVar6 - iVar16) - iVar18;
  local_68 = 0x20;
  pcVar13 = (char *)(param_2 + (uVar17 & 0xffffffff));
  sVar15 = (size_t)iVar6;
  puVar8 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  pcVar12 = *(code **)(puVar4 + 0x10);
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(puVar8,"ParsedTypeName");
  }
  puVar8[2] = 0;
  puVar8[3] = 0;
  *(undefined4 *)((long)puVar8 + 0x14) = 0x80000000;
  *puVar8 = 0;
  puVar8[1] = 0;
  *param_1 = puVar8;
  cVar3 = pcVar13[(long)((sVar15 << 0x20) + -0x100000000) >> 0x20];
  if (cVar3 == '*') {
    lVar19 = (sVar15 << 0x20) + -0x200000000;
    uVar11 = lVar19 >> 0x20;
    pcVar9 = pcVar13 + uVar11;
    if (pcVar13 == "char") {
      if (pcVar9 == "") goto LAB_03366fd0;
    }
    else {
      sVar15 = uVar11;
      if (3 < uVar11) {
        sVar15 = 4;
      }
      iVar6 = memcmp(pcVar13,&DAT_03c2b01f,sVar15);
      if ((lVar19 == 0x400000000) && (iVar6 == 0)) goto LAB_03366fd0;
    }
    if (pcVar13 == "const char") {
      if (pcVar9 == "") goto LAB_03366fd0;
    }
    else {
      if (9 < uVar11) {
        uVar11 = 10;
      }
      iVar6 = memcmp(pcVar13,"const char",uVar11);
      if ((lVar19 == 0xa00000000) && (iVar6 == 0)) goto LAB_03366fd0;
    }
    *(undefined4 *)((long)puVar8 + 0x1c) = 3;
LAB_03366e78:
    FUN_03366938(&local_68,pcVar13,pcVar9);
    iVar6 = *(int *)(puVar8 + 2);
    lVar19 = (long)iVar6;
    if ((int)(*(uint *)((long)puVar8 + 0x14) & 0x7fffffff) <= iVar6) {
      FUN_03367af0(puVar8 + 1,lVar19 + 1);
      iVar6 = *(int *)(puVar8 + 2);
    }
    *(long *)(puVar8[1] + (long)iVar6 * 8) = local_68;
    local_68 = 0;
    *(int *)(puVar8 + 2) = (int)(lVar19 + 1);
    FUN_03367004(&local_68);
    return;
  }
  if (cVar3 == '>') {
    if (iVar6 < 1) {
      iVar7 = -1;
    }
    else {
      iVar10 = 0;
      iVar7 = ~uVar14 + ((iVar7 - iVar16) - iVar18);
      do {
        cVar3 = *(char *)((uVar17 & 0xffffffff) + param_2 + -1 + sVar15);
        if (cVar3 == '<') {
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_03366ce0;
        }
        else if (cVar3 == '>') {
          iVar10 = iVar10 + 1;
        }
        iVar7 = iVar7 + -1;
        bVar1 = 1 < (long)sVar15;
        sVar15 = sVar15 - 1;
      } while (bVar1);
      iVar7 = -1;
    }
LAB_03366ce0:
    *(undefined4 *)((long)puVar8 + 0x1c) = 4;
    iVar6 = (iVar6 - iVar7) + -3;
    FUN_031ca644(puVar8,pcVar13,pcVar13 + iVar7);
    if (iVar6 == 0) {
      return;
    }
    pcVar9 = pcVar13 + iVar7 + 1;
    pcVar13 = pcVar9 + iVar6;
    do {
      uVar14 = (int)pcVar13 - (int)pcVar9;
      if ((int)uVar14 < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        iVar6 = 0;
        do {
          cVar3 = pcVar9[uVar11];
          if (cVar3 == '>') {
            iVar6 = iVar6 + -1;
          }
          else if (cVar3 == '<') {
            iVar6 = iVar6 + 1;
          }
          else if (iVar6 == 0) {
            if (cVar3 == ',') goto LAB_03366d7c;
            iVar6 = 0;
          }
          uVar11 = uVar11 + 1;
        } while ((long)(int)uVar14 != uVar11);
        uVar11 = (ulong)uVar14;
      }
LAB_03366d7c:
      FUN_03366938(&local_68,pcVar9,pcVar9 + (uVar11 & 0xffffffff));
      iVar6 = *(int *)(puVar8 + 2);
      lVar19 = (long)iVar6;
      if ((int)(*(uint *)((long)puVar8 + 0x14) & 0x7fffffff) <= iVar6) {
        FUN_03367af0(puVar8 + 1,lVar19 + 1);
        iVar6 = *(int *)(puVar8 + 2);
      }
      *(long *)(puVar8[1] + (long)iVar6 * 8) = local_68;
      local_68 = 0;
      *(int *)(puVar8 + 2) = (int)(lVar19 + 1);
      FUN_03367004(&local_68);
      iVar6 = (int)uVar11;
      pcVar13 = pcVar9 + (iVar6 + 1) + (int)((uVar14 - iVar6) + -2);
      pcVar5 = pcVar9 + (iVar6 + 1);
      if ((int)uVar14 <= iVar6 + 2) {
        pcVar13 = pcVar9;
        pcVar5 = pcVar9;
      }
      pcVar9 = pcVar5;
      if (pcVar9 == pcVar13) {
        return;
      }
    } while( true );
  }
  if (cVar3 == ']') {
    if (iVar6 < 1) {
      iVar7 = -1;
    }
    else {
      iVar10 = 0;
      iVar7 = ~uVar14 + ((iVar7 - iVar16) - iVar18);
      do {
        cVar3 = *(char *)((uVar17 & 0xffffffff) + param_2 + -1 + sVar15);
        if (cVar3 == '[') {
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_03366be8;
        }
        else if (cVar3 == ']') {
          iVar10 = iVar10 + 1;
        }
        iVar7 = iVar7 + -1;
        bVar1 = 1 < (long)sVar15;
        sVar15 = sVar15 - 1;
      } while (bVar1);
      iVar7 = -1;
    }
LAB_03366be8:
    uVar14 = (iVar6 - iVar7) - 3;
    local_68 = (long)((iVar6 - iVar7) + -2);
    pcVar9 = (char *)(**(code **)puVar4)(0,&local_68,0);
    if (0 < (int)uVar14) {
      strncpy(pcVar9,pcVar13 + (long)iVar7 + 1,(ulong)uVar14);
    }
    pcVar9[(int)uVar14] = '\0';
    uVar11 = strtoul(pcVar9,(char **)0x0,0);
    sVar15 = strlen(pcVar9);
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pcVar9,(long)((int)sVar15 + 1))
    ;
    pcVar9 = pcVar13 + (long)iVar7 + -1;
    *(int *)(puVar8 + 3) = (int)uVar11;
    *(undefined4 *)((long)puVar8 + 0x1c) = 2;
    goto LAB_03366e78;
  }
  pcVar9 = pcVar13 + iVar6;
  if (pcVar13 == "hkVariantArray") {
    if (pcVar9 != "") goto LAB_03366e14;
LAB_03366edc:
    uVar14 = 1;
    *(undefined4 *)((long)puVar8 + 0x1c) = 1;
    FUN_03367af0(puVar8 + 1,1);
    *(undefined8 *)(puVar8[1] + (long)*(int *)(puVar8 + 2) * 8) = 0;
    *(undefined4 *)(puVar8 + 2) = 1;
  }
  else {
    sVar2 = sVar15;
    if (0xd < sVar15) {
      sVar2 = 0xe;
    }
    iVar7 = memcmp(pcVar13,"hkVariantArray",sVar2);
    if ((iVar6 == 0xe) && (iVar7 == 0)) goto LAB_03366edc;
LAB_03366e14:
    if (pcVar13 == "hkReflect::Any") {
      if (pcVar9 == "") goto LAB_03366edc;
      uVar14 = 0;
    }
    else {
      sVar2 = sVar15;
      if (0xd < sVar15) {
        sVar2 = 0xe;
      }
      iVar7 = memcmp(pcVar13,"hkReflect::Any",sVar2);
      uVar14 = 0;
      if ((iVar6 == 0xe) && (iVar7 == 0)) goto LAB_03366edc;
    }
  }
  if (pcVar13 == "hkVariant") {
    if (pcVar9 == "") goto LAB_03366f84;
  }
  else {
    sVar2 = sVar15;
    if (8 < sVar15) {
      sVar2 = 9;
    }
    iVar7 = memcmp(pcVar13,"hkVariant",sVar2);
    if ((iVar6 == 9) && (iVar7 == 0)) goto LAB_03366f84;
  }
  if (pcVar13 == "hkReflect::Var") {
    if (pcVar9 != "") goto LAB_03366fd0;
  }
  else {
    if (0xd < sVar15) {
      sVar15 = 0xe;
    }
    iVar7 = memcmp(pcVar13,"hkReflect::Var",sVar15);
    if ((iVar6 != 0xe) || (iVar7 != 0)) {
LAB_03366fd0:
      *(undefined4 *)((long)puVar8 + 0x1c) = 0;
      FUN_031ca644(puVar8,pcVar13,pcVar9);
      return;
    }
  }
LAB_03366f84:
  *(undefined4 *)((long)puVar8 + 0x1c) = 3;
  iVar6 = uVar14 + 1;
  if ((*(uint *)((long)puVar8 + 0x14) & 0x7fffffff) <= uVar14) {
    FUN_03367af0(puVar8 + 1,iVar6);
    uVar14 = *(uint *)(puVar8 + 2);
  }
  *(undefined8 *)(puVar8[1] + (long)(int)uVar14 * 8) = 0;
  *(int *)(puVar8 + 2) = iVar6;
  return;
}


