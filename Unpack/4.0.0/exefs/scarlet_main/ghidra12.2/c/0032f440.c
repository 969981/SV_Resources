/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032f440; name: FUN_0032f440
 */


undefined8 FUN_0032f440(char *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint16_t uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  char acStack_90 [48];
  ulong local_60;
  long local_58;
  char *local_50;
  ulong local_48;
  ulong local_40;
  char *local_38;
  uint local_28;
  int local_24;
  
  local_38 = (char *)0x0;
  local_50 = (char *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_60 = 0;
  local_58 = 0;
  if (param_1 == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(param_1);
  }
                    /* try { // try from 0032f47c to 0032f48b has its CatchHandler @ 0032f660 */
  uVar5 = FUN_0038f050(param_1,sVar4,&local_48,&local_60);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x10) = 0x1c;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined1 *)((long)param_2 + 1) = 0x1c;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    uVar5 = local_48 >> 1 & 0x7f;
    pcVar7 = (char *)((ulong)&local_48 | 1);
    if ((local_48 & 1) != 0) {
      uVar5 = local_40;
      pcVar7 = local_38;
    }
                    /* try { // try from 0032f4d0 to 0032f4d7 has its CatchHandler @ 0032f65c */
    pcVar6 = (char *)FUN_0038d5e0(pcVar7,0x25,uVar5);
    pcVar7 = (char *)((ulong)&local_48 | 1);
    if ((local_48 & 1) != 0) {
      pcVar7 = local_38;
    }
    if (pcVar6 != (char *)0x0) {
      uVar5 = (long)pcVar6 - (long)pcVar7;
      if (pcVar6 < pcVar7) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_24 = 0;
      if (uVar5 < 0x2f) {
        strncpy(acStack_90,pcVar7,uVar5);
        acStack_90[uVar5] = '\0';
                    /* try { // try from 0032f51c to 0032f557 has its CatchHandler @ 0032f658 */
        iVar3 = inet_pton(0x1c,acStack_90,param_2 + 1);
        if (iVar3 != 0) {
          uVar1 = local_48 >> 1 & 0x7f;
          if ((local_48 & 1) != 0) {
            uVar1 = local_40;
          }
          iVar3 = FUN_0038d140(pcVar6 + 1,uVar1 + ~uVar5,&local_24);
                    /* try { // try from 0032f590 to 0032f597 has its CatchHandler @ 0032f658 */
          if ((iVar3 != 0) || (local_24 = FUN_00354240(pcVar6 + 1), local_24 != 0)) {
            *(int *)(param_2 + 3) = local_24;
            if ((local_60 & 1) != 0) goto LAB_0032f5ac;
            goto LAB_0032f57c;
          }
        }
      }
LAB_0032f60c:
      uVar8 = 0;
      goto joined_r0x0032f610;
    }
                    /* try { // try from 0032f568 to 0032f56f has its CatchHandler @ 0032f65c */
    iVar3 = inet_pton(0x1c,pcVar7,param_2 + 1);
    if (iVar3 != 0) {
      if ((local_60 & 1) == 0) {
LAB_0032f57c:
        if (1 < (byte)local_60) {
          pcVar7 = (char *)((ulong)&local_60 | 1);
LAB_0032f5b8:
          iVar3 = sscanf(pcVar7,"%d",&local_28);
          if ((iVar3 == 1) && (local_28 >> 0x10 == 0)) {
                    /* try { // try from 0032f5e0 to 0032f657 has its CatchHandler @ 0032f65c */
            uVar2 = htons((uint16_t)local_28);
            uVar8 = 1;
            *(uint16_t *)((long)param_2 + 2) = uVar2;
            goto joined_r0x0032f610;
          }
          goto LAB_0032f60c;
        }
      }
      else {
LAB_0032f5ac:
        if (local_58 != 0) {
          pcVar7 = local_50;
          goto LAB_0032f5b8;
        }
      }
    }
  }
  uVar8 = 0;
joined_r0x0032f610:
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  if ((local_48 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38);
  }
  return uVar8;
}


