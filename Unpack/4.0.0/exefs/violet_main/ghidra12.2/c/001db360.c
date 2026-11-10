/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001db360; name: FUN_001db360
 */


int FUN_001db360(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != 0) {
    if (param_1 < 0) {
      nnsocketSetLastErrno(0x16);
      return -1;
    }
    auVar3 = FUN_001e0dfc();
    puVar1 = PTR_DAT_047cb950;
    iVar2 = param_1;
    do {
      iVar2 = nnsocketPoll(0,0,iVar2);
      if (iVar2 != -1) {
        return -(uint)(iVar2 != 0);
      }
      iVar2 = nnsocketGetLastErrno();
      if (iVar2 != 0) {
        if (iVar2 != 4) {
          return -1;
        }
        if (*(int *)puVar1 != 0) {
          return -1;
        }
      }
      auVar4 = FUN_001e0dfc();
      iVar2 = FUN_001e0e28(auVar4._0_8_,auVar4._8_8_,auVar3._0_8_,auVar3._8_8_);
      iVar2 = param_1 - iVar2;
    } while (0 < iVar2);
  }
  return 0;
}


