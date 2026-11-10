/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d930c; name: FUN_001d930c
 */


undefined8 FUN_001d930c(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_001f3774();
    uVar3 = 0;
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x1e8);
      if (lVar4 == 0) {
        uVar3 = 0xfffffc7a;
      }
      else {
        *(undefined1 *)(lVar4 + 0x250) = 1;
        *(long *)(lVar2 + 0x1520) = *(long *)(lVar2 + 0x1520) + 1;
        *(long *)(param_4 + 0x5e0) = *(long *)(param_4 + 0x5e0) + 1;
        *(undefined4 *)(param_4 + 0x610) = param_3;
        iVar1 = FUN_001f3790(param_1,param_2,0);
        if (iVar1 != 0) {
          FUN_001db818(lVar2,"http/2: failed to clear user_data for stream %d!\n",param_2);
        }
        if (*(int *)(param_4 + 0x5d8) == param_2) {
          *(undefined4 *)(param_4 + 0x5d8) = 0;
        }
        uVar3 = 0;
        *(undefined4 *)(lVar4 + 0x218) = 0;
      }
    }
  }
  return uVar3;
}


