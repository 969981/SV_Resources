/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007beab0; name: FUN_007beab0
 */


int FUN_007beab0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint local_38 [2];
  
  memcpy(local_38,(void *)(param_3 + 0x5fc),4);
  if (*(int *)(param_3 + 0x5fc) == 0xffffff) {
    memset(local_38,0xff,4);
    local_38[0] = local_38[0] & 0xffffff;
  }
  if ((*(char *)(param_1 + 0x90) == -3) || (*(short *)(param_1 + 0x92) == 0)) {
    return 0;
  }
  lVar4 = 0;
  uVar5 = 0;
  iVar3 = 0;
  lVar2 = param_2;
  if (*(char *)(param_1 + 0x90) == '\0') goto LAB_007beb68;
  do {
    param_2 = lVar2;
    if (((local_38[0] >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0) &&
       (uVar1 = FUN_00796784(*(long *)(param_1 + 0x80) + lVar4), (uVar1 & 1) != 0)) {
      param_2 = lVar2 + 0x20;
      FUN_00796828(lVar2,*(long *)(param_1 + 0x80) + lVar4);
      iVar3 = iVar3 + 1;
    }
LAB_007beb68:
    do {
      uVar5 = uVar5 + 1;
      if (*(ushort *)(param_1 + 0x92) <= uVar5) {
        return iVar3;
      }
      lVar4 = lVar4 + 0x20;
      lVar2 = param_2;
    } while (uVar5 == *(byte *)(param_1 + 0x90));
  } while( true );
}


