/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012e090; name: FUN_0012e090
 */


long FUN_0012e090(long param_1,char *param_2,long *param_3)

{
  char *__s;
  char cVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 local_150;
  undefined1 local_148 [8];
  long local_140;
  undefined8 local_138;
  char local_130 [208];
  
  local_138 = 0;
  local_140 = param_1;
  pcVar5 = strchr(param_2,0x25);
  if (pcVar5 != (char *)0x0) {
    do {
      FUN_0012e5d0(&local_140,param_2,(long)pcVar5 - (long)param_2);
      lVar13 = local_140;
      switch(pcVar5[1]) {
      case '%':
        if (199 < local_138._4_4_) {
          plVar15 = *(long **)(local_140 + 0x10);
          lVar7 = FUN_0013be00(local_140,local_130);
          *plVar15 = lVar7;
          *(byte *)(plVar15 + 1) = *(byte *)(lVar7 + 8) | 0x40;
          *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 0x10;
          local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
          FUN_00140b30(lVar13);
          local_138._4_4_ = 0;
          local_138 = 1;
        }
        local_130[local_138._4_4_] = '%';
        iVar4 = local_138._4_4_ + 1;
        goto LAB_0012e51c;
      default:
                    /* WARNING: Subroutine does not return */
        FUN_00125b90(param_1,"invalid option \'%%%c\' to \'lua_pushfstring\'");
      case 'I':
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 < -7)) {
          local_150 = *(long *)(param_3[1] + (long)iVar4);
        }
        else {
          plVar15 = (long *)*param_3;
          *param_3 = (long)(plVar15 + 1);
          local_150 = *plVar15;
        }
        goto LAB_0012e4bc;
      case 'U':
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 < -7)) {
          uVar8 = *(ulong *)(param_3[1] + (long)iVar4);
          if (0x7f < uVar8) goto LAB_0012e23c;
LAB_0012e43c:
          local_150 = CONCAT17((char)uVar8,(undefined7)local_150);
          iVar4 = 1;
        }
        else {
          puVar10 = (ulong *)*param_3;
          *param_3 = (long)(puVar10 + 1);
          uVar8 = *puVar10;
          if (uVar8 < 0x80) goto LAB_0012e43c;
LAB_0012e23c:
          lVar7 = 0;
          lVar13 = 0x700000000;
          uVar2 = 0x3f;
          do {
            uVar14 = uVar2;
            bVar3 = (byte)uVar8;
            uVar8 = uVar8 >> 6;
            uVar2 = uVar14 >> 1;
            lVar13 = lVar13 + -0x100000000;
            local_148[lVar7 + -1] = bVar3 & 0x3f | 0x80;
            lVar7 = lVar7 + -1;
          } while (uVar2 < uVar8);
          local_148[(lVar13 >> 0x20) + -8] = (byte)uVar8 | ~(byte)uVar14 & 0xfe;
          iVar4 = 1 - (int)lVar7;
        }
        FUN_0012e5d0(&local_140,local_148 + -(long)iVar4);
        break;
      case 'c':
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 < -7)) {
          cVar1 = (char)*(undefined4 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar9 = (undefined4 *)*param_3;
          *param_3 = (long)(puVar9 + 2);
          cVar1 = (char)*puVar9;
        }
        if (199 < local_138._4_4_) {
          plVar15 = *(long **)(local_140 + 0x10);
          lVar7 = FUN_0013be00(local_140,local_130);
          *plVar15 = lVar7;
          *(byte *)(plVar15 + 1) = *(byte *)(lVar7 + 8) | 0x40;
          *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 0x10;
          local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
          FUN_00140b30(lVar13);
          local_138._4_4_ = 0;
          local_138 = 1;
        }
        local_130[local_138._4_4_] = cVar1;
        local_138 = CONCAT44(local_138._4_4_ + 1,(int)local_138);
        break;
      case 'd':
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 < -7)) {
          piVar12 = (int *)(param_3[1] + (long)iVar4);
        }
        else {
          piVar12 = (int *)*param_3;
          *param_3 = (long)(piVar12 + 2);
        }
        local_150 = (long)*piVar12;
LAB_0012e4bc:
        local_148[0] = 3;
LAB_0012e4e4:
        FUN_0012e740(&local_140,&local_150);
        break;
      case 'f':
        iVar4 = *(int *)((long)param_3 + 0x1c);
        if ((iVar4 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar4 + 0x10, iVar4 < -0xf)) {
          plVar15 = (long *)(param_3[2] + (long)iVar4);
        }
        else {
          plVar15 = (long *)*param_3;
          *param_3 = (long)(plVar15 + 1);
        }
        local_150 = *plVar15;
        local_148[0] = 0x13;
        goto LAB_0012e4e4;
      case 'p':
        if (0xa8 < local_138._4_4_) {
          plVar15 = *(long **)(local_140 + 0x10);
          lVar7 = FUN_0013be00(local_140,local_130);
          *plVar15 = lVar7;
          *(byte *)(plVar15 + 1) = *(byte *)(lVar7 + 8) | 0x40;
          *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 0x10;
          local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
          FUN_00140b30(lVar13);
          local_138._4_4_ = 0;
          local_138 = 1;
        }
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 < -7)) {
          puVar11 = (undefined8 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar11 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar11 + 1);
        }
        iVar4 = snprintf(local_130 + local_138._4_4_,0x20,"%p",*puVar11);
        iVar4 = local_138._4_4_ + iVar4;
LAB_0012e51c:
        local_138 = CONCAT44(iVar4,(int)local_138);
        break;
      case 's':
        iVar4 = (int)param_3[3];
        if ((iVar4 < 0) && (*(int *)(param_3 + 3) = iVar4 + 8, iVar4 < -7)) {
          puVar11 = (undefined8 *)(param_3[1] + (long)iVar4);
        }
        else {
          puVar11 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar11 + 1);
        }
        __s = "(null)";
        if ((char *)*puVar11 != (char *)0x0) {
          __s = (char *)*puVar11;
        }
        sVar6 = strlen(__s);
        FUN_0012e5d0(&local_140,__s,sVar6);
      }
      param_2 = pcVar5 + 2;
      pcVar5 = strchr(param_2,0x25);
    } while (pcVar5 != (char *)0x0);
  }
  sVar6 = strlen(param_2);
  FUN_0012e5d0(&local_140,param_2,sVar6);
  lVar13 = local_140;
  plVar15 = *(long **)(local_140 + 0x10);
  lVar7 = FUN_0013be00(local_140,local_130,(long)local_138._4_4_);
  *plVar15 = lVar7;
  *(byte *)(plVar15 + 1) = *(byte *)(lVar7 + 8) | 0x40;
  *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 0x10;
  local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
  FUN_00140b30(lVar13);
  return *(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18;
}


