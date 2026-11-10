/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131bc6c; name: FUN_0131bc6c
 */


bool FUN_0131bc6c(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_54;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar3 + 0x36c),*(undefined1 *)(lVar3 + 0x370),param_3 & 0xff)
  ;
  if (((uVar2 & 1) != 0) &&
     (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8),
     uVar1 = FUN_010f9128(*(undefined4 *)(lVar3 + 0x36c),*(undefined1 *)(lVar3 + 0x370),
                          param_3 & 0xff), 0 < (int)uVar1)) {
    uVar5 = 0;
    do {
      lVar3 = 0;
      if (param_3 < 5) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)param_3 * 0x38 + 0x28;
      }
      if ((((uVar5 & 0xff) < (uint)*(byte *)(lVar3 + 0x30)) &&
          (plVar4 = *(long **)(lVar3 + (ulong)(uVar5 & 0xff) * 8), plVar4 != (long *)0x0)) &&
         (uVar2 = (**(code **)(*plVar4 + 0x208))(plVar4), (uVar2 & 1) != 0)) {
        local_58 = 0;
        local_56 = 0;
        local_54 = 0;
        local_5c = 0;
        local_60 = param_2;
        local_5c = (**(code **)(*plVar4 + 0x98))(plVar4);
        local_68[0] = '\0';
        FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_68,&local_60);
        return local_68[0] != '\0';
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return false;
}


