/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032f240; name: FUN_0032f240
 */


undefined8 FUN_0032f240(char *param_1,undefined8 *param_2)

{
  uint16_t uVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong local_50;
  long local_48;
  char *local_40;
  ulong local_38;
  undefined8 uStack_30;
  char *local_28;
  uint local_14;
  
  local_28 = (char *)0x0;
  local_40 = (char *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_1 == (char *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = strlen(param_1);
  }
                    /* try { // try from 0032f278 to 0032f287 has its CatchHandler @ 0032f38c */
  uVar4 = FUN_0038f050(param_1,sVar3,&local_38,&local_50);
  if ((uVar4 & 1) != 0) {
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0x10;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined1 *)((long)param_2 + 1) = 2;
    pcVar5 = (char *)((ulong)&local_38 | 1);
    if ((local_38 & 1) != 0) {
      pcVar5 = local_28;
    }
                    /* try { // try from 0032f2cc to 0032f32b has its CatchHandler @ 0032f388 */
    iVar2 = inet_pton(2,pcVar5,(void *)((long)param_2 + 4));
    if (iVar2 != 0) {
      if ((local_50 & 1) == 0) {
        if (1 < (byte)local_50) {
          pcVar5 = (char *)((ulong)&local_50 | 1);
LAB_0032f300:
          iVar2 = sscanf(pcVar5,"%d",&local_14);
          uVar6 = 0;
          if ((iVar2 == 1) && (local_14 >> 0x10 == 0)) {
            uVar1 = htons((uint16_t)local_14);
            uVar6 = 1;
            *(uint16_t *)((long)param_2 + 2) = uVar1;
          }
          goto joined_r0x0032f380;
        }
      }
      else if (local_48 != 0) {
        pcVar5 = local_40;
        goto LAB_0032f300;
      }
    }
  }
  uVar6 = 0;
joined_r0x0032f380:
  if ((local_50 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_40);
  }
  if ((local_38 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_28);
  }
  return uVar6;
}


