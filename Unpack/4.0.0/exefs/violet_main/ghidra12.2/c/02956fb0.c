/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02956fb0; name: FUN_02956fb0
 */


ulong FUN_02956fb0(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int local_14;
  
  iVar4 = FUN_021fb038();
  if (iVar4 == 0) {
    cVar1 = FUN_021fad50(param_1);
    if (cVar1 == '\a') {
      bVar2 = FUN_01480e28(param_1);
      if (bVar2 != 0) {
        uVar6 = 0;
        do {
          FUN_018710a4(param_1,uVar6,&local_14);
          if (local_14 < 0) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while (bVar2 != uVar6);
      }
    }
    else if (cVar1 != '\x06') {
      if (cVar1 == '\x04') {
        sVar3 = FUN_01893e2c();
        return (ulong)(sVar3 != 8);
      }
      uVar5 = thunk_FUN_021fdd74(param_1);
      return uVar5;
    }
  }
  return 1;
}


