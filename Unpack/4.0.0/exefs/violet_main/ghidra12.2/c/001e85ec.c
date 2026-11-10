/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e85ec; name: FUN_001e85ec
 */


undefined8
FUN_001e85ec(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  local_38 = 0;
  *param_5 = 0;
  iVar1 = FUN_001c5a28(*param_1,0,1);
  if (-1 < iVar1) {
    lVar4 = 0;
    do {
      iVar1 = FUN_001db41c(param_2,0xffffffff,0xffffffff,iVar1);
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      uVar2 = FUN_001dc000(param_2,param_3,param_4,&local_38);
      lVar3 = param_4;
      if ((int)uVar2 != 0x51) {
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar3 = param_4 - local_38;
        if (lVar3 == 0) {
          *param_5 = param_4 + lVar4;
          return 0;
        }
        if (local_38 == 0) {
          return 0xffffffff;
        }
        param_3 = param_3 + local_38;
        lVar4 = local_38 + lVar4;
      }
      iVar1 = FUN_001c5a28(*param_1,0,1);
      param_4 = lVar3;
    } while (-1 < iVar1);
  }
  return 0x1c;
}


