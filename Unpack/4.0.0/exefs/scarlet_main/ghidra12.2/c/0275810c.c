/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275810c; name: FUN_0275810c
 */


void FUN_0275810c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long local_40;
  long lStack_38;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar1 = uVar4 & 3;
    if (uVar4 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar2 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar2 * 8 + 0x10) = 0;
        lVar3 = uVar2 * 8;
        uVar2 = uVar2 + 4;
        *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
      } while ((uVar4 & 0xfffffffffffffffc) != uVar2);
    }
    if (uVar1 != 0) {
      lVar3 = uVar2 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        uVar1 = uVar1 - 1;
        lVar3 = lVar3 + 8;
      } while (uVar1 != 0);
    }
    plVar5 = (long *)param_1[6];
    param_1[0xb] = 0;
    param_1[6] = 0;
    while (plVar5 != (long *)0x0) {
      if (param_2 == (long *)0x0) {
        FUN_0108aea4(param_1,plVar5);
        return;
      }
      local_40 = (long)(plVar5 + 2);
      lStack_38 = (long)(plVar5 + 6);
      FUN_02758234(&local_40,param_2 + 2);
      lVar3 = *plVar5;
      FUN_02758360(param_1,plVar5);
      param_2 = (long *)*param_2;
      plVar5 = (long *)lVar3;
    }
  }
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    FUN_0275839c(param_1,param_2 + 2);
  }
  return;
}


