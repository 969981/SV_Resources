/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00485f10; name: FUN_00485f10
 */


int FUN_00485f10(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar3 = FUN_0045bc10(param_2);
  if (lVar3 == 0) {
    iVar5 = -2;
  }
  else {
    if (param_1 != 0) {
      iVar5 = 0;
      if (-1 < param_3) {
        iVar5 = param_3 + 1;
      }
      iVar1 = FUN_0047e430(param_1);
      if (iVar5 < iVar1) {
        do {
          puVar4 = (undefined8 *)FUN_0047e450(param_1,iVar5);
          iVar2 = FUN_0045d160(*puVar4,lVar3);
          if (iVar2 == 0) {
            return iVar5;
          }
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
        return -1;
      }
    }
    iVar5 = -1;
  }
  return iVar5;
}


