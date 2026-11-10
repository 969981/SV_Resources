/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c424c; name: FUN_034c424c
 */


void FUN_034c424c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  *param_1 = (long)(PTR_DAT_047e72b8 + 0x10);
  if (param_1 != (long *)0x0) {
    plVar2 = *(long **)PTR_DAT_047e7098;
    if ((int)plVar2[1] != 0) {
      lVar4 = *(long *)*plVar2;
      if (lVar4 == 0) {
        uVar3 = 0;
        do {
          if ((int)plVar2[1] - 1 == uVar3) goto LAB_034c4310;
          uVar3 = uVar3 + 1;
          lVar4 = ((long *)*plVar2)[uVar3 & 0xffffffff];
        } while (lVar4 == 0);
      }
      else {
        uVar3 = 0;
      }
      do {
        do {
          local_68 = 0;
          local_60 = 0;
          local_58 = 0xff;
          local_50 = 0xff;
          local_48 = 0;
          local_70 = param_1;
          FUN_034b4d58(lVar4 + 0x38,&local_70);
          lVar4 = *(long *)(lVar4 + 8);
        } while (lVar4 != 0);
        do {
          uVar1 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar1;
          if (*(uint *)(plVar2 + 1) <= uVar1) goto LAB_034c4310;
          lVar4 = *(long *)(*plVar2 + (ulong)uVar1 * 8);
        } while (lVar4 == 0);
      } while( true );
    }
  }
LAB_034c4310:
  FUN_03482f54(param_1);
  return;
}


