/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01762208; name: FUN_01762208
 */


undefined1  [16] FUN_01762208(long param_1)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  FileHandle *pFVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char acStack_648 [772];
  undefined1 auStack_344 [772];
  long local_28;
  
  if (*(char *)(param_1 + 0x89) != '\0') {
    uVar6 = 0;
    auVar9 = ZEXT816(0);
    uVar4 = 0x100000000;
    goto LAB_017622ec;
  }
  pcVar2 = (char *)FUN_017623f4(param_1 + 0x40,auStack_344,0x301);
  snprintf(acStack_648,0x301,"%s",pcVar2);
  auVar9 = FUN_01762420(acStack_648);
  uVar4 = auVar9._0_8_ & 0xff00000000;
  if ((uVar4 != 0) && (auVar9._8_4_ == 0)) {
    plVar7 = (long *)(param_1 + 0x78);
    lVar3 = 0;
    if (*plVar7 != -1) {
      lVar3 = *plVar7;
    }
    nn::fs::CreateFile(pcVar2,lVar3);
    pFVar8 = (FileHandle *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar1 = nn::fs::OpenFile(pFVar8,pcVar2,2);
      if (uVar1 != 0) goto LAB_0176233c;
      *(undefined1 *)(param_1 + 0x89) = 1;
      nn::fs::GetFileSize(&local_28,*(undefined8 *)(param_1 + 0x70));
      lVar3 = *(long *)(param_1 + 0x78);
      if (lVar3 == -1) {
        uVar4 = 0;
        uVar5 = 0;
        *plVar7 = local_28;
      }
      else {
        if (lVar3 < local_28) {
          uVar5 = *(undefined8 *)(param_1 + 0x70);
          goto LAB_0176235c;
        }
        if (lVar3 <= local_28) goto LAB_017622d8;
        FUN_017de8f0(param_1);
        uVar1 = nn::fs::DeleteFile(pcVar2);
        if (uVar1 == 0) {
          nn::fs::CreateFile(pcVar2,*(long *)(param_1 + 0x78));
          uVar1 = nn::fs::OpenFile(pFVar8,pcVar2,2);
          uVar5 = 0;
          uVar4 = (ulong)uVar1;
          *(bool *)(param_1 + 0x89) = uVar1 == 0;
        }
        else {
          uVar4 = (ulong)uVar1;
          uVar5 = 0xb;
        }
      }
    }
    else {
      uVar1 = nn::fs::OpenFile(pFVar8,pcVar2,6);
      if (uVar1 == 0) {
        *(undefined1 *)(param_1 + 0x89) = 1;
        uVar5 = *(undefined8 *)(param_1 + 0x70);
        if (*(long *)(param_1 + 0x78) == -1) {
          nn::fs::GetFileSize(plVar7,uVar5);
          uVar4 = 0;
          uVar5 = 0;
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
        }
        else {
LAB_0176235c:
          nn::fs::SetFileSize(uVar5);
LAB_017622d8:
          uVar4 = 0;
          uVar5 = 0;
        }
      }
      else {
LAB_0176233c:
        uVar5 = 0;
        uVar4 = (ulong)uVar1;
      }
    }
    auVar9._8_8_ = uVar4;
    auVar9._0_8_ = uVar5;
    uVar4 = 0x100000000;
  }
  uVar6 = auVar9._0_8_ & 0xffffff0000000000;
LAB_017622ec:
  auVar10._0_8_ = auVar9._0_8_ & 0xffffffff | uVar4 | uVar6;
  auVar10._8_8_ = auVar9._8_8_ & 0xffffffff;
  return auVar10;
}


