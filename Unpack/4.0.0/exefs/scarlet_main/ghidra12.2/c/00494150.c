/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00494150; name: FUN_00494150
 */


undefined8 FUN_00494150(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  int *piVar5;
  ushort *puVar6;
  char acStack_148 [8];
  char local_140 [256];
  undefined8 local_38;
  
  local_38 = param_3;
  switch(*param_2) {
  case 0:
    pcVar3 = "othername";
    break;
  case 1:
    piVar5 = *(int **)(param_2 + 2);
    pcVar3 = "email";
    goto LAB_00494220;
  case 2:
    piVar5 = *(int **)(param_2 + 2);
    pcVar3 = "DNS";
    goto LAB_00494220;
  case 3:
    pcVar3 = "X400Name";
    break;
  case 4:
    lVar2 = FUN_00485680(*(undefined8 *)(param_2 + 2),local_140,0x100);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_0049a7f0("DirName",local_140,&local_38);
joined_r0x004944a0:
    if (iVar1 != 0) goto switchD_00494184_default;
    goto LAB_00494234;
  case 5:
    pcVar3 = "EdiPartyName";
    break;
  case 6:
    piVar5 = *(int **)(param_2 + 2);
    pcVar3 = "URI";
LAB_00494220:
    iVar1 = thunk_FUN_0049a850(pcVar3,*(undefined8 *)(piVar5 + 2),(long)*piVar5,&local_38);
    goto joined_r0x00494480;
  case 7:
    puVar6 = *(ushort **)(*(int **)(param_2 + 2) + 2);
    iVar1 = **(int **)(param_2 + 2);
    if (iVar1 == 0x10) {
      local_140[0] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((*puVar6 & 0xff00) << 8 | (uint)*puVar6 << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[1] & 0xff00) << 8 | (uint)puVar6[1] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[2] & 0xff00) << 8 | (uint)puVar6[2] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[3] & 0xff00) << 8 | (uint)puVar6[3] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[4] & 0xff00) << 8 | (uint)puVar6[4] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[5] & 0xff00) << 8 | (uint)puVar6[5] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[6] & 0xff00) << 8 | (uint)puVar6[6] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
      sVar4 = strlen(local_140);
      (local_140 + sVar4)[0] = ':';
      (local_140 + sVar4)[1] = '\0';
      FUN_003e7390(acStack_148,5,&DAT_03bfbca5,
                   ((puVar6[7] & 0xff00) << 8 | (uint)puVar6[7] << 0x18) >> 0x10);
      strcat(local_140,acStack_148);
    }
    else {
      if (iVar1 != 4) {
        iVar1 = FUN_0049a7f0("IP Address","<invalid>",&local_38);
        goto joined_r0x004944a0;
      }
      FUN_003e7390(local_140,0x100,"%d.%d.%d.%d",(char)*puVar6,*(undefined1 *)((long)puVar6 + 1),
                   (char)puVar6[1],*(undefined1 *)((long)puVar6 + 3));
    }
    iVar1 = FUN_0049a7f0("IP Address",local_140,&local_38);
    goto joined_r0x00494480;
  case 8:
    FUN_003dfa20(local_140,0x100,*(undefined8 *)(param_2 + 2));
    iVar1 = FUN_0049a7f0("Registered ID",local_140,&local_38);
    goto joined_r0x00494480;
  default:
    goto switchD_00494184_default;
  }
  iVar1 = FUN_0049a7f0(pcVar3,"<unsupported>",&local_38);
joined_r0x00494480:
  if (iVar1 == 0) {
LAB_00494234:
    local_38 = 0;
  }
  else {
switchD_00494184_default:
  }
  return local_38;
}


