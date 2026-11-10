/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ff880; name: FUN_020ff880
 */


void FUN_020ff880(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  if (*(char *)(param_2 + 0x3a) == '\0') {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  else {
    FUN_015d8d70(param_1 + 0x220,*(undefined1 *)(param_2 + 0x22),*(undefined1 *)(param_2 + 0x1c));
    uVar2 = (ulong)*(byte *)(param_2 + 0x3a);
    if (1 < *(byte *)(param_2 + 0x3a)) {
      FUN_015d8d70(param_1 + 0x230,*(undefined1 *)(param_2 + 0x23),*(undefined1 *)(param_2 + 0x1d));
      uVar2 = (ulong)*(byte *)(param_2 + 0x3a);
      if (2 < *(byte *)(param_2 + 0x3a)) {
        lVar5 = 0;
        lVar3 = param_1 + 0x240;
        do {
          FUN_015d8d70(lVar3,*(undefined1 *)(param_2 + lVar5 + 0x24),
                       *(undefined1 *)(param_2 + lVar5 + 0x1e));
          uVar2 = (ulong)*(byte *)(param_2 + 0x3a);
          uVar1 = lVar5 + 3;
          lVar5 = lVar5 + 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar1 < uVar2);
      }
    }
    *(char *)(param_1 + 0x138) = (char)uVar2;
    if ((uint)uVar2 < 6) {
      if ((uint)uVar2 == 0) goto LAB_020ff8a4;
    }
    else {
      uVar2 = 6;
    }
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    if (uVar2 != 1) {
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x230);
      lVar3 = uVar2 - 2;
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x238);
      if (lVar3 != 0) {
        puVar4 = (undefined4 *)(param_1 + 0x248);
        do {
          *(undefined8 *)(puVar4 + -0x3a) = *(undefined8 *)(puVar4 + -2);
          puVar4[-0x38] = *puVar4;
          puVar4 = puVar4 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
  }
LAB_020ff8a4:
  FUN_0132746c(param_1,param_1 + 0x138,200);
  return;
}


