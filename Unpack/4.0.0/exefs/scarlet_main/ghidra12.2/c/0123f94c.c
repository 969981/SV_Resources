/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123f94c; name: FUN_0123f94c
 */


void FUN_0123f94c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  char local_38 [8];
  undefined1 auStack_18 [8];
  
  uVar6 = *param_3;
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  if (*(byte *)(lVar5 + 0x938) < 0xb) {
    bVar1 = *(byte *)(lVar5 + 0x938) + 1;
    *(byte *)(lVar5 + 0x938) = bVar1;
    lVar5 = lVar5 + (ulong)bVar1 * 0xc4;
    *(undefined4 *)(lVar5 + 10) = 0xffffffff;
    *(undefined1 *)(lVar5 + 8) = 0;
    *(undefined2 *)(lVar5 + 0xe) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined2 *)(lVar5 + 0x14) = 10;
    FUN_0137399c(lVar5 + 0x18);
    memset((void *)(lVar5 + 0x60),0,0x6b);
  }
  local_48 = uVar6;
  FUN_012405a0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x14e0),auStack_40,&local_48);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  cVar2 = *(char *)(lVar5 + 0x938);
  if (cVar2 != '\0') {
    *(char *)(lVar5 + 0x938) = cVar2 + -1;
  }
  FUN_0123fa64(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x2a0),local_38,auStack_18);
  uVar3 = FUN_0124a808(param_1);
  pcVar4 = *(char **)(*(long *)(param_1 + 0x40) + 0x28);
  if ((uVar3 & 1) == 0) {
    if (local_38[0] == '\0') {
      return;
    }
    if (*pcVar4 == '\x01') {
      return;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 7;
  }
  FUN_0123fa5c(pcVar4,uVar6);
  return;
}


